
typedef struct _SIMPLE_GUI_BITMAP {
  unsigned int XSize;
  unsigned int YSize;
  unsigned int BytesPerLine;
  unsigned int BitsPerPixel;
  const unsigned char *pData;
} SIMPLE_GUI_BITMAP;

extern SIMPLE_GUI_BITMAP bmicon;
