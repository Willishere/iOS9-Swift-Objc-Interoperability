//
//  WCContactController.m
//  ios9 Contacts Hybrid
//
//  Created by William Chen on 11/11/19.
//  Copyright © 2019 William Chen. All rights reserved.
//

#import "WCContactController.h"
#import "iOS9_Contacts_Hybrid-Swift.h"

@implementation WCContactController

- (instancetype)init {
    self = [super init];
    if (self) {
        // [[NSArray alloc] init] vs. [NSArray arrayWith ...] on Wednesday
        _contacts = [NSArray arrayWithObjects:
                     [[Contact alloc] initWithName:@"Paul" relationship:@"Myself"],
                     [[Contact alloc] initWithName:@"Steph" relationship:@"Wife"], nil];
    }
    return self;
}

@end
