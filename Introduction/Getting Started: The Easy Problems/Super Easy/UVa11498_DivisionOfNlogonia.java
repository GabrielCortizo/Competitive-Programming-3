import java.util.Scanner;
public class UVa11498_DivisionOfNlogonia{
	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		int x,y,n,i,j;
		
		while(in.hasNext()){
			n = in.nextInt();
			if(n ==0)
				break;
			x = in.nextInt();
			y = in.nextInt();
			
			for(int k = 0;k<n;k++){
				String nom = "";
				i = in.nextInt();
				j = in.nextInt();
				
				if( i == x || j ==y)
					System.out.println("divisa");
				else{
					if(j > y)
						nom+="N";
					else
						nom+="S";
						
					if(i>x)
						nom+="E";
					else
						nom+="O";
					System.out.println(nom);
				
				}
				
			}
		
		}
	}
}
