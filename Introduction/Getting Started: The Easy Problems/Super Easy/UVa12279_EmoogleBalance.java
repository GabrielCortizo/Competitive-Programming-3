import java.util.Scanner;
public class UVa12279_EmoogleBalance{
	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		int p,n,t,c;
		int a;
		int i = 0;
		
		while(true){
			i++;
			a = in.nextInt();
			if( a == 0)
				break;
			p = 0;
			n = 0;
			for(int j = 0;j<a;j++){
				c = in.nextInt();
				if(c == 0)
					n++;
				else 
					p++;
			}
			System.out.println("Case "+(i)+": "+(p-n));
		}
	}
}
