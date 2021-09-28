#include <iostream>
#include <string>
#include <cmath>
#include <list>
#include <map>
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

string binToHex(string bin) 
{
  string hex = "";
  map<int, char> map = {{0, '0'}, {1, '1'}, {2, '2'}, {3, '3'}, {4, '4'}, {5, '5'}, {6, '6'}, {7, '7'}, {8, '8'}, {9, '9'}, {10, 'A'}, {11, 'B'}, {12, 'C'}, {13, 'D'}, {14, 'E'}, {15, 'F'}, };

  while (bin.length() >= 4)
  {
    hex = map[binToDec(bin.substr(bin.length() - 4, bin.length()))] + hex;
    bin = bin.substr(0, bin.length() - 4);
  } 
  
  if (bin != "")
  {
    hex = map[binToDec(bin)] + hex;
  }


  return hex;
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

string decToHex(int dec)
{
  string hex = "";
  map<int, char> map = {{0, '0'}, {1, '1'}, {2, '2'}, {3, '3'}, {4, '4'}, {5, '5'}, {6, '6'}, {7, '7'}, {8, '8'}, {9, '9'}, {10, 'A'}, {11, 'B'}, {12, 'C'}, {13, 'D'}, {14, 'E'}, {15, 'F'}, };
  while (dec >= 1)
  {
    hex = map[dec % 16] + hex;
    dec /= 16;
  }  
  return hex;
}

int main()
{
    string bin = "100010101010101";
    cout << binToDec(bin) << endl;

    string bin2 = "1101011101011";
    cout << binToHex(bin2) << endl;

    int dec = 54;
    cout << decToBin(dec) << endl;

    int dec2 = 20;
    cout << decToHex(dec2) << endl;
    return 0;
}
