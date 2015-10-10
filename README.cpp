
#include <iostream>

#include <string.h>

using namespace std;

//Problema 2 -------------------
void no_repetitions(char *frase){
	
int i=0,j=0;
	char resultado[20] =""; 					
	while(frase[i]){						
		if(!strchr(resultado,frase[i])) 	
			resultado[j++] = frase[i];		
		
		i++;
	}
	
	cout << "Resultado " << resultado;
	
}
int main (){
	char word[20];
	cout << "Entrada por teclado : " ; cin.getline(word,20);
	no_repetitions(word);
	return 0;
}
