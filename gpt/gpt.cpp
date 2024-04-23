#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void letter(char *a);
int word_count(char *a);
void longest_word(char *a);

int main()
{
	FILE *in;
	char ch[1000], input[10][100], temp;
	int i = 0;

	// ���ݴ���,���ַ���¼�뵽�ַ���ch��
	in = fopen("myin.txt", "r");
	if (in == NULL)
	{
		printf("Cannot open the input file");
		return 1;
	}

	temp = fgetc(in);

	while (temp != EOF)
	{
		ch[i] = temp;
		i++;
		temp = fgetc(in);
	}
	ch[i] = '\0';
	printf("content:\n");
	puts(ch); // ����Ѿ���������ز�

	letter(ch); // ����ͳ���ַ�����Ƶ�ȵĺ���

	printf("Total of word = %d\n", word_count(ch)); // ����ͳ�Ƶ��ʵĺ���

	longest_word(ch);

	fclose(in); // �ر��ļ�
	return 0;
}

// ͳ���ַ�����Ƶ��
void letter(char *a)
{
	int i;

	// ����������������������
	size_t len = strlen(a);
	char *b = (char *)malloc((len + 1) * sizeof(char));
	strcpy(b, a);

	int letter_count[26] = {0};
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] >= 'a' && a[i] <= 'z')
		{
			letter_count[b[i] - 'a']++;
		}
		if ((b[i] > 'A' && b[i] <= 'Z'))
		{
			letter_count[b[i] - 'A']++;
		}
	}

	int c = 0;
	// ���ͳ�Ƶ�����ĸ����
	printf("-------------------count_letter-----------------------\n");
	for (i = 'A'; i <= 'Z'; i++)
	{

		if (letter_count[i - 'A'])
		{
			printf("%c = %d\t", i, letter_count[i - 'A']);

			// �Ʊ�
			c++;
			if (c == 7)
			{
				printf("\n");
				c = 0;
			}
		}
	}
	printf("\n-------------------count_letter-----------------------\n");
	free(b);
}

// ͳ�Ƶ���
int word_count(char *a)
{
	int word = 0;
	int i = 0;

	// ������ַ���Ϊ��, �������Ѿ�ͳ�Ƶ���һ������

	if (a[i] != '\0')
	{
		word++;
	}

	while (a[i] != '\0')
	{
		if (a[i] == ' ' || a[i] == '\n')
		{
			word++;
		}

		i++;
	}

	return word;
}

// �ҳ���ĵ���

void longest_word(char *a)
{ // ��ʼ��һ��ͳ�Ƴ�����������С��Ϊ�еĶ�ά����
	int words_number = word_count(a);
	int t[words_number];

	for (size_t i = 0; i < words_number; i++)
	{
		t[i] = 0;
	}

	int longest_num = 0;
	// int maxid = 0;
	char *p = a;

	char *LONGEST_WORD_ADR_IN_a = NULL;

	char *longest_word = NULL;
	int longest_word_len = 0;

	for (size_t i = 0; i < words_number; i++)
	{
		while (*p != ' ' && *p != '\n' && *p != '\0')
		{
			t[i]++;
			p++;
		}

		// ��ָ����ַ���ָ���Ƶ���һλ
		p++;

		if (longest_num < t[i])
		{
			longest_num = t[i];
			// longest_word_len = longest_num;
			LONGEST_WORD_ADR_IN_a = p - t[i] - 1;
		}
	}

	if (longest_num > 0)
	{
		longest_word = (char *)malloc((longest_word_len + 1) * sizeof(char));
		strncpy(longest_word, LONGEST_WORD_ADR_IN_a, longest_word_len);
		longest_word[longest_word_len] = '\0';
		printf("longest_word==> %s  len = %d\n", longest_word, longest_num);
		free(longest_word);
	}
	else
	{
		printf("No word found.\n");
	}
}
