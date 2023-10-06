#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> arrows(N);

    for (int i = 0; i < N; ++i) {
        cin >> arrows[i];
    }

    int left = 0;
    int right = 0;
    int sum = 0;
    int maxArrows = 0;

    while (right < N) {
        sum += arrows[right];

        while (sum > K) {
            sum -= arrows[left];
            left++;
        }

        maxArrows = max(maxArrows, right - left + 1);
        right++;
    }

    cout << maxArrows << endl;

    return 0;
}
