//
//  RegionCreateTool.h
//  Creatures
//
//  Created by Michael Ash on Sat Jan 04 2003.
//  Copyright (c) 2003 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RegionTool.h"


@class Region;

@interface RegionCreateTool : RegionTool {
	BOOL inProgress;
	BOOL regionInserted;
	int startx, starty;
	Region *region;
}

@end
