class Car {
    String color;// 색상
    String tire; // 타이어 종류
    String brand; //차 브랜드
    int speed; // 현재속도
    void car_break()   { speed = 0; }  //브레이크
    void red_tuning() { color = " 빨강색"; } //차 색상 바꾸기
}
class main {

    public static void main(String[] args) {
        Car c1 = new Car();
        Car c2 = new Car();

        c1.color = "파란색";
        c2.color = "빨간색";

        c1.brand = "모닝";
        c2.brand = "레이";

        c1.speed = 50;
        c2.speed = 80;

        System.out.println("현재 차 속도는 " + c1.speed + "km/h 입니다");
        System.out.println("현재 차 속도는 " + c2.speed + "km/h 입니다");
        c1.car_break();
        System.out.println("현재 차 속도는 " + c1.speed + "km/h 입니다");
    }
}
