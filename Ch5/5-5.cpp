#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    const vector<string> scores = {"F", "D", "C", "B", "A", "A++"};
    int score = 0;
    cin >> score;
    string final_score;
    // size_t index = (score - 50) / 10; 
    final_score = (score < 60) ? scores[0] : scores[(score - 50) / 10];
    // if (score < 60)
    // {
    //     cout << "Your score is: " << scores[0] << endl;
    // }
    // else
    // {
    //     size_t index = (score - 50) / 10;
    //     cout << "Your score is: " << scores[index] << endl;
    // }
    cout << "Your score is: " << final_score << endl;

    return 0;
}