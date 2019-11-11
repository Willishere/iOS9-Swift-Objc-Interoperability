//
//  WCContactController.h
//  ios9 Contacts Hybrid
//
//  Created by William Chen on 11/11/19.
//  Copyright © 2019 William Chen. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Contact;


@interface WCContactController : NSObject

@property (nonatomic, readonly, nonnull) NSArray<Contact *> *contacts;


@end


