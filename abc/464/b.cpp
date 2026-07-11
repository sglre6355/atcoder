#include <deque>
#include <iostream>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;

    deque<deque<char>> image(H, deque<char>(W));
    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            cin >> image[i][j];
        }
    }

    while (true) {
        if (image.front() != deque(W, '.')) {
            break;
        }
        image.pop_front();
    }
    while (true) {
        if (image.back() != deque(W, '.')) {
            break;
        }
        image.pop_back();
    }
    while (true) {
        bool ok = false;
        for (int i = 0; i < image.size(); ++i) {
            if (image[i].front() != '.') {
                ok = true;
                break;
            }
        }
        if (ok) {
            break;
        }
        for (auto &row : image) {
            row.pop_front();
        }
    }
    while (true) {
        bool ok = false;
        for (int i = 0; i < image.size(); ++i) {
            if (image[i].back() != '.') {
                ok = true;
                break;
            }
        }
        if (ok) {
            break;
        }
        for (auto &row : image) {
            row.pop_back();
        }
    }

    for (auto row : image) {
        for (auto c : row) {
            cout << c;
        }
        cout << endl;
    }
}
