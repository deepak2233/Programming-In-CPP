#include <stdio.h>
int max(int a, int b) {return a > b ? a : b;}
int min(int a, int b) {return a < b ? a : b;}
int grid[2501][2501], i, j, k, n, m, ans = 2500 * 2500, sum, gsum, x, y;
 
int main()
{
    char str[2500];
    scanf("%d%d", &n, &m);
    for(i = 0 ; i < n; i++) {
        scanf("%s", str);
        for(j = 0; j < m; j++) {
            grid[i][j] = str[j] - '0';
        }
    }
    for(i = 0 ; i < n; i++) {
        sum = 0;
        for(j = 0; j < m; j++) {
            sum += grid[i][j];
            grid[i][j] = sum;
            if(i - 1 >= 0)
            grid[i][j] += grid[i - 1][j];
            // printf("%d ", grid[i][j]);
        }
        // printf("\n");
    }
    
    for(i = 2; i <= max(n, m); i++) {
        sum = gsum = 0;
        for(j = 0; j < n; j += i) {
            for(k = 0; k < m; k += i) {
                x = min(j + i - 1, n - 1);
                y = min(k + i - 1, m - 1);
                sum = grid[x][y];
                // printf("%d %d %d\n", j, k, sum);
                if(j - 1 >= 0 && k - 1 >= 0) sum += grid[j - 1][k - 1];
                if(j - 1 >= 0) sum -= grid[j - 1][y];
                if(k - 1 >= 0) {sum -= grid[x][k - 1];}
                // printf("%d %d %d %d %d %d\n", j, k, x, y, sum, i*i-sum);
                // if(y != k + i - 1)
                // gsum += i * i - sum;
                // else if(x != j + i - 1)
                // gsum += i * i - sum;
                // else
                if(j + i - 1 >= n || k + i - 1 >= m) {
                    // printf("%d %d %d\n", j, k, sum);
                    gsum += sum;
                }
                else
                gsum += min(sum, i * i - sum);
                // printf("%d\n", gsum);
            }
        }
        // printf("%d\n", gsum);
        if(gsum < ans) ans = gsum;
    }
    printf("%d", ans);
    return 0;
}
