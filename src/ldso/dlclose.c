#include <dlfcn.h>
#include "dynlink.h"

int stub_dlclose(void *p)
{
	return __dl_invalid_handle(p);
}

weak_alias(stub_dlclose, dlclose);