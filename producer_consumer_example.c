//Pseudo Code for Producer Consumer Problem . Consumer reads and prints the list only when it is full
//main
for i = = 0 .. 10
	producers[i] = fork(safe_insert , NULL) //create producers

consumer = fork(print_and_clear , my_list) // create consumer

//producers : safe insert
//mutex lock 
Lock(m){
	list -> insert(my_thread_id);
} //unlock

//consumer : print and clear
Lock(m) {
	if my_list.full -> print ; clear up all the elements in the list
	else -> release lock and try again (later) 
}
/*
This is wasteful since the consumer keeps on trying multiple times
Ideally the consumer should be let know when the list is full
*/