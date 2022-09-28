package main
import "fmt"

func main() {
	var arr = [6]int32{9, 2, 11, 7, 12, 5}
	
	for i := 0; i < 6; i++ {
		
		if i == 5 {
			fmt.Println(arr[i])
		}else {
			fmt.Print(arr[i], ", ")
		}
		
	}
	
	fmt.Println()
	
	for i := 1; i < 6; i++ {
		for j := 0; j < 6 - i; j++ {
			if arr[j] > arr[j + 1] {
				var temp int32 = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	
	for i := 0; i < 6; i++ {
		if i == 5 {
			fmt.Println(arr[i])
		}else {
			fmt.Print(arr[i], ", ")
		}
	}
	
}
