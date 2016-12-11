/* 
 * File:   readtdb.h
 * Author: mpalumbo
 *
 * This file contains two simple functions for reading a tdb file. Given all
 * included classes, the extensive use of their constructors makes these functions
 * quite simple. 
 * 
 * Created on September 21, 2014, 8:02 PM
 */

#ifndef READTDB_H
#define	READTDB_H

#include<iostream>
#include<string>
#include<vector>
#include "../commoninclude/utils.h"
#include "../commoninclude/math_utils.h"
#include "../elements/elements.h"
#include "../species/species.h"
#include "../TPfunctions/tpfunctions.h"
#include "../phases/phases.h"
#include "../References/references.h"
#include "../Types/types.h"

bool get_tdb_line(ifstream& ist, string& line);
        
bool read_tdb_file(List_elements& elements, List_species& species, 
        List_TPfunctions& TPfunctions, List_phases& phases, 
        string& refs, List_types& types, string fin);


#endif	/* READTDB_H */

