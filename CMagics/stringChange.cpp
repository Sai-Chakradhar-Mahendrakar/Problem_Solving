// inp: education@15155
// out: enutaciod@15155

#include <bits/stdc++.h>
using namespace std;

// return strstr("aeiouAEOIU",ch);
bool isVowel(char ch){  // stdbool.h
	ch = tolower(ch);   // ctype.h 
	return (ch=='a' or ch=='e' or ch=='i' or ch=='o' or ch=='u');
}

bool isConsonant(char ch){
	return isalpha(ch) and !isVowel(ch);
}

void swap(char* x, char* y){
	*x = (*x+*y) - (*y=*x);
}

// Arrays are same as pointer

int main(){
	char str[100];
	int len;
	scanf("%s%n",str,&len);
	
	for(int i=0,j=len-1; i<j; i++,j--){
		while(!isConsonant(str[i])){
			i++;
		}
		
		while(!isConsonant(str[j])){
			j--;
		}
		
		swap(str+i,str+j);
	}
	puts(str);
	return 0;
}