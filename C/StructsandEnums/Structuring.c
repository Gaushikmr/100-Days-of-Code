#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define MAX_CHARACTERS 1005
#define MAX_PARAGRAPHS 5

struct word {
    char* data;
};

struct sentence {
    struct word* data;
    int word_count;//denotes number of words in a sentence
};

struct paragraph {
    struct sentence* data  ;
    int sentence_count;//denotes number of sentences in a paragraph
};

struct document {
    struct paragraph* data;
    int paragraph_count;//denotes number of paragraphs in a document
};
struct document get_document(char* text) {
struct document doc;




    doc.data = malloc(sizeof(struct paragraph) * 5);


    doc.paragraph_count = 0;




    for (int p=0; p<5; p++) {


        doc.data[p].data = malloc(sizeof(struct sentence) * 16);


        doc.data[p].sentence_count = 0;


        for (int s = 0; s < 16; s++) {


          doc.data[p].data[s].data = malloc(sizeof(struct word) * 128);


          doc.data[p].data[s].word_count = 0;


          for (int w = 0; w < 128; w++){


              doc.data[p].data[s].data[w].data = malloc(sizeof(char) * 256);


            }


        }


    }




    int p = 0, s = 0, w = 0, c = 0;


    


    for (int i = 0; i<strlen(text); i++) {




        if (text[i] == ' '){


            doc.data[p].data[s].data[w].data[c] = '\0';


            doc.data[p].data[s].word_count++;


            c = 0;


            w++;


            continue;


        }




        if (text[i] == '.'){


            doc.data[p].data[s].data[w].data[c] = '\0';


            doc.data[p].data[s].word_count++;


            doc.data[p].sentence_count++;


            c = 0; w = 0;


            s++;


            continue;


        }




        if (text[i] == '\n'){


            doc.paragraph_count++;


            c = 0; w = 0; s = 0;


            p++;


            continue;;


        }




        doc.data[p].data[s].data[w].data[c++] = text[i];




    }




    return doc;





}

struct word kth_word_in_mth_sentence_of_nth_paragraph(struct document Doc, int k, int m, int n) {
return Doc.data[n-1].data[m-1].data[k-1];
}

struct sentence kth_sentence_in_mth_paragraph(struct document Doc, int k, int m) { 
 return Doc.data[m-1].data[k-1];
}

struct paragraph kth_paragraph(struct document Doc, int k) {
return Doc.data[k-1];
}


