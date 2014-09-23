import java.util.*;

public class Main {
	
	public static void main(String[] args) {
		Scanner file = new Scanner(System.in);
		int n = 0;
		String nome1 = null;
		String nome2 = null;
		int a = 0;
		int b = 0;
		int res = 0;
		int contador = 1;
		
		do{
			
			n = file.nextInt();
			
			if(n == 0){
				return;
			}
			
			String[] z = new String[n];
			
			nome1 = file.next();
			nome2 = file.next();
			
			for(int x = 0; x < n; x++){
				
				a = file.nextInt();
				b = file.nextInt();
				res = a + b;
				
				if(res%2 == 0){
					z[x] = nome1;
				}else{
					z[x] = nome2;
				}
				
			}
			
			System.out.println("Teste "+ contador);
			for(int x = 0; x < n; x++){
				System.out.println(z[x]);
			}
			System.out.println();
			
			contador++;
			res = 0;
			for(int x = 0; x < n; x++){
				z[x] = null;
			}
			
		}while(n != 0);
	}

}


