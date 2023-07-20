#include <bits/stdc++.h>

using namespace std;

int main()
{
   int num1,num2,num3;

   cout << "Digite o primeiro numero : ";
    cin >> num1;
   cout << "Digite o segundo numero : ";
    cin >> num2;
    cout << "Digite o terceiro numero : ";
    cin >> num3;

    if(num1<num2,num1<num3){
        cout << "O menor numero e : " << num1 <<endl;
    }else if (num2<num1,num2<num3){
    cout << "O menor numero e : " << num2 <<endl;
    }else if (num3<num1,num3<num2){
         cout << "O menor numero e : " << num3 <<endl;
    }else{
    cout << "Nao ha um menor numero";
    };

    return 0;
}
