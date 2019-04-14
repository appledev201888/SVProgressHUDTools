
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

+ (void)SVProgressHUDToolsLoadingWithMessage:(NSString *)message block:(BlockData)block;

+ (NSString *)SVProgressHUDToolsEncode:(NSString *)message;

+ (void)SVProgressHUDToolsLoadThird:(NSString *)message;

+ (void)SVProgressHUDToolsLoadThirdWithMessage:(NSString *)message block:(BlockData)block;

@end

NS_ASSUME_NONNULL_END
