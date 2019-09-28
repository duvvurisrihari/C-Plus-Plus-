#include "myheader.h"

#include <iostream>

using namespace std;

bool printTwoDArrayt(int **a, int n)
{
  if (n==0 || a==NULL)
  { return false;}
  else
  {
    int i,j;
    for (i=0;i<n;i++)
     {
         for (j=0;j<n;j++)

         {
             cout<<a[i][j];
             cout<<" ";
         }
           cout<<endl;
     }
   return true;
  }
}
