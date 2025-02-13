#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <locale.h>

int sLength(wchar_t *word){
	int count = 0;
	while(word[count] != L'\0')
		count++;
	return count;
}
void removeE(wchar_t *word){
	int wordL = sLength(word);
	for(int i = 0; i < wordL; i++){
		if(word[i] == L'\n'){
			word[i] = L'\0';
			i = wordL;
		}
	}
}
int main(){
	setlocale(LC_ALL,"en_US.UTF-8");
	wchar_t word[255];

	wscanf(L"%254[^\n]",word);
	removeE(word);

	int wordL = sLength(word);

	wprintf(L"%ls tem %d letras!", word, wordL);

	return 0;
}
