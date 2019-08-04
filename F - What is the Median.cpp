#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,c=1;
    cin>>a;
    cout<<a<<endl;
    vector<int>v;
    v.push_back(a);
    while(cin>>a)
    {
        c++;
        v.push_back(a);
        sort(v.begin(),v.end());
        int mid;
        if(c%2==0)
        {
            mid=v.size()/2;
            cout<<(v[mid]+v[mid-1])/2<<endl;
        }
        else
            cout<<v[mid]<<endl;

    }
}
