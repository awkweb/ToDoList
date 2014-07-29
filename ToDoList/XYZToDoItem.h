//
//  XYZToDoItem.h
//  ToDoList
//
//  Created by thomas on 5/10/14.
//
//

#import <Foundation/Foundation.h>

@interface XYZToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
