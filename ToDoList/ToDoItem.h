//
//  ToDoItem.h
//  ToDoList
//
//  Created by parkjoon on 5/19/14.
//
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
