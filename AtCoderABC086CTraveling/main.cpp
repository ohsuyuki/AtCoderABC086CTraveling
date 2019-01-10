//
//  main.cpp
//  AtCoderABC086CTraveling
//
//  Created by osu on 2019/01/04.
//  Copyright © 2019 osu. All rights reserved.
//

//#include <iostream>
#include <stdio.h>

int abs(int num) {
    return num < 0 ? -num : num;
}

int main(int argc, const char * argv[]) {
    int N(0);
//    std::cin >> N;
    scanf("%d", &N);

    int T(0), X(0), Y(0), i(0);
    for(; i<N; i++) {
        int t, x, y;
//        std::cin >> t >> x >> y;
        scanf("%d %d %d", &t, &x, &y);

        int timeSpan = t-T;
//        int distance = std::abs(x-X) + std::abs(y-Y);
        int distance = abs(x-X) + abs(y-Y);
        int remain = timeSpan - distance;

        if( remain < 0 || remain%2 != 0) {
            break;
        }

        T = t;
        X = x;
        Y = y;
    }

    if(i == N) {
//        std::cout << "Yes";
        printf("Yes");
    } else {
//        std::cout << "No";
        printf("No");
    }

    return 0;
}
