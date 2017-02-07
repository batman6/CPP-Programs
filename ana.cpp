    #include<iostream>
    using namespace std;
    int main()
    {
        int n,a,sum=0,avg,i;
        //cout<<"Enter no of terms";
        cin>>n;
        //cout<<"Enter"<<n<<"numbers";
        for(i=0;i<n;i++)
        {
          cin>>a;
          sum=sum+a;
        }
        avg=sum/n;
        cout<<avg;
    }
