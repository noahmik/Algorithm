class Soccer_Team {
    String name;// 팀 이름
    int Attacker; // 공격수 명수
    int Defender; // 수비수 명수
    int goal; // 득실차
    boolean win; // 승리여부
    static int total_player = 11;// 전체 명수
    static int GoalKeeper = 1; // 골키퍼 수
    void goal()   { goal += 1; }  // 골(goal++)
    void conceded() { goal -= 1; } // 실점(goal--)
}

class Main {
    public static void main(String[] args) {
        Soccer_Team[] s1 = new Soccer_Team[3]; //배열객체 생성

        for(int i=0; i < s1.length;i++) {
            s1[i] = new Soccer_Team();
            s1[i].Attacker = i;
            s1[i].Defender = Soccer_Team.total_player-i;
        } //객체 선언

        s1[0].name = "서울";
        s1[1].name = "부산";
        s1[2].name = "울산";

        s1[0].goal();
        s1[1].goal();
        s1[1].conceded();
        s1[1].conceded();
        s1[2].conceded();

        for(int i=0; i < s1.length;i++) {
            if(s1[i].goal > 0){
                s1[i].win = true;
            }
            if(s1[i].goal < 0){
                s1[i].win = false;
            }
        }

        for(int i=0; i < s1.length;i++) {
            System.out.println(s1[i].name + "팀은 공격수 " + s1[i].Attacker + "명이고 수비수는 " + s1[i].Defender + "명 입니다.");
            System.out.println(s1[i].name + "팀의 승리여부는 " + s1[i].win + " 입니다.");
        }
    }
}
