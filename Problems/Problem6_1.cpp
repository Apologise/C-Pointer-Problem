#include<stdio.h>

/*
���⣺�ҳ�source��chars�е�һ��ƥ����ַ�
*/
char *find_str(char *source, char  *chars){
	char *c;
	if( source != NULL && chars != NULL){
		//����souce�ַ�
		for(; *source != '\0'; source++){
		for(c = chars; c != '\0'; c++){
			if( *source == *c){
				return source;
			}
		}
		}
	}
	return NULL;
}