#include <iostream>
#include <climits>
using namespace std;
void Cyclic_Sort(int A[],int n)
{
    int i = 0;
    while(i<n)
    {
       int Current = A[i] - 1;
       if(A[i] != A[Current])
       {
         swap(A[i],A[Current]);
       }
       else
        i++;
    }
}
int main()
{
    int n;
    cout<<"Enter the Size of the Array: ";
    cin>>n;
    int A[n];
    cout<<"Enter Elements\n";
    for(int i=0;i<n;i++)
    {
       cin>>A[i];
    }
    Cyclic_Sort(A,n);
    for(int i=0;i<n;i++)
    {
      cout<<A[i]<<" ";
    }
return 0;
}
