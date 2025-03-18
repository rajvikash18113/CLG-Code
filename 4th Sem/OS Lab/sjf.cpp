// shortest job first scheduling algorithm non-preemptive

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Process {
    int id;
    int arrivalTime;
    int burstTime;
    int completionTime;
    int waitingTime;
    int turnAroundTime;
};

bool compareArrival(Process a, Process b) {
    return a.arrivalTime < b.arrivalTime;
}

bool compareBurst(Process a, Process b) {
    return a.burstTime < b.burstTime;
}

int main() {
    int n;
    cout << "Enter the number of processes: ";
    cin >> n;
    vector<Process> processes(n);

    // take input of arrival time and burst time
    for (int i = 0; i < n; i++) {
        processes[i].id = i + 1;
        cout << "Enter arrival time and burst time for process " << i + 1 << ": ";
        cin >> processes[i].arrivalTime >> processes[i].burstTime;
    }

    // Sort processes based on arrival time
    sort(processes.begin(), processes.end(), compareArrival);

    int currentTime = 0;
    for (int i = 0; i < n; i++) {
        // Find the process with the shortest burst time from the set of processes that have arrived
        int minIndex = -1;
        for (int j = 0; j < n; j++) {
            if (processes[j].arrivalTime <= currentTime && processes[j].completionTime == 0) {
                if (minIndex == -1 || processes[j].burstTime < processes[minIndex].burstTime) {
                    minIndex = j;
                }
            }
        }

        if (minIndex != -1) {
            currentTime += processes[minIndex].burstTime;
            processes[minIndex].completionTime = currentTime;
            processes[minIndex].turnAroundTime = processes[minIndex].completionTime - processes[minIndex].arrivalTime;
            processes[minIndex].waitingTime = processes[minIndex].turnAroundTime - processes[minIndex].burstTime;
        } else {
            currentTime++;
            i--;
        }
    }

    // Displaying the values
    for (int i = 0; i < n; i++) {
        cout << "P" << processes[i].id << " : ";
        cout << " AT : " << processes[i].arrivalTime << ",";
        cout << " BT : " << processes[i].burstTime << ",";
        cout << " CT : " << processes[i].completionTime << ",";
        cout << " TAT : " << processes[i].turnAroundTime << ",";
        cout << " WT : " << processes[i].waitingTime << endl;
    }

    int totalWaitingTime = 0, totalTurnAroundTime = 0;
    for (int i = 0; i < n; i++) {
        totalWaitingTime += processes[i].waitingTime;
        totalTurnAroundTime += processes[i].turnAroundTime;
    }

    // Displaying the average waiting time and average turn around time
    cout << "Average Turn Around Time : " << (float)totalTurnAroundTime / n << endl;
    cout << "Average Waiting Time : " << (float)totalWaitingTime / n << endl;

    // Displaying the Gantt Chart
    cout << "Gantt Chart : " << endl;
    for (int i = 0; i < n; i++) {
        cout << processes[i].arrivalTime << " P" << processes[i].id << " " << processes[i].completionTime << " ";
    }
    cout << endl;

    return 0;
}



