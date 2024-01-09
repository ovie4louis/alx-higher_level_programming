#include <stdio.h>
#include <stdlib.h>
#include <Python.h>

void print_python_list_info(PyObject *p)
{
        long int size = pylist_size(p);
        int i;
        Pylistobject *obj = (pylistobject *)p;

        printf("[*} size of the python list = %li\n", size);
        printf("[*] Allocated = %li\n", obj->allocated);
        for (i = 0; i < size; i++)
                printf("Element %i: %s\n", i, py_TYPE(obj->ob_item[i])->tp_name);
}
