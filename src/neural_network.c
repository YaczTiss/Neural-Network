#include "neural_network.h"

neuron* newron(int id){
    neuron* n = (neuron*)malloc(sizeof(neuron));
    n->id = id;
    n->weights = NULL;
}