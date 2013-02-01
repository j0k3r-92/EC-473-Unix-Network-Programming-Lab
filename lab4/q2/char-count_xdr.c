/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "char-count.h"

bool_t
xdr_string_in (XDR *xdrs, string_in *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->in_string, 1024))
		 return FALSE;
	 if (!xdr_char (xdrs, &objp->in_char))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_count_out (XDR *xdrs, count_out *objp)
{
	register int32_t *buf;

	 if (!xdr_long (xdrs, &objp->count))
		 return FALSE;
	return TRUE;
}
