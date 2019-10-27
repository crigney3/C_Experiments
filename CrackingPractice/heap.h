typedef struct {
	int value;
	struct hNode *left;
	struct hNode *right;
} hNode;

typedef struct {
	hNode *root;
} minHeap;

typedef struct {
	hNode *root;
} maxHeap;

int heapifyMin();
int heapifyMax();
int heapPush(int val);

int heapifyMin(){
	return 1;
}

int heapifyMax(){
	return 1;
}

int heapPush(int val){
	return 1;
}
