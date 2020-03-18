#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ifstream fin("square.in");
  ofstream fout("square.out");
  
  int x1, x2, y1, y2;
  fin >> x1 >> y1 >> x2 >> y2;
  int minX = x1, maxX = x2, minY = y1, maxY = y2;
  fin >> x1 >> y1 >> x2 >> y2;
  int xSmall = min(minX,x1), xBig = max(maxX,x2), ySmall = min(minY,y1), yBig = max(maxY,y2);
  int size = max(xBig-xSmall, yBig-ySmall);
  fout << size*size << endl;

  return 0;
}
