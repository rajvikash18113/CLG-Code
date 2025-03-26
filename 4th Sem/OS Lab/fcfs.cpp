// first come first serve scheduling algorithm

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of processes: ";
    cin >> n;
    // int arrivalTime[n], burstTime[n], completationTime[n], waitingTime[n], turnAroundTime[n];
    vector<int> arrivalTime(n), burstTime(n), completionTime(n), waitingTime(n), turnAroundTime(n);

    // take input of arrival time
    cout << "Enter arrival Time : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arrivalTime[i];
    }

    // take input of burst time
    cout << "Enter burst Time : ";
    for (int i = 0; i < n; i++)
    {
        cin >> burstTime[i];
    }

    // Calculating completion time, turnAroundTime and waitingTime for first process
    completionTime[0] = arrivalTime[0] + burstTime[0];
    turnAroundTime[0] = completionTime[0] - arrivalTime[0];
    waitingTime[0] = turnAroundTime[0] - burstTime[0];

    // Calculating completion time for remaining processes
    for (int i = 1; i < n; i++)
    {

        if (arrivalTime[i] > completionTime[i - 1]) // If CPU is vacant for some time
        {
            completionTime[i] = arrivalTime[i] + burstTime[i];
        }
        else
        {
            completionTime[i] = completionTime[i - 1] + burstTime[i];
        }

        turnAroundTime[i] = completionTime[i] - arrivalTime[i]; // Turnaround Time
        waitingTime[i] = turnAroundTime[i] - burstTime[i];      // Waiting Time
    }

    // Displaying the values
    for (int i = 0; i < n; i++)
    {
        cout << "P" << i + 1 << " : ";
        cout << " AT : " << arrivalTime[i] << ",";
        cout << " BT : " << burstTime[i] << ",";
        cout << " CT : " << completionTime[i] << ",";
        cout << " TAT : " << turnAroundTime[i] << ",";
        cout << " WT : " << waitingTime[i] << endl;
    }

    int averageWaitingTime = 0, averageTurnAroundTime = 0;
    for (int i = 0; i < n; i++)
    {
        averageWaitingTime += waitingTime[i];
        averageTurnAroundTime += turnAroundTime[i];
    }

    // Displaying the average waiting time and average turn around time
    cout << "Average Turn Around Time : " << (float)averageTurnAroundTime / n << endl;
    cout << "Average Waiting Time : " << (float)averageWaitingTime / n << endl;

    // Displaying the Gantt Chart
    cout << "Gantt Chart : " << endl;
    cout << arrivalTime[0] << " P1 " << completionTime[0];
    for (int i = 1; i < n; i++)
    {
        cout << " P" << i + 1 << " " << completionTime[i];
    }
    return 0;
}