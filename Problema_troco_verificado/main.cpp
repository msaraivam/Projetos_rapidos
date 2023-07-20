#include <bits/stdc++.h>

using namespace std;

int main()
{
    double preco,dinheiro,valor,troco,resto;
    int quantidade;

    cout << "Digite o valor do produto : ";
    cin >> preco;
    cout << "Digite a quantidade comprada : ";
    cin >> quantidade;
    cout << "Dinheiro recebido : ";
         cin >> dinheiro;

    valor = preco * quantidade;
    troco = dinheiro - valor ;

    if(valor>dinheiro){

        resto = valor - dinheiro;
    cout << fixed << setprecision(2);
    cout << "DINHEIRO INSUFICIENTE. FALTAM : R$" << resto << endl;

    }else{

   cout << fixed << setprecision(2);
   cout << "O seu troco e de : R$" << troco << endl;
    }
    return 0;
}
