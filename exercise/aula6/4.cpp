/*
proposta gerada pelo GEMINI
4. O Problema da Fábrica
  - Global: int parafusosProduzidos = 100;
  - Local: int tamanhoCaixa = 12, caixasCheias, descartados;
  - Tarefa: Calcule quantas caixas serão preenchidas totalmente e quantos parafusos serão descartados por não completarem uma caixa.
*/
//STATUS: CORRETO

#include <iostream>
using namespace std;

int parafusosProduzidos = 100;

int main() {
  int tamanhoCaixa = 12, caixaCheias, descartados; 

  caixaCheias = parafusosProduzidos / tamanhoCaixa;
  descartados = parafusosProduzidos % tamanhoCaixa;

  cout << "Caixa cheias: " << caixaCheias << "\nDescartados: " << descartados;
  
  return 0;
}
