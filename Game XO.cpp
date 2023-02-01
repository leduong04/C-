#include<iostream>
#include <vector>
#include <cstdlib>
using namespace std;

const int ROW = 3;
const int COLUMN = 3;
char board[ROW][COLUMN]={{' ', ' ', ' '},
                         {' ', ' ', ' '},
                         {' ', ' ', ' '}};

void gameboard()
{
    for(int i=0; i<ROW; i++)
    {
        cout << " | ";
        for(int j=0; j<COLUMN; j++)
        {
            cout<<board[i][j]<<" | ";
        }
        
        cout<<"\n";
    }
} 


int main()
{
	int n, m, k, ktra;
	int row, column;
	char player='x';
	do{
	 gameboard();
    cout<<"Nhap: ";
    cin>>n>>m;
    n--;
    m--;
    if(board[n][m]==' ')
    {
    	board[n][m]=player;
	}
//    gameboard();
   for (int i = 0; i < ROW; i++) {
      if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
        cout<<player<<" wins";
        ktra=1;
      }
   }
   
   // Check columns
   for (int i = 0; i < COLUMN; i++) {
      if (board[0][i] == player && board[1][i] == player && board[2][i] == player) {
         cout<<player<<" wins";
         ktra=1;
      }
   }
   
   // Check diagonals
   if (board[0][0] == player && board[1][1] == player && board[2][2] == player) {
       cout<<player<<" wins";
       ktra=1;
   }
   if (board[0][2] == player && board[1][1] == player && board[2][0] == player) {
       cout<<player<<" wins";
       ktra=1;
   }
   
//   return false;

if(player=='x')
	player='o';
	else
	player='x';
	
	if(ktra==1)
	{
	cout<<"\n";
	 gameboard();
	break;
	}
	
	
		cout<<" \nNhap 1 de tiep tuc, 0 de huy van: ";
	cin>>k;
	if(k==1)
	system("cls");
	if(k==0)
	break;
	}
	
	while (n<4||m<4);
}
