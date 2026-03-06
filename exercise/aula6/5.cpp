/*
proposta gerada pelo GEMINI
5. Inversão Matemática
  - Global: int base = 10;
  - Local: int modificador = 3, resultado;
  - Tarefa: Crie uma conta que use todos os operadores que você listou (+, -, *, /, %) em uma única linha para chegar em um número qualquer, usando as duas variáveis.
    - Exemplo: resultado = (base * modificador) + (base % modificador) - ...
*/
//STATUS: CORRETO

#include <iostream>
using namespace std;

int base = 10;

int main() {
  int modificador = 3, resultado;

  resultado = (base * modificador) + (base % modificador) - (base / modificador) / (base + modificador) * (base - modificador);

  cout << "Resultado de calculo aleatorio: " << resultado;
  
  return 0;
}
