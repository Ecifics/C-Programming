/*
��д����any(s1, s2)�����ַ���s2�е���һ�ַ����ַ���s1�е�һ�γ��ֵ�λ����Ϊ���ؽ�������s1�в�����s2�е��ַ����򷵻�-1. 
*/ 

#include<stdio.h>
#include<stdbool.h>

int any(char s1[], char s2[]); 

int main(){
	char s1[20], s2[20];
	
	scanf("%s", s1);
	scanf("%s", s2);
	
	int seq = any(s1, s2);
	
	printf("%d", seq);
	return 0;
} 

int any(char s1[], char s2[])
{
	int i, j, seq;
	bool flag;
	
	flag = false;
	
	for(i = 0; s1[i] != '\0'; i++){
		for(j = 0; s2[j] != '\0'; j++){
			if(s1[i] == s2[j]){
				seq = i;
				flag = true;
				break;
			} 
		}
		if(flag){
			break;
		}
	}
}
