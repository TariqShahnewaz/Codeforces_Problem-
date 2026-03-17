#include <bits/stdc++.h>
using namespace std;
void passing_ball(){
     int n;
        string s;
        cin >> n >> s;

        vector<int> visited(n + 1, 0);
        int current = 1;
        visited[current] = 1;

        for (int i = 0; i < n; i++) {
            if (s[current - 1] == 'R') current++;                                             
            else current--;

            visited[current] = 1;
        }

        int ans = 0;
        for (int i = 1; i <= n; i++) ans += visited[i];

        cout << ans << "\n";
    
}

int main() {
    

    int t;
    cin >> t;

    while (t--) {
        passing_ball();
       
    }
    return 0;
}
// using namespace std;
 
// int main()
// {
//     int t;
//     cin >> t;
//     for(int i = 0; i < t; i++)
//     {
//         int n;
//         cin >> n;
//         string s;
//         cin >> s;             
//         cout << s.find("RL") + 2 << endl;
//     }
//     return 0;
// }
