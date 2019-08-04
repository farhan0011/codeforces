#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        multimap<int,string>mp;
        for(int k=0;k<m;k++)
        {
        string s;
        cin>>s;
        int c=0;

        for(int i=0;i<s.size()-1;i++)
        {
            for(int j=i+1;j<s.size();j++)
            {
                if(s[i]>s[j])
                    c++;
            }
        }
        mp.insert(make_pair(c,s));
        }
        for(auto it=mp.begin();it!=mp.end();it++)
            cout<<it->second<<endl;
        if(t>0)
            cout<<"*"<<endl;
    }
}
