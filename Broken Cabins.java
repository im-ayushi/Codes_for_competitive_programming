import java.util.Scanner;
import java.util.Arrays;
class Main
{
    public static int minTape(int numBrokenCabins, int totalCabins, int numTapeCuts, int[] brokenCabins)
{
	    int firstCabin = brokenCabins[0];
	    int maxLength =  brokenCabins[brokenCabins.length-1] - firstCabin + 1;
	    int minLength = maxLength;
	    
	    // Base cases
        if(numTapeCuts == 1){
            return maxLength;
        }
        if(numTapeCuts == numBrokenCabins){
            return numBrokenCabins;
        }
        
        for(int i = 0; i < brokenCabins.length-1; i++)
        {
            int currentCabin = brokenCabins[i];
            int thisLength = currentCabin - firstCabin + 1;
            int newNumBrokenCabins = numBrokenCabins - i - 1;
            int newTotalCabins = totalCabins;
            int newNumTapeCuts = numTapeCuts - 1;
            int[] newBrokenCabins = Arrays.copyOfRange(brokenCabins, i+1, brokenCabins.length);
            if(newNumBrokenCabins < newNumTapeCuts){
                break;
            }
            int totalLength = thisLength + minTape(newNumBrokenCabins, newTotalCabins, newNumTapeCuts, newBrokenCabins);
            minLength = totalLength < minLength ? totalLength : minLength;
        }
        
        return minLength;
	}

    public void helper_function()
    {
        Scanner sc= new Scanner(System.in);
        int n,m,k;
        n=sc.nextInt();
        m=sc.nextInt();
        k=sc.nextInt();
        int a [] = new int[n];
        for(int i=0;i<n;i++)
        {
            a[i]=sc.nextInt();
        }
        int v=minTape(n,m,k,a);
        System.out.println(v);
        
    }
    public static void main(String[] args)
    {
        Main m=new Main();
        m.helper_function();
    }
}
