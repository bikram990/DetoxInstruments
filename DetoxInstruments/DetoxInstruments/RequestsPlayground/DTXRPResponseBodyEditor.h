//
//  DTXRPResponseBodyEditor.h
//  DetoxInstruments
//
//  Created by Leo Natan (Wix) on 3/10/19.
//  Copyright © 2019 Wix. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface DTXRPResponseBodyEditor : NSViewController

- (void)setBody:(NSData *)body response:(NSURLResponse*)response error:(NSError*)error;

@end
