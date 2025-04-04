// AIM - Code and analyze solutions to problem with Knap Sack using dynamic approach

#include <iostream>
using namespace std;

struct Item
{
    int profit, weight;
};
void KnapSack(int capacity, int n, Item items[])
{

    
    int matrix[n + 1][capacity + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int w = 0; w <= capacity; w++)
        {
            if (i == 0 || w == 0)
            {
                matrix[i][w] = 0;
            }
            else if (items[i - 1].weight <= w)
            {
                matrix[i][w] = max(matrix[i - 1][w], items[i - 1].profit + matrix[i - 1][w - items[i - 1].weight]);
            }
            else
            {
                matrix[i][w] = matrix[i - 1][w];
            }
        }
    }
    cout << "Max Profit : " << matrix[n][capacity] << endl;
    int w = capacity;
    cout << "Selected Items for KnapSack : ";

    for (int i = n; i > 0 && w > 0; i--)
    {
        if (matrix[i][w] != matrix[i - 1][w])
        {
            cout << "item " << i << " ";
            w -= items[i - 1].weight;
        }
    }
    cout << endl;
};

int main()
{
    int n, capacity;
    cout << "Enter the number of items : ";
    cin >> n;
    Item items[n];
    cout << "Enter the Capacity of the KnapSack : ";
    cin >> capacity;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter profit and weight for item " << i + 1 << " : ";
        cin >> items[i].profit >> items[i].weight;
    }
    KnapSack(capacity, n, items);
    return 0;
}
