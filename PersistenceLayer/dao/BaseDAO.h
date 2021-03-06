//
//  BaseDAO.h
//  PersistenceLayer
//
//  Created by tonyguan on 2016/11/16.
//  本书网站：http://www.51work6.com
//  智捷课堂在线课堂：http://www.zhijieketang.com/
//  智捷课堂微信公共号：zhijieketang
//  作者微博：@tony_关东升
//  作者微信：tony关东升
//  QQ：569418560 邮箱：eorient@sina.com
//  QQ交流群：162030268
//

#import "sqlite3.h"
#import "DBHelper.h"

@interface BaseDAO : NSObject {
    sqlite3 *db;
}

//打开SQLite数据库，返回值为true打开成功，false打开失败
- (BOOL)openDB;


@end
