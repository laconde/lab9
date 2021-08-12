// This program demonstrates the use of dynamic arrays

// Alberto Conde
// November 5, 2020

#include <iostream>
#include <iomanip>
using namespace std;

void bubbleSortArray(float[], int);

int main()
{
    float *scores = nullptr;
                                    

    float total = 0;
    float average;
    int numOfScores;
    int count;

    cout << fixed << showpoint << setprecision(2);

    cout << "Please input the number of scores " << endl;
    cin >> numOfScores;

    scores = new float[numOfScores];

    for (count = 0; count < numOfScores; count++)
    {
        cout << "Please enter a score " << endl;
        cin >> scores[count];
    }

    for (count = 0; count < numOfScores; count++)
    {
        total = total + scores[count];
    }

        average = total / numOfScores;

    cout << "The average of the scores is " << average << endl;
    
    bubbleSortArray(scores, numOfScores);
    
    cout << "Here are the scores in ascending order" << endl;
    
    for (count = 0; count < numOfScores; count++)
    {
        cout << scores[count] << " " << endl;
    }
        
        delete [] scores;

    return 0;
}

void bubbleSortArray(float array[], int elems)
{
    bool swap;
    int temp;
    int bottom = elems - 1;
    
    do
    {
        swap = false;

        for (int count = 0; count < bottom; count++)
        {
            if (array[count] < array[count + 1])
            {
                temp = array[count];
                array[count] = array[count + 1];
                array[count + 1] = temp;

                swap = true;
            }
        }

        bottom--;

    } while (swap != false);
}
