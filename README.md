# DeckEmulator Instructions
When the program runs, first it shows on the terminal a **greetings message**. Then, it tells that the **game** is **loading**. This is because the `InitDeck` function is called in order to initialize the deck with five random cards. It could take some **minutes to initialize** the game, so **be patient**. It depends on the **random** **cards** that are being generated and that those cards **don't repeat**.

When the cards are generated it shows an **options menu** where it lists all the available options that the games has, followed by the **random deck** that was generated, the **player's hand**, and the **choice input**. Depending on the player's input it calls a different function, the functions have a segment where, if the player tries something that they shouldn't, it pops a message saying why they can´t choice that.

## Player's choices
The player can choose one of the next **actions**:
1. `p` -> pull
2. `t` -> top
3. `b` -> bottom
4. `d` -> discard
5. `s` -> save
6. `l` -> load
7. `e` -> exit
8. `o` -> options

## Options for interacting with the cards
The `p` option is for pull. With this option the player grabs a **card** from the deck and **place it in the player's hand**, and it can only be selected if there isn't a card in the **player's hand**. The `t` option is for top. With this option the player **places a card** that he already had in his hand **on top of the deck**, hence, the player **cannot do this if he doesn't have any card on his hand**. The `b` is for bottom. With this option the player **places a card** at the **bottom of the deck**. It applies the same rules as with the `t` option. The `d` option is for discard. With this option the player can **discard a card that is in its hand**. When selected, the **card that has been discarded can never be recovered back**, unless the player uses the `l` option. Additionally, the player can **show all the options** that he can play whenever he wants by selecting the `o` option.

## Save & Load
The `l` and `s` are for loading and saving the game. When used the `s` option, it generates a **binary file** where important information such as the **current state of the deck** and the **current state of the player's hand** is going to be **saved**. With the `l` option, the player can recover all this information and **load a previous state** of the game. If the file doesn't exist, it loads nothing. The player can **save and load** whenever he/she wants across the game.

## The End of the Game
The game can end in two ways. The first is that there is no card in the deck and the player does not have a card in his hand. The second is that the player chooses the `e` option. By doing this **the game is going to end**. But beware, if the player selects the `e` option the **game would not be saved automatically**, so it is recommended to **save the game before exiting it**.

## Considerations
It is the responsibility of the player to **write only one character** in the terminal. If the `s` and `l` option do not work, it is recommended that the player changes the route of the save file to an absolute route. This needs to be changed in the `line 75` and the `line 83` of the source code.
