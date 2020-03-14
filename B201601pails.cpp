#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ifstream("pail.in");
  ofstream("pail.out");
  int M, X, Y;
  fin >> X >> Y >> M;
  if (M%Y > X) {
    if ((M%Y)%X >= M%X) cout << M-M%X << endl;
    else cout << M-(M%Y)%X << endl;
  }
  else if (M%Y > M%X) cout << M-M%X << endl;
  else cout << M-M%X << endl;
  
  return 0;
}
      
