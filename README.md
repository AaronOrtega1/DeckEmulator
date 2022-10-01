# DeckEmulator
## Instructions
When the program runs, first it shows on the terminal a **greetings message**. Then, it tells that the **game** is **loading**. This is because the `InitDeck` function is called in order to initialize the deck with five random cards. It could take some **minutes to initialize** the game, so **be patient**. It depends on the **random** **cards** that are being generated and that those cards **don't repeat**.

When the cards are generated it shows an **options menu** where it lists all the available options that the games has, followed by the **random deck** that was generated, the **player's hand**, and the **choice input**. Depending on the player's input it calls a different function, the functions have a segment where, if the player tries something that they shouldn't, it pops a message saying why they can´t choice that.

The player can choose one of the next **actions**:
1. `p` -> pull
2. `t` -> top
3. `b` -> bottom
4. `d` -> discard
5. `s` -> save
6. `l` -> load
7. `e` -> exit
8. `o` -> options

The `p` option is for pull. With this option the player grabs a **card** from the deck and **place it in the player's hand**, and it can only be selected if there isn't a card in the **player's hand**. The `t` option is for top. With this option the player **places a card** that he already had in his hand **on top of the deck**, hence, the player **cannot do this if he doesn't have any card on his hand**. The `b` is for bottom. With this option the player **places a card** at the bottom of the deck. It applies the same rules as with the `t` option. The `d` option is for discard. With this option the player can discard a card
