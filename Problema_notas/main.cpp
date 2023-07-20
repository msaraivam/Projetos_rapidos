#include <bits/stdc++.h>

using namespace std;

int main()
{
    double nota1,nota2,notafinal;

    cout << " Digite a primeira nota: ";
    cin >> nota1;
    cout << " Digite a segunda nota: ";
    cin >> nota2;

   notafinal = nota1 + nota2;
cout << " NOTA FINAL : " << notafinal<<endl;

   if(notafinal>=60){
    cout << " Aprovado" <<endl;
   }else{
   cout << " Reprovado" <<endl;
   }

    return 0;
}
