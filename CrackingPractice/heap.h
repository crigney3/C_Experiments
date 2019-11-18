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

int heapifyMin(minHeap h);
int heapifyMax(maxHeap h);
int heapPush(int val);

int heapifyMin(minHeap h){
	
	return 1;
}

int heapifyMax(maxHeap h){
	return 1;
}

int heapPush(int val){
	return 1;
}
