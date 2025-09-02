import java.util.*;
class Commision{
    private double sales;
    public Commision(double Sales){
        this.sales=Sales;
    }
    public double Commision(){
        return 0.10*sales;
    }
}
public class Commisiondemo {
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        System.out.print("enter sales amount:");
        double sales= s.nextDouble();
        if(sales<0){
            System.out.println("invalid input");
        }else{
            Commision c = new Commision(sales);
            System.out.println("commision is:"+c.Commision());
        }
    }
}
