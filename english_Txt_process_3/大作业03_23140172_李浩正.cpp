// created by Lihaozheng 2024_4_23


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void letter(char a[1000]);
int word_count(char a[1000]);
void longest_word(char a[1000]);
void number_Array(char b[1000]);
int main()
{	FILE *in;
	char ch[1000], input[10][100], temp;
	int i = 0;

	// ���ݴ���,���ַ���¼�뵽�ַ���ch��
	in = fopen("Englishtext.TXT", "r");
	if (in == NULL)
	{	printf("Cannot open the input file");
	}
	// ȡ�ز��е��׸��ַ��ж��Ƿ�Ϊ��
	temp = fgetc(in);

	while (temp != EOF)
	{	ch[i] = temp;
		i++;
		temp = fgetc(in);
	}
	ch[i] = '\0';
	printf("material_Content:\n");
	puts(ch); // ������ļ����ܵ����ز�

	letter(ch); // ����ͳ���ַ�����Ƶ�ȵĺ���

	printf("Total of word = %d\n\n", word_count(ch)); // ����ͳ�Ƶ��ʵĺ���

	longest_word(ch); // ����Ѱ������ʵĺ���

	number_Array(ch); // ����ͳ�Ƴ��ֵ������ĺ���

	fclose(in); // �ر��ļ�
	return 0;
}

// ��д����ʵ�֣�ͳ����ĸ�ĳ���Ƶ�ȣ�����ʾ�����(��Сд��ͬһ��ĸ)
void letter(char a[1000])
{	int i;

	// size_t len = strlen(a);
	// char *b = (char *)malloc((len + 1) * sizeof(char));
	// char *b =a;
	// strcpy(b, a);

	int letter_count[26] = {0};
	for (i = 0; a[i] != '\0'; i++)
	{	if (a[i] >= 'a' && a[i] <= 'z')
		{	letter_count[a[i] - 'a']++;
		}
		if ((a[i] > 'A' && a[i] <= 'Z'))
		{	letter_count[a[i] - 'A']++;
		}
	}

	int c = 0;
	// ���ͳ�Ƶ�����ĸ����
	printf("-------------------count_Letter-----------------------\n");
	for (i = 'A'; i <= 'Z'; i++)
	{

		if (letter_count[i - 'A'])
		{	printf("%c = %d\t", i, letter_count[i - 'A']);

			// �Ʊ�
			c++;
			if (c % 7 == 0)
			{	printf("\n");
				// c = 0;
			}
		}
	}
	printf("\n------------------------------------------------------\n");
	// free(b);
}

// ��д����ʵ�֣�ͳ�����е��ʵĸ���������ʾ����������ʸ�����WORDͳ����Ϊ�ο�����һ��100%��ͬ����
int word_count(char a[1000])
{	int word = 0;
	int i = 0;
	// char *b=a;
	// ������ַ���Ϊ��, �������Ѿ�ͳ�Ƶ���һ������

	if (a[i] != '\0')
	{	word++;
	}

	while (a[i] != '\0')
	{	if (a[i] == ' ' || a[i] == '\n')
		{	word++;
		}

		i++;
	}

	return word;
}

// ��д����ʵ�֣��ҳ���ĵ��ʣ�����ʾ���ʼ��䳤�ȡ�

void longest_word(char a[1000])
{	// ��ʼ��һ��ͳ�Ƴ�����������С��Ϊ���ȵ�����
	int words_number = word_count(a);
	int t[words_number];

	for (size_t i = 0; i < words_number; i++)
	{	t[i] = 0;
	}

	int longest_len = 0;
	// int maxid = 0;
	char *p = a;

	char *LONGEST_WORD_ADR_IN_a = NULL;

	for (size_t i = 0; i < words_number; i++)
	{	while (*p != ' ' && *p != '\n' && *p != '\0')
		{	t[i]++;
			p++;
		}

		// ��ָ����ַ���ָ���Ƶ���һλ
		p++;

		if (longest_len < t[i])
		{	longest_len = t[i];
			// maxid=i;
			LONGEST_WORD_ADR_IN_a = p - t[i] - 1;
		}
	}

	// printf("-----------------------test------------\n");

	// printf("i=%d\n",i);

	// printf("-----------------------test------------\n");
	if (longest_len > 0)
	{

		char LONGESTWORD[50] = {0};
		for (size_t i = 0; i < longest_len; i++)
		{	LONGESTWORD[i] = *LONGEST_WORD_ADR_IN_a;
			LONGEST_WORD_ADR_IN_a++;
		}

		printf("longest_Word---> %s\tword_Len = %d\n", LONGESTWORD, longest_len);
	}
	else
	{	printf("No word found\n");
	}
}

// ��д����ʵ�֣�ͳ�Ƴ��ֵ�����������һά���飬����ʾ�����

void number_Array(char b[1000])
{	int a[100] = {0};
	// char *q=b;
	int num = 0;
	int index = 0;
	// int tens = 0;
	for (size_t i = 0; b[i] != '\0'; i++)
	{	if (b[i] >= '0' && b[i] <= '9')
		{

			num *= 10;         // ��λ
			num += b[i] - '0'; // char��ת��int��
			if (!(b[i + 1] >= '0' && b[i + 1] <= '9'))
			{	a[index++] = num;
				num = 0;
			}
		};
		// if (b[i + 1] == ' ' || b[i + 1] == '\n')
		// {
		//     a[index++] = num;
		//     num = 0;
		// }
	}
	printf("--------count_Num_Array------");
	for (size_t i = 0; a[i] != 0; i++)
	{

		// �Ʊ����
		if (i % 3 == 0)
		{	printf("\n");
		}
		printf("a[%d]=%d  ", i, a[i]);
	}
	printf("\n-----------------------------\n");
}