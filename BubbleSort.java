public class BubbleSort{
	//˽�л����췽��
	private BubbleSort(){
	}
	
	//����ð�����򷽷�
	public static void bubbleSort(int[] arr){
		int temp, i, j;
		
		for(i = 1; i < arr.length; i++){
			for(j = 0; j < arr.length - i; j++){
				if(arr[j] > arr[j + 1]){
					temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
		}
		
		for(i = 0; i < arr.length; i++){
			System.out.print(arr[i] + " ");
		}
	}
	
}