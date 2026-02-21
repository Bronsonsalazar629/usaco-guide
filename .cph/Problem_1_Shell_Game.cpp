#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int simulate(vector<tuple<int,int,int>>& swaps, int start){
    int pebble = start;
    int score = 0;

    for(int i = 0; i < swaps.size(); i++){
        int a = get<0>(swaps[i]);
        int b = get<1>(swaps[i]);
        int g = get<2>(swaps[i]);

        if (pebble == a) pebble = b;
        else if(pebble == b) pebble = a;
        if(pebble == g) score++;
    }
    return score;

}

int main(){
    int n;
    cin >> n;
    vector<tuple<int, int, int>> swaps;
    for(int i = 0; i < n; i++){
        int a, b, g; 
        cin >> a >> b >> g;
        swaps.push_back({a, b, g});
    }
    int maxScore = max({simulate(swaps, 1), simulate(swaps,2), simulate(swaps,3)});
    cout << maxScore << endl;
}
