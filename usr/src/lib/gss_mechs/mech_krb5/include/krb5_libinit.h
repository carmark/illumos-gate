#ifndef KRB5_LIBINIT_H
#define KRB5_LIBINIT_H

#pragma ident	"%Z%%M%	%I%	%E% SMI"

#include "krb5.h"

krb5_error_code krb5int_initialize_library (void);
void krb5int_cleanup_library (void);

#endif /* KRB5_LIBINIT_H */
