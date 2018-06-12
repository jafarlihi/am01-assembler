#ifndef PTRARR_H
#define PTRARR_H

typedef struct Ptrarr {
    void *arr;
    size_t len;
} Ptrarr;

Ptrarr *pa_init();
void pa_add(Ptrarr *);
void pa_trim(Ptrarr *);
void pa_free(Ptrarr *);

#endif
