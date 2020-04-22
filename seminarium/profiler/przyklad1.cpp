#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <time.h>
#include <vector>
using namespace std;

void fillMatrix(vector<vector<int>>& A)
{
  for(int iw = 0; iw < A.size(); iw++)
    for(int ik = 0; ik < A[0].size(); ik++) A [iw][ik] = rand() % 199 - 99;
}

void displayMatrix(const vector<vector<int>>& A)
{
  for(int iw = 0; iw < A.size(); iw++)
  {
    for(int ik = 0; ik < A[0].size(); ik++) cout << setw (5) << A [iw][ik];
    cout << endl;
  }
}

void transposeMatrix(const vector<vector<int>>& A, vector<vector<int>>& B)
{
  for(int iw = 0; iw < A.size(); iw++)
    for(int ik = 0; ik < A[0].size(); ik++) B [ik][iw] = A [iw][ik];
}

int main( )
{
  int n, m;

  srand ( ( unsigned )time ( NULL ) );

  m = rand( ) % 5000 + 10000;
  n = rand( ) % 5000 + 5000;

  vector<vector<int>> A(m, vector<int>(n));
  vector<vector<int>> B(n, vector<int>(m));

  fillMatrix(A);
//  displayMatrix(A);
  transposeMatrix(A, B);
  cout << endl << "Matrix B = AT:" << endl;
//  displayMatrix(B);
  return 0;
} 
