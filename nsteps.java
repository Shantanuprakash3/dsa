import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;
 class Nstepsdemo{
	public static void main(String[] args)throws IOException{
		int T;
		int x,y;
		InputStreamReader isr=new InputStreamReader(System.in);
		BufferedReader br=new BufferedReader(isr);
		String str1= br.readLine();
		T= Integer.parseInt(str1);
		for(int i=0; i<T;i++){
			String str2= br.readLine();
		
		StringTokenizer st=new StringTokenizer(str2);
 		String temp1, temp2;
 		temp1=st.nextToken();
 		temp2=st.nextToken();
 		
 		x= Integer.parseInt(temp1);
 		y= Integer.parseInt(temp2);
 		nsteps n1= new nsteps(); 
		
		n1.value(x,y);
	
	
	
	}
	}
}

 class nsteps {
public void value(int x, int y){
	int val=0;
	if(y==x || x==y+2) {
	   
	{
		if(y==1&&y==0){
		if (y==1)
			val= 1;
		else
			val= 0;
	}
	else if(y%2==0){
		if(x==y){
			val= 2*x; 
		}
		else if(x==y+2){
			val= 2*y+2;
		}
	}
			else if(y==x){
						val= 2*y-1;
	}
	    		else if(y+2==x){
		   val= 2*y +1;
	}
	}    
	System.out.println(val);
}
	else
	{
		System.out.println("No Number");
		
	}
	
}
}
