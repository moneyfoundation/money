Money integration/staging tree
================================

![](https://raw.githubusercontent.com/moneyfoundation/money/b2211281541530590168d2cee0567e6b673b8a3e/src/qt/res/images/wallet_bgcoin.png)

http://www.moneyalliance.net

Copyright (c) 2009-2014 Bitcoin Developers
Copyright (c) 2011-2014 Litecoin Developers
Copyright (c) 2011-2014 Worldcoin Developers
Copyright (c) 2013-2014 Money Developers

What is Money?
----------------

Money is an improved version of Bitcoin using Scrypt as a proof-of-work algorithm.
 - 30 second block targets
 - 1 blocks to retarget difficulty
 - starts at 64 coins per block
 - subsidy is reduced 1% every week to a minimum reward of 1 $$$ per block
 - ~265 million total coins


For more information, as well as an immediately usable, binary version of
the Money client software, see http://www.moneyalliance.net.

License
-------

Money is released under the terms of the MIT license. See `COPYING` for more
information or see http://opensource.org/licenses/MIT.

Development process
-------------------

Developers work in their own trees, then submit pull requests when they think
their feature or bug fix is ready.

If it is a simple/trivial/non-controversial change, then one of the Money
development team members simply pulls it.

If it is a *more complicated or potentially controversial* change, then the patch
submitter will be asked to start a discussion (if they haven't already) on irc at
irc.freenode.net #money

The patch will be accepted if there is broad consensus that it is a good thing.
Developers should expect to rework and resubmit patches if the code doesn't
match the project's coding conventions (see `doc/coding.txt`) or are
controversial.

The `master` branch is regularly built and tested, but is not guaranteed to be
completely stable. [Tags](https://github.com/bitcoin/bitcoin/tags) are created
regularly to indicate new official, stable release versions of Money.

Testing
-------

Testing and code review is the bottleneck for development; we get more pull
requests than we can review and test. Please be patient and help out, and
remember this is a security-critical project where any mistake might cost people
lots of money.

### Automated Testing

Developers are strongly encouraged to write unit tests for new code, and to
submit new unit tests for old code.

Unit tests for the core code are in `src/test/`. To compile and run them:

    cd src; make -f makefile.unix test

Unit tests for the GUI code are in `src/qt/test/`. To compile and run them:

    qmake MONEY_QT_TEST=1 -o Makefile.test money-qt.pro
    make -f Makefile.test
    ./money-qt_test
