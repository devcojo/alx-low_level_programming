--- a/mystring.c
+++ b/mystring.c
@@ -1,17 +1,20 @@
 /**
- * _strncat - Concatenates two strings, using at most n bytes from src.
+ * _strncat - Concatenates two strings.
  * @dest: Pointer to the destination string.
  * @src: Pointer to the source string.
  * @n: Maximum number of bytes to be concatenated.
  *
- * Return: Pointer to the resulting string dest.
+ * Return: Pointer to the resulting string @dest.
  */
 char *_strncat(char *dest, char *src, int n)
 {
-       int dest_len = 0;
-       int i;
+       int dest_len = 0;
+       int i;
 
-       /* Calculate the length of dest */
+       /* Calculate the length of dest */
        while (dest[dest_len] != '\0')
                dest_len++;
 
+       /* Append src to dest, up to a maximum of n bytes */
        for (i = 0; i < n && src[i] != '\0'; i++)
                dest[dest_len++] = src[i];
 
-       dest[dest_len] = '\0';
+       /* Add the terminating null byte */
+       dest[dest_len] = '\0';
 
        return (dest);
 }
