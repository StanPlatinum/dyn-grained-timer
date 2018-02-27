#ifndef PAIR4THREAD
#define PAIR4THREAD
#define MAX_THREAD_NUM 1000
struct pair4thread_t {
	int thread_id;
	int n;
};
extern struct pair4thread_t pair4thread[MAX_THREAD_NUM];
extern int s_end;
#endif
