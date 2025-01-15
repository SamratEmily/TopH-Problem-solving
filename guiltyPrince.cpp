#include <bits/stdc++.h>
using namespace std;

int dx[] = {1,-1, 0, 0};
int dy[] = {0, 0, 1, -1};
int w, h;
vector<string> v;
bool vis[300][300];
int ans;
bool valid(int x, int y)
{
    return (x >= 0 and x < h and y >= 0 and y < w and v[x][y] != '#' and !vis[x][y]);
}
void dfs(int i, int j)
{
    vis[i][j] = true;
     ans++;
    for(int k = 0; k < 4; k++)
    {
        int x = dx[k]+i;
        int y = dy[k]+j;
        
        if(valid(x, y))
        {
            dfs(x, y);
           
        }
    }    
}

void clear_all()
{
    v.clear();
    ans = 0;
    
    memset(vis, 0, sizeof(vis));
}    
int main() {
   int t;
    cin >> t;
    int tc = 1;
    while(t--)
    {
        cin >> w >> h;
        
        clear_all();
        
        string st;
        int in, ij;
        for(int i = 0; i < h; i++){
            cin >> st;
            v.push_back(st);
            
            for(int j = 0; j < w; j++)
            {
                if(st[j] == '@')
                {
                    in = i;
                    ij = j;
                }
            }
        }
        dfs(in, ij);        
        
        printf("Case %d: %d\n", tc++, ans);
    }
    return 0;
}
