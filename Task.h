//
//  Task.h
//  Tardis
//
//  Created by Mickey on 4/29/10.
//  Copyright 2010 MRR Software. All rights reserved.
//

#import <CoreData/CoreData.h>


@interface Task :  NSManagedObject  
{
}

@property (nonatomic, retain) NSString * taskID;
@property (nonatomic, retain) NSString * note;
@property (nonatomic, retain) NSDate * completionDate;
@property (nonatomic, retain) NSDate * creationDate;
@property (nonatomic, retain) NSNumber * priority;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSDate * dueDate;
@property (nonatomic, retain) NSManagedObject * location;
@property (nonatomic, retain) NSSet* tags;
@property (nonatomic, retain) NSManagedObject * project;

@end


@interface Task (CoreDataGeneratedAccessors)
- (void)addTagsObject:(NSManagedObject *)value;
- (void)removeTagsObject:(NSManagedObject *)value;
- (void)addTags:(NSSet *)value;
- (void)removeTags:(NSSet *)value;

@end

