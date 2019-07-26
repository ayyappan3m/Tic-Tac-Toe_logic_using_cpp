#include <stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int N = 3;
    char matrix[N][N] = {{'X','X','O'},
                         {'O','O','X'},
                         {'X','O','X'}};
    
    int i,j,k,l;
    cout<<"\t\t\tTic-tac-toe\n\n";
    int flag = 1;
    int row_x = 0,row_o = 0,col_x = 0,col_o = 0,dig1_x = 0,dig1_o = 0,dig2_x = 0,dig2_o = 0;
    for(i = 0;i<N;i++)
    {
        for(j = 0;j<N;j++)
        {
            if(matrix[i][j] == 'X')
                row_x++;
            else if(matrix[i][j] == 'O')
                row_o++;
            if(matrix[j][i] == 'X')
                col_x++;
            else if(matrix[j][i] == 'O')
                col_o++;
            if(i == j && matrix[j][i] == 'X')
                dig1_x++;
            if(i == j && matrix[j][i] == 'O')
                dig1_o++;
            if(i+j == 2 && matrix[j][i] == 'X')
                dig2_x++;
            if(i+j == 2 && matrix[j][i] == 'O')
                dig2_o++;
        }
        if(row_x == 3 || col_x == 3 || dig1_x ==3 || dig2_x == 3)
        {
            cout<<"X Won the match";
            flag = 0;
            break;
        }
        else if(row_o == 3 || col_o == 3 || dig1_o ==3 || dig2_o == 3)
        {
            cout<<"O Won the match";
            flag = 0;
            break;
        }
        row_o = 0;row_x = 0;col_o = 0; col_x = 0;
    }
    //printf("Hello World");
    if(flag)
        cout<<"Draw";
    return 0;
}
