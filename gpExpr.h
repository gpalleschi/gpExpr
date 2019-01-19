/******************************************************************************
* gpExpr.h
* Copyright (c) 2018, GPSoft - SkyBalls gpsoftskyballs@gmail.com
* All rights reserved.
*
* This file is part of gpExpr C Utilities Library .
*
*    gpExpr is free software: you can redistribute it and/or modify
*    it under the terms of the GNU General Public License as published by
*    the Free Software Foundation, either version 3 of the License, or
*    (at your option) any later version.
*
*    Nome-Programma is distributed in the hope that it will be useful,
*    but WITHOUT ANY WARRANTY; without even the implied warranty of
*    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*    GNU General Public License for more details.
*
*    You should have received a copy of the GNU General Public License
*    along with Nome-Programma.  If not, see <http://www.gnu.org/licenses/>.
******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

/* Types variable
 * ************** */

typedef enum
{
  E_int=0,              /* Integer Type        */
  E_real,               /* Real Type           */
  E_string,             /* String Type         */
  E_nmb_var_type        /* numer variable      */
} var_type_t;

/* Variable value
 * ************** */

typedef struct variable
{
  long int int_num;                   /* Integer Value */
  double   real_num;                  /* Real Value    */
  char     *string;                   /* String Value  */
} variable_t;

#ifndef GPEXPR_H
#define GPEXPR_H

int 

#endif
