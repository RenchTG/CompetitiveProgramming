#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// step 1: look which jobs need to be filled 
//step 2: identify lowest doubled up k values 
//step 3: add up lowest k values that can be switched that are double ups, 
//  remember to leave one person on each job

int count_spaces(string s)
{
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            count++;
        }
    }
    return count;
}

void split_string(string toSplit, int arr[], int arrSize)
{
    int i = 0;
    stringstream ssin(toSplit);
    while (ssin.good() && i < arrSize)
    {
        ssin >> arr[i];
        i++;
    }
}

bool check_if_array_empty(int arr[], int arrSize)
{
    bool isEmpty = true;
    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] != 0)
        {
            isEmpty == false;
            break;
        }
    }
    return isEmpty;
}

int main()
{
    int n;
    cin >> n;

    int k;
    cin >> k;

    int idlers[n][2];

    int count;

    for (int i = 0; i < n; i++)
    {
        cin >> idlers[i][0];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> idlers[i][1];
    }


    int timesAppears = 0;
    string jobsToBeFilledStr = "";
    string jobsCanBeMovedStr = "";
    // Only figuring out which job numbers appear more than once or less than once but not which positions can be changed
    for (int a = 1; a <= k; a++)
    {
        for (int b = 0; b < n; b++)
        {
            if (idlers[b][0] == a)
            {
                timesAppears++;
            }
        }
        if (timesAppears == 0)
        {
            jobsToBeFilledStr += to_string(a) + " ";
        }
        else if (timesAppears > 1)
        {
            jobsCanBeMovedStr += to_string(a) + " ";
        }
        timesAppears = 0;
    }

    int sizeJTBF = count_spaces(jobsToBeFilledStr);
    int jobsToBeFilled[sizeJTBF];
    split_string(jobsToBeFilledStr, jobsToBeFilled, sizeJTBF);

    // WEEEE OOOOOW WEEEEE OOOOOW JOBS CAN BE MOVED NOT SOWKRING MAKE SURE
    // YOU CREATE AN ARRAY OF THE JOB POSITIONS THAT ARE DOUBLE-UPS
    int sizeJCBM = count_spaces(jobsCanBeMovedStr);
    int jobsCanBeMoved[sizeJCBM];
    split_string(jobsCanBeMovedStr, jobsCanBeMoved, sizeJCBM);

    cout << "Jobs to be filled: \n";
    for (int z = 0; z < sizeJTBF; z++)
    {
        cout << jobsToBeFilled[z];
    }

    cout << "Jobs that can be moved: \n";
    for (int z = 0; z < sizeof(jobsCanBeMoved); z++)
    {
        cout << jobsCanBeMoved[z];
    }

    while (!check_if_array_empty(jobsToBeFilled, sizeJTBF))
    {
        //Main logic for adding k values and moving around jobs
    }


    return 0;
}