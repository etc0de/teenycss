#ifndef TEENYCSS_CSSLIB_H_
#define TEENYCSS_CSSLIB_H_

typedef struct teenycss_rules teenycss_ruleset;

teenycss_ruleset *teenycss_Parse(const char *contents);

int teenycss_ParseAdditional(const char *contents);


typedef struct teenycss_hashmap teenycss_hashmap;

#define TEENYCSS_ATTRIBUTEFILTERTYPE_EXISTS 0
#define TEENYCSS_ATTRIBUTEFILTERTYPE_MATCHFULL 1
#define TEENYCSS_ATTRIBUTEFILTERTYPE_MATCHBEGIN 2
#define TEENYCSS_ATTRIBUTEFILTERTYPE_MATCHEND 3
#define TEENYCSS_ATTRIBUTEFILTERTYPE_MATCHCONTAINS 4

typedef struct teenycss_attributeselectorvalue {
    int filtertype;
    char *filtervalue;
} teenycss_attributeselectorvalue;

typedef struct teenycss_filteritem {
    char *tagname;
    teenycss_hashmap *attribute_selectors;
} teenycss_filteritem;

typedef struct teenycss_rule {
    int filters_count;
    teenycss_filteritem **filters;

    teenycss_hashmap *attribute_values;
} teenycss_rule;

typedef struct teenycss_ruleset {
    int rules_count;
    teenycss_rule **rules;
} teenycss_ruleset;




#endif  // TEENYCSS_CSSLIB_H_
