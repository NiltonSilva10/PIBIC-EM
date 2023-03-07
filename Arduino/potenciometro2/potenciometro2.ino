void setup(){ 
  Serial.begin( 9600);
  
} 
double GetAngle(double t){
  double o = t * 360 / 1023;
  return o;
}

void loop() {
 //Serial.print("leitura do potenciometro ");
 delay(500);
 Serial.println(GetAngle(analogRead(A0)));
//   Serial.print(",   ");
}


/*
https://www.onlinegdb.com/
import java.util.Scanner;
public class Main
{
	public static void main(String[] args) {
	    Scanner sw = new Scanner(System.in);
	    int i = 1;
	    while (i > 0){
	        System.out.println("\nValor: ");
    		int value = sw.nextInt();
    		System.out.println("Ângulo em graus");
    		System.out.println(GetAngle(value) + "\n"); 
    		System.out.println("Ângulo em radianos");
    		System.out.println(GetRadians(value) + "\n"); 
    		System.out.println("Distânciamento");
    		System.out.println(GetH(GetRadians(value)));
	    }
	}
	public static double GetAngle(int r){
	    double o = r * 360 / 1023;
	    return o;
	}
	
	public static double GetRadians(int r){
	    double Radian = (r * 2 * Math.PI) / 1023;
	    return Radian;
	}
	
	public static double GetH(double o){
	    if (o < 45 && o > 0){
	        double distance = 5 / Math.sin(o);
	        return distance;    
	    }
	    else{
	        return 0;
	    }
	}
}
*/

