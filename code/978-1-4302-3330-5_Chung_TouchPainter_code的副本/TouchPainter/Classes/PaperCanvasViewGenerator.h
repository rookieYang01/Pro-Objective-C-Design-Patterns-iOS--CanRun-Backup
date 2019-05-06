//
//  PaperCanvasViewGenerator.h
//  TouchPainter
//
//  Created by Carlo Chung on 10/16/10.
//  Copyright 2010 Carlo Chung. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CanvasViewGenerator.h"
#import "PaperCanvasView.h"

@interface PaperCanvasViewGenerator : CanvasViewGenerator 
{

}

- (CanvasView *) canvasViewWithFrame:(CGRect) aFrame;

@end
