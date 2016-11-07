#ifndef HSLICE_LIBHSLICE_H
#define HSLICE_LIBHSLICE_H

#include <sys/types.h>

typedef struct { // I probably will remove this ugly shit... But I'm still lazy.
	void *a;
	void *b;
	void *c;
} tag_and_data;

typedef struct {
	void *a;
	void *b;
	void *c;
	void *d;
	void *e;
	void *f;	
} hslice_obj;

hslice_obj hslice_open(char *filename);
void hslice_close(hslice_obj *obj);
void hslice_parse(hslice_obj *obj, const char *prefix, const char *suffix);
int hslice_count(hslice_obj *obj);
const char *hslice_return(hslice_obj *obj, const char *search);
const char *hslice_return_e(hslice_obj *obj, char *search);
tag_and_data *hslice_return_full(hslice_obj *obj, const char *search);
char **hslice_tags(hslice_obj *obj);

#endif //HSLICE_LIBHSLICE_H

