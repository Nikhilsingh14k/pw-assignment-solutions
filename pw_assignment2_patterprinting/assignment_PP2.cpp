#include <iostream>
using namespace std;

void pattern1(int n) {
    int num = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << num++ << " ";
        }
        cout << endl;
    }
}

void pattern2(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << char('A' + j) << " ";
        }
        cout << endl;
    }
}

void pattern3(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i; j >= 0; j--) {
            cout << char('A' + j) << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << char('A' + j) << " ";
        }
        cout << endl;
    }
}

void pattern4(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout << "  "; // Adjust space for alignment
        }
        for (int j = 0; j < n - i; j++) {
            cout << char('A' + j) << " ";
        }
        for (int j = n - i - 2; j >= 0; j--) {
            cout << char('A' + j) << " ";
        }
        cout << endl;
    }
}

void pattern5(int n) {
    for (int i = n; i > 0; i--) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        for (int j = i - 1; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern6(int n) {
    for (int i = 0; i < n; i++) {
        cout << "* *" << endl;
    }
}

void pattern7(int m, int n) {
    for (int i = 0; i < m; i++) {
        if (i % 2 == 0)
            cout << "* " << endl;
        else
            cout << " *" << endl;
    }
}

void pattern8(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
}

void pattern9(int n) {
    cout << "*" << endl;
    for (int i = 1; i < n - 1; i++) {
        cout << "*";
        for (int j = 1; j < 2 * i; j++) {
            cout << " ";
        }
        cout << "*" << endl;
    }
    for (int i = 0; i < 2 * n - 1; i++) {
        cout << "*";
    }
    cout << endl;
    for (int i = n - 2; i > 0; i--) {
        cout << "*";
        for (int j = 1; j < 2 * i; j++) {
            cout << " ";
        }
        cout << "*" << endl;
    }
    cout << "*" << endl;
}

void pattern10(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        for (int j = i + 1; j <= n; j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        for (int j = i + 1; j <= n; j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern11(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n = 4, m = 4;

    cout << "Pattern 1:" << endl;
    pattern1(n);
    cout << endl;

    cout << "Pattern 2:" << endl;
    pattern2(n);
    cout << endl;

    cout << "Pattern 3:" << endl;
    pattern3(n);
    cout << endl;

    cout << "Pattern 4:" << endl;
    pattern4(n);
    cout << endl;

    cout << "Pattern 5:" << endl;
    pattern5(n);
    cout << endl;

    cout << "Pattern 6:" << endl;
    pattern6(n);
    cout << endl;

    cout << "Pattern 7:" << endl;
    pattern7(m, 6);
    cout << endl;

    cout << "Pattern 8:" << endl;
    pattern8(n);
    cout << endl;

    cout << "Pattern 9:" << endl;
    pattern9(n);
    cout << endl;

    cout << "Pattern 10:" << endl;
    pattern10(n);
    cout << endl;

    cout << "Pattern 11:" << endl;
    pattern11(n);
    cout << endl;

    return 0;
}
