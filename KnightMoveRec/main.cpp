#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int solve(int board[][15], int n, int i, int j) {
    if (i < 1 || i > n || j < 1 || j > n) {
        return 0;
    }
    if (board[i][j] == 0 || board[i][j] == -1) {
        return 0;
    }

    int r = i;
    int c = j;
    board[i][j] = -1;
    int a = solve(board, n, r - 2, c - 1);
    int b = solve(board, n, r - 2, c + 1);
    int z = solve(board, n, r - 1, c - 2);
    int d = solve(board, n, r - 1, c + 2);
    int e = solve(board, n, r + 1, c - 2);
    int f = solve(board, n, r + 1, c + 2);
    int g = solve(board, n, r + 2, c - 1);
    int h = solve(board, n, r + 2, c + 1);

    board[i][j] = 1;
    int q = 1 + max({a, b, z, d, e, f, g, h});
    return q;
}
int main() {
    int n;
    cin>>n;
    int board[15][15] = {0};

    int count = 0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>board[i][j];
            if(board[i][j]==1){
                count++;
            }
        }
    }

    int maxi = 0;

    maxi=solve(board,n,1,1);

    int ans = count - maxi;
    cout<<ans<<endl;
    return 0;
}