#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        string r="",g="",b="";
        for(int i=0;i<k;i++)
        {
            if(i%3==0)
                r+='R';
            else if(i%3==1)
                r+='G';
            else
                r+='B';
        }
       // cout<<r<<endl;
        for(int i=0;i<k;i++)
        {
            if(i%3==0)
                g+='G';
            else if(i%3==1)
                g+='B';
            else
                g+='R';
        }
        //cout<<g<<endl;
        for(int i=0;i<k;i++)
        {
            if(i%3==0)
                b+='B';
            else if(i%3==1)
                b+='R';
            else
                b+='G';
        }
        //cout<<b<<endl;
        int cr=0,cg=0,cb=0;
        int car=INT_MAX,cag=INT_MAX,cab=INT_MAX;
        for(int i=0;i<n-k+1;i++)
        {
            int ck=0;
            for(int j=i,p=0;;j++,p++)
            {
                ck++;
                if(ck==k+1)
                {
                    ck=0;
                    break;
                }
                //cout<<s[j];
                if(s[j]!=r[p])
                    cr++;
            }
            //cout<<endl;
            //cout<<"cr="<<cr<<endl;
            car=min(car,cr);
                cr=0;
        }
        //cout<<car<<endl;
        for(int i=0;i<n-k+1;i++)
        {
            int ck=0;
            for(int j=i,p=0;;j++,p++)
            {
                ck++;
                if(ck==k+1)
                {
                    ck=0;
                    break;
                }
                if(s[j]!=g[p])
                    cg++;
            }
            //cout<<"cg="<<cg<<endl;
            cag=min(cag,cg);
            cg=0;
        }
        //cout<<car<<" "<<cag<<endl;
        int ans=min(car,cag);
        for(int i=0;i<n-k+1;i++)
        {
            int ck=0;
            for(int j=i,p=0;;j++,p++)
            {
                ck++;
                if(ck==k+1)
                {
                    ck=0;
                    break;
                }
                if(s[j]!=b[p])
                    cb++;
            }
            //cout<<"cb="<<cb<<endl;
            cab=min(cb,cab);
            cb=0;
        }
        ans=min(ans,cab);
        cout<<ans<<endl;


    }
}
