#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
  double a, w, h, r;
  cout << "This program estimates you body mass index(BMI).\nChoose a language.\n\n〔1〕English\n〔2〕Romanian\n\n";
  cin >> a;
  
  
  
  // English
  if (a == 1)
  {
      cout << "\nWhat is your weight in kilograms?\n";
      cin >> w;
      cout << "\nWhat is your height in meters?\n";
      cin >> h;
      r = w / pow(h, 2.0);
      if (r < 16)
      {
          cout << "Severe Thinness\n";
      } else if (r >= 16 && r < 17)
      {
          cout << "Moderate Thinness\n";
      } else if (r >= 17 && r < 18.5)
      {
          cout << "Mild Thinness\n";
      } else if (r >= 18.5 && r < 25)
      {
          cout << "Normal\n";
      } else if (r >= 25 && r < 30)
      {
          cout << "Overweight\n";
      } else if (r >= 30 && r < 35)
      {
          cout << "Obese Class 1\n";
      } else if (r >= 35 && r < 40)
      {
          cout << "Obese Class 2\n";
      } else if (r >= 40)
      {
          cout << "Obese Class 3\n";
      }  
  }
 
 
  // Romanian
  if (a == 2)
  {   
      cout << "\nCare este greutatea ta în kilograme?\n";
      cin >> w;
      cout << "\nCare este înaltimea ta în metri?\n";
      cin >> h;
      r = w / pow(h, 2.0);
      if (r < 16)
      {
          cout << "Subponderalitate severă\n";
      } else if (r >= 16 && r < 17)
      {
          cout << "Subponderalitate moderată\n";
      } else if (r >= 17 && r < 18.5)
      {
          cout << "Subponderalitate temperată\n";
      } else if (r >= 18.5 && r < 25)
      {
          cout << "Normoponderalitate\nFelicitări! Conform măsurătorilor tale, te încadezi în categoria persoanelor care au o greutate normală.\n";
      } else if (r >= 25 && r < 30)
      {
          cout << "Supraponderalitate\n";
      } else if (r >= 30 && r < 35)
      {
          cout << "Obezitate de clasa 1\n";
      } else if (r >= 35 && r < 40)
      {
          cout << "Obezitate de clasa 2\n";
      } else if (r >= 40)
      {
          cout << "Obezitate morbidă\n";
      }
  }
  
  
  // Error
  if (a != 1 && a != 2)
  {
      cout << "Please restart the program and choose a language.\n";
  }
    return 0;
}