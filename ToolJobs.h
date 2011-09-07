//
//  ToolJobs.h
//  iTerm
//
//  Created by George Nachman on 9/6/11.
//  Copyright 2011 Georgetech. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "ToolWrapper.h"

@interface ToolJobs : NSView {
    NSScrollView *scrollView_;
    NSTableView *tableView_;
    NSButton *kill_;
    NSPopUpButton *signal_;
    NSTimer *timer_;
    NSMutableArray *names_;
    NSMutableArray *pids_;
}

@property (nonatomic, assign) BOOL hasSelection;
@end
