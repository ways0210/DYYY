#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CityManager : NSObject

+ (instancetype)sharedInstance;

- (nullable NSString *)getProvinceNameWithCode:(NSString *)code;
- (nullable NSString *)getCityNameWithCode:(NSString *)code;
- (nullable NSString *)getDistrictNameWithCode:(NSString *)code;
- (nullable NSString *)getStreetNameWithCode:(NSString *)code;

@end

NS_ASSUME_NONNULL_END
