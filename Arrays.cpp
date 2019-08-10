#include <iostream>

using namespace std;

void printArray(int theArray[], int sizeOfArray);
int main()
{
  int Numbers[5]  =  {100,11,52,33,41}; //array initializer list
  int sum = 0;
  for(int k=0;k< 5;k++)
  {
      sum += Numbers[k];
      cout << Numbers[k] << endl;
  }
  cout << "The sum of all numbers are: " << sum<<
  endl;

  int ages[9];

  for(int k=0;k<9;k++)
  {
      cout << "Enter persons " << (k+1) << " age " << endl;
      cin >> ages[k];
  }

   cout << "The ages are: " << endl;
   printArray(ages,9);
   return 0;
}

void printArray(int theArray[], int sizeOfArray)
{
     for(int k=0;k<sizeOfArray;k++)
  {
      cout << theArray[k] << "\t";
  }
  cout << "\n";
}
