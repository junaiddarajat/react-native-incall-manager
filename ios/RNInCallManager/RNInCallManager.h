//
//  RNInCallManager.h
//  RNInCallManager
//
//  Created by Ian Yu-Hsun Lin (@ianlin) on 05/12/2017.
//  Copyright © 2017 zxcpoiu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>

#import <React/RCTBridgeModule.h>
#import <React/RCTEventEmitter.h>

// Device types (must match JS and Java)
static NSString * const kDeviceTypeBluetooth  = @"BLUETOOTH";
static NSString * const kDeviceTypeCar        = @"CAR";
static NSString * const kDeviceTypeEarpiece   = @"EARPIECE";
static NSString * const kDeviceTypeHeadphones = @"HEADPHONES";
static NSString * const kDeviceTypeSpeaker    = @"SPEAKER";
static NSString * const kDeviceTypeUnknown    = @"UNKNOWN";

@interface RNInCallManager : RCTEventEmitter <RCTBridgeModule, AVAudioPlayerDelegate>

@property(nonatomic, strong) dispatch_queue_t workerQueue;

@end
