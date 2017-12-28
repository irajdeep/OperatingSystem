list< int > my_list;
pthread_mutex_t m;

void safe_insert( int i ){
	pthread_mutex_lock(m);
	my_list.insert(i);
	pthread_mutex_unlock(m);
}