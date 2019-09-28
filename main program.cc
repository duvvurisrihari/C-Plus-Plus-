#include "myheader.h"
#include <iostream>
using namespace std;


int main()
 {
     int i;
     int a[2][2]={{2,3},{5,4}};
     int *b[2];
     for(i=0;i<2;i++)
{
b[i]=a[i];
}
     cout<<printTwoDArrayt(b,2);
     return 0;
 }
