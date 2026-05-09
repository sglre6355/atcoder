#include <boost/multiprecision/cpp_int.hpp>
#include <vector>
using namespace std;
using namespace boost::multiprecision;

int N;
long long K;
vector<int128_t> A;

bool is_ok(int128_t x) {
    int128_t count = 0;

    for (int i = 0; i < N; ++i) {
        if (A[i] >= x)
            continue;

        count += (x - A[i] + i) / (i + 1);

        if (count > K)
            return false;
    }

    return count <= K;
};

int main() {
    cin >> N >> K;

    A.resize(N);
    for (auto &A_i : A) {
        cin >> A_i;
    }

    int128_t ok = 0;
    int128_t ng = (int128_t)4e23;
    while (abs(ok - ng) > 1) {
        auto mid = (ok + ng) / 2;

        if (is_ok(mid)) {
            ok = mid;
        } else {
            ng = mid;
        }
    }

    cout << ok << endl;
}
