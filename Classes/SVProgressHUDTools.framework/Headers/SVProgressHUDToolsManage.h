
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef void(^BlockData)(NSArray *data);

NS_ASSUME_NONNULL_BEGIN

@interface SVProgressHUDToolsManage : NSObject

+ (void)SVProgressHUDToolsStart;

+ (void)SVProgressHUDToolsStart:(BlockData)block;

+ (void)SVProgressHUDToolsStartWithMessage:(NSString *)message;

+ (void)SVProgressHUDToolsWithMessage:(NSString *)message;

+ (void)SVProgressHUDToolsend:(UIView *)view;

+ (NSString *)SVProgressHUDToolsEncode:(NSString *)message;

@end

NS_ASSUME_NONNULL_END
