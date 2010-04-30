//
//  Location.h
//  Tardis
//
//  Created by Mickey on 4/29/10.
//  Copyright 2010 MRR Software. All rights reserved.
//

#import <CoreData/CoreData.h>

@class Task;

@interface Location :  NSManagedObject  
{
}

@property (nonatomic, assign) double latitude;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, assign) double longitude;
@property (nonatomic, retain) NSSet* tasks;

@end


@interface Location (CoreDataGeneratedAccessors)
- (void)addTasksObject:(Task *)value;
- (void)removeTasksObject:(Task *)value;
- (void)addTasks:(NSSet *)value;
- (void)removeTasks:(NSSet *)value;

@end

