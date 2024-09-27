#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>


bool is_prime(const int num) {
    if (num < 2) return false;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
int factorial(const int n) {
    if (n < 0) {
        printf("Факториал отрицательного числа не определен.\n");
        return 0;
    } else if (n == 0 || n == 1) {
        return 1;
    } else {
        int result = 1;
        for (int i = 2; i <= n; i++) {
            result *= i;
        }
        return result;
    }
}
bool is_success_num(const int n) {
    int s = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            s += i;
        }
    }
    return (s == n);
}

#define T1
#ifdef T1
int main(void) {
    int input = 0;
    scanf("%d", &input);
    printf("%d\n", factorial(input));
    return 0;
}
#endif

//#define T2
#ifdef T2
int main(void) {
    int input = 0;
    scanf("%d", &input);
    if (is_prime(input)) {
        printf("%d is prime\n", input);
    }
    else {
        printf("%d is not prime\n", input);
    }


    return 0;
}
#endif

//#define T3
#ifdef T3
int main(void) {
    int input = 0;
    scanf("%d", &input);
    for (int i = 2; i <= input; i++) {
        if (is_prime(i)) {
            printf("%d is prime\n", i);
        }
    }

    return 0;
}
#endif

//#define T4
#ifdef T4
int main(void) {
    int input = 0;
    scanf("%d", &input);
    for (int i = 2; i < input; i++) {
        if (input % i == 0) {
            printf("%d, ", i);
        }
    }

    return 0;
}
#endif

//#define T5
#ifdef T5
int main(void) {
    int n = 0;
    scanf("%d", &n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int k = i*2+1;
        sum += k;
    }
    printf("%d\n", sum);

    return 0;
}
#endif

//#define T6
#ifdef T6
int main(void) {
    for (double x = -2; x <= 2; x += 0.5) {
        double y = -2.4*x*x+5*x-3;
        printf("(%.2f, %.2f)\n", x, y);
    }

    return 0;
}
#endif

//#define T7
#ifdef T7
int main(void) {
    int n = 0;
    scanf("%d", &n);
    double min = -999999999999;
    for (int i = 0; i < n; i++) {
        double x = 0;
        scanf("%lf", &x);
        if (x < min || min == -999999999999) {
            min = x;
        }
    }
    printf("%.2f\n", min);

    return 0;
}
#endif

//#define T8
#ifdef T8
int main(void) {
    int n = 0;
    scanf("%d", &n);
    double s = 0;
    bool bAdd = true;
    for (int i = 0; i < n; i++) {
        int k = i*2+1;
        if (bAdd) {
            s += 1/k;
        }
        else {
            s -= 1/k;
        }
        bAdd = !bAdd;
        printf("DEBUG - %d: %.5f\n", i, s);
    }
    printf("%.5f\n", s*4);
    return 0;
}
#endif

//#define T9
#ifdef T9
int main(void) {
    int n = 0;
    scanf("%d", &n);

    if (is_success_num(n)) {
        printf("%d is success", n);
    } else {
        printf("%d is not success", n);
    }
}
#endif

//#define T10
#ifdef T10
int main(void) {
    int n = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (is_success_num(i)) {
            printf("%d is success\n", i);
        }
    }
}
#endif