import java.util.*;
class Time{
    private int hour;
    private int min;
    private int sec;
    public Time(int hour,int min,int sec){
        this.hour=hour;
        this.min=min;
        this.sec=sec;
    }
        public void add(Time t){
            int totalsec = this.sec+t.sec;
            int totalmin = this.min+t.min+ totalsec/60;
            int totalhour = this.hour+t.hour+totalmin/60;
            totalsec = totalsec%60;
            totalmin = totalmin%60;
            System.out.println("total time is: "+ totalhour +" hours "+ totalmin +" minutes "+ totalsec +" seconds");
        }
}
public class Timedemo {
 public static void main(String[] args) {
    Time t1 = new Time(2, 45, 50);
    Time t2 = new Time(1, 20, 30);
    t1.add(t2);
 }   
}
