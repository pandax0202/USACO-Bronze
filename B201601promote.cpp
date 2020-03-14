#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
  ifstream fin("promote.in");
  ofstream fout("promote.out");
  
  int bin, bout, sin, sout, gin, gout, pin, pout, bup{}, gup{}, sup{};
  fin >> bin >> bout >> sin >> sout >> gin >> gout >> pin >> pout; 
  
  if (pin < pout)
    gup = pout - pin;
    gin -= pout - pin;
  if (gin < gout)
    sup = gout - gin;
    sin -= 1;
  if (sin < sout)
    bup = sout - sin;
    bin -= 1;
  
  fout << bup <<endl << sup << endl << gup << endl;
  
  return 0;
}
