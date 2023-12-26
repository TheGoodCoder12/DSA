#include<iostream>
#include<vector>
#include<cmath>

using namespace std;
void spiralFilling(int &n){
    int leftPtr=0;
    int rightPtr=n-1;
    int top=0;
    int bottom=n-1;
    int val=1;
    n=n*n; //n=9
    n++; //n=10
    vector<vector<int>> ans;
    while (val<n)
    {
        for (int i = leftPtr; i < rightPtr; i++)
        {
            ans[top][i]=val++;
        }
        top++;
        for (int i = top; i <= bottom; i++)
        {
            ans[i][rightPtr]=val++;
        }
        rightPtr--;
        if (top<=bottom)
        {
            for (int i = rightPtr; i >= leftPtr; i--)
            {
                ans[bottom][i]=val++;
            }
            bottom--;
        }
        if (leftPtr<=rightPtr)
        {
            for (int i = bottom; i >= top; --i)
            {
                ans[i][leftPtr]=val++;
            }
            leftPtr++;
        }
    }
       for (int i = 0; i < sqrt(n); i++)
    {
        for (int j = 0; j < sqrt(n); j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
int main(){
    int n;
    cin>>n;
    cout<<endl;
    
    return 0;
}