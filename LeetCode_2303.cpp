// 力扣 2303. 计算应缴税款总额  https://leetcode.cn/problems/calculate-amount-paid-in-taxes/
/*
    目前该代码已通过测试样例。
    该题难度不大，可以自己写一下逻辑公式，用代码完成
*/

class Solution {
public:
    double calculateTax(vector<vector<int>>& brackets, int income) {
        int temp_income = 0, brac_size = brackets.size(), left_money = income;
        int tax = 0, temp_money, temp_tax;
        for(int i = 0; i < brac_size; i++){
            temp_money = brackets[i][0];
            temp_tax = brackets[i][1];
            if(temp_money >= income){
                tax += left_money * temp_tax;
                break;
            }
            tax += (temp_money - temp_income) * temp_tax;
            left_money = left_money - temp_money + temp_income;
            temp_income = temp_money;
        }
        return tax/100.0;
    }
};