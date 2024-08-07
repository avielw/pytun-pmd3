#ifndef PYTUN_COMMON_H
#define PYTUN_COMMON_H

#include <object.h>

#define MODULE_NAME ("pytun-pmd3")

#ifndef IFNAMSIZ
#define IFNAMSIZ (20)
#endif // IFNAMSIZ

struct pytun_tuntap {
    PyObject_HEAD
    int fd;
    int ipv4;
    char name[IFNAMSIZ];
};
typedef struct pytun_tuntap pytun_tuntap_t;

#endif //PYTUN_COMMON_H
