//
//  main.cpp
//  AddDigits
//
//  Created by csdc-iMac on 16/3/24.
//  Copyright © 2016年 Cloudox. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int addDigits2(int num);

    int result = addDigits2(456);
    printf("result=%d\n",result);
    
    return 0;
}

// 方法一：常规的循环
int addDigits1(int num) {
    int tempResult = num;// 存储临时加入的结果
    while (tempResult > 10) {
        int tempNum = tempResult;
        tempResult = 0;
        
        for (; tempNum / 10 >= 1;) {
            tempResult += tempNum % 10;
            tempNum = tempNum / 10;
        }
        tempResult += tempNum;
    }
    return tempResult;
}

// 方法二：找规律
int addDigits2(int num) {
    return num % 9 == 0 ? (num == 0 ? 0 : 9) : num % 9;
}
