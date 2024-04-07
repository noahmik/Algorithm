class Outer {
    class Inner {
        int iv = 100;
    }
}

class Exercise7_25 {
    public static void main(String[] args){
        Outer outer = new Outer();
        Outer.Inner inner = outer.new Inner(); // Inner 클래스의 인스턴스 생성
        System.out.println(inner.iv);
    }
}

class Outer2 {
    static class Inner {
         int iv = 200;
    }
}

class Exercise7_26 {
    public static void main(String[] args){
        Outer2.Inner inner = new Outer2.Inner(); // Inner 클래스의 인스턴스 생성
        System.out.println(inner.iv); // iv 필드에 접근
    }
}

class Outer3 {
    int value = 10;

    class Inner {
        int value = 20;

        void method1() {
            int value = 30;
            System.out.println(value);      // 로컬 변수 value 출력 (30)
            System.out.println(this.value); // 내부 클래스의 인스턴스 변수 value 출력 (20)
            System.out.println(Outer3.this.value); // 외부 클래스의 인스턴스 변수 value 출력 (10)
        }
    }
}

class Exercise7_27 {
    public static void main(String args[]) {
        Outer3 outer = new Outer3(); // Outer3 클래스의 인스턴스 생성
        Outer3.Inner inner = outer.new Inner(); // Inner 클래스의 인스턴스 생성
        inner.method1(); // method1 호출
    }
}