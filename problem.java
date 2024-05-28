package com.example.pjh;

import java.util.*;
class Fruit               { public String toString() { return "Fruit";}}
class Apple extends Fruit { public String toString() { return "Apple";}}
class Toy                 { public String toString() { return "Toy"  ;}}

class pjh {
    public static void main(String[] args) {
        Box<Fruit> fruitBox = new Box<Fruit>();
        Box<Apple> appleBox = new Box<Apple>();
        Box<Toy>   toyBox   = new Box<Toy>();

        // Adding items to the fruitBox
        fruitBox.addItem(new Fruit());
        fruitBox.addItem(new Apple());

        // Adding items to the appleBox
        appleBox.addItem(new Apple());
        appleBox.addItem(new Apple());

        // Adding items to the toyBox
        toyBox.addItem(new Toy());

        // Printing the boxes
        System.out.println(fruitBox);
        System.out.println(appleBox);
        System.out.println(toyBox);
    }  // main의 끝
}

class Box<T> {
    private List<T> items = new ArrayList<>();

    public void addItem(T item) {
        items.add(item);
    }

    public String toString() {
        return items.toString();
    }
}
