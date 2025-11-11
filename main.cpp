#include <omp/HandEvaluator.h>
#include <iostream>

int main() {
  omp::HandEvaluator eval;
  omp::Hand h = omp::Hand::empty();           // empty() doit apparaître une fois
  // Exemple : cinq cartes codées par indices 0–51
  h += omp::Hand(51) + omp::Hand(48) + omp::Hand(0) + omp::Hand(1) + omp::Hand(2); // Ad As 2s 2h 2c
  std::cout << eval.evaluate(h) << '\n';      // Affiche le rang (entier 16 bits)
  return 0;
}
