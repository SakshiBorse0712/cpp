# include <iostream>
using namespace std ;
int main()
{
  int n,a[10];
    cout << "Enter n:" ;
    cin >> n ;

  cout << "Enter elements in array:" ;
  for(int i=0;i<n;i++)
  {
      cin >> a[i] ;
  }

  for(int i=0;i<n;i++)
  {
    if(i != n-1)
    {
      cout << a[i] <<"," ;
    }
    else
    {
      cout << a[i] ;
    }
  }

    return 0;
}