# Christmas Tree Generator in C

This is a simple program written in C that generates a colorful Christmas tree in the terminal.

## How It Works

The program uses ASCII characters to draw a Christmas tree. It uses different characters to represent the leaves of the tree and the trunk. The color of the leaves can be either green or red, chosen randomly.

### Color Generation

The colors in the terminal are generated using ANSI escape codes. These are special sequences of characters that can control the cursor location, color, and other options in text terminals. 

In this program, the escape codes are used to change the color of the output text. The code `\033[32m` changes the color to green and `\033[31m` changes the color to red. The code `\033[0m` resets the color back to the terminal default.

The color of each leaf is chosen randomly. The `rand() % randomness` expression generates a random number between 0 and `randomness - 1`. If this number is 1, the leaf is colored green; otherwise, it's colored red.

## Compilation

To compile the program, you can use any C compiler like gcc. Here's how you can do it:

```bash
gcc -o christmas christmas.c
```

This will create an executable named `christmas`.

## Running the Program

To run the program, you just need to execute the binary created during the compilation:

```bash
./christmas
```

This will display the Christmas tree in your terminal.

## Customization

You can customize the tree by modifying the `ht` variable in the `main` function. This variable determines the height of the tree.

## Note

This program uses ANSI escape codes to color the output. These codes may not work in all terminal emulators.

## LICENSE
This code is licensed under the MIT license.
