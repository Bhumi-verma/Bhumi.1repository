public class Reverse {
    private int num;
    public Reverse(int num){
        if(num>=100 && num<=999){
            this.num=num;
        }else{
            System.out.println("please enter a valid 3-digit number:");
            this.num = 100;
        }
    }
    public void display(){
        int n = num;
        int rev = 0;
        while(n>0){
            int digit = n%10;
            rev = rev*10 +digit;
            n = n/10;
        }
        System.out.println("original number:" + num);
        System.out.println("reverse number:" + rev);
    }
    public static void main(String[] args) {
        Reverse r = new Reverse(123);
        r.display();
    }
}
