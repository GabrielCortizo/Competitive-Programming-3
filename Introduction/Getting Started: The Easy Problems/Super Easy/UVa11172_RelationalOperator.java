import java.util.Scanner;

public class UVa11172_RelationalOperator{
	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		long a,b;
		for(int i = 0;i<n;i++){
			a = in.nextLong();
			b = in.nextLong();
		
			if(a > b)
				System.out.println(">");
			
			else if(a < b)
				System.out.println("<");
			else 
				System.out.println("=");
			
		
		}
		
	}
}
