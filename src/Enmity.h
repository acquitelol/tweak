#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "Commands.h"
#import "Plugins.h"
#import "Utils.h"
#import "Theme.h"

#define ENMITY_PATH [NSString stringWithFormat:@"%@/%@", NSHomeDirectory(), @"Documents/Enmity.js"]
#define ENMITY_SOURCE [NSURL URLWithString:@"enmity"]
#define VERSION @"2.2.0"
#define TYPE @"Regular"

// Disable logs in release mode
# define NSLog(fmt, ... ) NSLog((@"[Enmity] " fmt), ##__VA_ARGS__);
