// DAA Lab - 1 : Knap Sack using greedy approach

#include <bits/stdc++.h>
using namespace std;

int main() {
    int size;
    cin >> size; // Number of items
    int maxWeight = 30; // Maximum weight the knapsack can hold
    double total_profit = 0; // Total profit

    vector<double> profit(size); // Profits of the items
    vector<double> weight(size); // Weights of the items
    vector<pair<double, int>> pw(size); // To store profit/weight ratio and index

    // Input profit and weight of each item
    for (int i = 0; i < size; i++) {
        cin >> profit[i] >> weight[i];
        pw[i] = {double(profit[i]) / weight[i], i}; // Calculate profit/weight ratio
    }

    // Sort items based on profit/weight ratio in descending order
    sort(pw.rbegin(), pw.rend());

    // Debug: Print sorted ratios and indices
    cout << "Sorted profit/weight ratios and indices:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Item " << pw[i].second << ": Ratio = " << pw[i].first << endl;
    }

    // Greedy selection of items
    for (int i = 0; i < size; i++) {
        int index = pw[i].second; // Get the original index of the item
        if (maxWeight >= weight[index]) {
            // If the entire item fits, take it all
            total_profit += profit[index];
            maxWeight -= weight[index];
        } else {
            // If only a fraction of the item fits, take the fraction
            total_profit += pw[i].first * maxWeight; // Add fraction of profit
            maxWeight = 0; // Knapsack is now full
            break;
        }
    }

    // Output the maximum profit
    cout << "Maximum profit: " << total_profit << endl;

    return 0;
}
