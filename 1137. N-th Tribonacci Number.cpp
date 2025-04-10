class Solution {
public:
    int tribonacci(int n) {
        if (n == 0) return 0;
        if (n == 1 || n == 2) return 1;

        std::vector<int> F(n + 1);
        F[0] = 0;
        F[1] = 1;
        F[2] = 1;

        for (int i = 3; i <= n; i++) {
            F[i] = F[i - 3] + F[i - 2] + F[i - 1];
        }

        return F[n];
    }
};