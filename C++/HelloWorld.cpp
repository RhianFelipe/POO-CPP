#include <iostream> // manipulação de fluxo de dados padrão do sistema (entrada padrão, saída padrão e saída de erros padrão)

using namespace std;  // o certo é que todas as funções tenham std:: antes dela, mas com esse comando não precisamos acrescentar
int main(void){
	//para printar qualquer digitação utilizamos a função "cout"
	
	std::cout << "Hello World! \n"; //sem o using namespace std; 
	cout << "Hello World \n"; //com o using namespace std; 
	
	//printando variaveis:
	int a = 5; //variavel do tipo inteiro que recebe o valor 5
	cout << a << "\n"; //para cada nova escrita, devemos utilizar o "<<" 
	
	// outro exemplo de cout
	cout << "O valor da variavel 'a' =" << a << "\n"; // o \n para descer até a proxima linha

}
