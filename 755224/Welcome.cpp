#include <iostream>
#include <ctime>
using namespace std;
void welcome(string id) {
    string messenge[6][3] = {
        {"我要用我的青春和 ", id, " 的青春做一個了斷！"},
        {"你的初吻對象不是 JOJO，是我，", id, " 噠！"},
        {id, "我不做人了！JOJO！", " "},
        {id, " " , "人的能力是有極限的。"},
        {"我，", id," 有一個夢想！"},
        {"我 ", id, " 最喜歡做的事之一就是對自認為很強的傢伙說「NO」。"}
    };
    srand(time(NULL));
    int randomNum = rand() % 6;
    cout << endl << messenge[randomNum][0] << messenge[randomNum][1] << messenge[randomNum][2];
}
int main() {
    string account[5][3] = {{"Jonathan", "Joestar", "SpeedWagon",},
                            {"Joseph", "Joestar", "HermitPurple",},
                            {"Jotaro", "Kujo", "StarPlatinum",},
                            {"Josuke", "Higashikata", "CrazyDiamond",},
                            {"Giorno", "Giovanna", "GoldenExperience"}
                            }; 
    string inAccount, inPw;
    int who = -1;
    while (who < 0) {
        cout << "\n請輸入帳號和密碼\n" << "帳號：";
        cin >> inAccount;
        cout << "密碼：";
        cin >> inPw;
        for (int i = 0; i < 5; i++) {
            who = (inAccount == account[i][0] && inPw == account[i][1]) ? i : who;
        }
    }
    welcome(account[who][2]);
}
