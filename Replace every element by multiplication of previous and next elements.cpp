#include<iostream> 
using namespace std; 
  
void update(int a[], int n) 
{  
    int previous = a[0]; 
    arr[0] = a[0] * a[1]; 
    for (int i = 1; i < n - 1; i++)
    {
        int current = a[i]; 
        a[i] = previous * a[i + 1]; 
        previous = current; 
    } 
    a[n-1] = previous * a[n-1]; 
} 
  
int main() 
{ 
    int a[50], n;
    cin>>n;
    
    for(int i = 0; i < n; i++)
        cin>>a[i];
    update(a, n);
    for (int i=0; i<n; i++) 
      cout << a[i] << " "; 
    return 0; 
}
