#include <stdint.h>
#include <assert.h>
#include "heap.h"

void test_sort( int32_t data[], uint32_t len) 
{
	uint32_t idx;
	for (idx = 1; idx <= len; ++idx) {
		assert (timestamp[idx] <= timestamp[idx+1]);		
	}
}

void test_heap_emergency()
{
	int32_t timestamp[] = { 0, 1130};
	Heap heap = heap_new(timestamp, 0);	
	heap_insert(&heap,630 );
	heap_test(&heap);
	assert(heap_get_max(&heap) == 1130);
	assert(heap_extract_max(&heap) >=1130);
	heap_test(&heap);
	assert(heap_size(&heap) == 10);

	heap_sort(&heap);
	test_sort(heap.timestamp, 10);

}

int main()
{
	test_heap();
	int32_t timestamp[HEAP_MAX_SIZE];
    int32_t aircraft_num[HEAP_MAX_SIZE];
    int32_t future_event[HEAP_MAX_SIZE];
    heap_insert(&heap, 00,1130);

	return 0;
}