# Welcome
This is where I'll be uploading files regarding ELE124 assignments.

## Homework Files
- [Homework 1 - Question 2](hw1_q1.c)
- [Homework 1 - Question 3](hw_q3.c)
- [Homework 1 - Question 4](hw_q4b.c)

## Latest Posts
{% for post in site.posts %}
- [{{ post.title }}]({{ post.url }}) - {{ post.date | date: "%B %d, %Y" }}
{% endfor %}
