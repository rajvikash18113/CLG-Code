// AIM - Code and analyze solutions to problem with Knap Sack using greedy approach

#include <iostream>
#include <algorithm>

using namespace std;

struct Item
{
    int profit, weight;
};

bool compare(Item a, Item b)
{
    return (double)a.profit / a.weight > (double)b.profit / b.weight;
}

double fractionalKnap(int W, Item items[], int n)
{
    sort(items, items + n, compare);
    double maxvalue = 0.0;

    for (int i = 0; i < n; i++)
    {
        if (W >= items[i].weight)
        {
            maxvalue += items[i].profit;
            W -= items[i].weight;
        }
        else
        {
            maxvalue += items[i].profit * ((double)W / items[i].weight);
            break;
        }
    }
    return maxvalue;
}

int main()
{
    int n, W;
    cout << "Enter number of items and KnapSack capacity :" << endl;
    cin >> n >> W;
    Item items[n];
    cout << "Enter profit and weight of each items : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> items[i].profit >> items[i].weight;
    }
    double result = fractionalKnap(W, items, n);
    cout << "Profit -> " << result << endl;

    return 0;
}