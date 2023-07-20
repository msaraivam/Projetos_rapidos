#include <bits/stdc++.h>

using namespace std;

int main()
{
   string nome;
   double valor, horas, pagamento;

   cout << "Nome : ";
      getline(cin,nome);
    cout << "valor por horas trabalhadas : ";
    cin >> valor;
    cout << "horas trabalhadas : ";
    cin >> horas;

     pagamento = valor*horas;

    cout << fixed << setprecision(2);
    cout << "O pagamento para : " << nome << " deve ser : R$ " << pagamento << endl;

    return 0;
}
