//Fa�a um programa que receba um valor que � o valor pago, um segundo valor que � o pre�o do produto e�retorne o troco a ser dado.

#include <iostream>
using namespace std;

int main()
{
    int valor_pago, preco_produto, troco;
    cin >> preco_produto;
    cin >> valor_pago;
    troco = valor_pago - preco_produto;
    cout << troco;

  return 0;
}

