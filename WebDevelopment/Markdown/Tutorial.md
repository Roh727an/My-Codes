# TOPIC -> Italics and Bold
To make a phrase italic in Markdown, you can surround words with an underscore (_ ). For example, _this_ word would become italic.
e.g : Hi My _Name_ is _Rohan_

Similarly, to bold phrases in Markdown, you can surround words with two asterisks ( ** ). This will **really** get your point across
e.g : Hi My _Name_ is **Rohan**

Place the asterisks **_on the outside_** to make both bold and italic.
e.g: Hi My name is **_Rohan_**

# TOPIC -> Headers
To make headers in Markdown, you preface the phrase with a hash mark (#). You place the same number of hash marks as the size of  
the header you want. 
For example, for a header one, you'd use one hash mark (# Header One), while for a header three, you'd use three (### Header Three).
e.g.:
# Header one
## Header two
### Header three
#### Header four
##### Header five
###### Header six

# TOPIC -> Links 
There are two different link types in Markdown, but both of them render the exact same way. The first link style is called an 
inline link. To create an inline link, you wrap the link text in brackets ( [ ] ), and then you wrap the link in 
parentheses ( ( ) ). For example, to create a hyperlink to www.github.com, with a link 
text that says, Visit GitHub!, you'd write this in Markdown: [Visit GitHub!](www.github.com).

e.g.: 
[Google](www.google.com)  
[**Go to GitHub**](www.github.com)
The other link type is called a reference link. As the name implies, the link is actually a reference to another place in the document. Here's an example of what we mean:

     Here's [a link to something else][another place].
     Here's [yet another link][another-link].
     And now back to [the first link][another place].

     [another place]: www.github.com
     [another-link]: www.google.com
  
The "references" above are the second set of brackets: [another place] and [another-link]. At the bottom of a Markdown document, these brackets are defined as proper links to outside websites. An advantage of the reference link style is that multiple links to the same place only need to be updated once. For example, if we decide to make all of the [another place] links go somewhere else, we only have to change the single reference link.

Reference links don't appear in the rendered Markdown. You define them by providing the same tag name wrapped in brackets, followed by a colon, followed by the link.

e.g.:
In the box below, we've started writing out some reference links. You'll need to finish them up! Call the first reference tag "a fun place", and make it link to www.zombo.com; make the second link out to www.stumbleupon.com.
<br>
Do you want to [see something fun][a fun place]?
<br>
Well, do I have [the website for you][another fun place]!
<br>
[a fun place]:www.zombo.com
<br>
[another fun place]:www.stumbleupon.com 

# TOPIC -> Images
Images also have two styles, just like links, and both of them render the exact same way. The difference between links and **images is that images are prefaced with an exclamation point ( ! ).**

### Inline Image Link
The first image style is called an inline image link. To create an inline image link, enter an exclamation point ( ! ), wrap the alt text in brackets ( [ ] ), and then wrap the link in parentheses ( ( ) ). (Alt text is a phrase or sentence that describes the image for the visually impaired.)

For example, to create an inline image link to https://octodex.github.com/images/bannekat.png, with an alt text that says, Benjamin Bannekat, you'd write this in Markdown: ![Benjamin Bannekat](https://octodex.github.com/images/bannekat.png).

### Reference Image Link
For a reference image, you'll follow the same pattern as a reference link. You'll precede the Markdown with an exclamation point, then provide two brackets for the alt text, and then two more for the image tag, like this: 
![The founding father][Father] At the bottom of your Markdown page, you'll define an image for the tag, like this: [Father]: http://octodex.github.com/images/founding-father.jpg.

e.g: 

![Black cat][Black]

![Orange cat][Orange]

[Black]: https://upload.wikimedia.org/wikipedia/commons/a/a3/81_INF_DIV_SSI.jpg
[Orange]:http://icons.iconarchive.com/icons/google/noto-emoji-animals-nature/256/22221-cat-icon.png

# Topic -> Blockquotes
If you need to call special attention to a quote from another source, or design a pull quote for a magazine article, then Markdown's blockquote syntax will be useful. A blockquote is a sentence or paragraph that's been specially formatted to draw attention to the reader. For example:

"The sin of doing nothing is the deadliest of all the seven sins. It has been said that for evil men to accomplish their purpose it is only necessary that good men should do nothing."

To create a block quote, all you have to do is preface a line with the "greater than" caret (>). For example:

> "In a few moments he was barefoot, his stockings folded in his pockets and his
  canvas shoes dangling by their knotted laces over his shoulders and, picking a
  pointed salt-eaten stick out of the jetsam among the rocks, he clambered down
  the slope of the breakwater."

You can also place a caret character on each line of the quote. This is particularly useful if your quote spans multiple paragraphs. For example:

> His words seemed to have struck some deep chord in his own nature. Had he spoken
of himself, of himself as he was or wished to be? Stephen watched his face for some
moments in silence. A cold sadness was there. He had spoken of himself, of his own
loneliness which he feared.
>
> —Of whom are you speaking? Stephen asked at length.
>
> Cranly did not answer.
# Topic -> Lists
There are two types of lists in the known universe: unordered and ordered. That's a fancy way of saying that there are lists with bullet points, and lists with numbers.

## Unordered List
To create an unordered list, you'll want to preface each item in the list with an asterisk ( * ). Each list item also gets its own line. For example, a grocery list in Markdown might look like this:
This Markdown list would render into the following bullet points:

* Milk
* Eggs
* Salmon
* Butter
## Ordered List
An ordered list is prefaced with numbers, instead of asterisks. Take a look at this recipe:

1. Crack three eggs over a bowl
2. Pour a gallon of milk into the bowl
3. Rub the salmon vigorously with butter
4. Drop the salmon into the egg-milk bowl

Occasionally, you might find the need to make a list with more depth, or, to nest one list within another. Have no fear, because the Markdown syntax is exactly the same. All you have to do is to remember to indent each asterisk one space more than the preceding item.

For example, in the following list, we're going to add some sub-lists to each "main" list item, describing the people in detail:

* Tintin
   * A reporter
   * Has poofy orange hair
   * Friends with the world's most awesome dog
* Haddock
   * A sea captain
   * Has a fantastic beard
   * Loves whiskey
   * Possibly also scotch?
