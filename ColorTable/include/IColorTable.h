//
//  IColorTable.h
//  pal2cube
//
//  Created by Joshua on 8/26/14.
//  Copyright (c) 2014 Joshua Skelton. All rights reserved.
//

#ifndef pal2cube_IColorTable_h
#define pal2cube_IColorTable_h

#include "Color.h"

class IColorTable {
public: 
    virtual int Count() = 0;
    virtual ColorPtr At(int index) = 0;
    virtual bool Load(std::string filepath) = 0;
    virtual std::string FileName() = 0;
    virtual void FileName(std::string fileName) = 0;
    
};

typedef IColorTable* IColorTablePtr;

#endif
