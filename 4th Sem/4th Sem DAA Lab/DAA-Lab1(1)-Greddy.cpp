// DAA Lab - 1 : Knap Sack using greedy approach

#include <bits/stdc++.h>
using namespace std;

int main() {
    int size;
    cout << "Enter the Size : ";
    cin >> size; 
    int maxWeight = 15; 
    double total_profit = 0; 

    vector<double> profit(size); 
    vector<double> weight(size); 
    vector<pair<double, int>> pw(size); 

    // Input of profit and weight 
    for (int i = 0; i < size; i++) {
        cin >> profit[i] >> weight[i];
        pw[i] = {double(profit[i]) / weight[i], i}; // Calculate profit/weight ratio
    }

    // Sort profit/weight ratio in descending order
    sort(pw.rbegin(), pw.rend());

    // Print sorted ratios and indices
    cout << "Sorted ration of profit/weiight :" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Item is " << pw[i].second << ": Ratio = " << pw[i].first << endl;
    }

    
    for (int i = 0; i < size; i++) {
        int index = pw[i].second; 
        if (maxWeight >= weight[index]) {
            
            total_profit += profit[index];
            maxWeight -= weight[index];
        } 
        else
        {
            total_profit += pw[i].first * maxWeight; // fraction
            cout << total_profit << endl;
            break;
        }
        
    }
    
    cout << "Maximum profit: " << total_profit << endl;

    return 0;
}


