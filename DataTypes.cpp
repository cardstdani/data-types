#include <iostream>
#include <string>
#include <cmath>
#include <list>
using namespace std;

int binToDec(string bin) 
{
  int dec = 0;
  for(int i = 0; i < bin.length(); i++)
  {
    char a = bin[bin.length() - 1 - i];
    dec += (a - 48) * pow(2, i);
  }

  return dec;
}

string decToBin(int dec) 
{
  string bin = "";
  while(dec >= 1) 
  {
    (dec % 2 == 0 ? bin = "0" + bin : bin = "1" + bin);

    dec /= 2;
  }

  return bin;
}

int main()
{
    string bin = "100010101010101";
    cout << binToDec(bin) << endl;
    int dec = 54;
    cout << decToBin(dec) << endl;
    return 0;
}
