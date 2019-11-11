//
//  WCPerson.h
//  iOS9-Star Wars Hybrid
//
//  Created by William Chen on 11/11/19.
//  Copyright © 2019 William Chen. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WCPerson : NSObject
@property (nonatomic, copy, readonly) NSString *name;
@property (nonatomic, copy, readonly) NSString *birthYear;
@property (nonatomic, readonly) double height;
@property (nonatomic, copy, readonly) NSString *eyeColor;

- (nonnull instancetype)initWithName:(NSString *)name
                   birthYear:(NSString *)birthYear
                      height:(double)height
                    eyeColor:(NSString *)eyeColor;



- (nullable instancetype)initWithDictionary:(NSDictionary *)dictionary;
@end


NS_ASSUME_NONNULL_END
