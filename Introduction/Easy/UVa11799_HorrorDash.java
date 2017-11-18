import java.util.Scanner;
public class UVa11799_HorrorDash{
	public static void main(String[] args){
		int mi,t,n,a;
		Scanner in = new Scanner(System.in);
		t = in.nextInt();
		for(int i = 0;i<t;i++){
			mi = -1;
			n = in.nextInt();
			for(int j = 0;j<n;j++){
				a = in.nextInt();
				if( a > mi)
					 mi = a;
			}
			System.out.println("Case "+(i+1)+": "+mi);
		}
	}
}
