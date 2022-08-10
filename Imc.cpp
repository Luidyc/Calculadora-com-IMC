#include <iostream>
using namespace std;

int main() 
{

    int op,number1,number2;
    float peso,altura,imc;

    cout<< "Escolha uma operação"   << endl;
    cout<< "1 = Soma"               << endl;
    cout<< "2 = Subtração"          << endl;
    cout<< "3 = Multiplicação"      << endl;
    cout<< "4 = Divisão"            << endl;
    cout<< "5 = Calcular IMC"       << endl;

    cout<<"Digite sua opção de operação"<<endl;

    cin>>op;
    
    while (number1,number2 <= 0) {
        cout<<"Numero invalido, por favor insira um numero maior que zero";
    }

    if (op == 1) {
            cout<<"Digite seu primeiro numero"<<endl;
            cin>>number1;
            cout<<"Digite seu segundo numero" <<endl;
            cin>>number2;
            int soma = number1 + number2;
            cout << "Resultado :" << soma << endl;
    } else if (op == 2) {
            cout<<"Digite seu primeiro numero"<<endl;
            cin>>number1;
            cout<<"Digite seu segundo numero" <<endl;
            cin>>number2;
            int subtrair = number1 - number2;
            cout << "Resultado :" << subtrair << endl;
    } else if (op == 3) {
            cout<<"Digite seu primeiro numero"<<endl;
            cin>>number1;
            cout<<"Digite seu segundo numero" <<endl;
            cin>>number2;
            int multiplicar = number1 * number2;
            cout << "Resultado :" << multiplicar << endl;
    } else if (op == 4) {
            cout<<"Digite seu primeiro numero"<<endl;
            cin>>number1;
            cout<<"Digite seu segundo numero" <<endl;
            cin>>number2;
            int dividir = number1 / number2;
            cout << "Resultado :" << dividir << endl;
    } else if (op == 5) {
            cout<<"Digite seu peso: "<<endl;
            cin>>peso;
            cout<<"Digite sua altura: " <<endl;
            cin>>altura;
            float imc= peso/(altura*altura);
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
    } else { cout << "INSIRA UM OPERADOR VÁLIDO"; }


}
