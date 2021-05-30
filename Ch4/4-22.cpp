#include <iostream>
#include <string>

using namespace std;

int main()
{
    int score = 0;
    string final_score;
    cout << "Input score: " << endl;
    cin >> score;
    // condition expr
    // final_score = (score > 90) ? "High pass!" : (score > 75) ? "Pass" 
    //                         : (score > 60) ? "Low pass" : "Fail";
    // If-version
    if (score > 90)
    {
        final_score = "High pass!";
    }
    else if (score > 75)
    {
        final_score = "Pass!";
    }
    else if (score > 60)
    {
        final_score = "Low pass!";
    }
    else
    {
        final_score = "Fail";
    }
    cout << final_score << endl;
    return 0;
}