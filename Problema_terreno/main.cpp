#include <bits/stdc++.h>
//a biblioteca " <bits/stdc++.h> " contem todas as outras bibliotecas nescessarias assim dispensando que eu as adicione uma por uma

using namespace std;

int main()
{
double largura,comprimento,vmquadrado,area,preco;

cout << "Digite a largura do terreno : ";
cin >> largura;
cout << "Digite a comprimento do terreno : ";
cin >> comprimento;
cout << "Digite o valor do metro quadrado : ";
cin >> vmquadrado;

area = largura * comprimento;
preco = area * vmquadrado;

cout << fixed << setprecision(2);

cout << "area do terreno: " << area << endl;
cout << "Preço do terreno : R$"<<preco<<endl;

    return 0;
}
