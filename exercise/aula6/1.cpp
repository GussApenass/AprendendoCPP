/*
// Proposta do exercicio gerado pelo GEMINI.
1. O Contador de Doces
 - Global: int totalDoces = 25;
 - Local: int criancas = 4;
 - Tarefa: Use uma variável local sobra para calcular quantos doces restam após dividir igualmente entre as crianças. Exiba o resultado da divisão e a sobra.
*/
#include <iostream>
using namespace std;

int totalDoces = 25;

//STATUS: Correta

int main() {
  int criancas = 4;

  int divisao, sobra;

  divisao = totalDoces / criancas;
  sobra = totalDoces % criancas;

  cout << "Cada criança receberá " << divisao << " doces e sobrarão " << sobra;
  return 0;
}
