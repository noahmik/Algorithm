import java.util.*;         // Vector클래스를 사용하기 위해서 추가해 주었다.

abstract class Bank{
    double IR = 0.35;
    abstract void Loan(int money);
    abstract void Saving(int money);
}

class anyBank extends Bank{
    double IR;
    anyBank(double a) {
        this.IR = a;
    }
    void Loan(int money){
        System.out.println("당신이 갚아야할 이자는 " + IR*money + "원 입니다.");
    }
    void Saving(int money) {
        System.out.println("당신이 받을 수 있는 이자는 " + IR*money + "원 입니다.");
    }
}

class Person{
    int money;
    Person(int money){
        this.money = money;
    }
}

class testClass{
    public static void main(String[] args) {
        anyBank BusanBank = new anyBank(0.37);
        anyBank DaeguBank = new anyBank(0.4);
        Person taeyoung = new Person(100000);
        BusanBank.Saving(taeyoung.money);
        DaeguBank.Loan(taeyoung.money);
    }
}