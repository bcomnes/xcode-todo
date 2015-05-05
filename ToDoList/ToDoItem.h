//
//  ToDoItem.h
//  ToDoList
//
//  Created by Bret Comnes on 5/4/15.
//  Copyright (c) 2015 Bret Comnes. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
