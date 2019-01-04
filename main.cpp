#include <bits/stdc++.h>
int n,m=0,iskom=0;
bool t=false;
int arr[15];
bool proverka(){
   if ((m==n) and (iskom%360==0)) {return true;}
   for (int i=m;i<n;i++){
      for (int j=0;j<2;j++){
         if (j==0) {iskom+=arr[i];m++;t=proverka();} else
         {iskom-=arr[i];m++;t=proverka();}
         if (t==true) return true;
      }
      m--;
   }
}
using namespace std;

int main()
{
    cin>>n;
    for (int i=0;i<n;i++){
      cin>>arr[i];
    }
    t=proverka();
    if (t==true) cout<<"YES"<<endl; else
      cout<<"NO"<<endl;
    return 0;
}

