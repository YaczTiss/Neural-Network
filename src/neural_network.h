#include <malloc.h>


typedef struct neuron{
    int id;
    int *weights;
}neuron;

typedef struct layer{
    int layer_id;
    int nb_neurons;
    neuron** neurons;
}layer;

typedef struct network{
    char* name;
    int (*activation)(int);
    int n_layers;
    struct layer** layers;
}network;

/**/
neuron* newron(int id);

/* function to add weight, could be replaced by 1 to generate and 1 to modify*/
void* add_weight(neuron* n1, int* w);


layer* newwork(int layer_id);

/*  Create new neuron   */
void* add_neuron(neuron* n, layer* net);

