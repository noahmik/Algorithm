abstract class Shape {
    Point p;
    
    Shape(){
        this(new Point(0,0));
    }

    Shape(Point p) {
        this.p = p;
    }

    abstract double clacArea();

    Point getPosition() {
        return p;
    }

    void setPosiion(Point p) {
        this.p = p;
    }
}

class Point {
    int x;
    int y;
    
    Point(){
        this(0,0);
    }
    
    Point(int x,int y){
        this.x = x;
        this.y = y;
    }
    
    public String toString(){
        return "["+x+","+y+"]";
    }
}

class Circle extends Shape{
    double r; // 반지름

    Circle(double r){
        super();
        this.r = r;
    }
    @Override
    double clacArea() {
        return Math.PI * r * r;
    }
}

class Rectangle extends Shape{
    double width;
    double height;
    Rectangle(double width,double height){
        this.width = width;
        this.height = height;
    }
    @Override
    double clacArea() {
        return width*height;
    }
    boolean isSquare(){
        if (width == height){
            return true;
        }
        return false;
    }
}
