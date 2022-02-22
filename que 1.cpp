#include<iostream>
using namespace std;
void updation(int x[], int n)
{
    int z, y  = x[0];

	x[0] = x[0] * x[1];
 
    for (int i=1; i<n-1; i++)
    {
        z = x[i];
 
        x[i] = y * x[i+1];
 
        y = z;
    }
   if(y!=z)
    x[n-1] = y * x[n-1];
   else
   	x[n-1]=0;
   }
int main()
{
    int x[] = {0, 1, 3, 4, 5, 6, 7, 8, 10};
    int n = (sizeof(x)/sizeof(x[0]));
   	cout << "Given array : ";
    for (int i=0; i < n; i++) 
    cout << x[i] <<"\t";
    
    updation(x,n);
    
    cout << "\nUpdated array : ";
    for (int i=0; i < n; i++) 
    
      cout << x[i] <<"\t";
  
  return 0;     

}

