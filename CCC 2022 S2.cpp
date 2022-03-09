#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, Y, G; 
  
    cin >> X;
    string same[X][2];
    for (int i = 0; i < X; i++)
        cin >> same[i][0] >> same[i][1];
  
    cin >> Y;
    string different[Y][2];
    for (int i = 0; i < Y; i++)
        cin >> different[i][0] >> different[i][1];   
      
    string name1, name2, name3;
    cin >> G;
    unordered_map<string, int> groups;
    for (int i = 0; i < G; i++) {
        cin >> name1 >> name2 >> name3;
        groups[name1] = i;
        groups[name2] = i;
        groups[name3] = i;
    }
  
    int violated = 0;
    for (int i = 0; i < X; i++)
        violated += (groups[same[i][0]] != groups[same[i][1]]);
  
    for (int i = 0; i < Y; i++)
        violated += (groups[different[i][0]] == groups[different[i][1]]);
  
    cout << violated << endl;
    
    return 0;
}
