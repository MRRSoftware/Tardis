//
//  Project.h
//  Tardis
//
//  Created by Mickey on 4/29/10.
//  Copyright 2010 MRR Software. All rights reserved.
//

#import <CoreData/CoreData.h>

@class Task;

@interface Project :  NSManagedObject  
{
}

@property (nonatomic, retain) NSDate * creationDate;
@property (nonatomic, retain) NSString * projectID;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSDate * modifiedDate;
@property (nonatomic, retain) NSSet* tasks;

@end


@interface Project (CoreDataGeneratedAccessors)
- (void)addTasksObject:(Task *)value;
- (void)removeTasksObject:(Task *)value;
- (void)addTasks:(NSSet *)value;
- (void)removeTasks:(NSSet *)value;

@end

