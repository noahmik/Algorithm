class SHOP {
    String type; //가게 종류
    int time; //영업시간
    String location; //가게 위치
}

class DAISO extends SHOP {
    int Mymoney; //들고온 돈
    boolean Basket; // 장바구니 유무

    DAISO(){
        this(10000,false);
    }
    DAISO(int Mymoney){
        this(Mymoney,false);
    }
    DAISO(int Mymoney,boolean Basket){
        this.Mymoney = Mymoney;
        this.Basket = Basket;

        super.type = "가게";
        super.time = 24;
        super.location = "부산지사동점";
    }
}
class ShopTest {
    DAISO d1 = new DAISO();
    DAISO d2 = new DAISO(20000);
    DAISO d3 = new DAISO(30000,true);
}