#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   cin>>s;
   int q;
   cin>>q;
   vector<set<int>>v(26);
   for(int i=0;i<s.size();i++)
   {
       v[s[i]-'a'].insert(i);
   }
   int a,l,b,r;
   char c;
   while(q--)
   {
       cin>>a;
       if(a==1)
       {
           cin>>b>>c;
           b--;
           v[s[b]-'a'].erase(b);
           v[c-'a'].insert(b);
           s[b]=c;
           //cout<<s<<endl;
       }
       else
       {
           cin>>l>>r;
           l--,r--;
           int cnt=0;
           for(int i=0;i<26;i++)
           {
               //cout<<i+1<<"->";
             auto it=v[i].lower_bound(l);
             if(it!=v[i].end()&&(*it)<=r)
                cnt++;
             //cout<<endl;
           }
           cout<<cnt<<endl;
       }
   }
}
