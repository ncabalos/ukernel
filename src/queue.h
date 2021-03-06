#ifndef QUEUE_H
#define	QUEUE_H

struct queue {
    void * data;
    uint16_t size;
    uint16_t count;
    uint16_t element_size;
    uint16_t in;
    uint16_t out;
};

bool queue_register(struct queue * queue, void * data, uint16_t size,
                    uint16_t element_size);
bool queue_enqueue(struct queue * queue, void * data);
bool queue_dequeue(struct queue * queue, void * data);

#endif	/* STATIC_QUEUE_H */

