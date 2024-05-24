package bsm.bto;

import java.util.Set;
import java.util.TreeSet;

public class t4 {
    public static void main(String[] args) {
        TreeSet set = new TreeSet();
        for (int i = 0; set.size() < 10 ; i++) {
            int num = (int)(Math.random()*100) + 1;
            set.add(num);
        }
        System.out.println(set.headSet(51));
        System.out.println(set.tailSet(50));
    }
}