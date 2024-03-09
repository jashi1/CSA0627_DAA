#include <bits/stdc++.h>
using namespace std;

double cont[1000][1000];

void num_of_containers(int n, int X) {
    int binCount = 1;
    int s = X;

    for (int i = 0; i < n; i++) {
        if (s-cont[i] > 0) {
            s -= cont[i];
        } else {
            binCount++;
            s = X;
            i--;
        }
    }

    cout << "Number of bins required: " << binCount << endl;
}

int main() {
    int n;
    cout << "Enter the number of items in the set: ";
    cin >> n;

    cout << "Enter " << n << " items:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> cont[i];
    }

    int X;
    cout << "Enter the bin size: ";
    cin >> X;

    num_of_containers(n, X);
    return 0;
}

