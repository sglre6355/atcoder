#include <bits/stdc++.h>

struct dragon_part {
    int x_coordinate;
    int y_coordinate;

    void up() {
        y_coordinate++;
    }

    void down() {
        y_coordinate--;
    }

    void right() {
        x_coordinate++;
    }

    void left() {
        x_coordinate--;
    }

    void move_to(dragon_part part) {
        x_coordinate = part.x_coordinate;
        y_coordinate = part.y_coordinate;
    }
};

int main() {
    int N, Q, query_type, p;
    char C;
    std::vector<dragon_part> dragon;

    for (int i = 0; i < N; ++i) {
        dragon_part part = {i, 0};
        dragon.push_back(part);
    }

    for (int i = 0; i < Q; ++i) {
        std::cin >> query_type;
        
        if (query_type == 1) {
            std::cin >> C;

            switch (C) {
                case 'R':
                    dragon[0].right();
                case 'L':
                    dragon[0].left();
                case 'U':
                    dragon[0].up();
                case 'D':
                    dragon[0].down();
            };

            for (int j = 1; j < N; ++j) {
                dragon[j].move_to(dragon[j-1]);
            }
        } else {
            std::cin >> p;

            std::cout << dragon[p-1].x_coordinate << ' ' << dragon[p-1].y_coordinate << std::endl;
        }
    }

    return 0;
}
