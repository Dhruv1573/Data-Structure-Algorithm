 import java.util.*;
 class Ideone {
    public static long answer=0;
    public static int longvalue=1000000007;
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int a[]=new int[n];
        for(int i=0;i<n;i++)
            a[i]=s.nextInt();


        System.out.println(output);

    }
    private static int possibleways(int[] input1) {
        long[] arr=new long[input1.length];
        arr[0]=input1[0];
        answer=0;
        for(int i=1;i<input1.length;i++)
        {
            int temp=((i+1)*input1[i]);
            arr[i]=arr[i-1]+temp;

        }
        for(int i=0;i<arr.length;i++)
        {
            long temp=(input1[i]*arr[i]);
            answer=(answer+temp)%longvalue;
        }

        return (int)answer%longvalue;
    }

}
