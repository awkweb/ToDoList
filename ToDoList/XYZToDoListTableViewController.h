//
//  XYZToDoListTableViewController.h
//  ToDoList
//
//  Created by thomas on 5/10/14.
//
//

#import <UIKit/UIKit.h>
#import "XYZToDoItem.h"

@interface XYZToDoListTableViewController : UITableViewController
- (IBAction)unwindToList:(UIStoryboardSegue *)segue;

@property XYZToDoItem *toDoItem;

@end
