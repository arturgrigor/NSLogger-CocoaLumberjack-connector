//
//  DDLogExtras.h
//
//  Created by Artur Grigor on 31.08.2013.
//

#import <Foundation/Foundation.h>

#import "DDLog.h"

#define DDLogErrorWithTag(tag, frmt, ...)   LOG_OBJC_TAG_MAYBE(LOG_ASYNC_ERROR,   ddLogLevel, LOG_FLAG_ERROR,   0, tag, frmt, ##__VA_ARGS__)
#define DDLogWarnWithTag(tag, frmt, ...)    LOG_OBJC_TAG_MAYBE(LOG_ASYNC_WARN,    ddLogLevel, LOG_FLAG_WARN,    0, tag, frmt, ##__VA_ARGS__)
#define DDLogInfoWithTag(tag, frmt, ...)    LOG_OBJC_TAG_MAYBE(LOG_ASYNC_INFO,    ddLogLevel, LOG_FLAG_INFO,    0, tag, frmt, ##__VA_ARGS__)
#define DDLogVerboseWithTag(tag, frmt, ...) LOG_OBJC_TAG_MAYBE(LOG_ASYNC_VERBOSE, ddLogLevel, LOG_FLAG_VERBOSE, 0, tag, frmt, ##__VA_ARGS__)

#define DDLogCErrorWithTag(tag, frmt, ...)   LOG_C_TAG_MAYBE(LOG_ASYNC_ERROR,   ddLogLevel, LOG_FLAG_ERROR,   0, tag, frmt, ##__VA_ARGS__)
#define DDLogCWarnWithTag(tag, frmt, ...)    LOG_C_TAG_MAYBE(LOG_ASYNC_WARN,    ddLogLevel, LOG_FLAG_WARN,    0, tag, frmt, ##__VA_ARGS__)
#define DDLogCInfoWithTag(tag, frmt, ...)    LOG_C_TAG_MAYBE(LOG_ASYNC_INFO,    ddLogLevel, LOG_FLAG_INFO,    0, tag, frmt, ##__VA_ARGS__)
#define DDLogCVerboseWithTag(tag, frmt, ...) LOG_C_TAG_MAYBE(LOG_ASYNC_VERBOSE, ddLogLevel, LOG_FLAG_VERBOSE, 0, tag, frmt, ##__VA_ARGS__)