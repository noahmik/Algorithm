class DAISO {
    public static void main(String[] args) {
        int Mymoney = 10000;
        System.out.println("받을 거스름돈은 : " + calculator(Mymoney,1000));
        System.out.println("받을 거스름돈은 : " + calculator(Mymoney,1000,2000));
        System.out.println("받을 거스름돈은 : " + calculator(Mymoney,1000,2000,3000));
    }
    static int calculator(int Mymoney, int price1) {
        int result = Mymoney - (price1);
        return result;
    }
    static int calculator(int Mymoney, int price1,int price2) {
        int result = Mymoney - (price1+price2);
        return result;
    }
    static int calculator(int Mymoney, int price1, int price2, int price3) {
        int result = Mymoney - (price1 + price2 + price3);
        return result;
    }
}