#include <iostream>

// Lab 7 — Tristan Daliva
// CIS 5 Week 07 · Two arrays

using std::cout;
using std::cin;
using std::string;
using std::endl;


int main() {
  const int N = 5;

  int quiz[N] = { 73, 82, 56, 91, 64 };
  int quizsum = 0; 
  int quizhigh = quiz[0];

  cout << "Quiz\n";
for (int i = 0; i < 5; ++i){
  cout << "[" << i << "] " << quiz[i] << endl;
}


  for (int i = 0; i < N; ++i){
    quizsum += quiz[i];
    if (quiz[i] > quizhigh) {
      quizhigh = quiz[i];
    }
  }

 cout << "sum: " << quizsum << "\nHigh: " << quizhigh;
// Output should be 366 for the sum and 91 for the high


  int lab[N] = { 88, 88, 88, 88, 88 };

  return 0;
}
