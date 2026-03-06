/*
// Proposta do exercicio gerado pelo GEMINI.
2. Conversor de Tempo Simples
  - Global: int minutosTotais = 135;
  - Local: int horas, minutosRestantes;
  - Tarefa: Calcule quantas horas completas existem em 135 minutos e quantos minutos "sobram". (Dica: uma hora tem 60 minutos).
*/

#include <iostream>
using namespace std;

int main() {
  int horas, minutosRestantes;

  horas = minutosTotais / 60;
  minutosRestantes = minutosTotais % 60;

  cout << "Qnt de horas: " << horas << "\nMinutos totais: " << minutosRestantes;
  return 0;
}
