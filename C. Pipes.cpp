#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        string r1,r2;
        cin>>r1>>r2;
        int arr[2][n];
            for(int i=0;i<n;i++)
            {
                arr[0][i]=r1[i]-'0';
            }
            for(int i=0;i<n;i++)
            {
                arr[1][i]=r2[i]-'0';
            }
            /*for(int i=0;i<2;i++)
            {
                for(int j=0;j<n;j++)
                    cout<<arr[i][j]<<" ";
                cout<<endl;
            }*/
            bool ans=true;
            int i=0,j=0;
             while(j<n)
             {
                 if(arr[i][j]==1||arr[i][j]==2)
                    j++;
                 else{
                    if(i==0)
                    {
                        if(arr[1][j]==1||arr[1][j]==2)
                        {
                            ans=false;
                            break;
                        }
                        else
                        {
                            i=1;
                            j++;
                        }
                    }
                    else{
                        if(arr[0][j]==1||arr[0][j]==2)
                        {
                            ans=false;
                            break;
                        }
                        else
                        {
                            i=0;
                            j++;
                        }
                    }
                 }
             }
             if(ans==false||j<n||i!=1)
                cout<<"NO"<<endl;
             else
                cout<<"YES"<<endl;
    }
}
