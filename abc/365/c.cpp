#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

using ll = long long;

int main() {
    ll N, M, A_i;
    std::vector<ll> A_list;

    std::cin >> N >> M;
    for (ll i = 0; i < N; ++i) {
        std::cin >> A_i;
        A_list.push_back(A_i);
    }

    if (std::accumulate(A_list.begin(), A_list.end(), 0ll) <= M) {
        std::cout << "infinite" << std::endl;
        return 0;
    }

    ll ok = 0, ng = M;
    while (ng - ok > 1) {
        ll mid = (ok + ng) / 2;
        ll sum = 0;
        for (auto e : A_list) {
            sum += std::min(e, mid);
        }
        if (sum <= M) {
            ok = mid;
        } else {
            ng = mid;
        }
    }

    std::cout << ok << std::endl;

    return 0;
}
