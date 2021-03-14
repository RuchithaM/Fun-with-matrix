#include <bits/stdc++.h>

using namespace std;



int main()
{
    vector<vector<int>> arr(6);
    int sum,ans=0;
    for (int i = 0; i < 6; i++) 
    {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) 
        {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
  
    for(int row=0;row<4;row++)
    {   
        for(int col=0;col<4;col++)
        {
            ans=ans>sum?ans:sum;
            sum=0;
            for(int i=row;i<=row+2;i++)
            {
                for(int j=col;j<=col+2;j++) 
                {   //cout<<arr[i][j];
                    sum+=arr[i][j];
                }
                //cout<<endl;
            };
        
        }
    }
    cout<<ans;
    return 0;
}
