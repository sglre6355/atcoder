#include <atcoder/fenwicktree.hpp>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;

    int base = 0;
    vector<int> cells(N);
    vector<int> num_cells_equal_to(Q + 1);
    atcoder::fenwick_tree<int> fw(Q + 1);

    num_cells_equal_to[0] = N;
    fw.add(0, N);

    for (int i = 0; i < Q; ++i) {
        int type, value;
        cin >> type >> value;

        if (type == 1) {
            auto prev = cells[value - 1];
            auto next = prev + 1;
            cells[value - 1] = next;

            num_cells_equal_to[prev]--;
            num_cells_equal_to[next]++;

            fw.add(prev, -1);
            fw.add(next, 1);

            if (num_cells_equal_to[base] == 0) {
                base++;
            }
        } else {
            if (base + value <= Q) {
                cout << fw.sum(base + value, Q + 1) << endl;
            } else {
                cout << 0 << endl;
            }
        }
    }
}
