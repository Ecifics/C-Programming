/*
squeeze(s1, s2),���ַ���s1���κ����ַ���s2�е��ַ���ƥ����ַ���ɾ���� 
*/ 

#include<stdio.h>
#include<string.h>


void squeeze(char s1[],char s2[])
{
	int i, j;
	
	for(j = 0; s2[j] != '\0'; j++){
		
		for(i = 0; s1[i] != '\0'; i++){
			if(s1[i] == s2[j]){
				int k;
				for( k = i; (s1[k] = s1[k+1]) != '\0'; k++);
				i--;    //�ص���һ���ַ������������һ�У�������޷�ɾ��������ͬ�ַ���bug 
			}
		}
	}
	
	int len = strlen(s1);
	
	printf("%s", s1);
}


int main()
{
	char s1[10], s2[10];
	
	scanf("%s", s1);
	scanf("%s", s2);
	
	squeeze(s1, s2);
	
	return 0;
}
