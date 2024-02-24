// https://nypc.github.io/2018/2018_online_4
#include <iostream>
#include <utility>
#include <vector>
using namespace std;
const int numOfPlayer = 8;
const int score[] = {10, 8 ,6,5,4,3,2,1};

//선수 클래스
class Player{
private:
    //팀 종류(Blue,Red)
    string teamType;

    //점수(0-10)
    int score;

    //기록(double(nn::nn)) - 초 단위로 바꿈
    double record;
public:
    //생성자
    explicit Player(string teamType ="", int score=0, double record=0.0) : teamType(std::move(teamType)), score(score), record(record) {}
    //getter,setter
    const string &getTeamType() const {
      return teamType;
    }

    void setTeamType(const string &teamType) {
      Player::teamType = teamType;
    }

    int getScore() const {
      return score;
    }

    void setScore(int score) {
      Player::score = score;
    }

    double getRecord() const {
      return record;
    }

    void setRecord(double record) {
      Player::record = record;
    }
};