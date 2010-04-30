//
//  TasksController.m
//  Tardis
//
//  Created by Mickey on 4/29/10.
//  Copyright 2010 MRR Software. All rights reserved.
//

#import "TasksController.h"

#import "Task.h"
#import "Project.h"

@implementation TasksController

- (void)addObject:(id)object
{
	Task* task = (Task*)object;
	
	Project* project = [[projectsController selectedObjects] lastObject];
	
	[task setProject:project];
	
	[super addObject:task];
}

@end
