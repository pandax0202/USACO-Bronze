#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ifstream fin("pails.in");
  ofstream fout("pails.out");
  
  int X,Y,M;
  fin >> X >> Y >> M;
  int numY = M/Y;
  int maxNum = 0, amtMilk;
  
  for (int j = 0; j <= yPails; j++) {
    int numX = (M-j*Y)/X;
    amtMilk = numX*X + j*Y;
    if (amtMilk >= maxNum) maxNum = amtMilk;
  }
  fout << maxNum << "\n";
  
  return 0;
}
