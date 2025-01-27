public class Algo5 {
    public int[] array;
    
    //constructor
    public Algo5 (int[] array){
        this.array = array;
    }
    
    public int linearSearch (int item){
        for (int i = 0; i < array.length; i++) 
            if (array[i] == item)
               return i;
        
        //given i dim array does not containt the item search
        return -1;
    
    }
    
    public int binarySearch(int item){
        return binarySearch(0,array.length-1, item);
    }
    
    private int binarySearch(int startIndex, int endIndex, int item){
        if (endIndex < startIndex){
            System.out.println("The item is not present in the array...");
            return -1;
        }
        
        int middleIndex = (startIndex+endIndex) / 2;
        if (item == array[middleIndex]){
            return middleIndex;
        }else if (item < array[middleIndex]){
            return binarySearch(startIndex, middleIndex-1, item);
        }else {
            return binarySearch(middleIndex+1, endIndex, item);
        }
    }
}

