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

