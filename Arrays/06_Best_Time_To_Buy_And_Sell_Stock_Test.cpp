#include <iostream>
#include <vector>

using namespace std;

#include "06_Best_Time_To_Buy_And_Sell_Stock.cpp"

int main() {

    vector<int> prices = {7,1,5,3,6,4};

    Solution obj;

    cout << "Maximum Profit = "
         << obj.maxProfit(prices);

    return 0;
}