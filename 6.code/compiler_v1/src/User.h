//
//  User.h
//  compiler_v1
//
//  Created by jan everaert on 13/04/15.
//
//

#pragma once
#include "cinder/app/appBasic.h"
#include "DetectTag.h"
#include "Compiler.h"

class User{
public:
    void setup(int x, int y, int rot);
    void draw();
    void update(ci::Surface s);
    void checkBoard();
    void checkCode();
    void checkInput();
    
    
    ci::Surface curSurf;
    
    DetectTag reader;
    
    Compiler compiler;
    
};