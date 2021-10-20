#include <stdio.h>

int main(void) {
def minCoins(coins, m, V)
table = [0 for i in range(V+1)] table [0] = 0
for i in range (1, V + 1): table[i] = sys.maxsize
for i in range (1, V + 1): for j in range(m):
if (coins[j] <= i):
sub_res _ table[i - coins[j]]
if (sub_res ! = sys.maxsize and sub_res + 1 < table[i]: table[i] = sub_res + 1
if table[V] = sys.maxsize
return -1;

/* not sure how to complete this question */

}
