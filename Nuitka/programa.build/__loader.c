
/* Code to register embedded modules for meta path based loading if any. */

#include <Python.h>

/* Use a hex version of our own to compare for versions. We do not care about pre-releases */
#if PY_MICRO_VERSION < 16
#define PYTHON_VERSION (PY_MAJOR_VERSION * 256 + PY_MINOR_VERSION * 16 + PY_MICRO_VERSION)
#else
#define PYTHON_VERSION (PY_MAJOR_VERSION * 256 + PY_MINOR_VERSION * 16 + 15)
#endif

#include "nuitka/constants_blob.h"

#include "nuitka/tracing.h"
#include "nuitka/unfreezing.h"

/* Type bool */
#ifndef __cplusplus
#include "stdbool.h"
#endif

#if 42 > 0
static unsigned char *bytecode_data[42];
#else
static unsigned char **bytecode_data = NULL;
#endif

/* Table for lookup to find compiled or bytecode modules included in this
 * binary or module, or put along this binary as extension modules. We do
 * our own loading for each of these.
 */
extern PyObject *modulecode_PIL(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$BlpImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$BmpImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$BufrStubImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$CurImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$DcxImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$DdsImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$EpsImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ExifTags(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$FliImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$FpxImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$FtexImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$GbrImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$GifImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$GimpGradientFile(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$GimpPaletteFile(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$GribStubImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$Hdf5StubImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$IcnsImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$IcoImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$Image(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageChops(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageCms(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageColor(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageFile(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageFilter(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageGrab(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageMode(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageOps(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImagePalette(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageSequence(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageShow(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageTk(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageWin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImtImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$IptcImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$Jpeg2KImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$JpegImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$JpegPresets(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$McIdasImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$MicImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$MpegImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$MpoImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$MspImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PaletteFile(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PalmImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PcdImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PcxImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PdfImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PdfParser(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PixarImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PngImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PpmImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PsdImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PyAccess(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$SgiImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$SpiderImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$SunImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$TgaImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$TiffImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$TiffTags(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$WebPImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$WmfImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$XVThumbImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$XbmImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$XpmImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$_binary(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$_deprecate(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$_util(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$_version(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$features(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode___main__(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_certifi(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_certifi$core(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer$api(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer$assets(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer$cd(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer$constant(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer$legacy(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer$models(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer$utils(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer$version(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_commctrl(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_customtkinter(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_customtkinter$windows(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_customtkinter$windows$ctk_input_dialog(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_customtkinter$windows$ctk_tk(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_customtkinter$windows$ctk_toplevel(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_customtkinter$windows$widgets(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_customtkinter$windows$widgets$appearance_mode(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_customtkinter$windows$widgets$appearance_mode$appearance_mode_base_class(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_customtkinter$windows$widgets$appearance_mode$appearance_mode_tracker(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_customtkinter$windows$widgets$core_rendering(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_customtkinter$windows$widgets$core_rendering$ctk_canvas(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_customtkinter$windows$widgets$core_rendering$draw_engine(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_customtkinter$windows$widgets$core_widget_classes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_customtkinter$windows$widgets$core_widget_classes$ctk_base_class(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_customtkinter$windows$widgets$core_widget_classes$dropdown_menu(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_customtkinter$windows$widgets$ctk_button(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_customtkinter$windows$widgets$ctk_checkbox(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_customtkinter$windows$widgets$ctk_combobox(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_customtkinter$windows$widgets$ctk_entry(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_customtkinter$windows$widgets$ctk_frame(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_customtkinter$windows$widgets$ctk_label(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_customtkinter$windows$widgets$ctk_optionmenu(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_customtkinter$windows$widgets$ctk_progressbar(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_customtkinter$windows$widgets$ctk_radiobutton(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_customtkinter$windows$widgets$ctk_scrollable_frame(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_customtkinter$windows$widgets$ctk_scrollbar(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_customtkinter$windows$widgets$ctk_segmented_button(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_customtkinter$windows$widgets$ctk_slider(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_customtkinter$windows$widgets$ctk_switch(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_customtkinter$windows$widgets$ctk_tabview(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_customtkinter$windows$widgets$ctk_textbox(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_customtkinter$windows$widgets$font(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_customtkinter$windows$widgets$font$ctk_font(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_customtkinter$windows$widgets$font$font_manager(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_customtkinter$windows$widgets$image(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_customtkinter$windows$widgets$image$ctk_image(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_customtkinter$windows$widgets$scaling(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_customtkinter$windows$widgets$scaling$scaling_base_class(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_customtkinter$windows$widgets$scaling$scaling_tracker(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_customtkinter$windows$widgets$theme(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_customtkinter$windows$widgets$theme$theme_manager(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_customtkinter$windows$widgets$utility(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_customtkinter$windows$widgets$utility$utility_functions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_darkdetect(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_darkdetect$_dummy(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_darkdetect$_windows_detect(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$_common(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$_version(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$easter(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$parser(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$parser$_parser(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$parser$isoparser(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$relativedelta(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$rrule(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$tz(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$tz$_common(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$tz$_factories(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$tz$tz(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$tz$win(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$zoneinfo(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_et_xmlfile(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_et_xmlfile$xmlfile(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$core(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$idnadata(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$intranges(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$package_data(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$uts46data(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$_identifier(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$async_utils(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$bccache(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$compiler(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$constants(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$debug(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$defaults(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$environment(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$exceptions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$filters(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$idtracking(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$lexer(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$loaders(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$nodes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$optimizer(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$parser(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$runtime(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$tests(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$utils(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$visitor(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_markupsafe(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_markupsafe$_native(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$__config__(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_distributor_init(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_globals(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_pytesttester(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_typing(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_typing$_array_like(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_typing$_char_codes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_typing$_dtype_like(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_typing$_nbit(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_typing$_nested_sequence(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_typing$_scalars(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_typing$_shape(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_utils(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_utils$_inspect(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_version(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$compat(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$compat$py3k(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_add_newdocs(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_add_newdocs_scalars(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_asarray(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_dtype(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_dtype_ctypes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_exceptions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_internal(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_machar(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_methods(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_string_helpers(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_type_aliases(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_ufunc_config(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$arrayprint(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$defchararray(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$einsumfunc(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$fromnumeric(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$function_base(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$getlimits(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$memmap(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$multiarray(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$numeric(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$numerictypes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$overrides(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$records(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$shape_base(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$umath(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ctypeslib(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$dtypes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$exceptions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$fft(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$fft$_pocketfft(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$fft$helper(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$_datasource(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$_iotools(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$_version(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$arraypad(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$arraysetops(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$arrayterator(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$format(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$function_base(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$histograms(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$index_tricks(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$mixins(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$nanfunctions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$npyio(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$polynomial(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$scimath(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$shape_base(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$stride_tricks(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$twodim_base(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$type_check(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$ufunclike(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$utils(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$linalg(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$linalg$linalg(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ma(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ma$core(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ma$extras(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ma$mrecords(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$matrixlib(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$matrixlib$defmatrix(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$_polybase(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$chebyshev(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$hermite(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$hermite_e(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$laguerre(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$legendre(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$polynomial(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$polyutils(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$random(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$random$_pickle(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$version(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$_constants(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$cell(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$cell$_writer(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$cell$cell(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$cell$read_only(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$cell$rich_text(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$cell$text(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$_3d(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$_chart(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$area_chart(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$axis(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$bar_chart(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$bubble_chart(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$chartspace(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$data_source(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$descriptors(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$error_bar(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$label(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$layout(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$legend(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$line_chart(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$marker(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$picture(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$pie_chart(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$pivot(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$plotarea(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$print_settings(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$radar_chart(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$reader(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$reference(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$scatter_chart(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$series(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$series_factory(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$shapes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$stock_chart(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$surface_chart(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$text(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$title(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$trendline(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$updown_bars(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chartsheet(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chartsheet$chartsheet(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chartsheet$custom(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chartsheet$properties(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chartsheet$protection(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chartsheet$publish(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chartsheet$relation(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chartsheet$views(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$comments(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$comments$author(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$comments$comment_sheet(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$comments$comments(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$comments$shape_writer(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$compat(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$compat$numbers(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$compat$strings(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$descriptors(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$descriptors$base(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$descriptors$excel(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$descriptors$namespace(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$descriptors$nested(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$descriptors$sequence(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$descriptors$serialisable(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$colors(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$connector(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$drawing(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$effect(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$fill(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$geometry(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$graphic(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$image(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$line(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$picture(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$properties(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$relation(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$spreadsheet_drawing(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$text(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$xdr(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$formatting(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$formatting$formatting(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$formatting$rule(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$formula(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$formula$tokenizer(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$formula$translate(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$packaging(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$packaging$core(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$packaging$custom(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$packaging$extended(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$packaging$manifest(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$packaging$relationship(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$packaging$workbook(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$pivot(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$pivot$cache(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$pivot$fields(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$pivot$record(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$pivot$table(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$reader(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$reader$drawings(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$reader$excel(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$reader$strings(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$reader$workbook(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$alignment(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$borders(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$builtins(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$cell_style(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$colors(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$differential(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$fills(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$fonts(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$named_styles(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$numbers(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$protection(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$proxy(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$styleable(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$stylesheet(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$table(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$utils(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$utils$bound_dictionary(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$utils$cell(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$utils$datetime(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$utils$escape(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$utils$exceptions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$utils$formulas(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$utils$indexed_list(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$utils$protection(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$utils$units(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook$_writer(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook$child(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook$defined_name(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook$external_link(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook$external_link$external(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook$external_reference(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook$function_group(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook$properties(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook$protection(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook$smart_tags(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook$views(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook$web(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook$workbook(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$_read_only(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$_reader(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$_write_only(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$_writer(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$cell_range(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$copier(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$datavalidation(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$dimensions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$drawing(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$filters(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$formula(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$header_footer(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$hyperlink(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$merge(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$page(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$pagebreak(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$print_settings(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$properties(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$protection(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$related(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$scenario(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$table(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$views(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$worksheet(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$writer(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$writer$excel(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$writer$theme(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$xml(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$xml$constants(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$xml$functions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_config(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_config$config(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_config$dates(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_config$display(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_libs(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_libs$tslibs(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_libs$window(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_typing(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_version(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_version_meson(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$api(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$api$extensions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$api$indexers(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$api$interchange(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$api$types(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$api$typing(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$arrays(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$compat(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$compat$_constants(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$compat$_optional(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$compat$compressors(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$compat$numpy(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$compat$numpy$function(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$compat$pickle_compat(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$compat$pyarrow(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$_numba(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$_numba$executor(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$accessor(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$algorithms(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$api(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$apply(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$array_algos(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$array_algos$datetimelike_accumulations(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$array_algos$masked_accumulations(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$array_algos$masked_reductions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$array_algos$putmask(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$array_algos$quantile(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$array_algos$replace(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$array_algos$take(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$array_algos$transforms(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arraylike(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$_arrow_string_mixins(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$_mixins(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$_ranges(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$arrow(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$arrow$_arrow_utils(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$arrow$array(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$arrow$extension_types(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$base(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$boolean(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$categorical(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$datetimelike(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$datetimes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$floating(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$integer(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$interval(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$masked(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$numeric(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$numpy_(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$period(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$sparse(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$sparse$accessor(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$sparse$array(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$sparse$scipy_sparse(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$string_(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$string_arrow(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$timedeltas(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$base(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$common(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$computation(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$computation$align(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$computation$api(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$computation$check(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$computation$common(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$computation$engines(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$computation$eval(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$computation$expr(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$computation$expressions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$computation$ops(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$computation$parsing(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$computation$pytables(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$computation$scope(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$config_init(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$construction(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$dtypes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$dtypes$api(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$dtypes$astype(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$dtypes$base(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$dtypes$cast(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$dtypes$common(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$dtypes$concat(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$dtypes$dtypes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$dtypes$generic(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$dtypes$inference(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$dtypes$missing(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$flags(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$frame(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$generic(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$groupby(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$groupby$base(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$groupby$categorical(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$groupby$generic(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$groupby$groupby(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$groupby$grouper(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$groupby$indexing(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$groupby$numba_(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$groupby$ops(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexers(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexers$objects(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexers$utils(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$accessors(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$api(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$base(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$category(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$datetimelike(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$datetimes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$extension(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$frozen(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$interval(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$multi(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$period(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$range(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$timedeltas(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexing(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$interchange(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$interchange$buffer(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$interchange$column(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$interchange$dataframe(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$interchange$dataframe_protocol(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$interchange$from_dataframe(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$interchange$utils(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$internals(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$internals$api(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$internals$array_manager(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$internals$base(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$internals$blocks(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$internals$concat(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$internals$construction(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$internals$managers(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$internals$ops(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$methods(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$methods$describe(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$methods$selectn(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$methods$to_dict(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$missing(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$nanops(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$ops(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$ops$array_ops(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$ops$common(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$ops$dispatch(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$ops$docstrings(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$ops$invalid(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$ops$mask_ops(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$ops$missing(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$resample(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$reshape(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$reshape$api(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$reshape$concat(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$reshape$encoding(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$reshape$melt(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$reshape$merge(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$reshape$pivot(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$reshape$reshape(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$reshape$tile(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$reshape$util(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$roperator(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$sample(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$series(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$shared_docs(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$sorting(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$strings(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$strings$accessor(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$strings$base(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$strings$object_array(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$tools(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$tools$datetimes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$tools$numeric(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$tools$timedeltas(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$tools$times(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$util(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$util$hashing(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$util$numba_(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$window(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$window$common(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$window$doc(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$window$ewm(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$window$expanding(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$window$numba_(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$window$online(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$window$rolling(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$errors(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$_util(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$api(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$clipboard(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$clipboards(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$common(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$excel(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$excel$_base(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$excel$_odfreader(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$excel$_odswriter(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$excel$_openpyxl(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$excel$_pyxlsb(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$excel$_util(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$excel$_xlrd(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$excel$_xlsxwriter(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$feather_format(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$_color_data(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$console(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$css(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$csvs(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$excel(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$format(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$html(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$info(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$printing(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$string(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$style(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$style_render(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$xml(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$gbq(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$html(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$json(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$json$_json(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$json$_normalize(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$json$_table_schema(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$orc(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$parquet(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$parsers(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$parsers$arrow_parser_wrapper(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$parsers$base_parser(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$parsers$c_parser_wrapper(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$parsers$python_parser(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$parsers$readers(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$pickle(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$pytables(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$sas(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$sas$sas7bdat(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$sas$sas_constants(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$sas$sas_xport(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$sas$sasreader(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$spss(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$sql(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$stata(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$xml(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$plotting(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$plotting$_core(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$plotting$_matplotlib(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$plotting$_matplotlib$boxplot(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$plotting$_matplotlib$converter(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$plotting$_matplotlib$core(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$plotting$_matplotlib$groupby(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$plotting$_matplotlib$hist(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$plotting$_matplotlib$misc(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$plotting$_matplotlib$style(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$plotting$_matplotlib$timeseries(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$plotting$_matplotlib$tools(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$plotting$_misc(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$tseries(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$tseries$api(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$tseries$frequencies(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$tseries$offsets(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$util(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$util$_decorators(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$util$_exceptions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$util$_print_versions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$util$_validators(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$util$version(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pkg_resources$$45$postLoad(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pythoncom(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytz(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytz$exceptions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytz$lazy(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytz$tzfile(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytz$tzinfo(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pywin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pywin$dialogs(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pywin$dialogs$list(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pywin$dialogs$status(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pywin$mfc(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pywin$mfc$dialog(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pywin$mfc$object(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pywin$mfc$thread(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pywin$mfc$window(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pywin32_bootstrap(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pywin32_system32(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pywintypes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyxlsb(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyxlsb$biff12(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyxlsb$handlers(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyxlsb$reader(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyxlsb$stringtable(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyxlsb$workbook(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyxlsb$worksheet(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$__version__(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$_internal_utils(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$adapters(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$api(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$auth(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$certs(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$compat(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$cookies(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$exceptions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$hooks(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$models(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$sessions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$status_codes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$structures(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$utils(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_six(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$_base_connection(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$_collections(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$_request_methods(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$_version(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$connection(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$connectionpool(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$contrib(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$contrib$pyopenssl(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$contrib$socks(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$exceptions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$fields(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$filepost(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$poolmanager(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$response(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$connection(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$proxy(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$request(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$response(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$retry(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$ssl_(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$ssl_match_hostname(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$ssltransport(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$timeout(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$url(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$util(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$wait(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_win32com(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_win32com$client(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_win32com$client$CLSIDToClass(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_win32com$client$build(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_win32com$client$dynamic(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_win32com$client$gencache(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_win32com$client$genpy(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_win32com$client$makepy(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_win32com$client$selecttlb(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_win32com$client$util(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_win32com$server(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_win32com$server$dispatcher(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_win32com$server$exception(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_win32com$server$policy(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_win32com$server$util(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_win32com$universal(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_win32com$util(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_win32con(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_win32timezone(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_win32traceutil(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_winerror(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlrd(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlrd$biffh(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlrd$book(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlrd$compdoc(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlrd$formatting(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlrd$formula(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlrd$info(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlrd$sheet(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlrd$timemachine(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlrd$xldate(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlwings(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlwings$_win32patch(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlwings$_xlwindows(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlwings$base_classes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlwings$com_server(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlwings$constants(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlwings$conversion(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlwings$conversion$framework(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlwings$conversion$numpy_conv(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlwings$conversion$pandas_conv(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlwings$conversion$standard(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlwings$expansion(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlwings$main(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlwings$mistune(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlwings$mistune$block_parser(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlwings$mistune$inline_parser(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlwings$mistune$markdown(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlwings$mistune$plugins(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlwings$mistune$plugins$abbr(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlwings$mistune$plugins$def_list(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlwings$mistune$plugins$extra(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlwings$mistune$plugins$footnotes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlwings$mistune$plugins$table(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlwings$mistune$plugins$task_lists(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlwings$mistune$renderers(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlwings$mistune$scanner(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlwings$mistune$util(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlwings$pro(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlwings$pro$_xlcalamine(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlwings$pro$_xlofficejs(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlwings$pro$_xlremote(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlwings$pro$embedded_code(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlwings$pro$module_permissions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlwings$pro$reports(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlwings$pro$reports$filters(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlwings$pro$reports$image(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlwings$pro$reports$main(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlwings$pro$reports$markdown(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlwings$pro$reports$pdf(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlwings$pro$udfs_officejs(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlwings$pro$utils(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlwings$udfs(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlwings$utils(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_zstandard(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_zstandard$backend_cffi(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);

static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] = {
    {"PIL", modulecode_PIL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"PIL.BlpImagePlugin", modulecode_PIL$BlpImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\102\154\160\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.BmpImagePlugin", modulecode_PIL$BmpImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\102\155\160\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.BufrStubImagePlugin", modulecode_PIL$BufrStubImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\102\165\146\162\123\164\165\142\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.CurImagePlugin", modulecode_PIL$CurImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\103\165\162\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.DcxImagePlugin", modulecode_PIL$DcxImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\104\143\170\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.DdsImagePlugin", modulecode_PIL$DdsImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\104\144\163\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.EpsImagePlugin", modulecode_PIL$EpsImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\105\160\163\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.ExifTags", modulecode_PIL$ExifTags, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\105\170\151\146\124\141\147\163\56\160\171"
#endif
},
    {"PIL.FliImagePlugin", modulecode_PIL$FliImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\106\154\151\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.FpxImagePlugin", modulecode_PIL$FpxImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\106\160\170\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.FtexImagePlugin", modulecode_PIL$FtexImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\106\164\145\170\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.GbrImagePlugin", modulecode_PIL$GbrImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\107\142\162\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.GifImagePlugin", modulecode_PIL$GifImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\107\151\146\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.GimpGradientFile", modulecode_PIL$GimpGradientFile, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\107\151\155\160\107\162\141\144\151\145\156\164\106\151\154\145\56\160\171"
#endif
},
    {"PIL.GimpPaletteFile", modulecode_PIL$GimpPaletteFile, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\107\151\155\160\120\141\154\145\164\164\145\106\151\154\145\56\160\171"
#endif
},
    {"PIL.GribStubImagePlugin", modulecode_PIL$GribStubImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\107\162\151\142\123\164\165\142\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.Hdf5StubImagePlugin", modulecode_PIL$Hdf5StubImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\110\144\146\65\123\164\165\142\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.IcnsImagePlugin", modulecode_PIL$IcnsImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\143\156\163\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.IcoImagePlugin", modulecode_PIL$IcoImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\143\157\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.ImImagePlugin", modulecode_PIL$ImImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.Image", modulecode_PIL$Image, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\56\160\171"
#endif
},
    {"PIL.ImageChops", modulecode_PIL$ImageChops, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\103\150\157\160\163\56\160\171"
#endif
},
    {"PIL.ImageCms", modulecode_PIL$ImageCms, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\103\155\163\56\160\171"
#endif
},
    {"PIL.ImageColor", modulecode_PIL$ImageColor, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\103\157\154\157\162\56\160\171"
#endif
},
    {"PIL.ImageFile", modulecode_PIL$ImageFile, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\106\151\154\145\56\160\171"
#endif
},
    {"PIL.ImageFilter", modulecode_PIL$ImageFilter, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\106\151\154\164\145\162\56\160\171"
#endif
},
    {"PIL.ImageGrab", modulecode_PIL$ImageGrab, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\107\162\141\142\56\160\171"
#endif
},
    {"PIL.ImageMode", modulecode_PIL$ImageMode, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\115\157\144\145\56\160\171"
#endif
},
    {"PIL.ImageOps", modulecode_PIL$ImageOps, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\117\160\163\56\160\171"
#endif
},
    {"PIL.ImagePalette", modulecode_PIL$ImagePalette, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\120\141\154\145\164\164\145\56\160\171"
#endif
},
    {"PIL.ImageSequence", modulecode_PIL$ImageSequence, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\123\145\161\165\145\156\143\145\56\160\171"
#endif
},
    {"PIL.ImageShow", modulecode_PIL$ImageShow, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\123\150\157\167\56\160\171"
#endif
},
    {"PIL.ImageTk", modulecode_PIL$ImageTk, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\124\153\56\160\171"
#endif
},
    {"PIL.ImageWin", modulecode_PIL$ImageWin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\127\151\156\56\160\171"
#endif
},
    {"PIL.ImtImagePlugin", modulecode_PIL$ImtImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\164\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.IptcImagePlugin", modulecode_PIL$IptcImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\160\164\143\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.Jpeg2KImagePlugin", modulecode_PIL$Jpeg2KImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\112\160\145\147\62\113\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.JpegImagePlugin", modulecode_PIL$JpegImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\112\160\145\147\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.JpegPresets", modulecode_PIL$JpegPresets, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\112\160\145\147\120\162\145\163\145\164\163\56\160\171"
#endif
},
    {"PIL.McIdasImagePlugin", modulecode_PIL$McIdasImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\115\143\111\144\141\163\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.MicImagePlugin", modulecode_PIL$MicImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\115\151\143\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.MpegImagePlugin", modulecode_PIL$MpegImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\115\160\145\147\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.MpoImagePlugin", modulecode_PIL$MpoImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\115\160\157\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.MspImagePlugin", modulecode_PIL$MspImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\115\163\160\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.PaletteFile", modulecode_PIL$PaletteFile, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\141\154\145\164\164\145\106\151\154\145\56\160\171"
#endif
},
    {"PIL.PalmImagePlugin", modulecode_PIL$PalmImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\141\154\155\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.PcdImagePlugin", modulecode_PIL$PcdImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\143\144\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.PcxImagePlugin", modulecode_PIL$PcxImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\143\170\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.PdfImagePlugin", modulecode_PIL$PdfImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\144\146\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.PdfParser", modulecode_PIL$PdfParser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\144\146\120\141\162\163\145\162\56\160\171"
#endif
},
    {"PIL.PixarImagePlugin", modulecode_PIL$PixarImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\151\170\141\162\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.PngImagePlugin", modulecode_PIL$PngImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\156\147\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.PpmImagePlugin", modulecode_PIL$PpmImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\160\155\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.PsdImagePlugin", modulecode_PIL$PsdImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\163\144\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.PyAccess", modulecode_PIL$PyAccess, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\171\101\143\143\145\163\163\56\160\171"
#endif
},
    {"PIL.SgiImagePlugin", modulecode_PIL$SgiImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\123\147\151\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.SpiderImagePlugin", modulecode_PIL$SpiderImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\123\160\151\144\145\162\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.SunImagePlugin", modulecode_PIL$SunImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\123\165\156\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.TgaImagePlugin", modulecode_PIL$TgaImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\124\147\141\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.TiffImagePlugin", modulecode_PIL$TiffImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\124\151\146\146\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.TiffTags", modulecode_PIL$TiffTags, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\124\151\146\146\124\141\147\163\56\160\171"
#endif
},
    {"PIL.WebPImagePlugin", modulecode_PIL$WebPImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\127\145\142\120\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.WmfImagePlugin", modulecode_PIL$WmfImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\127\155\146\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.XVThumbImagePlugin", modulecode_PIL$XVThumbImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\130\126\124\150\165\155\142\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.XbmImagePlugin", modulecode_PIL$XbmImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\130\142\155\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.XpmImagePlugin", modulecode_PIL$XpmImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\130\160\155\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL._binary", modulecode_PIL$_binary, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\137\142\151\156\141\162\171\56\160\171"
#endif
},
    {"PIL._deprecate", modulecode_PIL$_deprecate, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\137\144\145\160\162\145\143\141\164\145\56\160\171"
#endif
},
    {"PIL._util", modulecode_PIL$_util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\137\165\164\151\154\56\160\171"
#endif
},
    {"PIL._version", modulecode_PIL$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\137\166\145\162\163\151\157\156\56\160\171"
#endif
},
    {"PIL.features", modulecode_PIL$features, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\146\145\141\164\165\162\145\163\56\160\171"
#endif
},
    {"__main__", modulecode___main__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\117\156\145\104\162\151\166\145\40\55\40\123\145\162\166\155\141\162\40\101\155\142\151\145\156\164\141\151\163\134\301\162\145\141\40\144\145\40\124\162\141\142\141\154\150\157\134\160\162\157\147\162\141\155\141\56\160\171"
#endif
},
    {"certifi", modulecode_certifi, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\145\162\164\151\146\151\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"certifi.core", modulecode_certifi$core, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\145\162\164\151\146\151\134\143\157\162\145\56\160\171"
#endif
},
    {"charset_normalizer", modulecode_charset_normalizer, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\163\145\164\137\156\157\162\155\141\154\151\172\145\162\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"charset_normalizer.api", modulecode_charset_normalizer$api, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\163\145\164\137\156\157\162\155\141\154\151\172\145\162\134\141\160\151\56\160\171"
#endif
},
    {"charset_normalizer.assets", modulecode_charset_normalizer$assets, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\163\145\164\137\156\157\162\155\141\154\151\172\145\162\134\141\163\163\145\164\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"charset_normalizer.cd", modulecode_charset_normalizer$cd, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\163\145\164\137\156\157\162\155\141\154\151\172\145\162\134\143\144\56\160\171"
#endif
},
    {"charset_normalizer.constant", modulecode_charset_normalizer$constant, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\163\145\164\137\156\157\162\155\141\154\151\172\145\162\134\143\157\156\163\164\141\156\164\56\160\171"
#endif
},
    {"charset_normalizer.legacy", modulecode_charset_normalizer$legacy, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\163\145\164\137\156\157\162\155\141\154\151\172\145\162\134\154\145\147\141\143\171\56\160\171"
#endif
},
    {"charset_normalizer.models", modulecode_charset_normalizer$models, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\163\145\164\137\156\157\162\155\141\154\151\172\145\162\134\155\157\144\145\154\163\56\160\171"
#endif
},
    {"charset_normalizer.utils", modulecode_charset_normalizer$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\163\145\164\137\156\157\162\155\141\154\151\172\145\162\134\165\164\151\154\163\56\160\171"
#endif
},
    {"charset_normalizer.version", modulecode_charset_normalizer$version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\163\145\164\137\156\157\162\155\141\154\151\172\145\162\134\166\145\162\163\151\157\156\56\160\171"
#endif
},
    {"commctrl", modulecode_commctrl, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\151\156\63\62\134\154\151\142\134\143\157\155\155\143\164\162\154\56\160\171"
#endif
},
    {"customtkinter", modulecode_customtkinter, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\165\163\164\157\155\164\153\151\156\164\145\162\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"customtkinter.windows", modulecode_customtkinter$windows, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\165\163\164\157\155\164\153\151\156\164\145\162\134\167\151\156\144\157\167\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"customtkinter.windows.ctk_input_dialog", modulecode_customtkinter$windows$ctk_input_dialog, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\165\163\164\157\155\164\153\151\156\164\145\162\134\167\151\156\144\157\167\163\134\143\164\153\137\151\156\160\165\164\137\144\151\141\154\157\147\56\160\171"
#endif
},
    {"customtkinter.windows.ctk_tk", modulecode_customtkinter$windows$ctk_tk, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\165\163\164\157\155\164\153\151\156\164\145\162\134\167\151\156\144\157\167\163\134\143\164\153\137\164\153\56\160\171"
#endif
},
    {"customtkinter.windows.ctk_toplevel", modulecode_customtkinter$windows$ctk_toplevel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\165\163\164\157\155\164\153\151\156\164\145\162\134\167\151\156\144\157\167\163\134\143\164\153\137\164\157\160\154\145\166\145\154\56\160\171"
#endif
},
    {"customtkinter.windows.widgets", modulecode_customtkinter$windows$widgets, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\165\163\164\157\155\164\153\151\156\164\145\162\134\167\151\156\144\157\167\163\134\167\151\144\147\145\164\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"customtkinter.windows.widgets.appearance_mode", modulecode_customtkinter$windows$widgets$appearance_mode, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\165\163\164\157\155\164\153\151\156\164\145\162\134\167\151\156\144\157\167\163\134\167\151\144\147\145\164\163\134\141\160\160\145\141\162\141\156\143\145\137\155\157\144\145\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"customtkinter.windows.widgets.appearance_mode.appearance_mode_base_class", modulecode_customtkinter$windows$widgets$appearance_mode$appearance_mode_base_class, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\165\163\164\157\155\164\153\151\156\164\145\162\134\167\151\156\144\157\167\163\134\167\151\144\147\145\164\163\134\141\160\160\145\141\162\141\156\143\145\137\155\157\144\145\134\141\160\160\145\141\162\141\156\143\145\137\155\157\144\145\137\142\141\163\145\137\143\154\141\163\163\56\160\171"
#endif
},
    {"customtkinter.windows.widgets.appearance_mode.appearance_mode_tracker", modulecode_customtkinter$windows$widgets$appearance_mode$appearance_mode_tracker, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\165\163\164\157\155\164\153\151\156\164\145\162\134\167\151\156\144\157\167\163\134\167\151\144\147\145\164\163\134\141\160\160\145\141\162\141\156\143\145\137\155\157\144\145\134\141\160\160\145\141\162\141\156\143\145\137\155\157\144\145\137\164\162\141\143\153\145\162\56\160\171"
#endif
},
    {"customtkinter.windows.widgets.core_rendering", modulecode_customtkinter$windows$widgets$core_rendering, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\165\163\164\157\155\164\153\151\156\164\145\162\134\167\151\156\144\157\167\163\134\167\151\144\147\145\164\163\134\143\157\162\145\137\162\145\156\144\145\162\151\156\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"customtkinter.windows.widgets.core_rendering.ctk_canvas", modulecode_customtkinter$windows$widgets$core_rendering$ctk_canvas, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\165\163\164\157\155\164\153\151\156\164\145\162\134\167\151\156\144\157\167\163\134\167\151\144\147\145\164\163\134\143\157\162\145\137\162\145\156\144\145\162\151\156\147\134\143\164\153\137\143\141\156\166\141\163\56\160\171"
#endif
},
    {"customtkinter.windows.widgets.core_rendering.draw_engine", modulecode_customtkinter$windows$widgets$core_rendering$draw_engine, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\165\163\164\157\155\164\153\151\156\164\145\162\134\167\151\156\144\157\167\163\134\167\151\144\147\145\164\163\134\143\157\162\145\137\162\145\156\144\145\162\151\156\147\134\144\162\141\167\137\145\156\147\151\156\145\56\160\171"
#endif
},
    {"customtkinter.windows.widgets.core_widget_classes", modulecode_customtkinter$windows$widgets$core_widget_classes, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\165\163\164\157\155\164\153\151\156\164\145\162\134\167\151\156\144\157\167\163\134\167\151\144\147\145\164\163\134\143\157\162\145\137\167\151\144\147\145\164\137\143\154\141\163\163\145\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"customtkinter.windows.widgets.core_widget_classes.ctk_base_class", modulecode_customtkinter$windows$widgets$core_widget_classes$ctk_base_class, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\165\163\164\157\155\164\153\151\156\164\145\162\134\167\151\156\144\157\167\163\134\167\151\144\147\145\164\163\134\143\157\162\145\137\167\151\144\147\145\164\137\143\154\141\163\163\145\163\134\143\164\153\137\142\141\163\145\137\143\154\141\163\163\56\160\171"
#endif
},
    {"customtkinter.windows.widgets.core_widget_classes.dropdown_menu", modulecode_customtkinter$windows$widgets$core_widget_classes$dropdown_menu, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\165\163\164\157\155\164\153\151\156\164\145\162\134\167\151\156\144\157\167\163\134\167\151\144\147\145\164\163\134\143\157\162\145\137\167\151\144\147\145\164\137\143\154\141\163\163\145\163\134\144\162\157\160\144\157\167\156\137\155\145\156\165\56\160\171"
#endif
},
    {"customtkinter.windows.widgets.ctk_button", modulecode_customtkinter$windows$widgets$ctk_button, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\165\163\164\157\155\164\153\151\156\164\145\162\134\167\151\156\144\157\167\163\134\167\151\144\147\145\164\163\134\143\164\153\137\142\165\164\164\157\156\56\160\171"
#endif
},
    {"customtkinter.windows.widgets.ctk_checkbox", modulecode_customtkinter$windows$widgets$ctk_checkbox, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\165\163\164\157\155\164\153\151\156\164\145\162\134\167\151\156\144\157\167\163\134\167\151\144\147\145\164\163\134\143\164\153\137\143\150\145\143\153\142\157\170\56\160\171"
#endif
},
    {"customtkinter.windows.widgets.ctk_combobox", modulecode_customtkinter$windows$widgets$ctk_combobox, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\165\163\164\157\155\164\153\151\156\164\145\162\134\167\151\156\144\157\167\163\134\167\151\144\147\145\164\163\134\143\164\153\137\143\157\155\142\157\142\157\170\56\160\171"
#endif
},
    {"customtkinter.windows.widgets.ctk_entry", modulecode_customtkinter$windows$widgets$ctk_entry, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\165\163\164\157\155\164\153\151\156\164\145\162\134\167\151\156\144\157\167\163\134\167\151\144\147\145\164\163\134\143\164\153\137\145\156\164\162\171\56\160\171"
#endif
},
    {"customtkinter.windows.widgets.ctk_frame", modulecode_customtkinter$windows$widgets$ctk_frame, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\165\163\164\157\155\164\153\151\156\164\145\162\134\167\151\156\144\157\167\163\134\167\151\144\147\145\164\163\134\143\164\153\137\146\162\141\155\145\56\160\171"
#endif
},
    {"customtkinter.windows.widgets.ctk_label", modulecode_customtkinter$windows$widgets$ctk_label, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\165\163\164\157\155\164\153\151\156\164\145\162\134\167\151\156\144\157\167\163\134\167\151\144\147\145\164\163\134\143\164\153\137\154\141\142\145\154\56\160\171"
#endif
},
    {"customtkinter.windows.widgets.ctk_optionmenu", modulecode_customtkinter$windows$widgets$ctk_optionmenu, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\165\163\164\157\155\164\153\151\156\164\145\162\134\167\151\156\144\157\167\163\134\167\151\144\147\145\164\163\134\143\164\153\137\157\160\164\151\157\156\155\145\156\165\56\160\171"
#endif
},
    {"customtkinter.windows.widgets.ctk_progressbar", modulecode_customtkinter$windows$widgets$ctk_progressbar, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\165\163\164\157\155\164\153\151\156\164\145\162\134\167\151\156\144\157\167\163\134\167\151\144\147\145\164\163\134\143\164\153\137\160\162\157\147\162\145\163\163\142\141\162\56\160\171"
#endif
},
    {"customtkinter.windows.widgets.ctk_radiobutton", modulecode_customtkinter$windows$widgets$ctk_radiobutton, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\165\163\164\157\155\164\153\151\156\164\145\162\134\167\151\156\144\157\167\163\134\167\151\144\147\145\164\163\134\143\164\153\137\162\141\144\151\157\142\165\164\164\157\156\56\160\171"
#endif
},
    {"customtkinter.windows.widgets.ctk_scrollable_frame", modulecode_customtkinter$windows$widgets$ctk_scrollable_frame, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\165\163\164\157\155\164\153\151\156\164\145\162\134\167\151\156\144\157\167\163\134\167\151\144\147\145\164\163\134\143\164\153\137\163\143\162\157\154\154\141\142\154\145\137\146\162\141\155\145\56\160\171"
#endif
},
    {"customtkinter.windows.widgets.ctk_scrollbar", modulecode_customtkinter$windows$widgets$ctk_scrollbar, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\165\163\164\157\155\164\153\151\156\164\145\162\134\167\151\156\144\157\167\163\134\167\151\144\147\145\164\163\134\143\164\153\137\163\143\162\157\154\154\142\141\162\56\160\171"
#endif
},
    {"customtkinter.windows.widgets.ctk_segmented_button", modulecode_customtkinter$windows$widgets$ctk_segmented_button, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\165\163\164\157\155\164\153\151\156\164\145\162\134\167\151\156\144\157\167\163\134\167\151\144\147\145\164\163\134\143\164\153\137\163\145\147\155\145\156\164\145\144\137\142\165\164\164\157\156\56\160\171"
#endif
},
    {"customtkinter.windows.widgets.ctk_slider", modulecode_customtkinter$windows$widgets$ctk_slider, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\165\163\164\157\155\164\153\151\156\164\145\162\134\167\151\156\144\157\167\163\134\167\151\144\147\145\164\163\134\143\164\153\137\163\154\151\144\145\162\56\160\171"
#endif
},
    {"customtkinter.windows.widgets.ctk_switch", modulecode_customtkinter$windows$widgets$ctk_switch, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\165\163\164\157\155\164\153\151\156\164\145\162\134\167\151\156\144\157\167\163\134\167\151\144\147\145\164\163\134\143\164\153\137\163\167\151\164\143\150\56\160\171"
#endif
},
    {"customtkinter.windows.widgets.ctk_tabview", modulecode_customtkinter$windows$widgets$ctk_tabview, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\165\163\164\157\155\164\153\151\156\164\145\162\134\167\151\156\144\157\167\163\134\167\151\144\147\145\164\163\134\143\164\153\137\164\141\142\166\151\145\167\56\160\171"
#endif
},
    {"customtkinter.windows.widgets.ctk_textbox", modulecode_customtkinter$windows$widgets$ctk_textbox, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\165\163\164\157\155\164\153\151\156\164\145\162\134\167\151\156\144\157\167\163\134\167\151\144\147\145\164\163\134\143\164\153\137\164\145\170\164\142\157\170\56\160\171"
#endif
},
    {"customtkinter.windows.widgets.font", modulecode_customtkinter$windows$widgets$font, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\165\163\164\157\155\164\153\151\156\164\145\162\134\167\151\156\144\157\167\163\134\167\151\144\147\145\164\163\134\146\157\156\164\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"customtkinter.windows.widgets.font.ctk_font", modulecode_customtkinter$windows$widgets$font$ctk_font, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\165\163\164\157\155\164\153\151\156\164\145\162\134\167\151\156\144\157\167\163\134\167\151\144\147\145\164\163\134\146\157\156\164\134\143\164\153\137\146\157\156\164\56\160\171"
#endif
},
    {"customtkinter.windows.widgets.font.font_manager", modulecode_customtkinter$windows$widgets$font$font_manager, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\165\163\164\157\155\164\153\151\156\164\145\162\134\167\151\156\144\157\167\163\134\167\151\144\147\145\164\163\134\146\157\156\164\134\146\157\156\164\137\155\141\156\141\147\145\162\56\160\171"
#endif
},
    {"customtkinter.windows.widgets.image", modulecode_customtkinter$windows$widgets$image, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\165\163\164\157\155\164\153\151\156\164\145\162\134\167\151\156\144\157\167\163\134\167\151\144\147\145\164\163\134\151\155\141\147\145\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"customtkinter.windows.widgets.image.ctk_image", modulecode_customtkinter$windows$widgets$image$ctk_image, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\165\163\164\157\155\164\153\151\156\164\145\162\134\167\151\156\144\157\167\163\134\167\151\144\147\145\164\163\134\151\155\141\147\145\134\143\164\153\137\151\155\141\147\145\56\160\171"
#endif
},
    {"customtkinter.windows.widgets.scaling", modulecode_customtkinter$windows$widgets$scaling, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\165\163\164\157\155\164\153\151\156\164\145\162\134\167\151\156\144\157\167\163\134\167\151\144\147\145\164\163\134\163\143\141\154\151\156\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"customtkinter.windows.widgets.scaling.scaling_base_class", modulecode_customtkinter$windows$widgets$scaling$scaling_base_class, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\165\163\164\157\155\164\153\151\156\164\145\162\134\167\151\156\144\157\167\163\134\167\151\144\147\145\164\163\134\163\143\141\154\151\156\147\134\163\143\141\154\151\156\147\137\142\141\163\145\137\143\154\141\163\163\56\160\171"
#endif
},
    {"customtkinter.windows.widgets.scaling.scaling_tracker", modulecode_customtkinter$windows$widgets$scaling$scaling_tracker, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\165\163\164\157\155\164\153\151\156\164\145\162\134\167\151\156\144\157\167\163\134\167\151\144\147\145\164\163\134\163\143\141\154\151\156\147\134\163\143\141\154\151\156\147\137\164\162\141\143\153\145\162\56\160\171"
#endif
},
    {"customtkinter.windows.widgets.theme", modulecode_customtkinter$windows$widgets$theme, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\165\163\164\157\155\164\153\151\156\164\145\162\134\167\151\156\144\157\167\163\134\167\151\144\147\145\164\163\134\164\150\145\155\145\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"customtkinter.windows.widgets.theme.theme_manager", modulecode_customtkinter$windows$widgets$theme$theme_manager, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\165\163\164\157\155\164\153\151\156\164\145\162\134\167\151\156\144\157\167\163\134\167\151\144\147\145\164\163\134\164\150\145\155\145\134\164\150\145\155\145\137\155\141\156\141\147\145\162\56\160\171"
#endif
},
    {"customtkinter.windows.widgets.utility", modulecode_customtkinter$windows$widgets$utility, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\165\163\164\157\155\164\153\151\156\164\145\162\134\167\151\156\144\157\167\163\134\167\151\144\147\145\164\163\134\165\164\151\154\151\164\171\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"customtkinter.windows.widgets.utility.utility_functions", modulecode_customtkinter$windows$widgets$utility$utility_functions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\165\163\164\157\155\164\153\151\156\164\145\162\134\167\151\156\144\157\167\163\134\167\151\144\147\145\164\163\134\165\164\151\154\151\164\171\134\165\164\151\154\151\164\171\137\146\165\156\143\164\151\157\156\163\56\160\171"
#endif
},
    {"darkdetect", modulecode_darkdetect, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\162\153\144\145\164\145\143\164\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"darkdetect._dummy", modulecode_darkdetect$_dummy, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\162\153\144\145\164\145\143\164\134\137\144\165\155\155\171\56\160\171"
#endif
},
    {"darkdetect._windows_detect", modulecode_darkdetect$_windows_detect, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\162\153\144\145\164\145\143\164\134\137\167\151\156\144\157\167\163\137\144\145\164\145\143\164\56\160\171"
#endif
},
    {"dateutil", modulecode_dateutil, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\164\145\165\164\151\154\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"dateutil._common", modulecode_dateutil$_common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\164\145\165\164\151\154\134\137\143\157\155\155\157\156\56\160\171"
#endif
},
    {"dateutil._version", modulecode_dateutil$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\164\145\165\164\151\154\134\137\166\145\162\163\151\157\156\56\160\171"
#endif
},
    {"dateutil.easter", modulecode_dateutil$easter, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\164\145\165\164\151\154\134\145\141\163\164\145\162\56\160\171"
#endif
},
    {"dateutil.parser", modulecode_dateutil$parser, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\164\145\165\164\151\154\134\160\141\162\163\145\162\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"dateutil.parser._parser", modulecode_dateutil$parser$_parser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\164\145\165\164\151\154\134\160\141\162\163\145\162\134\137\160\141\162\163\145\162\56\160\171"
#endif
},
    {"dateutil.parser.isoparser", modulecode_dateutil$parser$isoparser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\164\145\165\164\151\154\134\160\141\162\163\145\162\134\151\163\157\160\141\162\163\145\162\56\160\171"
#endif
},
    {"dateutil.relativedelta", modulecode_dateutil$relativedelta, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\164\145\165\164\151\154\134\162\145\154\141\164\151\166\145\144\145\154\164\141\56\160\171"
#endif
},
    {"dateutil.rrule", modulecode_dateutil$rrule, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\164\145\165\164\151\154\134\162\162\165\154\145\56\160\171"
#endif
},
    {"dateutil.tz", modulecode_dateutil$tz, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\164\145\165\164\151\154\134\164\172\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"dateutil.tz._common", modulecode_dateutil$tz$_common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\164\145\165\164\151\154\134\164\172\134\137\143\157\155\155\157\156\56\160\171"
#endif
},
    {"dateutil.tz._factories", modulecode_dateutil$tz$_factories, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\164\145\165\164\151\154\134\164\172\134\137\146\141\143\164\157\162\151\145\163\56\160\171"
#endif
},
    {"dateutil.tz.tz", modulecode_dateutil$tz$tz, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\164\145\165\164\151\154\134\164\172\134\164\172\56\160\171"
#endif
},
    {"dateutil.tz.win", modulecode_dateutil$tz$win, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\164\145\165\164\151\154\134\164\172\134\167\151\156\56\160\171"
#endif
},
    {"dateutil.zoneinfo", modulecode_dateutil$zoneinfo, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\164\145\165\164\151\154\134\172\157\156\145\151\156\146\157\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"et_xmlfile", modulecode_et_xmlfile, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\145\164\137\170\155\154\146\151\154\145\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"et_xmlfile.xmlfile", modulecode_et_xmlfile$xmlfile, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\145\164\137\170\155\154\146\151\154\145\134\170\155\154\146\151\154\145\56\160\171"
#endif
},
    {"idna", modulecode_idna, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\151\144\156\141\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"idna.core", modulecode_idna$core, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\151\144\156\141\134\143\157\162\145\56\160\171"
#endif
},
    {"idna.idnadata", modulecode_idna$idnadata, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\151\144\156\141\134\151\144\156\141\144\141\164\141\56\160\171"
#endif
},
    {"idna.intranges", modulecode_idna$intranges, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\151\144\156\141\134\151\156\164\162\141\156\147\145\163\56\160\171"
#endif
},
    {"idna.package_data", modulecode_idna$package_data, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\151\144\156\141\134\160\141\143\153\141\147\145\137\144\141\164\141\56\160\171"
#endif
},
    {"idna.uts46data", modulecode_idna$uts46data, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\151\144\156\141\134\165\164\163\64\66\144\141\164\141\56\160\171"
#endif
},
    {"jinja2", modulecode_jinja2, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"jinja2._identifier", modulecode_jinja2$_identifier, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\137\151\144\145\156\164\151\146\151\145\162\56\160\171"
#endif
},
    {"jinja2.async_utils", modulecode_jinja2$async_utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\141\163\171\156\143\137\165\164\151\154\163\56\160\171"
#endif
},
    {"jinja2.bccache", modulecode_jinja2$bccache, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\142\143\143\141\143\150\145\56\160\171"
#endif
},
    {"jinja2.compiler", modulecode_jinja2$compiler, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\143\157\155\160\151\154\145\162\56\160\171"
#endif
},
    {"jinja2.constants", modulecode_jinja2$constants, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\143\157\156\163\164\141\156\164\163\56\160\171"
#endif
},
    {"jinja2.debug", modulecode_jinja2$debug, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\144\145\142\165\147\56\160\171"
#endif
},
    {"jinja2.defaults", modulecode_jinja2$defaults, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\144\145\146\141\165\154\164\163\56\160\171"
#endif
},
    {"jinja2.environment", modulecode_jinja2$environment, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\145\156\166\151\162\157\156\155\145\156\164\56\160\171"
#endif
},
    {"jinja2.exceptions", modulecode_jinja2$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\145\170\143\145\160\164\151\157\156\163\56\160\171"
#endif
},
    {"jinja2.filters", modulecode_jinja2$filters, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\146\151\154\164\145\162\163\56\160\171"
#endif
},
    {"jinja2.idtracking", modulecode_jinja2$idtracking, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\151\144\164\162\141\143\153\151\156\147\56\160\171"
#endif
},
    {"jinja2.lexer", modulecode_jinja2$lexer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\154\145\170\145\162\56\160\171"
#endif
},
    {"jinja2.loaders", modulecode_jinja2$loaders, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\154\157\141\144\145\162\163\56\160\171"
#endif
},
    {"jinja2.nodes", modulecode_jinja2$nodes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\156\157\144\145\163\56\160\171"
#endif
},
    {"jinja2.optimizer", modulecode_jinja2$optimizer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\157\160\164\151\155\151\172\145\162\56\160\171"
#endif
},
    {"jinja2.parser", modulecode_jinja2$parser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\160\141\162\163\145\162\56\160\171"
#endif
},
    {"jinja2.runtime", modulecode_jinja2$runtime, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\162\165\156\164\151\155\145\56\160\171"
#endif
},
    {"jinja2.tests", modulecode_jinja2$tests, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\164\145\163\164\163\56\160\171"
#endif
},
    {"jinja2.utils", modulecode_jinja2$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\165\164\151\154\163\56\160\171"
#endif
},
    {"jinja2.visitor", modulecode_jinja2$visitor, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\152\151\156\152\141\62\134\166\151\163\151\164\157\162\56\160\171"
#endif
},
    {"markupsafe", modulecode_markupsafe, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\162\153\165\160\163\141\146\145\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"markupsafe._native", modulecode_markupsafe$_native, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\141\162\153\165\160\163\141\146\145\134\137\156\141\164\151\166\145\56\160\171"
#endif
},
    {"numpy", modulecode_numpy, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.__config__", modulecode_numpy$__config__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\137\143\157\156\146\151\147\137\137\56\160\171"
#endif
},
    {"numpy._distributor_init", modulecode_numpy$_distributor_init, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\144\151\163\164\162\151\142\165\164\157\162\137\151\156\151\164\56\160\171"
#endif
},
    {"numpy._globals", modulecode_numpy$_globals, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\147\154\157\142\141\154\163\56\160\171"
#endif
},
    {"numpy._pytesttester", modulecode_numpy$_pytesttester, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\160\171\164\145\163\164\164\145\163\164\145\162\56\160\171"
#endif
},
    {"numpy._typing", modulecode_numpy$_typing, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\164\171\160\151\156\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy._typing._array_like", modulecode_numpy$_typing$_array_like, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\164\171\160\151\156\147\134\137\141\162\162\141\171\137\154\151\153\145\56\160\171"
#endif
},
    {"numpy._typing._char_codes", modulecode_numpy$_typing$_char_codes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\164\171\160\151\156\147\134\137\143\150\141\162\137\143\157\144\145\163\56\160\171"
#endif
},
    {"numpy._typing._dtype_like", modulecode_numpy$_typing$_dtype_like, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\164\171\160\151\156\147\134\137\144\164\171\160\145\137\154\151\153\145\56\160\171"
#endif
},
    {"numpy._typing._nbit", modulecode_numpy$_typing$_nbit, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\164\171\160\151\156\147\134\137\156\142\151\164\56\160\171"
#endif
},
    {"numpy._typing._nested_sequence", modulecode_numpy$_typing$_nested_sequence, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\164\171\160\151\156\147\134\137\156\145\163\164\145\144\137\163\145\161\165\145\156\143\145\56\160\171"
#endif
},
    {"numpy._typing._scalars", modulecode_numpy$_typing$_scalars, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\164\171\160\151\156\147\134\137\163\143\141\154\141\162\163\56\160\171"
#endif
},
    {"numpy._typing._shape", modulecode_numpy$_typing$_shape, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\164\171\160\151\156\147\134\137\163\150\141\160\145\56\160\171"
#endif
},
    {"numpy._utils", modulecode_numpy$_utils, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\165\164\151\154\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy._utils._inspect", modulecode_numpy$_utils$_inspect, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\165\164\151\154\163\134\137\151\156\163\160\145\143\164\56\160\171"
#endif
},
    {"numpy._version", modulecode_numpy$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\166\145\162\163\151\157\156\56\160\171"
#endif
},
    {"numpy.compat", modulecode_numpy$compat, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\155\160\141\164\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.compat.py3k", modulecode_numpy$compat$py3k, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\155\160\141\164\134\160\171\63\153\56\160\171"
#endif
},
    {"numpy.core", modulecode_numpy$core, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.core._add_newdocs", modulecode_numpy$core$_add_newdocs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\141\144\144\137\156\145\167\144\157\143\163\56\160\171"
#endif
},
    {"numpy.core._add_newdocs_scalars", modulecode_numpy$core$_add_newdocs_scalars, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\141\144\144\137\156\145\167\144\157\143\163\137\163\143\141\154\141\162\163\56\160\171"
#endif
},
    {"numpy.core._asarray", modulecode_numpy$core$_asarray, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\141\163\141\162\162\141\171\56\160\171"
#endif
},
    {"numpy.core._dtype", modulecode_numpy$core$_dtype, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\144\164\171\160\145\56\160\171"
#endif
},
    {"numpy.core._dtype_ctypes", modulecode_numpy$core$_dtype_ctypes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\144\164\171\160\145\137\143\164\171\160\145\163\56\160\171"
#endif
},
    {"numpy.core._exceptions", modulecode_numpy$core$_exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\145\170\143\145\160\164\151\157\156\163\56\160\171"
#endif
},
    {"numpy.core._internal", modulecode_numpy$core$_internal, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\151\156\164\145\162\156\141\154\56\160\171"
#endif
},
    {"numpy.core._machar", modulecode_numpy$core$_machar, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\155\141\143\150\141\162\56\160\171"
#endif
},
    {"numpy.core._methods", modulecode_numpy$core$_methods, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\155\145\164\150\157\144\163\56\160\171"
#endif
},
    {"numpy.core._string_helpers", modulecode_numpy$core$_string_helpers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\163\164\162\151\156\147\137\150\145\154\160\145\162\163\56\160\171"
#endif
},
    {"numpy.core._type_aliases", modulecode_numpy$core$_type_aliases, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\164\171\160\145\137\141\154\151\141\163\145\163\56\160\171"
#endif
},
    {"numpy.core._ufunc_config", modulecode_numpy$core$_ufunc_config, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\165\146\165\156\143\137\143\157\156\146\151\147\56\160\171"
#endif
},
    {"numpy.core.arrayprint", modulecode_numpy$core$arrayprint, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\141\162\162\141\171\160\162\151\156\164\56\160\171"
#endif
},
    {"numpy.core.defchararray", modulecode_numpy$core$defchararray, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\144\145\146\143\150\141\162\141\162\162\141\171\56\160\171"
#endif
},
    {"numpy.core.einsumfunc", modulecode_numpy$core$einsumfunc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\145\151\156\163\165\155\146\165\156\143\56\160\171"
#endif
},
    {"numpy.core.fromnumeric", modulecode_numpy$core$fromnumeric, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\146\162\157\155\156\165\155\145\162\151\143\56\160\171"
#endif
},
    {"numpy.core.function_base", modulecode_numpy$core$function_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\146\165\156\143\164\151\157\156\137\142\141\163\145\56\160\171"
#endif
},
    {"numpy.core.getlimits", modulecode_numpy$core$getlimits, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\147\145\164\154\151\155\151\164\163\56\160\171"
#endif
},
    {"numpy.core.memmap", modulecode_numpy$core$memmap, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\155\145\155\155\141\160\56\160\171"
#endif
},
    {"numpy.core.multiarray", modulecode_numpy$core$multiarray, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\155\165\154\164\151\141\162\162\141\171\56\160\171"
#endif
},
    {"numpy.core.numeric", modulecode_numpy$core$numeric, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\156\165\155\145\162\151\143\56\160\171"
#endif
},
    {"numpy.core.numerictypes", modulecode_numpy$core$numerictypes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\156\165\155\145\162\151\143\164\171\160\145\163\56\160\171"
#endif
},
    {"numpy.core.overrides", modulecode_numpy$core$overrides, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\157\166\145\162\162\151\144\145\163\56\160\171"
#endif
},
    {"numpy.core.records", modulecode_numpy$core$records, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\162\145\143\157\162\144\163\56\160\171"
#endif
},
    {"numpy.core.shape_base", modulecode_numpy$core$shape_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\163\150\141\160\145\137\142\141\163\145\56\160\171"
#endif
},
    {"numpy.core.umath", modulecode_numpy$core$umath, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\165\155\141\164\150\56\160\171"
#endif
},
    {"numpy.ctypeslib", modulecode_numpy$ctypeslib, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\164\171\160\145\163\154\151\142\56\160\171"
#endif
},
    {"numpy.dtypes", modulecode_numpy$dtypes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\144\164\171\160\145\163\56\160\171"
#endif
},
    {"numpy.exceptions", modulecode_numpy$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\145\170\143\145\160\164\151\157\156\163\56\160\171"
#endif
},
    {"numpy.fft", modulecode_numpy$fft, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\146\146\164\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.fft._pocketfft", modulecode_numpy$fft$_pocketfft, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\146\146\164\134\137\160\157\143\153\145\164\146\146\164\56\160\171"
#endif
},
    {"numpy.fft.helper", modulecode_numpy$fft$helper, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\146\146\164\134\150\145\154\160\145\162\56\160\171"
#endif
},
    {"numpy.lib", modulecode_numpy$lib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.lib._datasource", modulecode_numpy$lib$_datasource, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\137\144\141\164\141\163\157\165\162\143\145\56\160\171"
#endif
},
    {"numpy.lib._iotools", modulecode_numpy$lib$_iotools, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\137\151\157\164\157\157\154\163\56\160\171"
#endif
},
    {"numpy.lib._version", modulecode_numpy$lib$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\137\166\145\162\163\151\157\156\56\160\171"
#endif
},
    {"numpy.lib.arraypad", modulecode_numpy$lib$arraypad, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\141\162\162\141\171\160\141\144\56\160\171"
#endif
},
    {"numpy.lib.arraysetops", modulecode_numpy$lib$arraysetops, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\141\162\162\141\171\163\145\164\157\160\163\56\160\171"
#endif
},
    {"numpy.lib.arrayterator", modulecode_numpy$lib$arrayterator, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\141\162\162\141\171\164\145\162\141\164\157\162\56\160\171"
#endif
},
    {"numpy.lib.format", modulecode_numpy$lib$format, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\146\157\162\155\141\164\56\160\171"
#endif
},
    {"numpy.lib.function_base", modulecode_numpy$lib$function_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\146\165\156\143\164\151\157\156\137\142\141\163\145\56\160\171"
#endif
},
    {"numpy.lib.histograms", modulecode_numpy$lib$histograms, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\150\151\163\164\157\147\162\141\155\163\56\160\171"
#endif
},
    {"numpy.lib.index_tricks", modulecode_numpy$lib$index_tricks, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\151\156\144\145\170\137\164\162\151\143\153\163\56\160\171"
#endif
},
    {"numpy.lib.mixins", modulecode_numpy$lib$mixins, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\155\151\170\151\156\163\56\160\171"
#endif
},
    {"numpy.lib.nanfunctions", modulecode_numpy$lib$nanfunctions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\156\141\156\146\165\156\143\164\151\157\156\163\56\160\171"
#endif
},
    {"numpy.lib.npyio", modulecode_numpy$lib$npyio, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\156\160\171\151\157\56\160\171"
#endif
},
    {"numpy.lib.polynomial", modulecode_numpy$lib$polynomial, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\160\157\154\171\156\157\155\151\141\154\56\160\171"
#endif
},
    {"numpy.lib.scimath", modulecode_numpy$lib$scimath, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\163\143\151\155\141\164\150\56\160\171"
#endif
},
    {"numpy.lib.shape_base", modulecode_numpy$lib$shape_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\163\150\141\160\145\137\142\141\163\145\56\160\171"
#endif
},
    {"numpy.lib.stride_tricks", modulecode_numpy$lib$stride_tricks, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\163\164\162\151\144\145\137\164\162\151\143\153\163\56\160\171"
#endif
},
    {"numpy.lib.twodim_base", modulecode_numpy$lib$twodim_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\164\167\157\144\151\155\137\142\141\163\145\56\160\171"
#endif
},
    {"numpy.lib.type_check", modulecode_numpy$lib$type_check, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\164\171\160\145\137\143\150\145\143\153\56\160\171"
#endif
},
    {"numpy.lib.ufunclike", modulecode_numpy$lib$ufunclike, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\165\146\165\156\143\154\151\153\145\56\160\171"
#endif
},
    {"numpy.lib.utils", modulecode_numpy$lib$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\165\164\151\154\163\56\160\171"
#endif
},
    {"numpy.linalg", modulecode_numpy$linalg, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\156\141\154\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.linalg.linalg", modulecode_numpy$linalg$linalg, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\156\141\154\147\134\154\151\156\141\154\147\56\160\171"
#endif
},
    {"numpy.ma", modulecode_numpy$ma, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\155\141\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.ma.core", modulecode_numpy$ma$core, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\155\141\134\143\157\162\145\56\160\171"
#endif
},
    {"numpy.ma.extras", modulecode_numpy$ma$extras, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\155\141\134\145\170\164\162\141\163\56\160\171"
#endif
},
    {"numpy.ma.mrecords", modulecode_numpy$ma$mrecords, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\155\141\134\155\162\145\143\157\162\144\163\56\160\171"
#endif
},
    {"numpy.matrixlib", modulecode_numpy$matrixlib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\155\141\164\162\151\170\154\151\142\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.matrixlib.defmatrix", modulecode_numpy$matrixlib$defmatrix, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\155\141\164\162\151\170\154\151\142\134\144\145\146\155\141\164\162\151\170\56\160\171"
#endif
},
    {"numpy.polynomial", modulecode_numpy$polynomial, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.polynomial._polybase", modulecode_numpy$polynomial$_polybase, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\137\160\157\154\171\142\141\163\145\56\160\171"
#endif
},
    {"numpy.polynomial.chebyshev", modulecode_numpy$polynomial$chebyshev, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\143\150\145\142\171\163\150\145\166\56\160\171"
#endif
},
    {"numpy.polynomial.hermite", modulecode_numpy$polynomial$hermite, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\150\145\162\155\151\164\145\56\160\171"
#endif
},
    {"numpy.polynomial.hermite_e", modulecode_numpy$polynomial$hermite_e, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\150\145\162\155\151\164\145\137\145\56\160\171"
#endif
},
    {"numpy.polynomial.laguerre", modulecode_numpy$polynomial$laguerre, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\154\141\147\165\145\162\162\145\56\160\171"
#endif
},
    {"numpy.polynomial.legendre", modulecode_numpy$polynomial$legendre, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\154\145\147\145\156\144\162\145\56\160\171"
#endif
},
    {"numpy.polynomial.polynomial", modulecode_numpy$polynomial$polynomial, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\160\157\154\171\156\157\155\151\141\154\56\160\171"
#endif
},
    {"numpy.polynomial.polyutils", modulecode_numpy$polynomial$polyutils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\160\157\154\171\165\164\151\154\163\56\160\171"
#endif
},
    {"numpy.random", modulecode_numpy$random, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\162\141\156\144\157\155\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.random._pickle", modulecode_numpy$random$_pickle, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\162\141\156\144\157\155\134\137\160\151\143\153\154\145\56\160\171"
#endif
},
    {"numpy.version", modulecode_numpy$version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\166\145\162\163\151\157\156\56\160\171"
#endif
},
    {"openpyxl", modulecode_openpyxl, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"openpyxl._constants", modulecode_openpyxl$_constants, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\137\143\157\156\163\164\141\156\164\163\56\160\171"
#endif
},
    {"openpyxl.cell", modulecode_openpyxl$cell, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\145\154\154\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"openpyxl.cell._writer", modulecode_openpyxl$cell$_writer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\145\154\154\134\137\167\162\151\164\145\162\56\160\171"
#endif
},
    {"openpyxl.cell.cell", modulecode_openpyxl$cell$cell, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\145\154\154\134\143\145\154\154\56\160\171"
#endif
},
    {"openpyxl.cell.read_only", modulecode_openpyxl$cell$read_only, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\145\154\154\134\162\145\141\144\137\157\156\154\171\56\160\171"
#endif
},
    {"openpyxl.cell.rich_text", modulecode_openpyxl$cell$rich_text, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\145\154\154\134\162\151\143\150\137\164\145\170\164\56\160\171"
#endif
},
    {"openpyxl.cell.text", modulecode_openpyxl$cell$text, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\145\154\154\134\164\145\170\164\56\160\171"
#endif
},
    {"openpyxl.chart", modulecode_openpyxl$chart, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"openpyxl.chart._3d", modulecode_openpyxl$chart$_3d, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\137\63\144\56\160\171"
#endif
},
    {"openpyxl.chart._chart", modulecode_openpyxl$chart$_chart, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\137\143\150\141\162\164\56\160\171"
#endif
},
    {"openpyxl.chart.area_chart", modulecode_openpyxl$chart$area_chart, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\141\162\145\141\137\143\150\141\162\164\56\160\171"
#endif
},
    {"openpyxl.chart.axis", modulecode_openpyxl$chart$axis, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\141\170\151\163\56\160\171"
#endif
},
    {"openpyxl.chart.bar_chart", modulecode_openpyxl$chart$bar_chart, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\142\141\162\137\143\150\141\162\164\56\160\171"
#endif
},
    {"openpyxl.chart.bubble_chart", modulecode_openpyxl$chart$bubble_chart, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\142\165\142\142\154\145\137\143\150\141\162\164\56\160\171"
#endif
},
    {"openpyxl.chart.chartspace", modulecode_openpyxl$chart$chartspace, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\143\150\141\162\164\163\160\141\143\145\56\160\171"
#endif
},
    {"openpyxl.chart.data_source", modulecode_openpyxl$chart$data_source, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\144\141\164\141\137\163\157\165\162\143\145\56\160\171"
#endif
},
    {"openpyxl.chart.descriptors", modulecode_openpyxl$chart$descriptors, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\144\145\163\143\162\151\160\164\157\162\163\56\160\171"
#endif
},
    {"openpyxl.chart.error_bar", modulecode_openpyxl$chart$error_bar, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\145\162\162\157\162\137\142\141\162\56\160\171"
#endif
},
    {"openpyxl.chart.label", modulecode_openpyxl$chart$label, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\154\141\142\145\154\56\160\171"
#endif
},
    {"openpyxl.chart.layout", modulecode_openpyxl$chart$layout, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\154\141\171\157\165\164\56\160\171"
#endif
},
    {"openpyxl.chart.legend", modulecode_openpyxl$chart$legend, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\154\145\147\145\156\144\56\160\171"
#endif
},
    {"openpyxl.chart.line_chart", modulecode_openpyxl$chart$line_chart, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\154\151\156\145\137\143\150\141\162\164\56\160\171"
#endif
},
    {"openpyxl.chart.marker", modulecode_openpyxl$chart$marker, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\155\141\162\153\145\162\56\160\171"
#endif
},
    {"openpyxl.chart.picture", modulecode_openpyxl$chart$picture, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\160\151\143\164\165\162\145\56\160\171"
#endif
},
    {"openpyxl.chart.pie_chart", modulecode_openpyxl$chart$pie_chart, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\160\151\145\137\143\150\141\162\164\56\160\171"
#endif
},
    {"openpyxl.chart.pivot", modulecode_openpyxl$chart$pivot, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\160\151\166\157\164\56\160\171"
#endif
},
    {"openpyxl.chart.plotarea", modulecode_openpyxl$chart$plotarea, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\160\154\157\164\141\162\145\141\56\160\171"
#endif
},
    {"openpyxl.chart.print_settings", modulecode_openpyxl$chart$print_settings, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\160\162\151\156\164\137\163\145\164\164\151\156\147\163\56\160\171"
#endif
},
    {"openpyxl.chart.radar_chart", modulecode_openpyxl$chart$radar_chart, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\162\141\144\141\162\137\143\150\141\162\164\56\160\171"
#endif
},
    {"openpyxl.chart.reader", modulecode_openpyxl$chart$reader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\162\145\141\144\145\162\56\160\171"
#endif
},
    {"openpyxl.chart.reference", modulecode_openpyxl$chart$reference, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\162\145\146\145\162\145\156\143\145\56\160\171"
#endif
},
    {"openpyxl.chart.scatter_chart", modulecode_openpyxl$chart$scatter_chart, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\163\143\141\164\164\145\162\137\143\150\141\162\164\56\160\171"
#endif
},
    {"openpyxl.chart.series", modulecode_openpyxl$chart$series, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\163\145\162\151\145\163\56\160\171"
#endif
},
    {"openpyxl.chart.series_factory", modulecode_openpyxl$chart$series_factory, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\163\145\162\151\145\163\137\146\141\143\164\157\162\171\56\160\171"
#endif
},
    {"openpyxl.chart.shapes", modulecode_openpyxl$chart$shapes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\163\150\141\160\145\163\56\160\171"
#endif
},
    {"openpyxl.chart.stock_chart", modulecode_openpyxl$chart$stock_chart, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\163\164\157\143\153\137\143\150\141\162\164\56\160\171"
#endif
},
    {"openpyxl.chart.surface_chart", modulecode_openpyxl$chart$surface_chart, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\163\165\162\146\141\143\145\137\143\150\141\162\164\56\160\171"
#endif
},
    {"openpyxl.chart.text", modulecode_openpyxl$chart$text, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\164\145\170\164\56\160\171"
#endif
},
    {"openpyxl.chart.title", modulecode_openpyxl$chart$title, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\164\151\164\154\145\56\160\171"
#endif
},
    {"openpyxl.chart.trendline", modulecode_openpyxl$chart$trendline, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\164\162\145\156\144\154\151\156\145\56\160\171"
#endif
},
    {"openpyxl.chart.updown_bars", modulecode_openpyxl$chart$updown_bars, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\165\160\144\157\167\156\137\142\141\162\163\56\160\171"
#endif
},
    {"openpyxl.chartsheet", modulecode_openpyxl$chartsheet, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\163\150\145\145\164\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"openpyxl.chartsheet.chartsheet", modulecode_openpyxl$chartsheet$chartsheet, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\163\150\145\145\164\134\143\150\141\162\164\163\150\145\145\164\56\160\171"
#endif
},
    {"openpyxl.chartsheet.custom", modulecode_openpyxl$chartsheet$custom, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\163\150\145\145\164\134\143\165\163\164\157\155\56\160\171"
#endif
},
    {"openpyxl.chartsheet.properties", modulecode_openpyxl$chartsheet$properties, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\163\150\145\145\164\134\160\162\157\160\145\162\164\151\145\163\56\160\171"
#endif
},
    {"openpyxl.chartsheet.protection", modulecode_openpyxl$chartsheet$protection, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\163\150\145\145\164\134\160\162\157\164\145\143\164\151\157\156\56\160\171"
#endif
},
    {"openpyxl.chartsheet.publish", modulecode_openpyxl$chartsheet$publish, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\163\150\145\145\164\134\160\165\142\154\151\163\150\56\160\171"
#endif
},
    {"openpyxl.chartsheet.relation", modulecode_openpyxl$chartsheet$relation, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\163\150\145\145\164\134\162\145\154\141\164\151\157\156\56\160\171"
#endif
},
    {"openpyxl.chartsheet.views", modulecode_openpyxl$chartsheet$views, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\163\150\145\145\164\134\166\151\145\167\163\56\160\171"
#endif
},
    {"openpyxl.comments", modulecode_openpyxl$comments, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\157\155\155\145\156\164\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"openpyxl.comments.author", modulecode_openpyxl$comments$author, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\157\155\155\145\156\164\163\134\141\165\164\150\157\162\56\160\171"
#endif
},
    {"openpyxl.comments.comment_sheet", modulecode_openpyxl$comments$comment_sheet, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\157\155\155\145\156\164\163\134\143\157\155\155\145\156\164\137\163\150\145\145\164\56\160\171"
#endif
},
    {"openpyxl.comments.comments", modulecode_openpyxl$comments$comments, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\157\155\155\145\156\164\163\134\143\157\155\155\145\156\164\163\56\160\171"
#endif
},
    {"openpyxl.comments.shape_writer", modulecode_openpyxl$comments$shape_writer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\157\155\155\145\156\164\163\134\163\150\141\160\145\137\167\162\151\164\145\162\56\160\171"
#endif
},
    {"openpyxl.compat", modulecode_openpyxl$compat, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\157\155\160\141\164\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"openpyxl.compat.numbers", modulecode_openpyxl$compat$numbers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\157\155\160\141\164\134\156\165\155\142\145\162\163\56\160\171"
#endif
},
    {"openpyxl.compat.strings", modulecode_openpyxl$compat$strings, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\157\155\160\141\164\134\163\164\162\151\156\147\163\56\160\171"
#endif
},
    {"openpyxl.descriptors", modulecode_openpyxl$descriptors, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\145\163\143\162\151\160\164\157\162\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"openpyxl.descriptors.base", modulecode_openpyxl$descriptors$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\145\163\143\162\151\160\164\157\162\163\134\142\141\163\145\56\160\171"
#endif
},
    {"openpyxl.descriptors.excel", modulecode_openpyxl$descriptors$excel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\145\163\143\162\151\160\164\157\162\163\134\145\170\143\145\154\56\160\171"
#endif
},
    {"openpyxl.descriptors.namespace", modulecode_openpyxl$descriptors$namespace, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\145\163\143\162\151\160\164\157\162\163\134\156\141\155\145\163\160\141\143\145\56\160\171"
#endif
},
    {"openpyxl.descriptors.nested", modulecode_openpyxl$descriptors$nested, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\145\163\143\162\151\160\164\157\162\163\134\156\145\163\164\145\144\56\160\171"
#endif
},
    {"openpyxl.descriptors.sequence", modulecode_openpyxl$descriptors$sequence, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\145\163\143\162\151\160\164\157\162\163\134\163\145\161\165\145\156\143\145\56\160\171"
#endif
},
    {"openpyxl.descriptors.serialisable", modulecode_openpyxl$descriptors$serialisable, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\145\163\143\162\151\160\164\157\162\163\134\163\145\162\151\141\154\151\163\141\142\154\145\56\160\171"
#endif
},
    {"openpyxl.drawing", modulecode_openpyxl$drawing, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\162\141\167\151\156\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"openpyxl.drawing.colors", modulecode_openpyxl$drawing$colors, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\162\141\167\151\156\147\134\143\157\154\157\162\163\56\160\171"
#endif
},
    {"openpyxl.drawing.connector", modulecode_openpyxl$drawing$connector, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\162\141\167\151\156\147\134\143\157\156\156\145\143\164\157\162\56\160\171"
#endif
},
    {"openpyxl.drawing.drawing", modulecode_openpyxl$drawing$drawing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\162\141\167\151\156\147\134\144\162\141\167\151\156\147\56\160\171"
#endif
},
    {"openpyxl.drawing.effect", modulecode_openpyxl$drawing$effect, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\162\141\167\151\156\147\134\145\146\146\145\143\164\56\160\171"
#endif
},
    {"openpyxl.drawing.fill", modulecode_openpyxl$drawing$fill, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\162\141\167\151\156\147\134\146\151\154\154\56\160\171"
#endif
},
    {"openpyxl.drawing.geometry", modulecode_openpyxl$drawing$geometry, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\162\141\167\151\156\147\134\147\145\157\155\145\164\162\171\56\160\171"
#endif
},
    {"openpyxl.drawing.graphic", modulecode_openpyxl$drawing$graphic, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\162\141\167\151\156\147\134\147\162\141\160\150\151\143\56\160\171"
#endif
},
    {"openpyxl.drawing.image", modulecode_openpyxl$drawing$image, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\162\141\167\151\156\147\134\151\155\141\147\145\56\160\171"
#endif
},
    {"openpyxl.drawing.line", modulecode_openpyxl$drawing$line, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\162\141\167\151\156\147\134\154\151\156\145\56\160\171"
#endif
},
    {"openpyxl.drawing.picture", modulecode_openpyxl$drawing$picture, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\162\141\167\151\156\147\134\160\151\143\164\165\162\145\56\160\171"
#endif
},
    {"openpyxl.drawing.properties", modulecode_openpyxl$drawing$properties, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\162\141\167\151\156\147\134\160\162\157\160\145\162\164\151\145\163\56\160\171"
#endif
},
    {"openpyxl.drawing.relation", modulecode_openpyxl$drawing$relation, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\162\141\167\151\156\147\134\162\145\154\141\164\151\157\156\56\160\171"
#endif
},
    {"openpyxl.drawing.spreadsheet_drawing", modulecode_openpyxl$drawing$spreadsheet_drawing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\162\141\167\151\156\147\134\163\160\162\145\141\144\163\150\145\145\164\137\144\162\141\167\151\156\147\56\160\171"
#endif
},
    {"openpyxl.drawing.text", modulecode_openpyxl$drawing$text, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\162\141\167\151\156\147\134\164\145\170\164\56\160\171"
#endif
},
    {"openpyxl.drawing.xdr", modulecode_openpyxl$drawing$xdr, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\162\141\167\151\156\147\134\170\144\162\56\160\171"
#endif
},
    {"openpyxl.formatting", modulecode_openpyxl$formatting, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\146\157\162\155\141\164\164\151\156\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"openpyxl.formatting.formatting", modulecode_openpyxl$formatting$formatting, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\146\157\162\155\141\164\164\151\156\147\134\146\157\162\155\141\164\164\151\156\147\56\160\171"
#endif
},
    {"openpyxl.formatting.rule", modulecode_openpyxl$formatting$rule, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\146\157\162\155\141\164\164\151\156\147\134\162\165\154\145\56\160\171"
#endif
},
    {"openpyxl.formula", modulecode_openpyxl$formula, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\146\157\162\155\165\154\141\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"openpyxl.formula.tokenizer", modulecode_openpyxl$formula$tokenizer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\146\157\162\155\165\154\141\134\164\157\153\145\156\151\172\145\162\56\160\171"
#endif
},
    {"openpyxl.formula.translate", modulecode_openpyxl$formula$translate, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\146\157\162\155\165\154\141\134\164\162\141\156\163\154\141\164\145\56\160\171"
#endif
},
    {"openpyxl.packaging", modulecode_openpyxl$packaging, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\160\141\143\153\141\147\151\156\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"openpyxl.packaging.core", modulecode_openpyxl$packaging$core, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\160\141\143\153\141\147\151\156\147\134\143\157\162\145\56\160\171"
#endif
},
    {"openpyxl.packaging.custom", modulecode_openpyxl$packaging$custom, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\160\141\143\153\141\147\151\156\147\134\143\165\163\164\157\155\56\160\171"
#endif
},
    {"openpyxl.packaging.extended", modulecode_openpyxl$packaging$extended, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\160\141\143\153\141\147\151\156\147\134\145\170\164\145\156\144\145\144\56\160\171"
#endif
},
    {"openpyxl.packaging.manifest", modulecode_openpyxl$packaging$manifest, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\160\141\143\153\141\147\151\156\147\134\155\141\156\151\146\145\163\164\56\160\171"
#endif
},
    {"openpyxl.packaging.relationship", modulecode_openpyxl$packaging$relationship, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\160\141\143\153\141\147\151\156\147\134\162\145\154\141\164\151\157\156\163\150\151\160\56\160\171"
#endif
},
    {"openpyxl.packaging.workbook", modulecode_openpyxl$packaging$workbook, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\160\141\143\153\141\147\151\156\147\134\167\157\162\153\142\157\157\153\56\160\171"
#endif
},
    {"openpyxl.pivot", modulecode_openpyxl$pivot, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\160\151\166\157\164\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"openpyxl.pivot.cache", modulecode_openpyxl$pivot$cache, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\160\151\166\157\164\134\143\141\143\150\145\56\160\171"
#endif
},
    {"openpyxl.pivot.fields", modulecode_openpyxl$pivot$fields, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\160\151\166\157\164\134\146\151\145\154\144\163\56\160\171"
#endif
},
    {"openpyxl.pivot.record", modulecode_openpyxl$pivot$record, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\160\151\166\157\164\134\162\145\143\157\162\144\56\160\171"
#endif
},
    {"openpyxl.pivot.table", modulecode_openpyxl$pivot$table, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\160\151\166\157\164\134\164\141\142\154\145\56\160\171"
#endif
},
    {"openpyxl.reader", modulecode_openpyxl$reader, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\162\145\141\144\145\162\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"openpyxl.reader.drawings", modulecode_openpyxl$reader$drawings, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\162\145\141\144\145\162\134\144\162\141\167\151\156\147\163\56\160\171"
#endif
},
    {"openpyxl.reader.excel", modulecode_openpyxl$reader$excel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\162\145\141\144\145\162\134\145\170\143\145\154\56\160\171"
#endif
},
    {"openpyxl.reader.strings", modulecode_openpyxl$reader$strings, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\162\145\141\144\145\162\134\163\164\162\151\156\147\163\56\160\171"
#endif
},
    {"openpyxl.reader.workbook", modulecode_openpyxl$reader$workbook, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\162\145\141\144\145\162\134\167\157\162\153\142\157\157\153\56\160\171"
#endif
},
    {"openpyxl.styles", modulecode_openpyxl$styles, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\163\164\171\154\145\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"openpyxl.styles.alignment", modulecode_openpyxl$styles$alignment, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\163\164\171\154\145\163\134\141\154\151\147\156\155\145\156\164\56\160\171"
#endif
},
    {"openpyxl.styles.borders", modulecode_openpyxl$styles$borders, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\163\164\171\154\145\163\134\142\157\162\144\145\162\163\56\160\171"
#endif
},
    {"openpyxl.styles.builtins", modulecode_openpyxl$styles$builtins, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\163\164\171\154\145\163\134\142\165\151\154\164\151\156\163\56\160\171"
#endif
},
    {"openpyxl.styles.cell_style", modulecode_openpyxl$styles$cell_style, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\163\164\171\154\145\163\134\143\145\154\154\137\163\164\171\154\145\56\160\171"
#endif
},
    {"openpyxl.styles.colors", modulecode_openpyxl$styles$colors, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\163\164\171\154\145\163\134\143\157\154\157\162\163\56\160\171"
#endif
},
    {"openpyxl.styles.differential", modulecode_openpyxl$styles$differential, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\163\164\171\154\145\163\134\144\151\146\146\145\162\145\156\164\151\141\154\56\160\171"
#endif
},
    {"openpyxl.styles.fills", modulecode_openpyxl$styles$fills, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\163\164\171\154\145\163\134\146\151\154\154\163\56\160\171"
#endif
},
    {"openpyxl.styles.fonts", modulecode_openpyxl$styles$fonts, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\163\164\171\154\145\163\134\146\157\156\164\163\56\160\171"
#endif
},
    {"openpyxl.styles.named_styles", modulecode_openpyxl$styles$named_styles, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\163\164\171\154\145\163\134\156\141\155\145\144\137\163\164\171\154\145\163\56\160\171"
#endif
},
    {"openpyxl.styles.numbers", modulecode_openpyxl$styles$numbers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\163\164\171\154\145\163\134\156\165\155\142\145\162\163\56\160\171"
#endif
},
    {"openpyxl.styles.protection", modulecode_openpyxl$styles$protection, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\163\164\171\154\145\163\134\160\162\157\164\145\143\164\151\157\156\56\160\171"
#endif
},
    {"openpyxl.styles.proxy", modulecode_openpyxl$styles$proxy, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\163\164\171\154\145\163\134\160\162\157\170\171\56\160\171"
#endif
},
    {"openpyxl.styles.styleable", modulecode_openpyxl$styles$styleable, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\163\164\171\154\145\163\134\163\164\171\154\145\141\142\154\145\56\160\171"
#endif
},
    {"openpyxl.styles.stylesheet", modulecode_openpyxl$styles$stylesheet, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\163\164\171\154\145\163\134\163\164\171\154\145\163\150\145\145\164\56\160\171"
#endif
},
    {"openpyxl.styles.table", modulecode_openpyxl$styles$table, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\163\164\171\154\145\163\134\164\141\142\154\145\56\160\171"
#endif
},
    {"openpyxl.utils", modulecode_openpyxl$utils, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\165\164\151\154\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"openpyxl.utils.bound_dictionary", modulecode_openpyxl$utils$bound_dictionary, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\165\164\151\154\163\134\142\157\165\156\144\137\144\151\143\164\151\157\156\141\162\171\56\160\171"
#endif
},
    {"openpyxl.utils.cell", modulecode_openpyxl$utils$cell, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\165\164\151\154\163\134\143\145\154\154\56\160\171"
#endif
},
    {"openpyxl.utils.datetime", modulecode_openpyxl$utils$datetime, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\165\164\151\154\163\134\144\141\164\145\164\151\155\145\56\160\171"
#endif
},
    {"openpyxl.utils.escape", modulecode_openpyxl$utils$escape, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\165\164\151\154\163\134\145\163\143\141\160\145\56\160\171"
#endif
},
    {"openpyxl.utils.exceptions", modulecode_openpyxl$utils$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\165\164\151\154\163\134\145\170\143\145\160\164\151\157\156\163\56\160\171"
#endif
},
    {"openpyxl.utils.formulas", modulecode_openpyxl$utils$formulas, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\165\164\151\154\163\134\146\157\162\155\165\154\141\163\56\160\171"
#endif
},
    {"openpyxl.utils.indexed_list", modulecode_openpyxl$utils$indexed_list, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\165\164\151\154\163\134\151\156\144\145\170\145\144\137\154\151\163\164\56\160\171"
#endif
},
    {"openpyxl.utils.protection", modulecode_openpyxl$utils$protection, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\165\164\151\154\163\134\160\162\157\164\145\143\164\151\157\156\56\160\171"
#endif
},
    {"openpyxl.utils.units", modulecode_openpyxl$utils$units, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\165\164\151\154\163\134\165\156\151\164\163\56\160\171"
#endif
},
    {"openpyxl.workbook", modulecode_openpyxl$workbook, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\142\157\157\153\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"openpyxl.workbook._writer", modulecode_openpyxl$workbook$_writer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\142\157\157\153\134\137\167\162\151\164\145\162\56\160\171"
#endif
},
    {"openpyxl.workbook.child", modulecode_openpyxl$workbook$child, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\142\157\157\153\134\143\150\151\154\144\56\160\171"
#endif
},
    {"openpyxl.workbook.defined_name", modulecode_openpyxl$workbook$defined_name, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\142\157\157\153\134\144\145\146\151\156\145\144\137\156\141\155\145\56\160\171"
#endif
},
    {"openpyxl.workbook.external_link", modulecode_openpyxl$workbook$external_link, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\142\157\157\153\134\145\170\164\145\162\156\141\154\137\154\151\156\153\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"openpyxl.workbook.external_link.external", modulecode_openpyxl$workbook$external_link$external, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\142\157\157\153\134\145\170\164\145\162\156\141\154\137\154\151\156\153\134\145\170\164\145\162\156\141\154\56\160\171"
#endif
},
    {"openpyxl.workbook.external_reference", modulecode_openpyxl$workbook$external_reference, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\142\157\157\153\134\145\170\164\145\162\156\141\154\137\162\145\146\145\162\145\156\143\145\56\160\171"
#endif
},
    {"openpyxl.workbook.function_group", modulecode_openpyxl$workbook$function_group, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\142\157\157\153\134\146\165\156\143\164\151\157\156\137\147\162\157\165\160\56\160\171"
#endif
},
    {"openpyxl.workbook.properties", modulecode_openpyxl$workbook$properties, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\142\157\157\153\134\160\162\157\160\145\162\164\151\145\163\56\160\171"
#endif
},
    {"openpyxl.workbook.protection", modulecode_openpyxl$workbook$protection, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\142\157\157\153\134\160\162\157\164\145\143\164\151\157\156\56\160\171"
#endif
},
    {"openpyxl.workbook.smart_tags", modulecode_openpyxl$workbook$smart_tags, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\142\157\157\153\134\163\155\141\162\164\137\164\141\147\163\56\160\171"
#endif
},
    {"openpyxl.workbook.views", modulecode_openpyxl$workbook$views, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\142\157\157\153\134\166\151\145\167\163\56\160\171"
#endif
},
    {"openpyxl.workbook.web", modulecode_openpyxl$workbook$web, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\142\157\157\153\134\167\145\142\56\160\171"
#endif
},
    {"openpyxl.workbook.workbook", modulecode_openpyxl$workbook$workbook, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\142\157\157\153\134\167\157\162\153\142\157\157\153\56\160\171"
#endif
},
    {"openpyxl.worksheet", modulecode_openpyxl$worksheet, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"openpyxl.worksheet._read_only", modulecode_openpyxl$worksheet$_read_only, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\137\162\145\141\144\137\157\156\154\171\56\160\171"
#endif
},
    {"openpyxl.worksheet._reader", modulecode_openpyxl$worksheet$_reader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\137\162\145\141\144\145\162\56\160\171"
#endif
},
    {"openpyxl.worksheet._write_only", modulecode_openpyxl$worksheet$_write_only, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\137\167\162\151\164\145\137\157\156\154\171\56\160\171"
#endif
},
    {"openpyxl.worksheet._writer", modulecode_openpyxl$worksheet$_writer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\137\167\162\151\164\145\162\56\160\171"
#endif
},
    {"openpyxl.worksheet.cell_range", modulecode_openpyxl$worksheet$cell_range, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\143\145\154\154\137\162\141\156\147\145\56\160\171"
#endif
},
    {"openpyxl.worksheet.copier", modulecode_openpyxl$worksheet$copier, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\143\157\160\151\145\162\56\160\171"
#endif
},
    {"openpyxl.worksheet.datavalidation", modulecode_openpyxl$worksheet$datavalidation, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\144\141\164\141\166\141\154\151\144\141\164\151\157\156\56\160\171"
#endif
},
    {"openpyxl.worksheet.dimensions", modulecode_openpyxl$worksheet$dimensions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\144\151\155\145\156\163\151\157\156\163\56\160\171"
#endif
},
    {"openpyxl.worksheet.drawing", modulecode_openpyxl$worksheet$drawing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\144\162\141\167\151\156\147\56\160\171"
#endif
},
    {"openpyxl.worksheet.filters", modulecode_openpyxl$worksheet$filters, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\146\151\154\164\145\162\163\56\160\171"
#endif
},
    {"openpyxl.worksheet.formula", modulecode_openpyxl$worksheet$formula, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\146\157\162\155\165\154\141\56\160\171"
#endif
},
    {"openpyxl.worksheet.header_footer", modulecode_openpyxl$worksheet$header_footer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\150\145\141\144\145\162\137\146\157\157\164\145\162\56\160\171"
#endif
},
    {"openpyxl.worksheet.hyperlink", modulecode_openpyxl$worksheet$hyperlink, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\150\171\160\145\162\154\151\156\153\56\160\171"
#endif
},
    {"openpyxl.worksheet.merge", modulecode_openpyxl$worksheet$merge, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\155\145\162\147\145\56\160\171"
#endif
},
    {"openpyxl.worksheet.page", modulecode_openpyxl$worksheet$page, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\160\141\147\145\56\160\171"
#endif
},
    {"openpyxl.worksheet.pagebreak", modulecode_openpyxl$worksheet$pagebreak, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\160\141\147\145\142\162\145\141\153\56\160\171"
#endif
},
    {"openpyxl.worksheet.print_settings", modulecode_openpyxl$worksheet$print_settings, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\160\162\151\156\164\137\163\145\164\164\151\156\147\163\56\160\171"
#endif
},
    {"openpyxl.worksheet.properties", modulecode_openpyxl$worksheet$properties, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\160\162\157\160\145\162\164\151\145\163\56\160\171"
#endif
},
    {"openpyxl.worksheet.protection", modulecode_openpyxl$worksheet$protection, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\160\162\157\164\145\143\164\151\157\156\56\160\171"
#endif
},
    {"openpyxl.worksheet.related", modulecode_openpyxl$worksheet$related, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\162\145\154\141\164\145\144\56\160\171"
#endif
},
    {"openpyxl.worksheet.scenario", modulecode_openpyxl$worksheet$scenario, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\163\143\145\156\141\162\151\157\56\160\171"
#endif
},
    {"openpyxl.worksheet.table", modulecode_openpyxl$worksheet$table, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\164\141\142\154\145\56\160\171"
#endif
},
    {"openpyxl.worksheet.views", modulecode_openpyxl$worksheet$views, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\166\151\145\167\163\56\160\171"
#endif
},
    {"openpyxl.worksheet.worksheet", modulecode_openpyxl$worksheet$worksheet, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\167\157\162\153\163\150\145\145\164\56\160\171"
#endif
},
    {"openpyxl.writer", modulecode_openpyxl$writer, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\162\151\164\145\162\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"openpyxl.writer.excel", modulecode_openpyxl$writer$excel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\162\151\164\145\162\134\145\170\143\145\154\56\160\171"
#endif
},
    {"openpyxl.writer.theme", modulecode_openpyxl$writer$theme, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\162\151\164\145\162\134\164\150\145\155\145\56\160\171"
#endif
},
    {"openpyxl.xml", modulecode_openpyxl$xml, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\170\155\154\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"openpyxl.xml.constants", modulecode_openpyxl$xml$constants, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\170\155\154\134\143\157\156\163\164\141\156\164\163\56\160\171"
#endif
},
    {"openpyxl.xml.functions", modulecode_openpyxl$xml$functions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\170\155\154\134\146\165\156\143\164\151\157\156\163\56\160\171"
#endif
},
    {"pandas", modulecode_pandas, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas._config", modulecode_pandas$_config, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\137\143\157\156\146\151\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas._config.config", modulecode_pandas$_config$config, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\137\143\157\156\146\151\147\134\143\157\156\146\151\147\56\160\171"
#endif
},
    {"pandas._config.dates", modulecode_pandas$_config$dates, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\137\143\157\156\146\151\147\134\144\141\164\145\163\56\160\171"
#endif
},
    {"pandas._config.display", modulecode_pandas$_config$display, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\137\143\157\156\146\151\147\134\144\151\163\160\154\141\171\56\160\171"
#endif
},
    {"pandas._libs", modulecode_pandas$_libs, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\137\154\151\142\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas._libs.tslibs", modulecode_pandas$_libs$tslibs, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\137\154\151\142\163\134\164\163\154\151\142\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas._libs.window", modulecode_pandas$_libs$window, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\137\154\151\142\163\134\167\151\156\144\157\167\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas._typing", modulecode_pandas$_typing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\137\164\171\160\151\156\147\56\160\171"
#endif
},
    {"pandas._version", modulecode_pandas$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\137\166\145\162\163\151\157\156\56\160\171"
#endif
},
    {"pandas._version_meson", modulecode_pandas$_version_meson, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\137\166\145\162\163\151\157\156\137\155\145\163\157\156\56\160\171"
#endif
},
    {"pandas.api", modulecode_pandas$api, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\141\160\151\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.api.extensions", modulecode_pandas$api$extensions, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\141\160\151\134\145\170\164\145\156\163\151\157\156\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.api.indexers", modulecode_pandas$api$indexers, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\141\160\151\134\151\156\144\145\170\145\162\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.api.interchange", modulecode_pandas$api$interchange, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\141\160\151\134\151\156\164\145\162\143\150\141\156\147\145\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.api.types", modulecode_pandas$api$types, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\141\160\151\134\164\171\160\145\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.api.typing", modulecode_pandas$api$typing, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\141\160\151\134\164\171\160\151\156\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.arrays", modulecode_pandas$arrays, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\141\162\162\141\171\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.compat", modulecode_pandas$compat, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\155\160\141\164\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.compat._constants", modulecode_pandas$compat$_constants, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\155\160\141\164\134\137\143\157\156\163\164\141\156\164\163\56\160\171"
#endif
},
    {"pandas.compat._optional", modulecode_pandas$compat$_optional, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\155\160\141\164\134\137\157\160\164\151\157\156\141\154\56\160\171"
#endif
},
    {"pandas.compat.compressors", modulecode_pandas$compat$compressors, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\155\160\141\164\134\143\157\155\160\162\145\163\163\157\162\163\56\160\171"
#endif
},
    {"pandas.compat.numpy", modulecode_pandas$compat$numpy, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\155\160\141\164\134\156\165\155\160\171\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.compat.numpy.function", modulecode_pandas$compat$numpy$function, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\155\160\141\164\134\156\165\155\160\171\134\146\165\156\143\164\151\157\156\56\160\171"
#endif
},
    {"pandas.compat.pickle_compat", modulecode_pandas$compat$pickle_compat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\155\160\141\164\134\160\151\143\153\154\145\137\143\157\155\160\141\164\56\160\171"
#endif
},
    {"pandas.compat.pyarrow", modulecode_pandas$compat$pyarrow, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\155\160\141\164\134\160\171\141\162\162\157\167\56\160\171"
#endif
},
    {"pandas.core", modulecode_pandas$core, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.core._numba", modulecode_pandas$core$_numba, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\137\156\165\155\142\141\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.core._numba.executor", modulecode_pandas$core$_numba$executor, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\137\156\165\155\142\141\134\145\170\145\143\165\164\157\162\56\160\171"
#endif
},
    {"pandas.core.accessor", modulecode_pandas$core$accessor, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\143\143\145\163\163\157\162\56\160\171"
#endif
},
    {"pandas.core.algorithms", modulecode_pandas$core$algorithms, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\154\147\157\162\151\164\150\155\163\56\160\171"
#endif
},
    {"pandas.core.api", modulecode_pandas$core$api, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\160\151\56\160\171"
#endif
},
    {"pandas.core.apply", modulecode_pandas$core$apply, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\160\160\154\171\56\160\171"
#endif
},
    {"pandas.core.array_algos", modulecode_pandas$core$array_algos, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\137\141\154\147\157\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.core.array_algos.datetimelike_accumulations", modulecode_pandas$core$array_algos$datetimelike_accumulations, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\137\141\154\147\157\163\134\144\141\164\145\164\151\155\145\154\151\153\145\137\141\143\143\165\155\165\154\141\164\151\157\156\163\56\160\171"
#endif
},
    {"pandas.core.array_algos.masked_accumulations", modulecode_pandas$core$array_algos$masked_accumulations, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\137\141\154\147\157\163\134\155\141\163\153\145\144\137\141\143\143\165\155\165\154\141\164\151\157\156\163\56\160\171"
#endif
},
    {"pandas.core.array_algos.masked_reductions", modulecode_pandas$core$array_algos$masked_reductions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\137\141\154\147\157\163\134\155\141\163\153\145\144\137\162\145\144\165\143\164\151\157\156\163\56\160\171"
#endif
},
    {"pandas.core.array_algos.putmask", modulecode_pandas$core$array_algos$putmask, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\137\141\154\147\157\163\134\160\165\164\155\141\163\153\56\160\171"
#endif
},
    {"pandas.core.array_algos.quantile", modulecode_pandas$core$array_algos$quantile, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\137\141\154\147\157\163\134\161\165\141\156\164\151\154\145\56\160\171"
#endif
},
    {"pandas.core.array_algos.replace", modulecode_pandas$core$array_algos$replace, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\137\141\154\147\157\163\134\162\145\160\154\141\143\145\56\160\171"
#endif
},
    {"pandas.core.array_algos.take", modulecode_pandas$core$array_algos$take, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\137\141\154\147\157\163\134\164\141\153\145\56\160\171"
#endif
},
    {"pandas.core.array_algos.transforms", modulecode_pandas$core$array_algos$transforms, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\137\141\154\147\157\163\134\164\162\141\156\163\146\157\162\155\163\56\160\171"
#endif
},
    {"pandas.core.arraylike", modulecode_pandas$core$arraylike, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\154\151\153\145\56\160\171"
#endif
},
    {"pandas.core.arrays", modulecode_pandas$core$arrays, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.core.arrays._arrow_string_mixins", modulecode_pandas$core$arrays$_arrow_string_mixins, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\137\141\162\162\157\167\137\163\164\162\151\156\147\137\155\151\170\151\156\163\56\160\171"
#endif
},
    {"pandas.core.arrays._mixins", modulecode_pandas$core$arrays$_mixins, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\137\155\151\170\151\156\163\56\160\171"
#endif
},
    {"pandas.core.arrays._ranges", modulecode_pandas$core$arrays$_ranges, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\137\162\141\156\147\145\163\56\160\171"
#endif
},
    {"pandas.core.arrays.arrow", modulecode_pandas$core$arrays$arrow, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\141\162\162\157\167\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.core.arrays.arrow._arrow_utils", modulecode_pandas$core$arrays$arrow$_arrow_utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\141\162\162\157\167\134\137\141\162\162\157\167\137\165\164\151\154\163\56\160\171"
#endif
},
    {"pandas.core.arrays.arrow.array", modulecode_pandas$core$arrays$arrow$array, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\141\162\162\157\167\134\141\162\162\141\171\56\160\171"
#endif
},
    {"pandas.core.arrays.arrow.extension_types", modulecode_pandas$core$arrays$arrow$extension_types, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\141\162\162\157\167\134\145\170\164\145\156\163\151\157\156\137\164\171\160\145\163\56\160\171"
#endif
},
    {"pandas.core.arrays.base", modulecode_pandas$core$arrays$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\142\141\163\145\56\160\171"
#endif
},
    {"pandas.core.arrays.boolean", modulecode_pandas$core$arrays$boolean, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\142\157\157\154\145\141\156\56\160\171"
#endif
},
    {"pandas.core.arrays.categorical", modulecode_pandas$core$arrays$categorical, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\143\141\164\145\147\157\162\151\143\141\154\56\160\171"
#endif
},
    {"pandas.core.arrays.datetimelike", modulecode_pandas$core$arrays$datetimelike, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\144\141\164\145\164\151\155\145\154\151\153\145\56\160\171"
#endif
},
    {"pandas.core.arrays.datetimes", modulecode_pandas$core$arrays$datetimes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\144\141\164\145\164\151\155\145\163\56\160\171"
#endif
},
    {"pandas.core.arrays.floating", modulecode_pandas$core$arrays$floating, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\146\154\157\141\164\151\156\147\56\160\171"
#endif
},
    {"pandas.core.arrays.integer", modulecode_pandas$core$arrays$integer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\151\156\164\145\147\145\162\56\160\171"
#endif
},
    {"pandas.core.arrays.interval", modulecode_pandas$core$arrays$interval, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\151\156\164\145\162\166\141\154\56\160\171"
#endif
},
    {"pandas.core.arrays.masked", modulecode_pandas$core$arrays$masked, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\155\141\163\153\145\144\56\160\171"
#endif
},
    {"pandas.core.arrays.numeric", modulecode_pandas$core$arrays$numeric, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\156\165\155\145\162\151\143\56\160\171"
#endif
},
    {"pandas.core.arrays.numpy_", modulecode_pandas$core$arrays$numpy_, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\156\165\155\160\171\137\56\160\171"
#endif
},
    {"pandas.core.arrays.period", modulecode_pandas$core$arrays$period, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\160\145\162\151\157\144\56\160\171"
#endif
},
    {"pandas.core.arrays.sparse", modulecode_pandas$core$arrays$sparse, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\163\160\141\162\163\145\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.core.arrays.sparse.accessor", modulecode_pandas$core$arrays$sparse$accessor, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\163\160\141\162\163\145\134\141\143\143\145\163\163\157\162\56\160\171"
#endif
},
    {"pandas.core.arrays.sparse.array", modulecode_pandas$core$arrays$sparse$array, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\163\160\141\162\163\145\134\141\162\162\141\171\56\160\171"
#endif
},
    {"pandas.core.arrays.sparse.scipy_sparse", modulecode_pandas$core$arrays$sparse$scipy_sparse, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\163\160\141\162\163\145\134\163\143\151\160\171\137\163\160\141\162\163\145\56\160\171"
#endif
},
    {"pandas.core.arrays.string_", modulecode_pandas$core$arrays$string_, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\163\164\162\151\156\147\137\56\160\171"
#endif
},
    {"pandas.core.arrays.string_arrow", modulecode_pandas$core$arrays$string_arrow, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\163\164\162\151\156\147\137\141\162\162\157\167\56\160\171"
#endif
},
    {"pandas.core.arrays.timedeltas", modulecode_pandas$core$arrays$timedeltas, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\164\151\155\145\144\145\154\164\141\163\56\160\171"
#endif
},
    {"pandas.core.base", modulecode_pandas$core$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\142\141\163\145\56\160\171"
#endif
},
    {"pandas.core.common", modulecode_pandas$core$common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\143\157\155\155\157\156\56\160\171"
#endif
},
    {"pandas.core.computation", modulecode_pandas$core$computation, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\143\157\155\160\165\164\141\164\151\157\156\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.core.computation.align", modulecode_pandas$core$computation$align, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\143\157\155\160\165\164\141\164\151\157\156\134\141\154\151\147\156\56\160\171"
#endif
},
    {"pandas.core.computation.api", modulecode_pandas$core$computation$api, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\143\157\155\160\165\164\141\164\151\157\156\134\141\160\151\56\160\171"
#endif
},
    {"pandas.core.computation.check", modulecode_pandas$core$computation$check, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\143\157\155\160\165\164\141\164\151\157\156\134\143\150\145\143\153\56\160\171"
#endif
},
    {"pandas.core.computation.common", modulecode_pandas$core$computation$common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\143\157\155\160\165\164\141\164\151\157\156\134\143\157\155\155\157\156\56\160\171"
#endif
},
    {"pandas.core.computation.engines", modulecode_pandas$core$computation$engines, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\143\157\155\160\165\164\141\164\151\157\156\134\145\156\147\151\156\145\163\56\160\171"
#endif
},
    {"pandas.core.computation.eval", modulecode_pandas$core$computation$eval, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\143\157\155\160\165\164\141\164\151\157\156\134\145\166\141\154\56\160\171"
#endif
},
    {"pandas.core.computation.expr", modulecode_pandas$core$computation$expr, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\143\157\155\160\165\164\141\164\151\157\156\134\145\170\160\162\56\160\171"
#endif
},
    {"pandas.core.computation.expressions", modulecode_pandas$core$computation$expressions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\143\157\155\160\165\164\141\164\151\157\156\134\145\170\160\162\145\163\163\151\157\156\163\56\160\171"
#endif
},
    {"pandas.core.computation.ops", modulecode_pandas$core$computation$ops, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\143\157\155\160\165\164\141\164\151\157\156\134\157\160\163\56\160\171"
#endif
},
    {"pandas.core.computation.parsing", modulecode_pandas$core$computation$parsing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\143\157\155\160\165\164\141\164\151\157\156\134\160\141\162\163\151\156\147\56\160\171"
#endif
},
    {"pandas.core.computation.pytables", modulecode_pandas$core$computation$pytables, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\143\157\155\160\165\164\141\164\151\157\156\134\160\171\164\141\142\154\145\163\56\160\171"
#endif
},
    {"pandas.core.computation.scope", modulecode_pandas$core$computation$scope, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\143\157\155\160\165\164\141\164\151\157\156\134\163\143\157\160\145\56\160\171"
#endif
},
    {"pandas.core.config_init", modulecode_pandas$core$config_init, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\143\157\156\146\151\147\137\151\156\151\164\56\160\171"
#endif
},
    {"pandas.core.construction", modulecode_pandas$core$construction, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\143\157\156\163\164\162\165\143\164\151\157\156\56\160\171"
#endif
},
    {"pandas.core.dtypes", modulecode_pandas$core$dtypes, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\144\164\171\160\145\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.core.dtypes.api", modulecode_pandas$core$dtypes$api, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\144\164\171\160\145\163\134\141\160\151\56\160\171"
#endif
},
    {"pandas.core.dtypes.astype", modulecode_pandas$core$dtypes$astype, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\144\164\171\160\145\163\134\141\163\164\171\160\145\56\160\171"
#endif
},
    {"pandas.core.dtypes.base", modulecode_pandas$core$dtypes$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\144\164\171\160\145\163\134\142\141\163\145\56\160\171"
#endif
},
    {"pandas.core.dtypes.cast", modulecode_pandas$core$dtypes$cast, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\144\164\171\160\145\163\134\143\141\163\164\56\160\171"
#endif
},
    {"pandas.core.dtypes.common", modulecode_pandas$core$dtypes$common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\144\164\171\160\145\163\134\143\157\155\155\157\156\56\160\171"
#endif
},
    {"pandas.core.dtypes.concat", modulecode_pandas$core$dtypes$concat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\144\164\171\160\145\163\134\143\157\156\143\141\164\56\160\171"
#endif
},
    {"pandas.core.dtypes.dtypes", modulecode_pandas$core$dtypes$dtypes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\144\164\171\160\145\163\134\144\164\171\160\145\163\56\160\171"
#endif
},
    {"pandas.core.dtypes.generic", modulecode_pandas$core$dtypes$generic, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\144\164\171\160\145\163\134\147\145\156\145\162\151\143\56\160\171"
#endif
},
    {"pandas.core.dtypes.inference", modulecode_pandas$core$dtypes$inference, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\144\164\171\160\145\163\134\151\156\146\145\162\145\156\143\145\56\160\171"
#endif
},
    {"pandas.core.dtypes.missing", modulecode_pandas$core$dtypes$missing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\144\164\171\160\145\163\134\155\151\163\163\151\156\147\56\160\171"
#endif
},
    {"pandas.core.flags", modulecode_pandas$core$flags, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\146\154\141\147\163\56\160\171"
#endif
},
    {"pandas.core.frame", modulecode_pandas$core$frame, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\146\162\141\155\145\56\160\171"
#endif
},
    {"pandas.core.generic", modulecode_pandas$core$generic, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\147\145\156\145\162\151\143\56\160\171"
#endif
},
    {"pandas.core.groupby", modulecode_pandas$core$groupby, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\147\162\157\165\160\142\171\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.core.groupby.base", modulecode_pandas$core$groupby$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\147\162\157\165\160\142\171\134\142\141\163\145\56\160\171"
#endif
},
    {"pandas.core.groupby.categorical", modulecode_pandas$core$groupby$categorical, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\147\162\157\165\160\142\171\134\143\141\164\145\147\157\162\151\143\141\154\56\160\171"
#endif
},
    {"pandas.core.groupby.generic", modulecode_pandas$core$groupby$generic, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\147\162\157\165\160\142\171\134\147\145\156\145\162\151\143\56\160\171"
#endif
},
    {"pandas.core.groupby.groupby", modulecode_pandas$core$groupby$groupby, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\147\162\157\165\160\142\171\134\147\162\157\165\160\142\171\56\160\171"
#endif
},
    {"pandas.core.groupby.grouper", modulecode_pandas$core$groupby$grouper, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\147\162\157\165\160\142\171\134\147\162\157\165\160\145\162\56\160\171"
#endif
},
    {"pandas.core.groupby.indexing", modulecode_pandas$core$groupby$indexing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\147\162\157\165\160\142\171\134\151\156\144\145\170\151\156\147\56\160\171"
#endif
},
    {"pandas.core.groupby.numba_", modulecode_pandas$core$groupby$numba_, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\147\162\157\165\160\142\171\134\156\165\155\142\141\137\56\160\171"
#endif
},
    {"pandas.core.groupby.ops", modulecode_pandas$core$groupby$ops, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\147\162\157\165\160\142\171\134\157\160\163\56\160\171"
#endif
},
    {"pandas.core.indexers", modulecode_pandas$core$indexers, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\144\145\170\145\162\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.core.indexers.objects", modulecode_pandas$core$indexers$objects, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\144\145\170\145\162\163\134\157\142\152\145\143\164\163\56\160\171"
#endif
},
    {"pandas.core.indexers.utils", modulecode_pandas$core$indexers$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\144\145\170\145\162\163\134\165\164\151\154\163\56\160\171"
#endif
},
    {"pandas.core.indexes", modulecode_pandas$core$indexes, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\144\145\170\145\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.core.indexes.accessors", modulecode_pandas$core$indexes$accessors, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\144\145\170\145\163\134\141\143\143\145\163\163\157\162\163\56\160\171"
#endif
},
    {"pandas.core.indexes.api", modulecode_pandas$core$indexes$api, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\144\145\170\145\163\134\141\160\151\56\160\171"
#endif
},
    {"pandas.core.indexes.base", modulecode_pandas$core$indexes$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\144\145\170\145\163\134\142\141\163\145\56\160\171"
#endif
},
    {"pandas.core.indexes.category", modulecode_pandas$core$indexes$category, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\144\145\170\145\163\134\143\141\164\145\147\157\162\171\56\160\171"
#endif
},
    {"pandas.core.indexes.datetimelike", modulecode_pandas$core$indexes$datetimelike, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\144\145\170\145\163\134\144\141\164\145\164\151\155\145\154\151\153\145\56\160\171"
#endif
},
    {"pandas.core.indexes.datetimes", modulecode_pandas$core$indexes$datetimes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\144\145\170\145\163\134\144\141\164\145\164\151\155\145\163\56\160\171"
#endif
},
    {"pandas.core.indexes.extension", modulecode_pandas$core$indexes$extension, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\144\145\170\145\163\134\145\170\164\145\156\163\151\157\156\56\160\171"
#endif
},
    {"pandas.core.indexes.frozen", modulecode_pandas$core$indexes$frozen, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\144\145\170\145\163\134\146\162\157\172\145\156\56\160\171"
#endif
},
    {"pandas.core.indexes.interval", modulecode_pandas$core$indexes$interval, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\144\145\170\145\163\134\151\156\164\145\162\166\141\154\56\160\171"
#endif
},
    {"pandas.core.indexes.multi", modulecode_pandas$core$indexes$multi, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\144\145\170\145\163\134\155\165\154\164\151\56\160\171"
#endif
},
    {"pandas.core.indexes.period", modulecode_pandas$core$indexes$period, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\144\145\170\145\163\134\160\145\162\151\157\144\56\160\171"
#endif
},
    {"pandas.core.indexes.range", modulecode_pandas$core$indexes$range, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\144\145\170\145\163\134\162\141\156\147\145\56\160\171"
#endif
},
    {"pandas.core.indexes.timedeltas", modulecode_pandas$core$indexes$timedeltas, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\144\145\170\145\163\134\164\151\155\145\144\145\154\164\141\163\56\160\171"
#endif
},
    {"pandas.core.indexing", modulecode_pandas$core$indexing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\144\145\170\151\156\147\56\160\171"
#endif
},
    {"pandas.core.interchange", modulecode_pandas$core$interchange, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\164\145\162\143\150\141\156\147\145\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.core.interchange.buffer", modulecode_pandas$core$interchange$buffer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\164\145\162\143\150\141\156\147\145\134\142\165\146\146\145\162\56\160\171"
#endif
},
    {"pandas.core.interchange.column", modulecode_pandas$core$interchange$column, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\164\145\162\143\150\141\156\147\145\134\143\157\154\165\155\156\56\160\171"
#endif
},
    {"pandas.core.interchange.dataframe", modulecode_pandas$core$interchange$dataframe, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\164\145\162\143\150\141\156\147\145\134\144\141\164\141\146\162\141\155\145\56\160\171"
#endif
},
    {"pandas.core.interchange.dataframe_protocol", modulecode_pandas$core$interchange$dataframe_protocol, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\164\145\162\143\150\141\156\147\145\134\144\141\164\141\146\162\141\155\145\137\160\162\157\164\157\143\157\154\56\160\171"
#endif
},
    {"pandas.core.interchange.from_dataframe", modulecode_pandas$core$interchange$from_dataframe, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\164\145\162\143\150\141\156\147\145\134\146\162\157\155\137\144\141\164\141\146\162\141\155\145\56\160\171"
#endif
},
    {"pandas.core.interchange.utils", modulecode_pandas$core$interchange$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\164\145\162\143\150\141\156\147\145\134\165\164\151\154\163\56\160\171"
#endif
},
    {"pandas.core.internals", modulecode_pandas$core$internals, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\164\145\162\156\141\154\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.core.internals.api", modulecode_pandas$core$internals$api, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\164\145\162\156\141\154\163\134\141\160\151\56\160\171"
#endif
},
    {"pandas.core.internals.array_manager", modulecode_pandas$core$internals$array_manager, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\164\145\162\156\141\154\163\134\141\162\162\141\171\137\155\141\156\141\147\145\162\56\160\171"
#endif
},
    {"pandas.core.internals.base", modulecode_pandas$core$internals$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\164\145\162\156\141\154\163\134\142\141\163\145\56\160\171"
#endif
},
    {"pandas.core.internals.blocks", modulecode_pandas$core$internals$blocks, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\164\145\162\156\141\154\163\134\142\154\157\143\153\163\56\160\171"
#endif
},
    {"pandas.core.internals.concat", modulecode_pandas$core$internals$concat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\164\145\162\156\141\154\163\134\143\157\156\143\141\164\56\160\171"
#endif
},
    {"pandas.core.internals.construction", modulecode_pandas$core$internals$construction, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\164\145\162\156\141\154\163\134\143\157\156\163\164\162\165\143\164\151\157\156\56\160\171"
#endif
},
    {"pandas.core.internals.managers", modulecode_pandas$core$internals$managers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\164\145\162\156\141\154\163\134\155\141\156\141\147\145\162\163\56\160\171"
#endif
},
    {"pandas.core.internals.ops", modulecode_pandas$core$internals$ops, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\164\145\162\156\141\154\163\134\157\160\163\56\160\171"
#endif
},
    {"pandas.core.methods", modulecode_pandas$core$methods, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\155\145\164\150\157\144\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.core.methods.describe", modulecode_pandas$core$methods$describe, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\155\145\164\150\157\144\163\134\144\145\163\143\162\151\142\145\56\160\171"
#endif
},
    {"pandas.core.methods.selectn", modulecode_pandas$core$methods$selectn, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\155\145\164\150\157\144\163\134\163\145\154\145\143\164\156\56\160\171"
#endif
},
    {"pandas.core.methods.to_dict", modulecode_pandas$core$methods$to_dict, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\155\145\164\150\157\144\163\134\164\157\137\144\151\143\164\56\160\171"
#endif
},
    {"pandas.core.missing", modulecode_pandas$core$missing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\155\151\163\163\151\156\147\56\160\171"
#endif
},
    {"pandas.core.nanops", modulecode_pandas$core$nanops, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\156\141\156\157\160\163\56\160\171"
#endif
},
    {"pandas.core.ops", modulecode_pandas$core$ops, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\157\160\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.core.ops.array_ops", modulecode_pandas$core$ops$array_ops, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\157\160\163\134\141\162\162\141\171\137\157\160\163\56\160\171"
#endif
},
    {"pandas.core.ops.common", modulecode_pandas$core$ops$common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\157\160\163\134\143\157\155\155\157\156\56\160\171"
#endif
},
    {"pandas.core.ops.dispatch", modulecode_pandas$core$ops$dispatch, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\157\160\163\134\144\151\163\160\141\164\143\150\56\160\171"
#endif
},
    {"pandas.core.ops.docstrings", modulecode_pandas$core$ops$docstrings, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\157\160\163\134\144\157\143\163\164\162\151\156\147\163\56\160\171"
#endif
},
    {"pandas.core.ops.invalid", modulecode_pandas$core$ops$invalid, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\157\160\163\134\151\156\166\141\154\151\144\56\160\171"
#endif
},
    {"pandas.core.ops.mask_ops", modulecode_pandas$core$ops$mask_ops, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\157\160\163\134\155\141\163\153\137\157\160\163\56\160\171"
#endif
},
    {"pandas.core.ops.missing", modulecode_pandas$core$ops$missing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\157\160\163\134\155\151\163\163\151\156\147\56\160\171"
#endif
},
    {"pandas.core.resample", modulecode_pandas$core$resample, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\162\145\163\141\155\160\154\145\56\160\171"
#endif
},
    {"pandas.core.reshape", modulecode_pandas$core$reshape, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\162\145\163\150\141\160\145\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.core.reshape.api", modulecode_pandas$core$reshape$api, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\162\145\163\150\141\160\145\134\141\160\151\56\160\171"
#endif
},
    {"pandas.core.reshape.concat", modulecode_pandas$core$reshape$concat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\162\145\163\150\141\160\145\134\143\157\156\143\141\164\56\160\171"
#endif
},
    {"pandas.core.reshape.encoding", modulecode_pandas$core$reshape$encoding, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\162\145\163\150\141\160\145\134\145\156\143\157\144\151\156\147\56\160\171"
#endif
},
    {"pandas.core.reshape.melt", modulecode_pandas$core$reshape$melt, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\162\145\163\150\141\160\145\134\155\145\154\164\56\160\171"
#endif
},
    {"pandas.core.reshape.merge", modulecode_pandas$core$reshape$merge, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\162\145\163\150\141\160\145\134\155\145\162\147\145\56\160\171"
#endif
},
    {"pandas.core.reshape.pivot", modulecode_pandas$core$reshape$pivot, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\162\145\163\150\141\160\145\134\160\151\166\157\164\56\160\171"
#endif
},
    {"pandas.core.reshape.reshape", modulecode_pandas$core$reshape$reshape, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\162\145\163\150\141\160\145\134\162\145\163\150\141\160\145\56\160\171"
#endif
},
    {"pandas.core.reshape.tile", modulecode_pandas$core$reshape$tile, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\162\145\163\150\141\160\145\134\164\151\154\145\56\160\171"
#endif
},
    {"pandas.core.reshape.util", modulecode_pandas$core$reshape$util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\162\145\163\150\141\160\145\134\165\164\151\154\56\160\171"
#endif
},
    {"pandas.core.roperator", modulecode_pandas$core$roperator, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\162\157\160\145\162\141\164\157\162\56\160\171"
#endif
},
    {"pandas.core.sample", modulecode_pandas$core$sample, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\163\141\155\160\154\145\56\160\171"
#endif
},
    {"pandas.core.series", modulecode_pandas$core$series, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\163\145\162\151\145\163\56\160\171"
#endif
},
    {"pandas.core.shared_docs", modulecode_pandas$core$shared_docs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\163\150\141\162\145\144\137\144\157\143\163\56\160\171"
#endif
},
    {"pandas.core.sorting", modulecode_pandas$core$sorting, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\163\157\162\164\151\156\147\56\160\171"
#endif
},
    {"pandas.core.strings", modulecode_pandas$core$strings, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\163\164\162\151\156\147\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.core.strings.accessor", modulecode_pandas$core$strings$accessor, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\163\164\162\151\156\147\163\134\141\143\143\145\163\163\157\162\56\160\171"
#endif
},
    {"pandas.core.strings.base", modulecode_pandas$core$strings$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\163\164\162\151\156\147\163\134\142\141\163\145\56\160\171"
#endif
},
    {"pandas.core.strings.object_array", modulecode_pandas$core$strings$object_array, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\163\164\162\151\156\147\163\134\157\142\152\145\143\164\137\141\162\162\141\171\56\160\171"
#endif
},
    {"pandas.core.tools", modulecode_pandas$core$tools, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\164\157\157\154\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.core.tools.datetimes", modulecode_pandas$core$tools$datetimes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\164\157\157\154\163\134\144\141\164\145\164\151\155\145\163\56\160\171"
#endif
},
    {"pandas.core.tools.numeric", modulecode_pandas$core$tools$numeric, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\164\157\157\154\163\134\156\165\155\145\162\151\143\56\160\171"
#endif
},
    {"pandas.core.tools.timedeltas", modulecode_pandas$core$tools$timedeltas, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\164\157\157\154\163\134\164\151\155\145\144\145\154\164\141\163\56\160\171"
#endif
},
    {"pandas.core.tools.times", modulecode_pandas$core$tools$times, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\164\157\157\154\163\134\164\151\155\145\163\56\160\171"
#endif
},
    {"pandas.core.util", modulecode_pandas$core$util, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\165\164\151\154\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.core.util.hashing", modulecode_pandas$core$util$hashing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\165\164\151\154\134\150\141\163\150\151\156\147\56\160\171"
#endif
},
    {"pandas.core.util.numba_", modulecode_pandas$core$util$numba_, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\165\164\151\154\134\156\165\155\142\141\137\56\160\171"
#endif
},
    {"pandas.core.window", modulecode_pandas$core$window, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\167\151\156\144\157\167\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.core.window.common", modulecode_pandas$core$window$common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\167\151\156\144\157\167\134\143\157\155\155\157\156\56\160\171"
#endif
},
    {"pandas.core.window.doc", modulecode_pandas$core$window$doc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\167\151\156\144\157\167\134\144\157\143\56\160\171"
#endif
},
    {"pandas.core.window.ewm", modulecode_pandas$core$window$ewm, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\167\151\156\144\157\167\134\145\167\155\56\160\171"
#endif
},
    {"pandas.core.window.expanding", modulecode_pandas$core$window$expanding, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\167\151\156\144\157\167\134\145\170\160\141\156\144\151\156\147\56\160\171"
#endif
},
    {"pandas.core.window.numba_", modulecode_pandas$core$window$numba_, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\167\151\156\144\157\167\134\156\165\155\142\141\137\56\160\171"
#endif
},
    {"pandas.core.window.online", modulecode_pandas$core$window$online, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\167\151\156\144\157\167\134\157\156\154\151\156\145\56\160\171"
#endif
},
    {"pandas.core.window.rolling", modulecode_pandas$core$window$rolling, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\167\151\156\144\157\167\134\162\157\154\154\151\156\147\56\160\171"
#endif
},
    {"pandas.errors", modulecode_pandas$errors, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\145\162\162\157\162\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.io", modulecode_pandas$io, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.io._util", modulecode_pandas$io$_util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\137\165\164\151\154\56\160\171"
#endif
},
    {"pandas.io.api", modulecode_pandas$io$api, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\141\160\151\56\160\171"
#endif
},
    {"pandas.io.clipboard", modulecode_pandas$io$clipboard, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\143\154\151\160\142\157\141\162\144\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.io.clipboards", modulecode_pandas$io$clipboards, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\143\154\151\160\142\157\141\162\144\163\56\160\171"
#endif
},
    {"pandas.io.common", modulecode_pandas$io$common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\143\157\155\155\157\156\56\160\171"
#endif
},
    {"pandas.io.excel", modulecode_pandas$io$excel, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\145\170\143\145\154\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.io.excel._base", modulecode_pandas$io$excel$_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\145\170\143\145\154\134\137\142\141\163\145\56\160\171"
#endif
},
    {"pandas.io.excel._odfreader", modulecode_pandas$io$excel$_odfreader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\145\170\143\145\154\134\137\157\144\146\162\145\141\144\145\162\56\160\171"
#endif
},
    {"pandas.io.excel._odswriter", modulecode_pandas$io$excel$_odswriter, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\145\170\143\145\154\134\137\157\144\163\167\162\151\164\145\162\56\160\171"
#endif
},
    {"pandas.io.excel._openpyxl", modulecode_pandas$io$excel$_openpyxl, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\145\170\143\145\154\134\137\157\160\145\156\160\171\170\154\56\160\171"
#endif
},
    {"pandas.io.excel._pyxlsb", modulecode_pandas$io$excel$_pyxlsb, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\145\170\143\145\154\134\137\160\171\170\154\163\142\56\160\171"
#endif
},
    {"pandas.io.excel._util", modulecode_pandas$io$excel$_util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\145\170\143\145\154\134\137\165\164\151\154\56\160\171"
#endif
},
    {"pandas.io.excel._xlrd", modulecode_pandas$io$excel$_xlrd, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\145\170\143\145\154\134\137\170\154\162\144\56\160\171"
#endif
},
    {"pandas.io.excel._xlsxwriter", modulecode_pandas$io$excel$_xlsxwriter, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\145\170\143\145\154\134\137\170\154\163\170\167\162\151\164\145\162\56\160\171"
#endif
},
    {"pandas.io.feather_format", modulecode_pandas$io$feather_format, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\146\145\141\164\150\145\162\137\146\157\162\155\141\164\56\160\171"
#endif
},
    {"pandas.io.formats", modulecode_pandas$io$formats, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\146\157\162\155\141\164\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.io.formats._color_data", modulecode_pandas$io$formats$_color_data, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\146\157\162\155\141\164\163\134\137\143\157\154\157\162\137\144\141\164\141\56\160\171"
#endif
},
    {"pandas.io.formats.console", modulecode_pandas$io$formats$console, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\146\157\162\155\141\164\163\134\143\157\156\163\157\154\145\56\160\171"
#endif
},
    {"pandas.io.formats.css", modulecode_pandas$io$formats$css, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\146\157\162\155\141\164\163\134\143\163\163\56\160\171"
#endif
},
    {"pandas.io.formats.csvs", modulecode_pandas$io$formats$csvs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\146\157\162\155\141\164\163\134\143\163\166\163\56\160\171"
#endif
},
    {"pandas.io.formats.excel", modulecode_pandas$io$formats$excel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\146\157\162\155\141\164\163\134\145\170\143\145\154\56\160\171"
#endif
},
    {"pandas.io.formats.format", modulecode_pandas$io$formats$format, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\146\157\162\155\141\164\163\134\146\157\162\155\141\164\56\160\171"
#endif
},
    {"pandas.io.formats.html", modulecode_pandas$io$formats$html, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\146\157\162\155\141\164\163\134\150\164\155\154\56\160\171"
#endif
},
    {"pandas.io.formats.info", modulecode_pandas$io$formats$info, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\146\157\162\155\141\164\163\134\151\156\146\157\56\160\171"
#endif
},
    {"pandas.io.formats.printing", modulecode_pandas$io$formats$printing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\146\157\162\155\141\164\163\134\160\162\151\156\164\151\156\147\56\160\171"
#endif
},
    {"pandas.io.formats.string", modulecode_pandas$io$formats$string, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\146\157\162\155\141\164\163\134\163\164\162\151\156\147\56\160\171"
#endif
},
    {"pandas.io.formats.style", modulecode_pandas$io$formats$style, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\146\157\162\155\141\164\163\134\163\164\171\154\145\56\160\171"
#endif
},
    {"pandas.io.formats.style_render", modulecode_pandas$io$formats$style_render, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\146\157\162\155\141\164\163\134\163\164\171\154\145\137\162\145\156\144\145\162\56\160\171"
#endif
},
    {"pandas.io.formats.xml", modulecode_pandas$io$formats$xml, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\146\157\162\155\141\164\163\134\170\155\154\56\160\171"
#endif
},
    {"pandas.io.gbq", modulecode_pandas$io$gbq, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\147\142\161\56\160\171"
#endif
},
    {"pandas.io.html", modulecode_pandas$io$html, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\150\164\155\154\56\160\171"
#endif
},
    {"pandas.io.json", modulecode_pandas$io$json, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\152\163\157\156\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.io.json._json", modulecode_pandas$io$json$_json, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\152\163\157\156\134\137\152\163\157\156\56\160\171"
#endif
},
    {"pandas.io.json._normalize", modulecode_pandas$io$json$_normalize, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\152\163\157\156\134\137\156\157\162\155\141\154\151\172\145\56\160\171"
#endif
},
    {"pandas.io.json._table_schema", modulecode_pandas$io$json$_table_schema, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\152\163\157\156\134\137\164\141\142\154\145\137\163\143\150\145\155\141\56\160\171"
#endif
},
    {"pandas.io.orc", modulecode_pandas$io$orc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\157\162\143\56\160\171"
#endif
},
    {"pandas.io.parquet", modulecode_pandas$io$parquet, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\160\141\162\161\165\145\164\56\160\171"
#endif
},
    {"pandas.io.parsers", modulecode_pandas$io$parsers, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\160\141\162\163\145\162\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.io.parsers.arrow_parser_wrapper", modulecode_pandas$io$parsers$arrow_parser_wrapper, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\160\141\162\163\145\162\163\134\141\162\162\157\167\137\160\141\162\163\145\162\137\167\162\141\160\160\145\162\56\160\171"
#endif
},
    {"pandas.io.parsers.base_parser", modulecode_pandas$io$parsers$base_parser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\160\141\162\163\145\162\163\134\142\141\163\145\137\160\141\162\163\145\162\56\160\171"
#endif
},
    {"pandas.io.parsers.c_parser_wrapper", modulecode_pandas$io$parsers$c_parser_wrapper, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\160\141\162\163\145\162\163\134\143\137\160\141\162\163\145\162\137\167\162\141\160\160\145\162\56\160\171"
#endif
},
    {"pandas.io.parsers.python_parser", modulecode_pandas$io$parsers$python_parser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\160\141\162\163\145\162\163\134\160\171\164\150\157\156\137\160\141\162\163\145\162\56\160\171"
#endif
},
    {"pandas.io.parsers.readers", modulecode_pandas$io$parsers$readers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\160\141\162\163\145\162\163\134\162\145\141\144\145\162\163\56\160\171"
#endif
},
    {"pandas.io.pickle", modulecode_pandas$io$pickle, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\160\151\143\153\154\145\56\160\171"
#endif
},
    {"pandas.io.pytables", modulecode_pandas$io$pytables, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\160\171\164\141\142\154\145\163\56\160\171"
#endif
},
    {"pandas.io.sas", modulecode_pandas$io$sas, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\163\141\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.io.sas.sas7bdat", modulecode_pandas$io$sas$sas7bdat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\163\141\163\134\163\141\163\67\142\144\141\164\56\160\171"
#endif
},
    {"pandas.io.sas.sas_constants", modulecode_pandas$io$sas$sas_constants, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\163\141\163\134\163\141\163\137\143\157\156\163\164\141\156\164\163\56\160\171"
#endif
},
    {"pandas.io.sas.sas_xport", modulecode_pandas$io$sas$sas_xport, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\163\141\163\134\163\141\163\137\170\160\157\162\164\56\160\171"
#endif
},
    {"pandas.io.sas.sasreader", modulecode_pandas$io$sas$sasreader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\163\141\163\134\163\141\163\162\145\141\144\145\162\56\160\171"
#endif
},
    {"pandas.io.spss", modulecode_pandas$io$spss, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\163\160\163\163\56\160\171"
#endif
},
    {"pandas.io.sql", modulecode_pandas$io$sql, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\163\161\154\56\160\171"
#endif
},
    {"pandas.io.stata", modulecode_pandas$io$stata, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\163\164\141\164\141\56\160\171"
#endif
},
    {"pandas.io.xml", modulecode_pandas$io$xml, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\170\155\154\56\160\171"
#endif
},
    {"pandas.plotting", modulecode_pandas$plotting, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\160\154\157\164\164\151\156\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.plotting._core", modulecode_pandas$plotting$_core, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\160\154\157\164\164\151\156\147\134\137\143\157\162\145\56\160\171"
#endif
},
    {"pandas.plotting._matplotlib", modulecode_pandas$plotting$_matplotlib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\160\154\157\164\164\151\156\147\134\137\155\141\164\160\154\157\164\154\151\142\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.plotting._matplotlib.boxplot", modulecode_pandas$plotting$_matplotlib$boxplot, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\160\154\157\164\164\151\156\147\134\137\155\141\164\160\154\157\164\154\151\142\134\142\157\170\160\154\157\164\56\160\171"
#endif
},
    {"pandas.plotting._matplotlib.converter", modulecode_pandas$plotting$_matplotlib$converter, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\160\154\157\164\164\151\156\147\134\137\155\141\164\160\154\157\164\154\151\142\134\143\157\156\166\145\162\164\145\162\56\160\171"
#endif
},
    {"pandas.plotting._matplotlib.core", modulecode_pandas$plotting$_matplotlib$core, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\160\154\157\164\164\151\156\147\134\137\155\141\164\160\154\157\164\154\151\142\134\143\157\162\145\56\160\171"
#endif
},
    {"pandas.plotting._matplotlib.groupby", modulecode_pandas$plotting$_matplotlib$groupby, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\160\154\157\164\164\151\156\147\134\137\155\141\164\160\154\157\164\154\151\142\134\147\162\157\165\160\142\171\56\160\171"
#endif
},
    {"pandas.plotting._matplotlib.hist", modulecode_pandas$plotting$_matplotlib$hist, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\160\154\157\164\164\151\156\147\134\137\155\141\164\160\154\157\164\154\151\142\134\150\151\163\164\56\160\171"
#endif
},
    {"pandas.plotting._matplotlib.misc", modulecode_pandas$plotting$_matplotlib$misc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\160\154\157\164\164\151\156\147\134\137\155\141\164\160\154\157\164\154\151\142\134\155\151\163\143\56\160\171"
#endif
},
    {"pandas.plotting._matplotlib.style", modulecode_pandas$plotting$_matplotlib$style, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\160\154\157\164\164\151\156\147\134\137\155\141\164\160\154\157\164\154\151\142\134\163\164\171\154\145\56\160\171"
#endif
},
    {"pandas.plotting._matplotlib.timeseries", modulecode_pandas$plotting$_matplotlib$timeseries, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\160\154\157\164\164\151\156\147\134\137\155\141\164\160\154\157\164\154\151\142\134\164\151\155\145\163\145\162\151\145\163\56\160\171"
#endif
},
    {"pandas.plotting._matplotlib.tools", modulecode_pandas$plotting$_matplotlib$tools, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\160\154\157\164\164\151\156\147\134\137\155\141\164\160\154\157\164\154\151\142\134\164\157\157\154\163\56\160\171"
#endif
},
    {"pandas.plotting._misc", modulecode_pandas$plotting$_misc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\160\154\157\164\164\151\156\147\134\137\155\151\163\143\56\160\171"
#endif
},
    {"pandas.tseries", modulecode_pandas$tseries, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\164\163\145\162\151\145\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.tseries.api", modulecode_pandas$tseries$api, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\164\163\145\162\151\145\163\134\141\160\151\56\160\171"
#endif
},
    {"pandas.tseries.frequencies", modulecode_pandas$tseries$frequencies, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\164\163\145\162\151\145\163\134\146\162\145\161\165\145\156\143\151\145\163\56\160\171"
#endif
},
    {"pandas.tseries.offsets", modulecode_pandas$tseries$offsets, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\164\163\145\162\151\145\163\134\157\146\146\163\145\164\163\56\160\171"
#endif
},
    {"pandas.util", modulecode_pandas$util, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\165\164\151\154\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.util._decorators", modulecode_pandas$util$_decorators, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\165\164\151\154\134\137\144\145\143\157\162\141\164\157\162\163\56\160\171"
#endif
},
    {"pandas.util._exceptions", modulecode_pandas$util$_exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\165\164\151\154\134\137\145\170\143\145\160\164\151\157\156\163\56\160\171"
#endif
},
    {"pandas.util._print_versions", modulecode_pandas$util$_print_versions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\165\164\151\154\134\137\160\162\151\156\164\137\166\145\162\163\151\157\156\163\56\160\171"
#endif
},
    {"pandas.util._validators", modulecode_pandas$util$_validators, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\165\164\151\154\134\137\166\141\154\151\144\141\164\157\162\163\56\160\171"
#endif
},
    {"pandas.util.version", modulecode_pandas$util$version, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\165\164\151\154\134\166\145\162\163\151\157\156\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pkg_resources-postLoad", modulecode_pkg_resources$$45$postLoad, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\55\160\157\163\164\114\157\141\144\56\160\171"
#endif
},
    {"pythoncom", modulecode_pythoncom, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\164\150\157\156\143\157\155\56\160\171"
#endif
},
    {"pytz", modulecode_pytz, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\164\172\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pytz.exceptions", modulecode_pytz$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\164\172\134\145\170\143\145\160\164\151\157\156\163\56\160\171"
#endif
},
    {"pytz.lazy", modulecode_pytz$lazy, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\164\172\134\154\141\172\171\56\160\171"
#endif
},
    {"pytz.tzfile", modulecode_pytz$tzfile, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\164\172\134\164\172\146\151\154\145\56\160\171"
#endif
},
    {"pytz.tzinfo", modulecode_pytz$tzinfo, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\164\172\134\164\172\151\156\146\157\56\160\171"
#endif
},
    {"pywin", modulecode_pywin, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\171\164\150\157\156\167\151\156\134\160\171\167\151\156\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pywin.dialogs", modulecode_pywin$dialogs, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\171\164\150\157\156\167\151\156\134\160\171\167\151\156\134\144\151\141\154\157\147\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pywin.dialogs.list", modulecode_pywin$dialogs$list, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\171\164\150\157\156\167\151\156\134\160\171\167\151\156\134\144\151\141\154\157\147\163\134\154\151\163\164\56\160\171"
#endif
},
    {"pywin.dialogs.status", modulecode_pywin$dialogs$status, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\171\164\150\157\156\167\151\156\134\160\171\167\151\156\134\144\151\141\154\157\147\163\134\163\164\141\164\165\163\56\160\171"
#endif
},
    {"pywin.mfc", modulecode_pywin$mfc, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\171\164\150\157\156\167\151\156\134\160\171\167\151\156\134\155\146\143\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pywin.mfc.dialog", modulecode_pywin$mfc$dialog, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\171\164\150\157\156\167\151\156\134\160\171\167\151\156\134\155\146\143\134\144\151\141\154\157\147\56\160\171"
#endif
},
    {"pywin.mfc.object", modulecode_pywin$mfc$object, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\171\164\150\157\156\167\151\156\134\160\171\167\151\156\134\155\146\143\134\157\142\152\145\143\164\56\160\171"
#endif
},
    {"pywin.mfc.thread", modulecode_pywin$mfc$thread, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\171\164\150\157\156\167\151\156\134\160\171\167\151\156\134\155\146\143\134\164\150\162\145\141\144\56\160\171"
#endif
},
    {"pywin.mfc.window", modulecode_pywin$mfc$window, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\171\164\150\157\156\167\151\156\134\160\171\167\151\156\134\155\146\143\134\167\151\156\144\157\167\56\160\171"
#endif
},
    {"pywin32_bootstrap", modulecode_pywin32_bootstrap, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\151\156\63\62\134\154\151\142\134\160\171\167\151\156\63\62\137\142\157\157\164\163\164\162\141\160\56\160\171"
#endif
},
    {"pywin32_system32", modulecode_pywin32_system32, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\167\151\156\63\62\137\163\171\163\164\145\155\63\62"
#endif
},
    {"pywintypes", modulecode_pywintypes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\151\156\63\62\134\154\151\142\134\160\171\167\151\156\164\171\160\145\163\56\160\171"
#endif
},
    {"pyxlsb", modulecode_pyxlsb, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\170\154\163\142\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pyxlsb.biff12", modulecode_pyxlsb$biff12, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\170\154\163\142\134\142\151\146\146\61\62\56\160\171"
#endif
},
    {"pyxlsb.handlers", modulecode_pyxlsb$handlers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\170\154\163\142\134\150\141\156\144\154\145\162\163\56\160\171"
#endif
},
    {"pyxlsb.reader", modulecode_pyxlsb$reader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\170\154\163\142\134\162\145\141\144\145\162\56\160\171"
#endif
},
    {"pyxlsb.stringtable", modulecode_pyxlsb$stringtable, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\170\154\163\142\134\163\164\162\151\156\147\164\141\142\154\145\56\160\171"
#endif
},
    {"pyxlsb.workbook", modulecode_pyxlsb$workbook, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\170\154\163\142\134\167\157\162\153\142\157\157\153\56\160\171"
#endif
},
    {"pyxlsb.worksheet", modulecode_pyxlsb$worksheet, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\170\154\163\142\134\167\157\162\153\163\150\145\145\164\56\160\171"
#endif
},
    {"requests", modulecode_requests, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\162\145\161\165\145\163\164\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"requests.__version__", modulecode_requests$__version__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\162\145\161\165\145\163\164\163\134\137\137\166\145\162\163\151\157\156\137\137\56\160\171"
#endif
},
    {"requests._internal_utils", modulecode_requests$_internal_utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\162\145\161\165\145\163\164\163\134\137\151\156\164\145\162\156\141\154\137\165\164\151\154\163\56\160\171"
#endif
},
    {"requests.adapters", modulecode_requests$adapters, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\162\145\161\165\145\163\164\163\134\141\144\141\160\164\145\162\163\56\160\171"
#endif
},
    {"requests.api", modulecode_requests$api, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\162\145\161\165\145\163\164\163\134\141\160\151\56\160\171"
#endif
},
    {"requests.auth", modulecode_requests$auth, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\162\145\161\165\145\163\164\163\134\141\165\164\150\56\160\171"
#endif
},
    {"requests.certs", modulecode_requests$certs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\162\145\161\165\145\163\164\163\134\143\145\162\164\163\56\160\171"
#endif
},
    {"requests.compat", modulecode_requests$compat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\162\145\161\165\145\163\164\163\134\143\157\155\160\141\164\56\160\171"
#endif
},
    {"requests.cookies", modulecode_requests$cookies, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\162\145\161\165\145\163\164\163\134\143\157\157\153\151\145\163\56\160\171"
#endif
},
    {"requests.exceptions", modulecode_requests$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\162\145\161\165\145\163\164\163\134\145\170\143\145\160\164\151\157\156\163\56\160\171"
#endif
},
    {"requests.hooks", modulecode_requests$hooks, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\162\145\161\165\145\163\164\163\134\150\157\157\153\163\56\160\171"
#endif
},
    {"requests.models", modulecode_requests$models, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\162\145\161\165\145\163\164\163\134\155\157\144\145\154\163\56\160\171"
#endif
},
    {"requests.packages", modulecode_requests$packages, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\162\145\161\165\145\163\164\163\134\160\141\143\153\141\147\145\163\56\160\171"
#endif
},
    {"requests.sessions", modulecode_requests$sessions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\162\145\161\165\145\163\164\163\134\163\145\163\163\151\157\156\163\56\160\171"
#endif
},
    {"requests.status_codes", modulecode_requests$status_codes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\162\145\161\165\145\163\164\163\134\163\164\141\164\165\163\137\143\157\144\145\163\56\160\171"
#endif
},
    {"requests.structures", modulecode_requests$structures, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\162\145\161\165\145\163\164\163\134\163\164\162\165\143\164\165\162\145\163\56\160\171"
#endif
},
    {"requests.utils", modulecode_requests$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\162\145\161\165\145\163\164\163\134\165\164\151\154\163\56\160\171"
#endif
},
    {"six", modulecode_six, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\151\170\56\160\171"
#endif
},
    {"urllib3", modulecode_urllib3, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\154\154\151\142\63\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"urllib3._base_connection", modulecode_urllib3$_base_connection, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\154\154\151\142\63\134\137\142\141\163\145\137\143\157\156\156\145\143\164\151\157\156\56\160\171"
#endif
},
    {"urllib3._collections", modulecode_urllib3$_collections, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\154\154\151\142\63\134\137\143\157\154\154\145\143\164\151\157\156\163\56\160\171"
#endif
},
    {"urllib3._request_methods", modulecode_urllib3$_request_methods, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\154\154\151\142\63\134\137\162\145\161\165\145\163\164\137\155\145\164\150\157\144\163\56\160\171"
#endif
},
    {"urllib3._version", modulecode_urllib3$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\154\154\151\142\63\134\137\166\145\162\163\151\157\156\56\160\171"
#endif
},
    {"urllib3.connection", modulecode_urllib3$connection, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\154\154\151\142\63\134\143\157\156\156\145\143\164\151\157\156\56\160\171"
#endif
},
    {"urllib3.connectionpool", modulecode_urllib3$connectionpool, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\154\154\151\142\63\134\143\157\156\156\145\143\164\151\157\156\160\157\157\154\56\160\171"
#endif
},
    {"urllib3.contrib", modulecode_urllib3$contrib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\154\154\151\142\63\134\143\157\156\164\162\151\142\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"urllib3.contrib.pyopenssl", modulecode_urllib3$contrib$pyopenssl, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\154\154\151\142\63\134\143\157\156\164\162\151\142\134\160\171\157\160\145\156\163\163\154\56\160\171"
#endif
},
    {"urllib3.contrib.socks", modulecode_urllib3$contrib$socks, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\154\154\151\142\63\134\143\157\156\164\162\151\142\134\163\157\143\153\163\56\160\171"
#endif
},
    {"urllib3.exceptions", modulecode_urllib3$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\154\154\151\142\63\134\145\170\143\145\160\164\151\157\156\163\56\160\171"
#endif
},
    {"urllib3.fields", modulecode_urllib3$fields, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\154\154\151\142\63\134\146\151\145\154\144\163\56\160\171"
#endif
},
    {"urllib3.filepost", modulecode_urllib3$filepost, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\154\154\151\142\63\134\146\151\154\145\160\157\163\164\56\160\171"
#endif
},
    {"urllib3.poolmanager", modulecode_urllib3$poolmanager, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\154\154\151\142\63\134\160\157\157\154\155\141\156\141\147\145\162\56\160\171"
#endif
},
    {"urllib3.response", modulecode_urllib3$response, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\154\154\151\142\63\134\162\145\163\160\157\156\163\145\56\160\171"
#endif
},
    {"urllib3.util", modulecode_urllib3$util, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\154\154\151\142\63\134\165\164\151\154\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"urllib3.util.connection", modulecode_urllib3$util$connection, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\154\154\151\142\63\134\165\164\151\154\134\143\157\156\156\145\143\164\151\157\156\56\160\171"
#endif
},
    {"urllib3.util.proxy", modulecode_urllib3$util$proxy, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\154\154\151\142\63\134\165\164\151\154\134\160\162\157\170\171\56\160\171"
#endif
},
    {"urllib3.util.request", modulecode_urllib3$util$request, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\154\154\151\142\63\134\165\164\151\154\134\162\145\161\165\145\163\164\56\160\171"
#endif
},
    {"urllib3.util.response", modulecode_urllib3$util$response, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\154\154\151\142\63\134\165\164\151\154\134\162\145\163\160\157\156\163\145\56\160\171"
#endif
},
    {"urllib3.util.retry", modulecode_urllib3$util$retry, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\154\154\151\142\63\134\165\164\151\154\134\162\145\164\162\171\56\160\171"
#endif
},
    {"urllib3.util.ssl_", modulecode_urllib3$util$ssl_, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\154\154\151\142\63\134\165\164\151\154\134\163\163\154\137\56\160\171"
#endif
},
    {"urllib3.util.ssl_match_hostname", modulecode_urllib3$util$ssl_match_hostname, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\154\154\151\142\63\134\165\164\151\154\134\163\163\154\137\155\141\164\143\150\137\150\157\163\164\156\141\155\145\56\160\171"
#endif
},
    {"urllib3.util.ssltransport", modulecode_urllib3$util$ssltransport, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\154\154\151\142\63\134\165\164\151\154\134\163\163\154\164\162\141\156\163\160\157\162\164\56\160\171"
#endif
},
    {"urllib3.util.timeout", modulecode_urllib3$util$timeout, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\154\154\151\142\63\134\165\164\151\154\134\164\151\155\145\157\165\164\56\160\171"
#endif
},
    {"urllib3.util.url", modulecode_urllib3$util$url, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\154\154\151\142\63\134\165\164\151\154\134\165\162\154\56\160\171"
#endif
},
    {"urllib3.util.util", modulecode_urllib3$util$util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\154\154\151\142\63\134\165\164\151\154\134\165\164\151\154\56\160\171"
#endif
},
    {"urllib3.util.wait", modulecode_urllib3$util$wait, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\154\154\151\142\63\134\165\164\151\154\134\167\141\151\164\56\160\171"
#endif
},
    {"win32com", modulecode_win32com, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\151\156\63\62\143\157\155\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"win32com.client", modulecode_win32com$client, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\151\156\63\62\143\157\155\134\143\154\151\145\156\164\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"win32com.client.CLSIDToClass", modulecode_win32com$client$CLSIDToClass, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\151\156\63\62\143\157\155\134\143\154\151\145\156\164\134\103\114\123\111\104\124\157\103\154\141\163\163\56\160\171"
#endif
},
    {"win32com.client.build", modulecode_win32com$client$build, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\151\156\63\62\143\157\155\134\143\154\151\145\156\164\134\142\165\151\154\144\56\160\171"
#endif
},
    {"win32com.client.dynamic", modulecode_win32com$client$dynamic, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\151\156\63\62\143\157\155\134\143\154\151\145\156\164\134\144\171\156\141\155\151\143\56\160\171"
#endif
},
    {"win32com.client.gencache", modulecode_win32com$client$gencache, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\151\156\63\62\143\157\155\134\143\154\151\145\156\164\134\147\145\156\143\141\143\150\145\56\160\171"
#endif
},
    {"win32com.client.genpy", modulecode_win32com$client$genpy, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\151\156\63\62\143\157\155\134\143\154\151\145\156\164\134\147\145\156\160\171\56\160\171"
#endif
},
    {"win32com.client.makepy", modulecode_win32com$client$makepy, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\151\156\63\62\143\157\155\134\143\154\151\145\156\164\134\155\141\153\145\160\171\56\160\171"
#endif
},
    {"win32com.client.selecttlb", modulecode_win32com$client$selecttlb, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\151\156\63\62\143\157\155\134\143\154\151\145\156\164\134\163\145\154\145\143\164\164\154\142\56\160\171"
#endif
},
    {"win32com.client.util", modulecode_win32com$client$util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\151\156\63\62\143\157\155\134\143\154\151\145\156\164\134\165\164\151\154\56\160\171"
#endif
},
    {"win32com.server", modulecode_win32com$server, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\151\156\63\62\143\157\155\134\163\145\162\166\145\162\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"win32com.server.dispatcher", modulecode_win32com$server$dispatcher, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\151\156\63\62\143\157\155\134\163\145\162\166\145\162\134\144\151\163\160\141\164\143\150\145\162\56\160\171"
#endif
},
    {"win32com.server.exception", modulecode_win32com$server$exception, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\151\156\63\62\143\157\155\134\163\145\162\166\145\162\134\145\170\143\145\160\164\151\157\156\56\160\171"
#endif
},
    {"win32com.server.policy", modulecode_win32com$server$policy, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\151\156\63\62\143\157\155\134\163\145\162\166\145\162\134\160\157\154\151\143\171\56\160\171"
#endif
},
    {"win32com.server.util", modulecode_win32com$server$util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\151\156\63\62\143\157\155\134\163\145\162\166\145\162\134\165\164\151\154\56\160\171"
#endif
},
    {"win32com.universal", modulecode_win32com$universal, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\151\156\63\62\143\157\155\134\165\156\151\166\145\162\163\141\154\56\160\171"
#endif
},
    {"win32com.util", modulecode_win32com$util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\151\156\63\62\143\157\155\134\165\164\151\154\56\160\171"
#endif
},
    {"win32con", modulecode_win32con, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\151\156\63\62\134\154\151\142\134\167\151\156\63\62\143\157\156\56\160\171"
#endif
},
    {"win32timezone", modulecode_win32timezone, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\151\156\63\62\134\154\151\142\134\167\151\156\63\62\164\151\155\145\172\157\156\145\56\160\171"
#endif
},
    {"win32traceutil", modulecode_win32traceutil, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\151\156\63\62\134\154\151\142\134\167\151\156\63\62\164\162\141\143\145\165\164\151\154\56\160\171"
#endif
},
    {"winerror", modulecode_winerror, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\151\156\63\62\134\154\151\142\134\167\151\156\145\162\162\157\162\56\160\171"
#endif
},
    {"xlrd", modulecode_xlrd, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\170\154\162\144\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"xlrd.biffh", modulecode_xlrd$biffh, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\170\154\162\144\134\142\151\146\146\150\56\160\171"
#endif
},
    {"xlrd.book", modulecode_xlrd$book, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\170\154\162\144\134\142\157\157\153\56\160\171"
#endif
},
    {"xlrd.compdoc", modulecode_xlrd$compdoc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\170\154\162\144\134\143\157\155\160\144\157\143\56\160\171"
#endif
},
    {"xlrd.formatting", modulecode_xlrd$formatting, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\170\154\162\144\134\146\157\162\155\141\164\164\151\156\147\56\160\171"
#endif
},
    {"xlrd.formula", modulecode_xlrd$formula, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\170\154\162\144\134\146\157\162\155\165\154\141\56\160\171"
#endif
},
    {"xlrd.info", modulecode_xlrd$info, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\170\154\162\144\134\151\156\146\157\56\160\171"
#endif
},
    {"xlrd.sheet", modulecode_xlrd$sheet, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\170\154\162\144\134\163\150\145\145\164\56\160\171"
#endif
},
    {"xlrd.timemachine", modulecode_xlrd$timemachine, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\170\154\162\144\134\164\151\155\145\155\141\143\150\151\156\145\56\160\171"
#endif
},
    {"xlrd.xldate", modulecode_xlrd$xldate, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\170\154\162\144\134\170\154\144\141\164\145\56\160\171"
#endif
},
    {"xlwings", modulecode_xlwings, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\170\154\167\151\156\147\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"xlwings._win32patch", modulecode_xlwings$_win32patch, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\170\154\167\151\156\147\163\134\137\167\151\156\63\62\160\141\164\143\150\56\160\171"
#endif
},
    {"xlwings._xlwindows", modulecode_xlwings$_xlwindows, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\170\154\167\151\156\147\163\134\137\170\154\167\151\156\144\157\167\163\56\160\171"
#endif
},
    {"xlwings.base_classes", modulecode_xlwings$base_classes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\170\154\167\151\156\147\163\134\142\141\163\145\137\143\154\141\163\163\145\163\56\160\171"
#endif
},
    {"xlwings.com_server", modulecode_xlwings$com_server, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\170\154\167\151\156\147\163\134\143\157\155\137\163\145\162\166\145\162\56\160\171"
#endif
},
    {"xlwings.constants", modulecode_xlwings$constants, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\170\154\167\151\156\147\163\134\143\157\156\163\164\141\156\164\163\56\160\171"
#endif
},
    {"xlwings.conversion", modulecode_xlwings$conversion, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\170\154\167\151\156\147\163\134\143\157\156\166\145\162\163\151\157\156\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"xlwings.conversion.framework", modulecode_xlwings$conversion$framework, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\170\154\167\151\156\147\163\134\143\157\156\166\145\162\163\151\157\156\134\146\162\141\155\145\167\157\162\153\56\160\171"
#endif
},
    {"xlwings.conversion.numpy_conv", modulecode_xlwings$conversion$numpy_conv, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\170\154\167\151\156\147\163\134\143\157\156\166\145\162\163\151\157\156\134\156\165\155\160\171\137\143\157\156\166\56\160\171"
#endif
},
    {"xlwings.conversion.pandas_conv", modulecode_xlwings$conversion$pandas_conv, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\170\154\167\151\156\147\163\134\143\157\156\166\145\162\163\151\157\156\134\160\141\156\144\141\163\137\143\157\156\166\56\160\171"
#endif
},
    {"xlwings.conversion.standard", modulecode_xlwings$conversion$standard, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\170\154\167\151\156\147\163\134\143\157\156\166\145\162\163\151\157\156\134\163\164\141\156\144\141\162\144\56\160\171"
#endif
},
    {"xlwings.expansion", modulecode_xlwings$expansion, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\170\154\167\151\156\147\163\134\145\170\160\141\156\163\151\157\156\56\160\171"
#endif
},
    {"xlwings.main", modulecode_xlwings$main, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\170\154\167\151\156\147\163\134\155\141\151\156\56\160\171"
#endif
},
    {"xlwings.mistune", modulecode_xlwings$mistune, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\170\154\167\151\156\147\163\134\155\151\163\164\165\156\145\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"xlwings.mistune.block_parser", modulecode_xlwings$mistune$block_parser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\170\154\167\151\156\147\163\134\155\151\163\164\165\156\145\134\142\154\157\143\153\137\160\141\162\163\145\162\56\160\171"
#endif
},
    {"xlwings.mistune.inline_parser", modulecode_xlwings$mistune$inline_parser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\170\154\167\151\156\147\163\134\155\151\163\164\165\156\145\134\151\156\154\151\156\145\137\160\141\162\163\145\162\56\160\171"
#endif
},
    {"xlwings.mistune.markdown", modulecode_xlwings$mistune$markdown, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\170\154\167\151\156\147\163\134\155\151\163\164\165\156\145\134\155\141\162\153\144\157\167\156\56\160\171"
#endif
},
    {"xlwings.mistune.plugins", modulecode_xlwings$mistune$plugins, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\170\154\167\151\156\147\163\134\155\151\163\164\165\156\145\134\160\154\165\147\151\156\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"xlwings.mistune.plugins.abbr", modulecode_xlwings$mistune$plugins$abbr, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\170\154\167\151\156\147\163\134\155\151\163\164\165\156\145\134\160\154\165\147\151\156\163\134\141\142\142\162\56\160\171"
#endif
},
    {"xlwings.mistune.plugins.def_list", modulecode_xlwings$mistune$plugins$def_list, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\170\154\167\151\156\147\163\134\155\151\163\164\165\156\145\134\160\154\165\147\151\156\163\134\144\145\146\137\154\151\163\164\56\160\171"
#endif
},
    {"xlwings.mistune.plugins.extra", modulecode_xlwings$mistune$plugins$extra, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\170\154\167\151\156\147\163\134\155\151\163\164\165\156\145\134\160\154\165\147\151\156\163\134\145\170\164\162\141\56\160\171"
#endif
},
    {"xlwings.mistune.plugins.footnotes", modulecode_xlwings$mistune$plugins$footnotes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\170\154\167\151\156\147\163\134\155\151\163\164\165\156\145\134\160\154\165\147\151\156\163\134\146\157\157\164\156\157\164\145\163\56\160\171"
#endif
},
    {"xlwings.mistune.plugins.table", modulecode_xlwings$mistune$plugins$table, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\170\154\167\151\156\147\163\134\155\151\163\164\165\156\145\134\160\154\165\147\151\156\163\134\164\141\142\154\145\56\160\171"
#endif
},
    {"xlwings.mistune.plugins.task_lists", modulecode_xlwings$mistune$plugins$task_lists, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\170\154\167\151\156\147\163\134\155\151\163\164\165\156\145\134\160\154\165\147\151\156\163\134\164\141\163\153\137\154\151\163\164\163\56\160\171"
#endif
},
    {"xlwings.mistune.renderers", modulecode_xlwings$mistune$renderers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\170\154\167\151\156\147\163\134\155\151\163\164\165\156\145\134\162\145\156\144\145\162\145\162\163\56\160\171"
#endif
},
    {"xlwings.mistune.scanner", modulecode_xlwings$mistune$scanner, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\170\154\167\151\156\147\163\134\155\151\163\164\165\156\145\134\163\143\141\156\156\145\162\56\160\171"
#endif
},
    {"xlwings.mistune.util", modulecode_xlwings$mistune$util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\170\154\167\151\156\147\163\134\155\151\163\164\165\156\145\134\165\164\151\154\56\160\171"
#endif
},
    {"xlwings.pro", modulecode_xlwings$pro, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\170\154\167\151\156\147\163\134\160\162\157\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"xlwings.pro._xlcalamine", modulecode_xlwings$pro$_xlcalamine, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\170\154\167\151\156\147\163\134\160\162\157\134\137\170\154\143\141\154\141\155\151\156\145\56\160\171"
#endif
},
    {"xlwings.pro._xlofficejs", modulecode_xlwings$pro$_xlofficejs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\170\154\167\151\156\147\163\134\160\162\157\134\137\170\154\157\146\146\151\143\145\152\163\56\160\171"
#endif
},
    {"xlwings.pro._xlremote", modulecode_xlwings$pro$_xlremote, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\170\154\167\151\156\147\163\134\160\162\157\134\137\170\154\162\145\155\157\164\145\56\160\171"
#endif
},
    {"xlwings.pro.embedded_code", modulecode_xlwings$pro$embedded_code, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\170\154\167\151\156\147\163\134\160\162\157\134\145\155\142\145\144\144\145\144\137\143\157\144\145\56\160\171"
#endif
},
    {"xlwings.pro.module_permissions", modulecode_xlwings$pro$module_permissions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\170\154\167\151\156\147\163\134\160\162\157\134\155\157\144\165\154\145\137\160\145\162\155\151\163\163\151\157\156\163\56\160\171"
#endif
},
    {"xlwings.pro.reports", modulecode_xlwings$pro$reports, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\170\154\167\151\156\147\163\134\160\162\157\134\162\145\160\157\162\164\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"xlwings.pro.reports.filters", modulecode_xlwings$pro$reports$filters, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\170\154\167\151\156\147\163\134\160\162\157\134\162\145\160\157\162\164\163\134\146\151\154\164\145\162\163\56\160\171"
#endif
},
    {"xlwings.pro.reports.image", modulecode_xlwings$pro$reports$image, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\170\154\167\151\156\147\163\134\160\162\157\134\162\145\160\157\162\164\163\134\151\155\141\147\145\56\160\171"
#endif
},
    {"xlwings.pro.reports.main", modulecode_xlwings$pro$reports$main, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\170\154\167\151\156\147\163\134\160\162\157\134\162\145\160\157\162\164\163\134\155\141\151\156\56\160\171"
#endif
},
    {"xlwings.pro.reports.markdown", modulecode_xlwings$pro$reports$markdown, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\170\154\167\151\156\147\163\134\160\162\157\134\162\145\160\157\162\164\163\134\155\141\162\153\144\157\167\156\56\160\171"
#endif
},
    {"xlwings.pro.reports.pdf", modulecode_xlwings$pro$reports$pdf, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\170\154\167\151\156\147\163\134\160\162\157\134\162\145\160\157\162\164\163\134\160\144\146\56\160\171"
#endif
},
    {"xlwings.pro.udfs_officejs", modulecode_xlwings$pro$udfs_officejs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\170\154\167\151\156\147\163\134\160\162\157\134\165\144\146\163\137\157\146\146\151\143\145\152\163\56\160\171"
#endif
},
    {"xlwings.pro.utils", modulecode_xlwings$pro$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\170\154\167\151\156\147\163\134\160\162\157\134\165\164\151\154\163\56\160\171"
#endif
},
    {"xlwings.udfs", modulecode_xlwings$udfs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\170\154\167\151\156\147\163\134\165\144\146\163\56\160\171"
#endif
},
    {"xlwings.utils", modulecode_xlwings$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\170\154\167\151\156\147\163\134\165\164\151\154\163\56\160\171"
#endif
},
    {"zstandard", modulecode_zstandard, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\172\163\164\141\156\144\141\162\144\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"zstandard.backend_cffi", modulecode_zstandard$backend_cffi, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\172\163\164\141\156\144\141\162\144\134\142\141\143\153\145\156\144\137\143\146\146\151\56\160\171"
#endif
},
    {"numpy.testing", NULL, 0, 3983, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\164\145\163\164\151\156\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pkg_resources", NULL, 1, 159369, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pkg_resources._vendor", NULL, 2, 211, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pkg_resources._vendor.appdirs", NULL, 3, 29421, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\141\160\160\144\151\162\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.importlib_resources", NULL, 4, 845, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\151\155\160\157\162\164\154\151\142\137\162\145\163\157\165\162\143\145\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pkg_resources._vendor.importlib_resources._adapters", NULL, 5, 10762, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\151\155\160\157\162\164\154\151\142\137\162\145\163\157\165\162\143\145\163\134\137\141\144\141\160\164\145\162\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.importlib_resources._common", NULL, 6, 4289, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\151\155\160\157\162\164\154\151\142\137\162\145\163\157\165\162\143\145\163\134\137\143\157\155\155\157\156\56\160\171"
#endif
},
    {"pkg_resources._vendor.importlib_resources._compat", NULL, 7, 5574, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\151\155\160\157\162\164\154\151\142\137\162\145\163\157\165\162\143\145\163\134\137\143\157\155\160\141\164\56\160\171"
#endif
},
    {"pkg_resources._vendor.importlib_resources._itertools", NULL, 8, 1407, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\151\155\160\157\162\164\154\151\142\137\162\145\163\157\165\162\143\145\163\134\137\151\164\145\162\164\157\157\154\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.importlib_resources._legacy", NULL, 9, 6505, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\151\155\160\157\162\164\154\151\142\137\162\145\163\157\165\162\143\145\163\134\137\154\145\147\141\143\171\56\160\171"
#endif
},
    {"pkg_resources._vendor.importlib_resources.abc", NULL, 10, 7506, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\151\155\160\157\162\164\154\151\142\137\162\145\163\157\165\162\143\145\163\134\141\142\143\56\160\171"
#endif
},
    {"pkg_resources._vendor.importlib_resources.readers", NULL, 11, 8380, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\151\155\160\157\162\164\154\151\142\137\162\145\163\157\165\162\143\145\163\134\162\145\141\144\145\162\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.jaraco", NULL, 12, 218, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\152\141\162\141\143\157\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pkg_resources._vendor.jaraco.context", NULL, 13, 9441, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\152\141\162\141\143\157\134\143\157\156\164\145\170\164\56\160\171"
#endif
},
    {"pkg_resources._vendor.jaraco.functools", NULL, 14, 20304, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\152\141\162\141\143\157\134\146\165\156\143\164\157\157\154\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.jaraco.text", NULL, 15, 26621, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\152\141\162\141\143\157\134\164\145\170\164\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pkg_resources._vendor.more_itertools", NULL, 16, 312, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\155\157\162\145\137\151\164\145\162\164\157\157\154\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pkg_resources._vendor.more_itertools.more", NULL, 17, 167973, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\155\157\162\145\137\151\164\145\162\164\157\157\154\163\134\155\157\162\145\56\160\171"
#endif
},
    {"pkg_resources._vendor.more_itertools.recipes", NULL, 18, 26964, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\155\157\162\145\137\151\164\145\162\164\157\157\154\163\134\162\145\143\151\160\145\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.packaging", NULL, 19, 583, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\141\143\153\141\147\151\156\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pkg_resources._vendor.packaging.__about__", NULL, 20, 662, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\141\143\153\141\147\151\156\147\134\137\137\141\142\157\165\164\137\137\56\160\171"
#endif
},
    {"pkg_resources._vendor.packaging._manylinux", NULL, 21, 13249, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\141\143\153\141\147\151\156\147\134\137\155\141\156\171\154\151\156\165\170\56\160\171"
#endif
},
    {"pkg_resources._vendor.packaging._musllinux", NULL, 22, 8017, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\141\143\153\141\147\151\156\147\134\137\155\165\163\154\154\151\156\165\170\56\160\171"
#endif
},
    {"pkg_resources._vendor.packaging._structures", NULL, 23, 3705, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\141\143\153\141\147\151\156\147\134\137\163\164\162\165\143\164\165\162\145\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.packaging.markers", NULL, 24, 16554, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\141\143\153\141\147\151\156\147\134\155\141\162\153\145\162\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.packaging.requirements", NULL, 25, 7669, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\141\143\153\141\147\151\156\147\134\162\145\161\165\151\162\145\155\145\156\164\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.packaging.specifiers", NULL, 26, 34383, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\141\143\153\141\147\151\156\147\134\163\160\145\143\151\146\151\145\162\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.packaging.tags", NULL, 27, 21368, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\141\143\153\141\147\151\156\147\134\164\141\147\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.packaging.utils", NULL, 28, 6703, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\141\143\153\141\147\151\156\147\134\165\164\151\154\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.packaging.version", NULL, 29, 21895, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\141\143\153\141\147\151\156\147\134\166\145\162\163\151\157\156\56\160\171"
#endif
},
    {"pkg_resources._vendor.pyparsing", NULL, 30, 8356, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\171\160\141\162\163\151\156\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pkg_resources._vendor.pyparsing.actions", NULL, 31, 8482, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\171\160\141\162\163\151\156\147\134\141\143\164\151\157\156\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.pyparsing.common", NULL, 32, 14804, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\171\160\141\162\163\151\156\147\134\143\157\155\155\157\156\56\160\171"
#endif
},
    {"pkg_resources._vendor.pyparsing.core", NULL, 33, 277656, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\171\160\141\162\163\151\156\147\134\143\157\162\145\56\160\171"
#endif
},
    {"pkg_resources._vendor.pyparsing.diagram", NULL, 34, 28019, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\171\160\141\162\163\151\156\147\134\144\151\141\147\162\141\155\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pkg_resources._vendor.pyparsing.exceptions", NULL, 35, 12946, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\171\160\141\162\163\151\156\147\134\145\170\143\145\160\164\151\157\156\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.pyparsing.helpers", NULL, 36, 53647, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\171\160\141\162\163\151\156\147\134\150\145\154\160\145\162\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.pyparsing.results", NULL, 37, 36330, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\171\160\141\162\163\151\156\147\134\162\145\163\165\154\164\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.pyparsing.testing", NULL, 38, 19526, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\171\160\141\162\163\151\156\147\134\164\145\163\164\151\156\147\56\160\171"
#endif
},
    {"pkg_resources._vendor.pyparsing.unicode", NULL, 39, 15384, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\171\160\141\162\163\151\156\147\134\165\156\151\143\157\144\145\56\160\171"
#endif
},
    {"pkg_resources._vendor.pyparsing.util", NULL, 40, 14283, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\171\160\141\162\163\151\156\147\134\165\164\151\154\56\160\171"
#endif
},
    {"pkg_resources.extern", NULL, 41, 4330, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\150\145\156\162\151\161\165\145\56\143\141\156\150\141\144\141\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\145\170\164\145\162\156\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {NULL, NULL, 0, 0, 0}
};

static void _loadBytesCodesBlob(PyThreadState *tstate) {
    static bool init_done = false;

    if (init_done == false) {
        // Note needed for mere data.
        loadConstantsBlob(tstate, (PyObject **)bytecode_data, ".bytecode");

        init_done = true;
    }
}


void setupMetaPathBasedLoader(PyThreadState *tstate) {
    static bool init_done = false;
    if (init_done == false) {
        _loadBytesCodesBlob(tstate);
        registerMetaPathBasedUnfreezer(meta_path_loader_entries, bytecode_data);

        init_done = true;
    }
}

// This provides the frozen (compiled bytecode) files that are included if
// any.

// These modules should be loaded as bytecode. They may e.g. have to be loadable
// during "Py_Initialize" already, or for irrelevance, they are only included
// in this un-optimized form. These are not compiled by Nuitka, and therefore
// are not accelerated at all, merely bundled with the binary or module, so
// that CPython library can start out finding them.

struct frozen_desc {
    char const *name;
    int index;
    int size;
};

static struct frozen_desc _frozen_modules[] = {

    {NULL, 0, 0}
};


void copyFrozenModulesTo(struct _frozen *destination) {
    NUITKA_PRINT_TIMING("copyFrozenModulesTo(): Calling _loadBytesCodesBlob.");
    _loadBytesCodesBlob(NULL);

    NUITKA_PRINT_TIMING("copyFrozenModulesTo(): Updating frozen module table sizes.");

    struct frozen_desc *current = _frozen_modules;

    for (;;) {
        destination->name = (char *)current->name;
        destination->code = bytecode_data[current->index];
        destination->size = current->size;
#if PYTHON_VERSION >= 0x3b0
        destination->is_package = current->size < 0;
        destination->size = Py_ABS(destination->size);
        destination->get_code = NULL;
#endif
        if (destination->name == NULL) break;

        current += 1;
        destination += 1;
    };
}

