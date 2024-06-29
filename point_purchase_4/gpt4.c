#include <stdio.h>
#include <string.h>

#define MAX_ITEMS 10
#define MAX_COMBINATIONS 5

struct stru_sp {
    char name[50]; // 商品名称
    int points; // 消耗积分
};

struct stru_sp sp[MAX_ITEMS] = {
    {"李宁双肩包", 8200},
    {"新款毛巾", 678},
    {"金吉星软包抽纸", 1040},
    {"2018洗车大毛巾", 1250},
    {"小米移动电源2", 7900},
    {"不锈钢保温杯", 8690},
    {"滋润型护肤脂", 710},
    {"真好芦荟胶", 1900},
    {"维达手帕纸", 2090},
    {"佳洁士巨人专用", 395}
};

struct combination {
    int used_points; // 使用积分
    int items_count[MAX_ITEMS]; // 商品数量
};

struct combination top_combinations[MAX_COMBINATIONS]; // 存储最佳组合的数组

// 递归函数，寻找换购组合
void findCombinations(int index, int current_points, int m, struct combination current_combination) {
    if (index == MAX_ITEMS) {
        int loss = m - current_points;
        if (loss >= 0) {
            for (int i = 0; i < MAX_COMBINATIONS; i++) {
                if (loss < m - top_combinations[i].used_points) {
                    for (int j = MAX_COMBINATIONS - 1; j > i; j--) {
                        top_combinations[j] = top_combinations[j - 1];
                    }
                    top_combinations[i].used_points = current_points;
                    memcpy(top_combinations[i].items_count, current_combination.items_count, sizeof(current_combination.items_count));
                    break;
                }
            }
        }
        return;
    }

    // 尝试当前商品的不同数量
    for (int qty = 0; current_points + qty * sp[index].points <= m; qty++) {
        current_combination.items_count[index] = qty;
        findCombinations(index + 1, current_points + qty * sp[index].points, m, current_combination);
    }
}

int main() {
    int m;
    printf("请输入您的总积分: ");
    scanf("%d", &m);

    struct combination init_combination = {0}; // 初始组合
    memset(top_combinations, 0, sizeof(top_combinations)); // 初始化最佳组合数组
    for (int i = 0; i < MAX_COMBINATIONS; i++) {
        top_combinations[i].used_points = -1;
    }

    // 寻找最佳组合
    findCombinations(0, 0, m, init_combination);

    // 输出最佳组合
    printf("最接近 %d 积分的前 5 种组合为:\n", m);
    for (int i = 0; i < MAX_COMBINATIONS && top_combinations[i].used_points >= 0; i++) {
        printf("使用积分: %d, 剩余积分: %d\n", top_combinations[i].used_points, m - top_combinations[i].used_points);
        for (int j = 0; j < MAX_ITEMS; j++) {
            if (top_combinations[i].items_count[j] > 0) {
                printf("%s x %d\n", sp[j].name, top_combinations[i].items_count[j]);
            }
        }
        printf("\n");
    }

    return 0;
}
