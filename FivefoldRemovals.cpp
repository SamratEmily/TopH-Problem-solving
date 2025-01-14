#include "bits/stdc++.h"

using namespace std;

vector<vector<int> > memo;


bool canWin(int marbles, int lastMove) {
    if (marbles == 0) return false; 
    
    if (memo[marbles][lastMove] != -1) return memo[marbles][lastMove];
    
    int maxMove = (lastMove == 0) ? marbles - 1 : min(marbles, 5 * lastMove);
    for (int move = 1; move <= maxMove; ++move) {
        if (!canWin(marbles - move, move)) {
            return memo[marbles][lastMove] = 1;
        }
    }
    return memo[marbles][lastMove] = 0;
}

int main() {

    int t;
    cin >> t;

    while (t--)
    {
        int N;
        cin >> N;

        memo.assign(N + 1, vector<int>(N + 1, -1));

        if (canWin(N, 0)) {
            cout << "Alice" << endl;
        } else {
            cout << "Bob" << endl;
        }
    }
    
    

    return 0;
}