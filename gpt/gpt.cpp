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

	// 数据处理,将字符串录入到字符串ch中
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
	puts(ch); // 输出已经被输入的素材

	letter(ch); // 调用统计字符出现频度的函数

	printf("Total of word = %d\n", word_count(ch)); // 调用统计单词的函数

	longest_word(ch);

	fclose(in); // 关闭文件
	return 0;
}

// 统计字符出现频度
void letter(char *a)
{
	int i;

	// 拷贝从主函数传来的数据
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
	// 输出统计到的字母个数
	printf("-------------------count_letter-----------------------\n");
	for (i = 'A'; i <= 'Z'; i++)
	{

		if (letter_count[i - 'A'])
		{
			printf("%c = %d\t", i, letter_count[i - 'A']);

			// 制表
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

// 统计单词
int word_count(char *a)
{
	int word = 0;
	int i = 0;

	// 如果首字符不为空, 则算作已经统计到第一个单词

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

// 找出最长的单词

void longest_word(char *a)
{ // 初始化一个统计出来单词数大小作为行的二维数组
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

		// 让指向空字符的指针移到下一位
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
