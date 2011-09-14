#ifndef LIB_H
#define LIB_H

#include <config.h>
#include "libcircle.h"
#include "queue.h"

#ifndef LIBCIRCLE_LOGLEVEL
    #define LIBCIRCLE_LOGLEVEL 0
#endif

typedef struct CIRCLE_input_st
{
    CIRCLE_cb create_cb;
    CIRCLE_cb process_cb;
    CIRCLE_queue_t *queue;
} CIRCLE_input_st;

#endif /* LIB_H */
