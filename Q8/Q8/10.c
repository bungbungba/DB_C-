//#include <stdio.h>
//#include <string.h>
//
//char * change_word(char *string, char *old_word, char *new_word);
//
//void main()
//{
//	char str[30];
//	char O_W[10], N_W[10];
//	char *C_W;
//
//	printf("Input String : ");
//	gets(str);
//	printf("Choose String to modify : ");
//	gets(O_W);
//	printf("Input String to modify: ");
//	gets(N_W);
//
//
//	C_W = change_word(str, O_W, N_W);
//
//	printf("Output string : %s\n", C_W);
//	return 0;
//}
//
//char * change_word(char *string, char *old_word, char *new_word)
//{
//	char O_str[30] = { 0 };
//	char str[30];
//	char word[10] = { 0 };
//	int i, j, Long = strlen(old_word), count = 0, Where, diff, cnt = 0, all = 0, much = 0;
//	
//	strcpy(O_str, string);
//	for (i = 0; i < strlen(str); i++) if (str[i] == ' ') much++;
//	much++;
//	while (much--)
//	{
//
//		i = 0;
//		diff = cnt * (Long - strlen(new_word));
//		while (O_str[count] != ' ' && O_str[count] != NULL)
//		{
//			word[i++] = O_str[count++];
//		}
//		count++;
//		Where = count - Long - diff - 1; // 문자열 복사 위치(diff는 바꾸는 문자의 길이가 다를경우/ -1은 space bar)
//		word[i] = NULL;
//		if (!strcmp(word, old_word))
//		{
//			str[0] = ' ';
//			j = 1;
//			for (i = count; O_str[i] != NULL; i++)
//			{
//				str[j++] = O_str[i];
//			}
//			str[j] = NULL;
//
//			for (i = 0; i < strlen(new_word) + 1; i++) // NULL까지 포함해서 + 1
//			{
//				string[i + Where] = new_word[i];
//			}
//			strcat(string, str);
//			cnt++;
//		}
//	}
//	if(string[strlen(string) - 1] == ' ') string[strlen(string) - 1] = NULL;
//	str[0] = NULL;
//	return string;
//}