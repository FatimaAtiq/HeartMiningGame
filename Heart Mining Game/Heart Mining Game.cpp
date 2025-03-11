#include<iostream>
using namespace std;
int main()
{
    int hearts_count = 0;
    int score;
    char ch[4][6] = {
        {'A','B','C','D','E','F'},
        {'G','H','I','J','K','L'},
        {'M','N','O','P','Q','R'},
        {'S','T','U','V','W','X'}
    };
    cout << "Welcome to the Hearts Mining Game! In this game you have to find all the hearts buried behind the alphabets in the grid." << "\n" << "For every correct selection you will get 10 points." << endl;
    cout << "A total of 10 hearts is buried in the grid. You have to select the alphabets one by one to reveal the hearts." << endl;
    cout << "You have 10 chances to find the hearts! " << endl;
    cout << "BEST OF LUCK" << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cout << "----";
        }
        cout << "-" << endl;
        for (int j = 0; j < 6; j++)
        {
            cout << "|" << " " << ch[i][j] << " ";
        }
        cout << "|" << endl;
    }
    for (int j = 0; j < 6; j++)
    {
        cout << "----";
    }
    cout << "-";
    cout << endl;

    for (int k = 0; k < 10; k++)
    {
        char c;
        cout << "Enter the letter to reveal the heart!";
        cin >> c;
        switch (c)
        {
        case 'X':
            ch[3][5] = '\3';
            cout << ch[0][0] << "\n" << "Congratulations! You've found a heart." << endl;
            hearts_count++;
            break;
        case 'P':
            ch[2][3] = '\3';
            cout << ch[3][5] << "\n" << "Congratulations! You've found a heart." << endl;
            hearts_count++;
            break;
        case 'M':
            ch[2][0] = '\3';
            cout << ch[2][0] << "\n" << "Congratulations! You've found a heart." << endl;
            hearts_count++;
            break;
        case 'L':
            ch[1][5] = '\3';
            cout << ch[1][5] << "\n" << "Congratulations! You've found a heart." << endl;
            hearts_count++;
            break;
        case 'S':
            ch[3][0] = '\3';
            cout << ch[3][0] << "\n" << "Congratulations! You've found a heart." << endl;
            hearts_count++;
            break;
        case 'G':
            ch[1][0] = '\3';
            cout << ch[1][0] << "\n" << "Congratulations! You've found a heart." << endl;
            hearts_count++;
            break;
        case 'A':
            ch[0][0] = '\3';
            cout << ch[2][3] << "\n" << "Congratulations! You've found a heart." << endl;
            hearts_count++;
            break;
        case 'F':
            ch[0][5] = '\3';
            cout << ch[0][5] << "\n" << "Congratulations! You've found a heart." << endl;
            hearts_count++;
            break;
        case 'H':
            ch[1][1] = '\3';
            cout << ch[1][1] << "\n" << "Congartulations! You've found a heart." << endl;
            hearts_count++;
            break;
        case 'U':
            ch[3][2] = '\3';
            cout << ch[3][2] << "\n" << "Congratulations! You've found a heart." << endl;
            hearts_count++;
            break;
        case 'B':
            ch[0][1] = '\6';
            cout << ch[0][1] << "\n" << "Oops! That was a miss." << endl;
            break;
        case 'C':
            ch[0][2] = '\6';
            cout << ch[0][2] << "\n" << "Oops! That was a miss." << endl;
            break;
        case 'D':
            ch[0][3] = '\6';
            cout << ch[0][3] << "\n" << "Oops! That was a miss." << endl;
            break;
        case 'E':
            ch[0][4] = '\6';
            cout << ch[0][4] << "\n" << "Oops! That was a miss." << endl;
            break;
        case 'I':
            ch[1][2] = '\6';
            cout << ch[1][2] << "\n" << "Oops! That was a miss." << endl;
            break;
        case 'J':
            ch[1][3] = '\6';
            cout << ch[1][3] << "\n" << "Oops! That was a miss." << endl;
            break;
        case 'K':
            ch[1][4] = '\6';
            cout << ch[1][4] << "\n" << "Oops! That was a miss." << endl;
            break;
        case 'N':
            ch[2][1] = '\6';
            cout << ch[2][1] << "\n" << "Oops! That was a miss." << endl;
            break;
        case 'O':
            ch[2][2] = '\6';
            cout << ch[2][2] << "\n" << "Oops! That was a miss." << endl;
            break;
        case 'Q':
            ch[2][4] = '\6';
            cout << ch[2][4] << "\n" << "Oops! That was a miss." << endl;
            break;
        case 'R':
            ch[2][5] = '\6';
            cout << ch[2][5] << "\n" << "Oops! That was a miss." << endl;
            break;
        case 'T':
            ch[3][1] = '\6';
            cout << ch[3][1] << "\n" << "Oops! That was a miss." << endl;
            break;
        case 'V':
            ch[3][3] = '\6';
            cout << ch[3][3] << "\n" << "Oops! That was a miss." << endl;
            break;
        case 'W':
            ch[3][4] = '\6';
            cout << ch[3][4] << "\n" << "Oops! That was a miss." << endl;
            break;
        default:
            cout << "Wrong Input! You lost a try." << endl;
        }
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 6; j++)
            {
                cout << "----";
            }
            cout << "-" << endl;
            for (int j = 0; j < 6; j++)
            {
                cout << "|" << " " << ch[i][j] << " ";
            }
            cout << "|" << endl;
        }
        for (int j = 0; j < 6; j++)
        {
            cout << "----";
        }
        cout << "-";
        cout << endl;
    }
    cout << "The number of hearts you've found is= " << hearts_count << endl;
    cout << "The total score is 100." << "\n" << "You scored:" << endl;
    score = hearts_count * 10;
    cout << "SCORE: " << score << endl;
    char d;
    cout << "Do you want to play again? If yes then click 'Y' " << endl;
    cin >> d;
    switch (d)
    {
    case 'Y':
        cout << "You have 3 chances to find the hearts this time from the same grid! Be CAREFUL! " << endl;
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 6; j++)
            {
                cout << "----";
            }
            cout << "-" << endl;
            for (int j = 0; j < 6; j++)
            {
                cout << "|" << " " << ch[i][j] << " ";
            }
            cout << "|" << endl;
        }
        for (int j = 0; j < 6; j++)
        {
            cout << "----";
        }
        cout << "-";
        cout << endl;
        for (int k = 0; k < 3; k++)
        {
            char c;
            cout << "Enter the letter to reveal the heart!";
            cin >> c;
            switch (c)
            {
            case 'X':
                ch[3][5] = '\3';
                cout << ch[3][5] << "\n" << "Congratulations! You've found a heart." << endl;
                hearts_count++;
                break;
            case 'P':
                ch[2][3] = '\3';
                cout << ch[2][3] << "\n" << "Congratulations! You've found a heart." << endl;
                hearts_count++;
                break;
            case 'M':
                ch[2][0] = '\3';
                cout << ch[2][0] << "\n" << "Congratulations! You've found a heart." << endl;
                hearts_count++;
                break;
            case 'L':
                ch[1][5] = '\3';
                cout << ch[1][5] << "\n" << "Congratulations! You've found a heart." << endl;
                hearts_count++;
                break;
            case 'S':
                ch[3][0] = '\3';
                cout << ch[3][0] << "\n" << "Congratulations! You've found a heart." << endl;
                hearts_count++;
                break;
            case 'G':
                ch[1][0] = '\3';
                cout << ch[1][0] << "\n" << "Congratulations! You've found a heart." << endl;
                hearts_count++;
                break;
            case 'A':
                ch[0][0] = '\3';
                cout << ch[0][0] << "\n" << "Congratulations! You've found a heart." << endl;
                hearts_count++;
                break;
            case 'F':
                ch[0][5] = '\3';
                cout << ch[0][5] << "\n" << "Congratulations! You've found a heart." << endl;
                hearts_count++;
                break;
            case 'H':
                ch[1][1] = '\3';
                cout << ch[1][1] << "\n" << "Congartulations! You've found a heart." << endl;
                hearts_count++;
                break;
            case 'U':
                ch[3][2] = '\3';
                cout << ch[3][2] << "\n" << "Congratulations! You've found a heart." << endl;
                hearts_count++;
                break;
            case 'B':
                ch[0][1] = '\6';
                cout << ch[0][1] << "\n" << "Oops! That was a miss." << endl;
                break;
            case 'C':
                ch[0][2] = '\6';
                cout << ch[0][2] << "\n" << "Oops! That was a miss." << endl;
                break;
            case 'D':
                ch[0][3] = '\6';
                cout << ch[0][3] << "\n" << "Oops! That was a miss." << endl;
                break;
            case 'E':
                ch[0][4] = '\6';
                cout << ch[0][4] << "\n" << "Oops! That was a miss." << endl;
                break;
            case 'I':
                ch[1][2] = '\6';
                cout << ch[1][2] << "\n" << "Oops! That was a miss." << endl;
                break;
            case 'J':
                ch[1][3] = '\6';
                cout << ch[1][3] << "\n" << "Oops! That was a miss." << endl;
                break;
            case 'K':
                ch[1][4] = '\6';
                cout << ch[1][4] << "\n" << "Oops! That was a miss." << endl;
                break;
            case 'N':
                ch[2][1] = '\6';
                cout << ch[2][1] << "\n" << "Oops! That was a miss." << endl;
                break;
            case 'O':
                ch[2][2] = '\6';
                cout << ch[2][2] << "\n" << "Oops! That was a miss." << endl;
                break;
            case 'Q':
                ch[2][4] = '\6';
                cout << ch[2][4] << "\n" << "Oops! That was a miss." << endl;
                break;
            case 'R':
                ch[2][5] = '\6';
                cout << ch[2][5] << "\n" << "Oops! That was a miss." << endl;
                break;
            case 'T':
                ch[3][1] = '\6';
                cout << ch[3][1] << "\n" << "Oops! That was a miss." << endl;
                break;
            case 'V':
                ch[3][3] = '\6';
                cout << ch[3][3] << "\n" << "Oops! That was a miss." << endl;
                break;
            case 'W':
                ch[3][4] = '\6';
                cout << ch[3][4] << "\n" << "Oops! That was a miss." << endl;
                break;
            default:
                cout << "Wrong Input! You lost a try." << endl;
            }
            for (int i = 0; i < 4; i++)
            {
                for (int j = 0; j < 6; j++)
                {
                    cout << "----";
                }
                cout << "-" << endl;
                for (int j = 0; j < 6; j++)
                {
                    cout << "|" << " " << ch[i][j] << " ";
                }
                cout << "|" << endl;
            }
            for (int j = 0; j < 6; j++)
            {
                cout << "----";
            }
            cout << "-";
            cout << endl;
        }
        cout << "the number of hearts you've found is= " << hearts_count << endl;
        cout << "The total score is 100." << "\n" << "You scored:" << endl;
        score = hearts_count * 10;
        cout << "SCORE: " << score;
        break;
    default:
        cout << "Game ended!";
    }
    return 0;
}
