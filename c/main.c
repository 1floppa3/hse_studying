    #define _CRT_SECURE_NO_WARNINGS

    #include <stdio.h>

    int main() {
        int N, M, K;

        scanf("%d %d", &N, &M);
        if (M < N) { // Гарантируем M < N
            const int t = M;
            M = N;
            N = t;
        }

        while (1) {
            scanf("%d", &K);
            if (K <= 0) {
                printf("You are full\n");
                break;
            } else {
                if (N != 1 && M != 1)
                {
                    if (K != N && K%N!=0 && K != M && K%M!=0) {
                        printf("Chocolate is over\n");
                        break;
                    }

                    if (K % M == 0 && M > 1) {
                        N -= (int) K/M;
                    } else if (K % N == 0 && N > 1) {
                        M -= (int) K/N;
                    } else {
                        printf("Chocolate is over\n");
                        break;
                    }
                } else if (M > K+1) {
                    M -= K;
                } else {
                    printf("Chocolate is over\n");
                    break;
                }
            }
            printf("%d %d\n", N, M);
        }

        return 0;
    }