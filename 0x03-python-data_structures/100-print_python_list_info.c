#include <Python.h>
#include <object.h>
#include <listobject.h>

void print_python_list_info(PyObject *p)
{
        long int size = Pylist_size(p);
        int i;
        Pylistobject *obj = (Pylistobject *)p;

        printf("[*} size of the python list = %li\n", size);
        printf("[*] Allocated = %li\n", obj->allocated);
        for (i = 0; i < size; i++)
                printf("Element %i: %s\n", i, Py_TYPE(obj->ob_item[i])->tp_name);
}
