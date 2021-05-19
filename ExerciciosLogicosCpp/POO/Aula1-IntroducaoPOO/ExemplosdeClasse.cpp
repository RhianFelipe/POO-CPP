//Definindo Classes
/*Defina aé 5 atributos e 5 metodos para cada uma das seguintes classes*/
/*
-Pessoa
-Carro
-Computador
-Conta
-Maçã
-Cliente
-Data
-Casa
-Retângulo
-TV

*/

class Pessoa{
	private:
		//Não usar coisas que podem mudar
	int idade; //mas a idade  pode mudar,então não é melhor, use a data de nascimento, a idade pode ser um metodo, que sempre calcula a idade conforme a data
	int  dia,mes,ano;
	int nome,sobrenome;
	string endereco;
	char sexo;
	int numero_telefone;
	
	public:
		//podemos colocar isso numa unica função, p
		void pegar_idade(int); 
		void pegar_nome(string);
		void pegar_sobrenome(string);
		void pegar_endereco(sring);
		void pear_numero_telefone(int);
			
};



class Carro{
private:
 float velocidade;
 string marca;
 float preco;
  string placa;
  
public:	
 void velocidade(float);
 void marca(string);
 void preco(float);
 void placa(string);
 

};


class Computador{
private:
	
string placa_video;
string placa_mae;
int memoria_ram;
int geracao_intel;
int preco;
		
public:
	void informarEspecificacao(string placa_video, string placa_mae, int ram, int intel);
	void comprar();
	void vender();
	void trocar();
}


class Conta{
	private:
		double bancaria;
		double corrente;
		string user;
		int senha;
		double dinheiro
		
		public:
	 void calcularDespesas()
	 void calcularJurosMensal()
	 void rendaTotalAnual()
	 		
			
};

class maca{
	private:
	int semente;
	int quantidade;
	int qualidade;
	
	public:
	void comer()
	void jogar()
	void descascar()
	
};





