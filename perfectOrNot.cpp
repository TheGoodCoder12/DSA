#include<iostream>
#include<vector>

using namespace std;
int N=3;
bool perfect(int &array[][N]){
    int diagonal;
    if (array[0][0]==0)
    {
        return false;
    }
      else
        {
            diagonal=array[0][0];
        }
    
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i==j && array[i][j]!=diagonal)
            {
                break;
                return false;
            }
            else
            {
                if (array[i][j]!=0)
                {
                    break;
                    return false;
                }
                
            }
            
        }
        
    }
    
}

int main(){
    N=3;
    int array[3][3]={{1,0,0},{0,1,0},{0,0,1}}; 
    cout<<perfect(array);
    return 0;
}