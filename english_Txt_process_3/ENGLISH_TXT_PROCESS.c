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

	// 数据处理,将字符串录入到字符串ch中
	in = fopen("Englishtext.TXT", "r");
	if (in == NULL)
	{	printf("Cannot open the input file");
	}
	// 取素材中的首个字符判断是否为空
	temp = fgetc(in);

	while (temp != EOF)
	{	ch[i] = temp;
		i++;
		temp = fgetc(in);
	}
	ch[i] = '\0';
	printf("material_Content:\n");
	puts(ch); // 输出从文件接受到的素材

	letter(ch); // 调用统计字符出现频度的函数

	printf("Total of word = %d\n\n", word_count(ch)); // 调用统计单词的函数

	longest_word(ch); // 调用寻找最长单词的函数

	number_Array(ch); // 调用统计出现的整数的函数

	fclose(in); // 关闭文件
	return 0;
}

// 编写函数实现：统计字母的出现频度，并显示结果。(大小写算同一字母)
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
	// 输出统计到的字母个数
	printf("-------------------count_Letter-----------------------\n");
	for (i = 'A'; i <= 'Z'; i++)
	{

		if (letter_count[i - 'A'])
		{	printf("%c = %d\t", i, letter_count[i - 'A']);

			// 制表
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

// 编写函数实现：统计其中单词的个数，并显示结果。（单词个数以WORD统计作为参考，不一定100%相同。）
int word_count(char a[1000])
{	int word = 0;
	int i = 0;
	// char *b=a;
	// 如果首字符不为空, 则算作已经统计到第一个单词

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

// 编写函数实现：找出最长的单词，并显示单词及其长度。

void longest_word(char a[1000])
{	// 初始化一个统计出来单词数大小作为长度的数组
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

		// 让指向空字符的指针移到下一位
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

// 编写函数实现：统计出现的整数，存入一维数组，并显示结果。

void number_Array(char b[1000])
{	int a[100] = {0};
	// char *q=b;
	int num = 0;
	int index = 0;
	// int tens = 0;
	for (size_t i = 0; b[i] != '\0'; i++)
	{	if (b[i] >= '0' && b[i] <= '9')
		{

			num *= 10;         // 移位
			num += b[i] - '0'; // char型转入int型
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

		// 制表输出
		if (i % 3 == 0)
		{	printf("\n");
		}
		printf("a[%d]=%d  ", i, a[i]);
	}
	printf("\n-----------------------------\n");
}