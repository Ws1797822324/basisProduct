//
//  HYHelper.h
//
//  Created by Ghy on 17/1/6.
//  Copyright © 2017年 ghy. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>



@interface XXHelper : NSObject
#pragma mark - 单例
+ (XXHelper *)shareInstance;

#pragma mark -  获取rootViewController

+ (UIViewController *)rootViewController;

#pragma mark - 获取Window当前显示的ViewController
+ (UIViewController*)currentViewController;

#pragma mark -  删除空格和换行
+ (NSString *)deleteNewlineAndLineSpace:(NSString *)string;


#pragma mark - 验证银行卡号是否规范
/**
 *  验证银行卡号是否规范
 */
+ (BOOL)validateBankCardWithNumber:(NSString *)cardNum;


#pragma mark - 判断身份证号码是否规范
/**
 *  判断身份证号码是否规范
 */
+(BOOL)checkIdentityCardNo:(NSString*)cardNo;

#pragma mark - 判断输入的是否是中文 

/**
 * 判断输入的是否是中文
 */
+(BOOL) checkInputChinese:(NSString *)text;
#pragma mark - 判断字符串中是否有非法字符

/**
 * 非法字符是指 除数字 字母 中文文字以外的所有字符
 */
+ (BOOL)JudgeTheillegalCharacter:(NSString *)content;

#pragma mark - 拨打电话
/**
 *  拨打电话
 */
+ (void)makePhoneCallWithTelNumber:(NSString *)tel;


#pragma mark - 直接打开网页
/**
 *  直接打开网页
 */
+ (void)openURLWithUrlString:(NSString *)url;


#pragma mark - 获取当前时间
/**
 *  获取当前时间
 */
+ (NSString *)currentTime;


#pragma mark - 将时间转换成时间戳
/**
 *  将时间转换成时间戳
 *
 *   时间戳：指格林威治时间1970年01月01日00时00分00秒(北京时间1970年01月01日08时00分00秒)起至现在的总秒数。
 */
+ (NSString *)timeStringIntoTimeStamp:(NSString *)time;


#pragma mark - 将时间戳转换成时间
/**
 *  将时间戳转换成时间
 */
+ (NSString *)timeStampIntoTimeString:(NSString *)time;


#pragma mark - 通过时间字符串获取年、月、日
/**
 *  通过时间字符串获取年、月、日
 */
+ (NSArray *)getYearAndMonthAndDayFromTimeString:(NSString *)time;


#pragma mark - 获取今天、明天、后天的日期
/**
 *  获取今天、明天、后天的日期
 */
+ (NSArray *)timeForTheRecentDate;

#pragma mark - 当前界面截图
/**
 *  当前界面截图
 */
+ (UIImage *)imageFromCurrentView:(UIView *)view;

#pragma mark - 去掉html中的标签
/**
 *  去掉html中的标签
 */
+ (NSString *)stringRemovetheHTMLtags:(NSString *)htmlString;

#pragma mark - 获取Documents中文件的路径
/**
 *  获取Documents中文件的路径
 */
+ (NSString *)accessToTheDocumentsInTheFilePath:(NSString *)fileName;

#pragma mark - 生成随机数 n到m
/**
 *  生成随机数 n到m
 */
+(int)getRandomNumber:(int)from to:(int)to;


#pragma mark - 判断网址是否有效
/**
 *  判断网址是否有效
 */
+ (BOOL)validateHttp:(NSString *)textString;


#pragma mark - 给view设置边框
/**
 *  给view设置边框(指定边框)
 *
 */
+ (void)setBorderWithView:(UIView *)view top:(BOOL)top left:(BOOL)left bottom:(BOOL)bottom right:(BOOL)right borderColor:(UIColor *)color borderWidth:(CGFloat)width;

#pragma mark - 给view设置圆角

/**
 给view设置圆角(指定圆角)
 
 @param view 目标 View
 @param targetAngles  想要改变的角 可多选 用 | 字符分开
 @param size 圆角半径(CGSize 格式 所以是给出的 椭圆半径)
 如果你们有更变态需求每个角的半径都不一样那就让美工 MM 切图吧
 */
+ (void)setCornerRadiuswithView:(UIView *)view targetAngles:(UIRectCorner) targetAngles cornerRadii:(CGSize) size;

#pragma mark - 将数组中重复的对象去除，只保留一个
/**
 *  将数组中重复的对象去除，只保留一个
 */
+ (NSMutableArray *)arrayWithMemberIsOnly:(NSMutableArray *)array;


#pragma mark - 图片大小设置
/**
 *  图片大小设置
 */
+ (UIImage *)scaleToSize:(UIImage *)img size:(CGSize)size;


#pragma mark - 获取当前屏幕显示的viewcontroller
/**
 *  获取当前屏幕显示的viewcontroller
 */
+ (UIViewController *)getCurrentVC;


#pragma mark - 获取当前处于activity状态的view controller
/**
 *  获取当前处于activity状态的view controller
 */
+ (UIViewController *)activityViewController;


#pragma mark - 清空字典数据
/**
 *  清空字典数据
 */
+(NSMutableDictionary *)clearNullData:(NSDictionary *)dic;


#pragma mark - 将image 转化成nsdata
/**
 *  将image 转化成nsdata
 */
+(NSData *)getImageDataWith:(UIImage *)image;


#pragma mark - 格式化千分位
/**
 *  格式化千分位
 */
+ (NSString *)positiveFormat:(NSString *)text;


#pragma mark - 不四舍五入  小数
/**
 *  不四舍五入  小数
 */
+(NSString *)notRounding:(float)price afterPoint:(int)position;


#pragma mark - 获取用户手机信息
/**
 *  获取用户手机信息
 */
+ (NSMutableDictionary *)getUserPhoneInfo;


#pragma mark - 获取手机品牌型号
/**
 *  获取手机品牌型号
 */
+ (NSString *)getUserPhoneModelNumber;


#pragma mark - 转化成手机号空格式字符串
/**
 *  转化成手机号空格式字符串
 */
+ (NSString *)becomePhoneNumTypeWithNSString:(NSString *)string;


#pragma mark - 拼接成中间有空格的字符串(类似银行卡中间空格)
/**
 *  拼接成中间有空格的字符串(类似银行卡中间空格)
 */
+ (NSString *)jointBlankWithString:(NSString *)str;

#pragma mark - 从单例类（NSUserDefaults）中取出可变数组（用于后面操作添加或者删除元素）
/**
 *  从单例类（NSUserDefaults）中取出可变数组（用于后面操作添加或者删除元素）
 */
+ (NSMutableArray *)getMutableArrayFromNSUserDefaults:(NSString *)path;

#pragma mark - 字典转化成字符串
/**
 *  字典转化成字符串
 */
+ (NSString *)dictionaryToJson:(NSDictionary *)dic;

#pragma mark - 获取设备IP地址
/**
 *  获取设备IP地址 （只在手机真机上可用）
 */
+ (NSString *)getIPAddress;

#pragma mark - 获取host（主机）属性
+ (NSString *)hostname;

#pragma mark - 获取本地host(主机)的IP地址
/**
 *  获取本地host(主机)的IP地址 (只在电脑上可用)
 */
+ (NSString *)localIPAddress;



#pragma mark - 删除多余的cell、 分割线
+ (void)deleteExtraCellLine: (UITableView *)tableView;


#pragma mark -   倒计时按钮 返回页面重置时间
/**
 *  倒计时按钮
 *
 *  @param timeLine 倒计时总时间
 *  @param title    还没倒计时的title 结束时的
 *  @param subTitle 倒计时中的子名字，如时、分
 *  @param mColor   还没倒计时的颜色
 *  @param color    倒计时中的颜色
 *  @param button   要操作的按钮
 */
+ (void)startWithTime:(NSInteger)timeLine title:(NSString *)title countDownTitle:(NSString *)subTitle mainColor:(UIColor *)mColor countColor:(UIColor *)color disposeButton:(UIButton *)button;

#pragma mark -  倒计时按钮 返回页面不重置时间
    
+ (void)startSeniorWithTime:(NSInteger)timeLine
                      title:(NSString *)title
             countDownTitle:(NSString *)subTitle
                  mainColor:(UIColor *)mColor
                 countColor:(UIColor *)color
              disposeButton:(UIButton *)button;

#pragma mark -  图片转成base64编码
/**
 图片转成base64编码
 @param imageName 传入图片名
 @return 返回base64格式Str
 */
+ (NSString *) imageConvertFormatBase64imageName:(NSString *)imageName;

#pragma mark - 将数组里的字符串排序

/**
 @param dataArray 要排序的数组
 @param grouping 是否分组存储 就是分成通讯录那样
 分布的话 分区数 dataArr.count
 分区中Cell 个数 [_dataArr[section][@"info"]count
 索引 就取出  _dataArr 中所有字典中的 title
 @return 排序好的数组
 */
+ (NSMutableArray *)Transformation:(NSArray *)dataArray isGrouping:(BOOL)grouping;

#pragma mark -  计算 image 高度

/**
 
 计算 image 高度
 
 @param image 目标 image
 @param defineWidth  理想宽度
 @return image 高度
 */
+ (CGFloat)heightForImage:(UIImage *)image targetWidth:(NSInteger) defineWidth;


/**
 *  检测麦克风权限，仅支持iOS7.0以上系统
 *
 *  @return 准许返回YES;否则返回NO
 */
+(BOOL)isMicrophonePermissionGranted;

/**
 *  检测相机权限
 *
 *  @return 准许返回YES;否则返回NO
 */
+(BOOL)isCapturePermissionGranted;

/**
 *  检测相册权限
 *
 *  @return 准许返回YES;否则返回NO
 */
+(BOOL)isAssetsLibraryPermissionGranted;


#pragma mark - 图片放大
/**
 *  浏览大图
 *
 *  @param currentImageview 图片所在的imageView
 */
+(void)scanBigImageWithImageView:(UIImageView *)currentImageview;

#pragma mark -  修正照片方向(手机转90度方向拍照)

- (UIImage *)fixOrientation:(UIImage *)aImage;
#pragma mark -  计算文字的高度

/**
 计算文字的高度
 
 @param content 计算的文本
 @param width 文本所占的宽度
 @param font 文本的字号大小
 @return 文字的CGSize
 */
+ (CGFloat)calculteTheSizeWithContent:(NSString *)content width:(float)width font:(float )font;

/**
 *  计算文字长度
 */
+ (CGFloat )widthForLabel:(NSString *)text fontSize:(CGFloat)font;


@end
