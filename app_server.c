/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "app.h"
#include <stdio.h>
wyjscie *
obliczenia_1_svc(wejscie *argp, struct svc_req *rqstp)
{
	static wyjscie  result;

	/*
	 * insert server code here
	 */
    
	result.suma    = argp->x1 + argp->x2;
	result.roznica = argp->x1 - argp->x2;
	result.iloczyn = argp->x1 * argp->x2;
    printf( "%d" ,result.roznica);
	return &result;
}
