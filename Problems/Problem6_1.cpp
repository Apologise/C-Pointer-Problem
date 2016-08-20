#include<stdio.h>

/*
问题：找出source和chars中第一个匹配的字符
*/
char *find_str(char *source, char  *chars){
	char *c;
	if( source != NULL && chars != NULL){
		//遍历souce字符
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