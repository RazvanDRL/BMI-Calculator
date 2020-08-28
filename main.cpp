#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
  double a, w, h, r;
  cout << "Choose a language.\n\n〔1〕English\n〔2〕Romanian\n\n";
  cin >> a;
  
  
  // English
  if (a == 1)
  {
      cout << "\nWhat is your weight in kilograms\n";
      cin >> w;
      cout << "\nWhat is your height in meters\n";
      cin >> h;
      r = w / pow(h, 2.0);
      
  }
 
 
  // Romanian
  if (a == 2)
  {
      cout << "";
  }
  
  
  // Error
  if (a != 1 && a != 2)
  {
      cout << "Error";
  }











    return 0;
}