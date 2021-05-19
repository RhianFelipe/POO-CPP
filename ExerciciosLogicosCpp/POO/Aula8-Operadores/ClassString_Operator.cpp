
#include <iostream>
#include <cstdio>
#include <cstring> //strcpy, strcat, strlen, 



const int MAX = 100;

class String{
	
	char buffer[MAX] ;
	
	public:
		String(){
		strcpy(buffer, "");
			}
		
		String(const char *str){
			strcpy(buffer , str);
		}
		
		void mostra(){
			printf("%s",buffer);
		}
		
		void operator ++(int) {
			int tam = strlen(buffer);
			for(int i=0; i <tam; i++){
				buffer[i] = toupper(buffer[i]);
			}
		}
		
		
		void operator --(int) {
			int tam = strlen(buffer);
			for(int i=0; i <tam; i++){
				buffer[i] = tolower(buffer[i]);
			}
		}
		
		String operator +(String& dois){
			String aux;
			strcpy(aux.buffer, this->buffer); //copia
			if(strlen(this->buffer)+ strlen(dois.buffer)<= MAX )
			strcat(aux.buffer , dois.buffer); // concatena
			else
			printf("\nString excedeu o tamanho alocado");
			return aux;
		}
		
		void operator += (String& dois ){
		
		
			if(strlen(buffer)+ strlen(dois.buffer)<= MAX )
			strcat(this->buffer , dois.buffer); // concatena
			else
			printf("\nString excedeu o tamanho alocado");
			
		}
		
		bool operator ==(String& dois)
		{
			return strcmp(buffer , dois.buffer) == 0;
		
			
		}
		
			bool operator <(String& dois)
		{
			return strcmp(buffer , dois.buffer) < 0;
			
		}
		
			bool operator >(String& dois)
		{
			return strcmp(buffer , dois.buffer) > 0;
			
		}
		
		
};

int main(){
	String s1("Bom dia!") , s2("Ateh logo!");
	String s3,s4;
	s1++;
	s2--;
	s3 = s1 + s2;
	s4 = s2 + s1;
	s1.mostra();
	s2.mostra();
	s1 = "a";
	s2 = "b";
	s3.mostra();
	 s1 += s2;
	s1.mostra();
	
	
	String s5;
	s5 = s1;
	if(s1 == s5)
	printf("\nSão iguais");
	else 
	printf("\nSão Diferentes");
}
