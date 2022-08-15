#include <iostream>
#include<locale.h>
using namespace std;

    int op,number1,number2;
    float peso,altura;

int msg() {
    cout<< "Escolha uma operação"   << endl;
    cout<< "1 = Soma"               << endl;
    cout<< "2 = Subtração"          << endl;
    cout<< "3 = Multiplicação"      << endl;
    cout<< "4 = Divisão"            << endl;
    cout<< "5 = Calcular IMC"       << endl;
    cout<<"Digite sua opção de operação"<<endl;
    cin>>op;
    return op;
}

int digits(){
	cout<<"Digite seu primeiro numero"<<endl;
    cin>>number1;
    cout<<"Digite seu segundo numero" <<endl;
    cin>>number2;
}

int subtrair() {
	return number1 - number2;
}
int somar() {
	return number1 + number2;
}
int multiplicar() {
	return number1 * number2;
}
int dividir() {
	return number1 / number2;
}
int operatorimc() {
			cout<<"Digite seu peso: "<<endl;
    		cin>>peso;
            cout<<"Digite sua altura: " <<endl;
            cin>>altura;
            float imc = peso/(altura*altura);
            if (imc > 40) {
                cout<<"OBESIDADE GRAU III"<<endl;
                cout<<"SEU IMC É "<<imc<<endl;
            } else if (imc >= 35 && imc < 39.9) {
                cout<<"OBESIDADE GRAU II"<<endl;
                cout<<"SEU IMC É "<<imc<<endl;
            }else if (imc >= 30 && imc < 34.9) {
                cout<<"OBESIDADE GRAU I"<<endl;
                cout<<"SEU IMC É "<<imc<<endl;
            }else if (imc >= 25 && imc < 29.9) {
                cout<<"SOBREPESO"<<endl;
                cout<<"SEU IMC É "<<imc<<endl;
            }else if (imc >= 18.5 && imc < 24.9) {
                cout<<"PESO NORMAL"<<endl;
                cout<<"SEU IMC É "<<imc<<endl;
            }else if (imc < 18.5) {
                cout<<"ABAIXO DO PESO"<<endl;
                cout<<"SEU IMC É "<<imc<<endl;
            }
    else { cout << "INSIRA UM OPERADOR VÁLIDO"; }
}




int options() {
		switch (op) { 
		case 1:
			digits();
            cout << "Resultado :" << somar() << endl;
            break;
        case 2:
        	digits();
            cout << "Resultado :" << subtrair() << endl;
            break;
        case 3:
        	digits();
            cout << "Resultado :" << multiplicar() << endl;
            break;
        case 4:
        	digits();
            cout << "Resultado :" << dividir() << endl;
            break;
        case 5:
        	operatorimc();
        	
		}
	}



int main() {
	setlocale (LC_ALL, "PORTUGUESE");
	
	msg();
	
    options();
    
    while (number1,number2,peso,altura,op <= 0) {
        cout<<"Numero invalido, por favor insira um numero maior que zero";
        return op;
    }    
}

