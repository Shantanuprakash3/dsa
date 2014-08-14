import java.util.*;
import java.io.*;




public class dcrypt{

    public static void main(String[] args) throws IOException 
    {

        // TODO code application logic here
        BufferedReader r = new BufferedReader (new InputStreamReader (System.in));
        String str;
        str= r.readLine();
        int n;
        n = Integer.parseInt(str);
          for(int i=0; i<n;i++){ 
            String st;
        st= r.readLine();
        int k,i;
        k = Integer.parseInt(st);

        stt=r.readLine();     
        StringTokenizer s=new StringTokenizer(stt);

        while(s.hasMoreElements()){
    	String s1 = st.nextToken( );
    	char[] chars = s1.toCharArray();

        for(i = 0; i < s1.length(); i++){  

            if(k<=25 && k>0){
            int asc = (int) chars[i];
            asc=asc+k;
            System.out.print((char)asc);

        }

        else if (k>26 && k<51){

            int asc = (int) chars[i];
            asc=asc+k;
            if (asc >= 97){
                asc=asc-22;
                System.out.print((char)asc);
            }
            else {
                asc=asc+22;
                System.out.print((char)asc);   
            }

        }
        System.out.print(" ");
        }
    	
    }
}
}