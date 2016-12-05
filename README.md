## cs50_pset3

### Usage
This is my solution for Problem Set 3 of Harvard’s CS50 course.  The solution contains multiple files, each with a unique solution.

# Ceasar's Cipher
Encrypts messages by "rotating" each letter by _k_ positions. In other words, if p is some plaintext (i.e., an unencrypted message), pi is the ith character in p, and k is a secret key (i.e., a non-negative integer), then each letter, ci, in the ciphertext, c, is computed as:

ci = (pi + k) % 26


# Vigenere
Vigenère’s cipher improves upon Caesar’s by encrypting messages using a sequence of keys (or, put another way, a keyword). In other words, if p is some plaintext and k is a keyword (i.e., an alphbetical string, whereby A and a represent 0, while Z and z represent 25), then each letter, ci, in the ciphertext, c, is computed as:

ci = (pi + kj) % 26
