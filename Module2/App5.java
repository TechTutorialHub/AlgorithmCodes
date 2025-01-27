
public class App5 {
    public static void main(String[] args) {
        
        //unsorted use linearSearch
        int[] array = {1,5,3,8,9,10,-3};
        
        //Sorted array use binarySearch
        //int[] array = {1,3,4,7,8,9,10};
        Algo5 algo5 = new Algo5(array);
        System.out.println("Position is ");
        System.out.println(algo5.linearSearch(7));
        
    }
}


