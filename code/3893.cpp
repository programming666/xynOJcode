#include<bits/stdc++.h>
using namespace std;
const int MAX_H = 100001;
vector<bool> is_prime(MAX_H, true);
void sieve() {
    is_prime[0] = is_prime[1] = false;
    for (int p = 2; p * p < MAX_H; p++) {
        if (is_prime[p]) {
            for (int i = p * p; i < MAX_H; i += p)
                is_prime[i] = false;
        }
    }
}

bool isPowerOfTwo(int n) {
    if (n <= 0) return false;
    return (n & (n - 1)) == 0;
}

int getLog2(int n) {
    if (n <= 0) return 0;
    int k = 0;
    while ((1 << k) < n) {
        k++;
    }
    return k;
}

void solve() {
    int h;
    cin >> h;

    int min_attacks = -1;

    if (isPowerOfTwo(h + 1)) {
        min_attacks = getLog2(h + 1);
    }

    long long physical_damage_sum;
    for (int k = 0; ; ++k) {
        if (k == 0) {
            physical_damage_sum = 0;
        } else {
            physical_damage_sum = (1LL << k) - 1;
        }

        if (physical_damage_sum >= h) {
            break;
        }

        int prime_needed = h - physical_damage_sum;
        if (prime_needed > 1 && is_prime[prime_needed]) {
            int current_attacks = k + 1;
            if (min_attacks == -1 || current_attacks < min_attacks) {
                min_attacks = current_attacks;
            }
        }
    }

    cout << min_attacks << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    sieve();

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}