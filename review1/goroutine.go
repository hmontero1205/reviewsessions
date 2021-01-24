package main

import "fmt"

func work(id int, c chan int) {
  // Do work
  for i := 0; i < 10; i++ {
    fmt.Println(id, i)
  }
  c <- id
}

func main() {
	c := make(chan int)
	go work(0, c)
  go work(1, c)
  x := <-c // receive from c
  y := <-c

	fmt.Println(x, y, "Done!")
}

