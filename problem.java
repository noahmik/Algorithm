class pjh {
    public static void main(String args[]) {
        int result = 0;
        try {
            int number = 100;

            for (int i = 0; i < 10; i++) {
                result = number / (int) (Math.random() * 10);
                System.out.println(result);
            }
        } catch (ArithmeticException e) {
            result = 0;           
        }
    }
}