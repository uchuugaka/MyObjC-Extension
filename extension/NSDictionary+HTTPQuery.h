//
//  NSDictionary+HTTPQuery.h
//  kisa
//
//  Created by 安井 惇 on 10/04/15.
//  Copyright 2010 a.yasui <a.yasui+github@gmail.com>. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface NSDictionary (HTTPQuery)
- (NSData*) dictionaryForQueryData;
@end
