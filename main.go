package main

import (
	"fmt"

	"rice.cooker/main/module"
)

type RiceCooker struct {
	isPluged  bool
	isEmpty   bool
	isCooking bool
}

func main() {
	var i int = 0
	var choice string

	var riceCooker RiceCooker

	riceCooker.isCooking = false
	riceCooker.isEmpty = false
	riceCooker.isPluged = false

	for {
		fmt.Println("Make your choice: ")
		fmt.Scan(&choice)

		switch choice {
		case "1":
			res, err := module.PlugIn(riceCooker.isPluged)
			riceCooker.isPluged = res
			if err != nil {
				fmt.Println("Error: ", err)
			} else {
				fmt.Println("\nRice Cooker pluged !\n")
			}
			
		case "6":
			res, err := module.Unplug(riceCooker.isPluged, riceCooker.isCooking)
			riceCooker.isPluged = res
			if err != nil {
				fmt.Println("Error: ", err)
			} else {
				fmt.Println("\nRice Cooker unpluged !\n")
			}


		case "7":
			i = 1
	
		default:
			fmt.Println("")
			
		}

		if i == 1 {
			break
		}		
	}
}