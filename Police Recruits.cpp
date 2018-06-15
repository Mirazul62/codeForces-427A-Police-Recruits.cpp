#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,n,a[100000],sum=0,count=0,ans;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]>0)
            sum+=a[i];
        else
        {
            if(sum>0 && sum>=a[i])
                sum+=a[i];
            else if(sum==0 && a[i]<0)
                count-=a[i];
           else if(sum>0 && sum<a[i])
            {
                sum=0;
                ans=abs(a[i]-sum);
                count+=ans;

            }


        }
          ///  cout<<sum<<" "<<count<<endl;
    }
        cout<<count;


}
