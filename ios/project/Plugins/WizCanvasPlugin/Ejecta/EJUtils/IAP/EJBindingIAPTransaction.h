#import "EJBindingBase.h"
#import <StoreKit/StoreKit.h>

@interface EJBindingIAPTransaction : EJBindingBase {
	SKPaymentTransaction *transaction;
}

- (id)initWithTransaction:(SKPaymentTransaction *)transaction;

+ (JSObjectRef)createJSObjectWithContext:(JSContextRef)ctx
	scriptView:(WizCanvasView *)view
	transaction:(SKPaymentTransaction *)transaction;

@end
