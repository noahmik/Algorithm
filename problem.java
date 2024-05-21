package com.example.pjh;

import java.util.Stack;

class Main{
    static Stack back = new Stack();
    static Stack forward = new Stack();

    static void add(String name){
        back.push(name);
    }

    static void front(){
        back.push(forward.pop());
    }

    static void back(){
        forward.push(back.pop());
    }

    public static void main(String[] args) {
        add("1. 네이트");
        add("2. 야후");
        add("3. 네이버");
        add("4. 다음");

        System.out.println("back:"+back);
        System.out.println("forward:"+forward);
        System.out.println("현재 화면: "+back.peek()+" 입니다.");
        System.out.println();

        System.out.println("= '뒤로' 버튼을 누른 후 =");
        System.out.println("back:"+back);
        System.out.println("forward:"+back.peek());
        System.out.println("현재 화면:"+back.peek()+" 입니다.");
    }
}