#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n, q, k;
    scanf("%d %d\n",&n,&q);
    vector<vector<int>> arr(n);
    int p, r;
    
    for (int i = 0 ; i < n ; i++)
        {
            scanf("%d ", &k);
            arr[i].resize(k);
            for (int j = 0 ; j < k ; j++)
                {
                    scanf("%d ", &arr[i][j]);
                }
        }
    
    for (int i = 0 ; i < q ; i++)
        {
            scanf("%d %d\n", &p, &r);
            printf("%d\n", arr[p][r]);
        }
    
    return 0;
}