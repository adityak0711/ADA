#include<iostream>
#include<cstring>
using namespace std;
#define ROW 3
#define COL 5

int M[ROW][COL];

int issafe(int M[][COL], int row, int col, bool visited[][COL])
{
	return(row>=0) && (row<ROW) && (col>=0) && (col<COL) && (M[row][col] && !visited[row][col]);
}


void dfs(int M[][COL], int row, int col, bool visited[][COL])
{
	static int rowNbr[]={-1,-1,-1,0,0,1,1,1};
	static int colNbr[]={-1,0,1,-1,1,-1,0,1};

	visited[row][col]=true;

	for(int k=0;k<8;k++)
		if(issafe(M,row+rowNbr[k],col+colNbr[k], visited))
			dfs(M,row+rowNbr[k], col+colNbr[k], visited);


}

int countIslands(int M[][COL])
{
	bool visited[ROW][COL];
	memset(visited,0,sizeof(visited));

	int count=0;
	for(int i=0;i<ROW;i++){
		for(int j=0;j<COL;j++){
			if(M[i][j] && !visited){
				dfs(M,i,j,visited);
				++count;
			}
		}
	}

	return count;
}





int main()
{
	
	cout<<"Enter matrix:";
	for(int i=0;i<ROW;i++)
		for(int j=0;j<COL;j++)
			cin>>M[i][j];

	int cn=countIslands(M);

	return 0;

}
