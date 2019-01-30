#include <kernel/memmanage.h>
#include <stdio.h>

static struct head* root;

void memmanage_init(uint32_t start, uint32_t size){
    root = (struct head*)start;
    root->free = 1;
    root->size = size;
    root->next = NULL;
}

uint32_t* memmanage_malloc(uint32_t size){
    struct head* bestFit = NULL;
    struct head* node = root;
    while(1){
        if(node->size >= size){
            if(bestFit == NULL || node->size < bestFit->size){
                bestFit = node;
            }
        }
        if(node->next == NULL)
            break;
        else
            node = node->next;
    }
    //printf("node at %i\n", (uint32_t)node);
    // WARNING: NOT TESTED
    if(node->size > size+sizeof(struct head)){
        struct head* newNode = (struct head*)(((uint32_t)node)+size+sizeof(struct head));
        //printf("node at %i\n", (uint32_t)newNode);
        newNode->free = 1;
        newNode->next = node->next;
        newNode->size = node->size-(size+sizeof(struct head));
        node->free = 0;
        node->size = size;
        node->next = newNode;
    }
}

uint32_t* memmanage_calloc(uint32_t count, uint32_t size){
    
}

void memmanage_mfree(uint32_t pointer){
    
}
