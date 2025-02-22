//
//  SolitaireSavedGameImage.h
//  Solitaire
// 
//  This program is free software; you can redistribute it and/or
//  modify it under the terms of the GNU General Public License
//  as published by the Free Software Foundation; either version 2
//  of the License, or (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
//

#import <Cocoa/Cocoa.h>

NS_ASSUME_NONNULL_BEGIN

@class SolitaireCardContainer;

@interface SolitaireSavedGameImage : NSObject <NSSecureCoding> {
@private
    NSString* gameName_;
    unsigned gameSeed_;
    NSInteger gameScore_;
    NSInteger gameTime_;
    NSMutableDictionary<NSString*,id<NSCoding>>* gameData_;
}

-(instancetype) init UNAVAILABLE_ATTRIBUTE;
-(instancetype) initWithGameName: (NSString*)name NS_DESIGNATED_INITIALIZER;
-(nullable instancetype) initWithCoder: (NSCoder*) decoder NS_DESIGNATED_INITIALIZER;
-(void) encodeWithCoder: (NSCoder*) encoder;

@property (readonly, copy) NSString *gameName;

-(void) archiveGameScore: (NSInteger)value;
-(NSInteger) unarchiveGameScore;

-(void) archiveGameTime: (NSInteger)time;
-(NSInteger) unarchiveGameTime;

-(void) archiveGameSeed: (unsigned)seed;
-(unsigned) unarchiveGameSeed;

-(void) archiveGameObject: (nullable id)obj forKey: (NSString*)key;
-(nullable id) unarchiveGameObjectForKey: (NSString*)key;

- (void)setObject:(nullable id<NSCoding>)obj forKeyedSubscript:(NSString*)key;
- (nullable id<NSCoding>)objectForKeyedSubscript:(NSString*)key;

@end

NS_ASSUME_NONNULL_END
