
#include<bits/stdc++.h>
using namespace std;
int res(int arr[],int n,int m,int k)
{
    for(int i=0;i<n-1;i++)
    {
        if(abs(arr[i]-arr[i+1])<k)
        {
            if(arr[i]>arr[i+1])
            {
                int d=arr[i]-arr[i+1];
                if(arr[i]>d)
                    {
                        m+=d;
                        //cout<<m<<endl;
                    }
                else{
                    m=m+arr[i];
                }
                arr[i]=arr[i+1];
                if(arr[i]>k)
                    m+=k;
                else
                    m=m+arr[i];
            }
            else if(arr[i]==arr[i+1])
            {
                if(arr[i]>k)
                    m=m+(k);
                else
                    m=m+arr[i];
            }
            else if(arr[i]<arr[i+1])
            {
                int d=arr[i+1]-arr[i];
                int p=k-d;
                if(arr[i]>p)
                    m=m+p;
                else
                    m=m+arr[i];
            }
        }
        else if(abs(arr[i]-arr[i+1])==k)
        {
            if(arr[i]>arr[i+1])
            {
                int d=arr[i]-arr[i+1];
                if(arr[i]>d)
                {
                    m=m+d;
                }
                else
                    m=m+arr[i];
                arr[i]=arr[i+1];
                if(arr[i]>k)
                    m+=k;
                else
                    m=m+arr[i];
            }
        }
        else if(abs(arr[i]-arr[i+1])>k)
        {
            if(arr[i]>arr[i+1])
            {
                int d=arr[i]-arr[i+1];
                if(arr[i]>d)
                    m+=d;
                else
                    m+=arr[i];
                arr[i]=arr[i+1];
                if(arr[i]>k)
                    m=m+k;
                else
                    m=m+arr[i];
            }
            else if(arr[i]<arr[i+1])
            {
                int d=arr[i+1]-arr[i];
                int p=d-k;
                if(m>=p)
                    m=m-p;
                else
                    return 0;
            }
        }
        //cout<<m<<endl;
    }
    return 1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        if(res(a,n,m,k))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
