#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#include<assert.h>
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	const char* s1 = NULL;
//	const char* s2 = NULL;
//	const char* cp = str1;
//	if (*str2 == '\0')
//	{
//		return (char*)str1;
//	}
//	while (*str1)
//	{
//		s1 = cp;
//		s2 = str2;
//		while ((*s1 == *s2)&&*s1&&*s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)cp;
//		}
//		cp++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr1[] = "abbbcdef";
//	char arr2[] = "bbc";
//	char* ret = my_strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		printf("not found");
//	}
//	else
//	{
//		printf("found!%s", ret);
//	}
//	return 0;
//}

//#include<string.h>
//int main()
//{
//	char str[] = "this is a simple string";
//	char* pch;
//	pch = strstr(str, "simple");
//	strncpy(pch, "sample", 6);
//	//puts(str);
//	printf("%s", pch);
//	return 0;
//
//}

//#include<string.h>
//#include<assert.h>
//char* my_strcpy(char* dst,const char* src)
//{
//	assert(dst && src);
//	const char* ret = dst;
//	while ((*dst++ = *src++))
//	{
//		;
//	}
//	return (char*)ret;
//}
//int main()
//{
//	char arr1[] = "hello";
//	char arr2[] = "world";
//	printf("%s", my_strcpy(arr2, arr1));
//	return 0;
//}

#include<string.h>
int main()
{
	char* p = "LayZhang@weibo.com";
	const char* sep = "@.";
	char ch[50] = "";
	char* str = NULL;
	strcpy(ch, p);
	for (str = strtok(ch, sep);str != NULL;str = strtok(NULL,sep))
	{
		printf("%s\n", str);
	}
	return 0;
}