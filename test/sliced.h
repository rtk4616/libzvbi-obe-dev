/*
 *  libzvbi test
 *
 *  Copyright (C) 2005 Michael H. Schimek
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

/* $Id: sliced.h,v 1.2 2005/06/11 22:12:29 mschimek Exp $ */

#include <stdio.h>
#include "src/libzvbi.h"

/* Reader for old test/capture --sliced output.
   ATTN this code is not reentrant. */

extern int
read_sliced			(vbi_sliced *		sliced,
				 double *		timestamp,
				 unsigned int		max_lines);
extern vbi_bool
open_sliced			(FILE *			fp);