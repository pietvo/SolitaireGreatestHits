//
//  SolitaireGolfGame.h
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
#import "SolitaireGame.h"

@class SolitaireSavedGameImage;
@class SolitaireStock;
@class SolitaireFoundation;
@class SolitaireTableau;

@interface SolitaireGolfGame : SolitaireGame {
@protected
    SolitaireStock* stock_;
    SolitaireFoundation* foundation_;
    SolitaireTableau* tableau_[7];
}

-(instancetype) initWithController: (SolitaireController*)gameController;
@property (readonly) NSString *name;
-(void) initializeGame;
-(void) layoutGameComponents;
-(BOOL) didWin;
-(BOOL) didLose;
-(void) reset;

// Scoring
-(BOOL) keepsScore;
-(NSInteger) initialScore;
-(NSInteger) scoreForCard: (SolitaireCard*)card movedFromContainer: (SolitaireCardContainer*) fromContainer
    toContainer: (SolitaireCardContainer*)toContainer;

// Saving and loading game
-(SolitaireSavedGameImage*) generateSavedGameImage;
-(void) loadSavedGameImage: (SolitaireSavedGameImage*)gameImage;

-(void) dealNewGame;
-(BOOL) canDropCard: (SolitaireCard*) card inFoundation: (SolitaireFoundation*) foundation;

-(SolitaireFoundation*) findFoundationForCard: (SolitaireCard*) card;

@end
