#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    map<int,int>a;
    for(int i=1;i<=n;i++)
    {
        a[i]++;
    }
    for(auto it:a)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }

   return 0;

}


