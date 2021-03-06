/* Sketch - A Python-based interactive drawing program
 * Copyright (C) 1996, 1997, 1998, 1999 by Bernhard Herzog
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

#ifndef SKAUX_H
#define SKAUX_H

#include <Python.h>


PyObject * SKAux_DrawGrid(PyObject * self, PyObject * arg);
PyObject * SKAux_DrawGridAsLines(PyObject * self, PyObject * arg);
PyObject * SKAux_GetPixel(PyObject * self, PyObject * arg);
PyObject * SKAux_DrawBezier(PyObject * self, PyObject * args);
PyObject * SKAux_TransformRectangle(PyObject * self, PyObject * args);
PyObject * SKAux_IdIndex(PyObject * self, PyObject * args);
PyObject * xlfd_char_range(PyObject * self, PyObject * args);
PyObject * SKCache_PyCreate(PyObject * self, PyObject * args);


#endif /* SKAUX_H */
