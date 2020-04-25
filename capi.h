
typedef long unsigned int size_t;
typedef __builtin_va_list __gnuc_va_list;
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;
typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;
typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;
typedef __int8_t __int_least8_t;
typedef __uint8_t __uint_least8_t;
typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
typedef __int64_t __int_least64_t;
typedef __uint64_t __uint_least64_t;
typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;
typedef int __daddr_t;
typedef int __key_t;
typedef int __clockid_t;
typedef void * __timer_t;
typedef long int __blksize_t;
typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;
typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;
typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;
typedef long int __fsword_t;
typedef long int __ssize_t;
typedef long int __syscall_slong_t;
typedef unsigned long int __syscall_ulong_t;
typedef __off64_t __loff_t;
typedef char *__caddr_t;
typedef long int __intptr_t;
typedef unsigned int __socklen_t;
typedef int __sig_atomic_t;
typedef struct
{
  int __count;
  union
  {
    unsigned int __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;
typedef struct _G_fpos_t
{
  __off_t __pos;
  __mbstate_t __state;
} __fpos_t;
typedef struct _G_fpos64_t
{
  __off64_t __pos;
  __mbstate_t __state;
} __fpos64_t;
struct _IO_FILE;
typedef struct _IO_FILE __FILE;
struct _IO_FILE;
typedef struct _IO_FILE FILE;
struct _IO_FILE;
struct _IO_marker;
struct _IO_codecvt;
struct _IO_wide_data;
typedef void _IO_lock_t;
struct _IO_FILE
{
  int _flags;
  char *_IO_read_ptr;
  char *_IO_read_end;
  char *_IO_read_base;
  char *_IO_write_base;
  char *_IO_write_ptr;
  char *_IO_write_end;
  char *_IO_buf_base;
  char *_IO_buf_end;
  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;
  struct _IO_marker *_markers;
  struct _IO_FILE *_chain;
  int _fileno;
  int _flags2;
  __off_t _old_offset;
  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];
  _IO_lock_t *_lock;
  __off64_t _offset;
  struct _IO_codecvt *_codecvt;
  struct _IO_wide_data *_wide_data;
  struct _IO_FILE *_freeres_list;
  void *_freeres_buf;
  size_t __pad5;
  int _mode;
  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];
};
typedef __gnuc_va_list va_list;
typedef __off_t off_t;
typedef __ssize_t ssize_t;
typedef __fpos_t fpos_t;
extern FILE *stdin;
extern FILE *stdout;
extern FILE *stderr;
extern int remove (const char *__filename) __attribute__ ((__nothrow__ , __leaf__));
extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ , __leaf__));
extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) __attribute__ ((__nothrow__ , __leaf__));
extern FILE *tmpfile (void) ;
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;
extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;
extern char *tempnam (const char *__dir, const char *__pfx)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;
extern int fclose (FILE *__stream);
extern int fflush (FILE *__stream);
extern int fflush_unlocked (FILE *__stream);
extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) ;
extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;
extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ , __leaf__)) ;
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__ , __leaf__)) ;
extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ , __leaf__)) ;
extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));
extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ , __leaf__));
extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ , __leaf__));
extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);
extern int printf (const char *__restrict __format, ...);
extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) __attribute__ ((__nothrow__));
extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);
extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);
extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));
extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));
extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));
extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));
extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;
extern int scanf (const char *__restrict __format, ...) ;
extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__));
extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf") ;
extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf") ;
extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ , __leaf__));
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__scanf__, 2, 0)));
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__format__ (__scanf__, 2, 0)));
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);
extern int getchar (void);
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
extern int fgetc_unlocked (FILE *__stream);
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);
extern int putchar (int __c);
extern int fputc_unlocked (int __c, FILE *__stream);
extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);
extern int getw (FILE *__stream);
extern int putw (int __w, FILE *__stream);
extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;
extern __ssize_t __getdelim (char **__restrict __lineptr,
                             size_t *__restrict __n, int __delimiter,
                             FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
                           size_t *__restrict __n, int __delimiter,
                           FILE *__restrict __stream) ;
extern __ssize_t getline (char **__restrict __lineptr,
                          size_t *__restrict __n,
                          FILE *__restrict __stream) ;
extern int fputs (const char *__restrict __s, FILE *__restrict __stream);
extern int puts (const char *__s);
extern int ungetc (int __c, FILE *__stream);
extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);
extern int fseek (FILE *__stream, long int __off, int __whence);
extern long int ftell (FILE *__stream) ;
extern void rewind (FILE *__stream);
extern int fseeko (FILE *__stream, __off_t __off, int __whence);
extern __off_t ftello (FILE *__stream) ;
extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);
extern int fsetpos (FILE *__stream, const fpos_t *__pos);
extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int feof (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern void perror (const char *__s);
extern int sys_nerr;
extern const char *const sys_errlist[];
extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern FILE *popen (const char *__command, const char *__modes) ;
extern int pclose (FILE *__stream);
extern char *ctermid (char *__s) __attribute__ ((__nothrow__ , __leaf__));
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int __uflow (FILE *);
extern int __overflow (FILE *, int);

typedef struct TessResultRenderer TessResultRenderer;
typedef struct TessTextRenderer TessTextRenderer;
typedef struct TessHOcrRenderer TessHOcrRenderer;
typedef struct TessPDFRenderer TessPDFRenderer;
typedef struct TessUnlvRenderer TessUnlvRenderer;
typedef struct TessBoxTextRenderer TessBoxTextRenderer;
typedef struct TessBaseAPI TessBaseAPI;
typedef struct TessPageIterator TessPageIterator;
typedef struct TessResultIterator TessResultIterator;
typedef struct TessMutableIterator TessMutableIterator;
typedef struct TessChoiceIterator TessChoiceIterator;
typedef enum TessOcrEngineMode {
  OEM_TESSERACT_ONLY,
  OEM_LSTM_ONLY,
  OEM_TESSERACT_LSTM_COMBINED,
  OEM_DEFAULT
} TessOcrEngineMode;
typedef enum TessPageSegMode {
  PSM_OSD_ONLY,
  PSM_AUTO_OSD,
  PSM_AUTO_ONLY,
  PSM_AUTO,
  PSM_SINGLE_COLUMN,
  PSM_SINGLE_BLOCK_VERT_TEXT,
  PSM_SINGLE_BLOCK,
  PSM_SINGLE_LINE,
  PSM_SINGLE_WORD,
  PSM_CIRCLE_WORD,
  PSM_SINGLE_CHAR,
  PSM_SPARSE_TEXT,
  PSM_SPARSE_TEXT_OSD,
  PSM_COUNT
} TessPageSegMode;
typedef enum TessPageIteratorLevel {
  RIL_BLOCK,
  RIL_PARA,
  RIL_TEXTLINE,
  RIL_WORD,
  RIL_SYMBOL
} TessPageIteratorLevel;
typedef enum TessPolyBlockType {
  PT_UNKNOWN,
  PT_FLOWING_TEXT,
  PT_HEADING_TEXT,
  PT_PULLOUT_TEXT,
  PT_EQUATION,
  PT_INLINE_EQUATION,
  PT_TABLE,
  PT_VERTICAL_TEXT,
  PT_CAPTION_TEXT,
  PT_FLOWING_IMAGE,
  PT_HEADING_IMAGE,
  PT_PULLOUT_IMAGE,
  PT_HORZ_LINE,
  PT_VERT_LINE,
  PT_NOISE,
  PT_COUNT
} TessPolyBlockType;
typedef enum TessOrientation {
  ORIENTATION_PAGE_UP,
  ORIENTATION_PAGE_RIGHT,
  ORIENTATION_PAGE_DOWN,
  ORIENTATION_PAGE_LEFT
} TessOrientation;
typedef enum TessParagraphJustification {
  JUSTIFICATION_UNKNOWN,
  JUSTIFICATION_LEFT,
  JUSTIFICATION_CENTER,
  JUSTIFICATION_RIGHT
} TessParagraphJustification;
typedef enum TessWritingDirection {
  WRITING_DIRECTION_LEFT_TO_RIGHT,
  WRITING_DIRECTION_RIGHT_TO_LEFT,
  WRITING_DIRECTION_TOP_TO_BOTTOM
} TessWritingDirection;
typedef enum TessTextlineOrder {
  TEXTLINE_ORDER_LEFT_TO_RIGHT,
  TEXTLINE_ORDER_RIGHT_TO_LEFT,
  TEXTLINE_ORDER_TOP_TO_BOTTOM
} TessTextlineOrder;
typedef struct ETEXT_DESC ETEXT_DESC;
typedef _Bool (*TessCancelFunc)(void* cancel_this, int words);
typedef _Bool (*TessProgressFunc)(ETEXT_DESC* ths, int left, int right, int top,
                                 int bottom);
struct Pix;
struct Boxa;
struct Pixa;
 const char* TessVersion();
 void TessDeleteText(const char* text);
 void TessDeleteTextArray(char** arr);
 void TessDeleteIntArray(const int* arr);
 TessResultRenderer*
TessTextRendererCreate(const char* outputbase);
 TessResultRenderer*
TessHOcrRendererCreate(const char* outputbase);
 TessResultRenderer*
TessHOcrRendererCreate2(const char* outputbase, int font_info);
 TessResultRenderer*
TessAltoRendererCreate(const char* outputbase);
 TessResultRenderer*
TessTsvRendererCreate(const char* outputbase);
 TessResultRenderer* TessPDFRendererCreate(
    const char* outputbase, const char* datadir, int textonly);
 TessResultRenderer*
TessUnlvRendererCreate(const char* outputbase);
 TessResultRenderer*
TessBoxTextRendererCreate(const char* outputbase);
 TessResultRenderer*
TessLSTMBoxRendererCreate(const char* outputbase);
 TessResultRenderer*
TessWordStrBoxRendererCreate(const char* outputbase);
 void TessDeleteResultRenderer(TessResultRenderer* renderer);
 void TessResultRendererInsert(TessResultRenderer* renderer,
                                                 TessResultRenderer* next);
 TessResultRenderer*
TessResultRendererNext(TessResultRenderer* renderer);
 int TessResultRendererBeginDocument(
    TessResultRenderer* renderer, const char* title);
 int TessResultRendererAddImage(TessResultRenderer* renderer,
                                                   TessBaseAPI* api);
 int
TessResultRendererEndDocument(TessResultRenderer* renderer);
 const char*
TessResultRendererExtention(TessResultRenderer* renderer);
 const char*
TessResultRendererTitle(TessResultRenderer* renderer);
 int TessResultRendererImageNum(TessResultRenderer* renderer);
 TessBaseAPI* TessBaseAPICreate();
 void TessBaseAPIDelete(TessBaseAPI* handle);
 size_t TessBaseAPIGetOpenCLDevice(TessBaseAPI* handle,
                                                     void** device);
 void TessBaseAPISetInputName(TessBaseAPI* handle,
                                                const char* name);
 const char* TessBaseAPIGetInputName(TessBaseAPI* handle);
 void TessBaseAPISetInputImage(TessBaseAPI* handle,
                                                 struct Pix* pix);
 struct Pix* TessBaseAPIGetInputImage(TessBaseAPI* handle);
 int TessBaseAPIGetSourceYResolution(TessBaseAPI* handle);
 const char* TessBaseAPIGetDatapath(TessBaseAPI* handle);
 void TessBaseAPISetOutputName(TessBaseAPI* handle,
                                                 const char* name);
 int TessBaseAPISetVariable(TessBaseAPI* handle,
                                               const char* name,
                                               const char* value);
 int TessBaseAPISetDebugVariable(TessBaseAPI* handle,
                                                    const char* name,
                                                    const char* value);
 int TessBaseAPIGetIntVariable(const TessBaseAPI* handle,
                                                  const char* name, int* value);
 int TessBaseAPIGetBoolVariable(const TessBaseAPI* handle,
                                                   const char* name,
                                                   int* value);
 int TessBaseAPIGetDoubleVariable(const TessBaseAPI* handle,
                                                     const char* name,
                                                     double* value);
 const char*
TessBaseAPIGetStringVariable(const TessBaseAPI* handle, const char* name);
 void TessBaseAPIPrintVariables(const TessBaseAPI* handle,
                                                  FILE* fp);
 int TessBaseAPIPrintVariablesToFile(
    const TessBaseAPI* handle, const char* filename);
 int TessBaseAPIInit1(TessBaseAPI* handle,
                                        const char* datapath,
                                        const char* language,
                                        TessOcrEngineMode oem, char** configs,
                                        int configs_size);
 int TessBaseAPIInit2(TessBaseAPI* handle,
                                        const char* datapath,
                                        const char* language,
                                        TessOcrEngineMode oem);
 int TessBaseAPIInit3(TessBaseAPI* handle,
                                        const char* datapath,
                                        const char* language);
 int TessBaseAPIInit4(
    TessBaseAPI* handle, const char* datapath, const char* language,
    TessOcrEngineMode mode, char** configs, int configs_size, char** vars_vec,
    char** vars_values, size_t vars_vec_size, int set_only_non_debug_params);
 const char*
TessBaseAPIGetInitLanguagesAsString(const TessBaseAPI* handle);
 char**
TessBaseAPIGetLoadedLanguagesAsVector(const TessBaseAPI* handle);
 char**
TessBaseAPIGetAvailableLanguagesAsVector(const TessBaseAPI* handle);
 int TessBaseAPIInitLangMod(TessBaseAPI* handle,
                                              const char* datapath,
                                              const char* language);
 void TessBaseAPIInitForAnalysePage(TessBaseAPI* handle);
 void TessBaseAPIReadConfigFile(TessBaseAPI* handle,
                                                  const char* filename);
 void TessBaseAPIReadDebugConfigFile(TessBaseAPI* handle,
                                                       const char* filename);
 void TessBaseAPISetPageSegMode(TessBaseAPI* handle,
                                                  TessPageSegMode mode);
 TessPageSegMode
TessBaseAPIGetPageSegMode(const TessBaseAPI* handle);
 char* TessBaseAPIRect(TessBaseAPI* handle,
                                         const unsigned char* imagedata,
                                         int bytes_per_pixel,
                                         int bytes_per_line, int left, int top,
                                         int width, int height);
 void TessBaseAPIClearAdaptiveClassifier(TessBaseAPI* handle);
 void TessBaseAPISetImage(TessBaseAPI* handle,
                                            const unsigned char* imagedata,
                                            int width, int height,
                                            int bytes_per_pixel,
                                            int bytes_per_line);
 void TessBaseAPISetImage2(TessBaseAPI* handle,
                                             struct Pix* pix);
 void TessBaseAPISetSourceResolution(TessBaseAPI* handle,
                                                       int ppi);
 void TessBaseAPISetRectangle(TessBaseAPI* handle, int left,
                                                int top, int width, int height);
 struct Pix*
TessBaseAPIGetThresholdedImage(TessBaseAPI* handle);
 struct Boxa* TessBaseAPIGetRegions(TessBaseAPI* handle,
                                                      struct Pixa** pixa);
 struct Boxa* TessBaseAPIGetTextlines(TessBaseAPI* handle,
                                                        struct Pixa** pixa,
                                                        int** blockids);
 struct Boxa*
TessBaseAPIGetTextlines1(TessBaseAPI* handle, int raw_image, int raw_padding,
                         struct Pixa** pixa, int** blockids, int** paraids);
 struct Boxa* TessBaseAPIGetStrips(TessBaseAPI* handle,
                                                     struct Pixa** pixa,
                                                     int** blockids);
 struct Boxa* TessBaseAPIGetWords(TessBaseAPI* handle,
                                                    struct Pixa** pixa);
 struct Boxa*
TessBaseAPIGetConnectedComponents(TessBaseAPI* handle, struct Pixa** cc);
 struct Boxa* TessBaseAPIGetComponentImages(
    TessBaseAPI* handle, TessPageIteratorLevel level, int text_only,
    struct Pixa** pixa, int** blockids);
 struct Boxa* TessBaseAPIGetComponentImages1(
    TessBaseAPI* handle, TessPageIteratorLevel level, int text_only,
    int raw_image, int raw_padding, struct Pixa** pixa, int** blockids,
    int** paraids);
 int
TessBaseAPIGetThresholdedImageScaleFactor(const TessBaseAPI* handle);
 TessPageIterator*
TessBaseAPIAnalyseLayout(TessBaseAPI* handle);
 int TessBaseAPIRecognize(TessBaseAPI* handle,
                                            ETEXT_DESC* monitor);
 int TessBaseAPIRecognizeForChopTest(TessBaseAPI* handle,
                                                       ETEXT_DESC* monitor);
 int TessBaseAPIProcessPages(TessBaseAPI* handle,
                                                const char* filename,
                                                const char* retry_config,
                                                int timeout_millisec,
                                                TessResultRenderer* renderer);
 int TessBaseAPIProcessPage(TessBaseAPI* handle,
                                               struct Pix* pix, int page_index,
                                               const char* filename,
                                               const char* retry_config,
                                               int timeout_millisec,
                                               TessResultRenderer* renderer);
 TessResultIterator*
TessBaseAPIGetIterator(TessBaseAPI* handle);
 TessMutableIterator*
TessBaseAPIGetMutableIterator(TessBaseAPI* handle);
 char* TessBaseAPIGetUTF8Text(TessBaseAPI* handle);
 char* TessBaseAPIGetHOCRText(TessBaseAPI* handle,
                                                int page_number);
 char* TessBaseAPIGetAltoText(TessBaseAPI* handle,
                                                int page_number);
 char* TessBaseAPIGetTsvText(TessBaseAPI* handle,
                                               int page_number);
 char* TessBaseAPIGetBoxText(TessBaseAPI* handle,
                                               int page_number);
 char* TessBaseAPIGetLSTMBoxText(TessBaseAPI* handle,
                                                   int page_number);
 char* TessBaseAPIGetWordStrBoxText(TessBaseAPI* handle,
                                                      int page_number);
 char* TessBaseAPIGetUNLVText(TessBaseAPI* handle);
 int TessBaseAPIMeanTextConf(TessBaseAPI* handle);
 int* TessBaseAPIAllWordConfidences(TessBaseAPI* handle);
 int TessBaseAPIAdaptToWordStr(TessBaseAPI* handle,
                                                  TessPageSegMode mode,
                                                  const char* wordstr);
 void TessBaseAPIClear(TessBaseAPI* handle);
 void TessBaseAPIEnd(TessBaseAPI* handle);
 int TessBaseAPIIsValidWord(TessBaseAPI* handle,
                                              const char* word);
 int TessBaseAPIGetTextDirection(TessBaseAPI* handle,
                                                    int* out_offset,
                                                    float* out_slope);
 const char* TessBaseAPIGetUnichar(TessBaseAPI* handle,
                                                     int unichar_id);
 void TessBaseAPISetMinOrientationMargin(TessBaseAPI* handle,
                                                           double margin);
 void TessPageIteratorDelete(TessPageIterator* handle);
 TessPageIterator*
TessPageIteratorCopy(const TessPageIterator* handle);
 void TessPageIteratorBegin(TessPageIterator* handle);
 int TessPageIteratorNext(TessPageIterator* handle,
                                             TessPageIteratorLevel level);
 int TessPageIteratorIsAtBeginningOf(
    const TessPageIterator* handle, TessPageIteratorLevel level);
 int TessPageIteratorIsAtFinalElement(
    const TessPageIterator* handle, TessPageIteratorLevel level,
    TessPageIteratorLevel element);
 int TessPageIteratorBoundingBox(
    const TessPageIterator* handle, TessPageIteratorLevel level, int* left,
    int* top, int* right, int* bottom);
 TessPolyBlockType
TessPageIteratorBlockType(const TessPageIterator* handle);
 struct Pix* TessPageIteratorGetBinaryImage(
    const TessPageIterator* handle, TessPageIteratorLevel level);
 struct Pix* TessPageIteratorGetImage(
    const TessPageIterator* handle, TessPageIteratorLevel level, int padding,
    struct Pix* original_image, int* left, int* top);
 int TessPageIteratorBaseline(const TessPageIterator* handle,
                                                 TessPageIteratorLevel level,
                                                 int* x1, int* y1, int* x2,
                                                 int* y2);
 void TessPageIteratorOrientation(
    TessPageIterator* handle, TessOrientation* orientation,
    TessWritingDirection* writing_direction, TessTextlineOrder* textline_order,
    float* deskew_angle);
 void TessPageIteratorParagraphInfo(
    TessPageIterator* handle, TessParagraphJustification* justification,
    int* is_list_item, int* is_crown, int* first_line_indent);
 void TessResultIteratorDelete(TessResultIterator* handle);
 TessResultIterator*
TessResultIteratorCopy(const TessResultIterator* handle);
 TessPageIterator*
TessResultIteratorGetPageIterator(TessResultIterator* handle);
 const TessPageIterator*
TessResultIteratorGetPageIteratorConst(const TessResultIterator* handle);
 TessChoiceIterator*
TessResultIteratorGetChoiceIterator(const TessResultIterator* handle);
 int TessResultIteratorNext(TessResultIterator* handle,
                                               TessPageIteratorLevel level);
 char* TessResultIteratorGetUTF8Text(
    const TessResultIterator* handle, TessPageIteratorLevel level);
 float TessResultIteratorConfidence(
    const TessResultIterator* handle, TessPageIteratorLevel level);
 const char*
TessResultIteratorWordRecognitionLanguage(const TessResultIterator* handle);
 const char* TessResultIteratorWordFontAttributes(
    const TessResultIterator* handle, int* is_bold, int* is_italic,
    int* is_underlined, int* is_monospace, int* is_serif, int* is_smallcaps,
    int* pointsize, int* font_id);
 int
TessResultIteratorWordIsFromDictionary(const TessResultIterator* handle);
 int
TessResultIteratorWordIsNumeric(const TessResultIterator* handle);
 int
TessResultIteratorSymbolIsSuperscript(const TessResultIterator* handle);
 int
TessResultIteratorSymbolIsSubscript(const TessResultIterator* handle);
 int
TessResultIteratorSymbolIsDropcap(const TessResultIterator* handle);
 void TessChoiceIteratorDelete(TessChoiceIterator* handle);
 int TessChoiceIteratorNext(TessChoiceIterator* handle);
 const char*
TessChoiceIteratorGetUTF8Text(const TessChoiceIterator* handle);
 float
TessChoiceIteratorConfidence(const TessChoiceIterator* handle);
 ETEXT_DESC* TessMonitorCreate();
 void TessMonitorDelete(ETEXT_DESC* monitor);
 void TessMonitorSetCancelFunc(ETEXT_DESC* monitor,
                                                 TessCancelFunc cancelFunc);
 void TessMonitorSetCancelThis(ETEXT_DESC* monitor,
                                                 void* cancelThis);
 void* TessMonitorGetCancelThis(ETEXT_DESC* monitor);
 void
TessMonitorSetProgressFunc(ETEXT_DESC* monitor, TessProgressFunc progressFunc);
 int TessMonitorGetProgress(ETEXT_DESC* monitor);
 void TessMonitorSetDeadlineMSecs(ETEXT_DESC* monitor,
                                                    int deadline);
