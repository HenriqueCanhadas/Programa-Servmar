/* Generated code for Python module 'pandas.core.strings.base'
 * created by Nuitka version 1.8.2
 *
 * This code is in part copyright 2023 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_pandas$core$strings$base" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pandas$core$strings$base;
PyDictObject *moduledict_pandas$core$strings$base;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[188];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[188];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("pandas.core.strings.base"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 188; i++) {
            mod_consts_hash[i] = DEEP_HASH(tstate, mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(PyThreadState *tstate) {
    createModuleConstants(tstate);
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pandas$core$strings$base(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 188; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_0e83fe1186f4df7ae6fe8914087552a1;
static PyCodeObject *codeobj_529e50647ac01fc83c9390acb542cb37;
static PyCodeObject *codeobj_cd0717d906a1fb38623dbaebdf06c8ca;
static PyCodeObject *codeobj_658c4a33d4d7de583895782a1d3f4c3c;
static PyCodeObject *codeobj_70cf325de40a2541a4439433624b43c9;
static PyCodeObject *codeobj_c281d1f06b9042277f17b4cb93261226;
static PyCodeObject *codeobj_1b1ab3e3e04ab14cbb14fe1c3761f535;
static PyCodeObject *codeobj_c85e418cfd1ea0a38d9c1ccfc1e332cd;
static PyCodeObject *codeobj_953240aece38b549838b099772309d95;
static PyCodeObject *codeobj_1e112e49466bffe39cd85ecb9175622c;
static PyCodeObject *codeobj_5aa61b8c0ddd3c6c8ec3edbdc6ddd93c;
static PyCodeObject *codeobj_1c73429ce9c49a90fdc0d8c4539679e0;
static PyCodeObject *codeobj_c8f077efa755fd0c65ccf11701f7ced1;
static PyCodeObject *codeobj_ebbf64f09a841caeb207765f92856b31;
static PyCodeObject *codeobj_af2d61b29dad476856a1eec2044242dc;
static PyCodeObject *codeobj_febbb6697f45c27de749f21c0f48a3c5;
static PyCodeObject *codeobj_3f66d83d611378020a3540b0fc08bcc6;
static PyCodeObject *codeobj_906bf4e9783da659e4f5868fbd19e94b;
static PyCodeObject *codeobj_c411879c981169227cef8ed6451eccda;
static PyCodeObject *codeobj_78d274fe09deb23a84c654feeb71a630;
static PyCodeObject *codeobj_25048aec07877a3e608214ff98904e0d;
static PyCodeObject *codeobj_6aba134f17487044905a7ab37b653e4f;
static PyCodeObject *codeobj_3b38b8914ac6d007e96958e6c9d63c63;
static PyCodeObject *codeobj_15cf45123ef9d412967392da62e12f66;
static PyCodeObject *codeobj_2537988ca38a1ff00b169ccb552cf90b;
static PyCodeObject *codeobj_e8f1fbc0abc9fd386f9275ea3eeb8e77;
static PyCodeObject *codeobj_6327394295e40db903fdd4e0b78dc39c;
static PyCodeObject *codeobj_961f2206f014416c6185f5958c85d17d;
static PyCodeObject *codeobj_c8775290ec527a0636ba9aa893618fcf;
static PyCodeObject *codeobj_b2d270766e49c239f79e6c0052147cfb;
static PyCodeObject *codeobj_5a3106a7537e28f9bead27f870754bad;
static PyCodeObject *codeobj_31ce777ffbd23d067cced383ee32d444;
static PyCodeObject *codeobj_dd6dec4998dae9cc2101f224134543a5;
static PyCodeObject *codeobj_14393578aa9c21e54e9808ceaa233fdb;
static PyCodeObject *codeobj_020ad2738505776ac93d0a246d617da8;
static PyCodeObject *codeobj_ec7590e5cf7ac9f250f19b38e2309228;
static PyCodeObject *codeobj_417fb2815726d2a2feb93be4d32b0293;
static PyCodeObject *codeobj_92077dd3fc952899ef36ed24ddd11db6;
static PyCodeObject *codeobj_f52b32e57d18a3cc6d9aee2c05598593;
static PyCodeObject *codeobj_0fa4ba590f6546d3787fb1c6cea25cc3;
static PyCodeObject *codeobj_419a0441d8419b07af2819873638455c;
static PyCodeObject *codeobj_e55efb198cb7b439e72ce5aae0b01121;
static PyCodeObject *codeobj_387fc29de80f5379f573910d98e49e1e;
static PyCodeObject *codeobj_4456045d6d7d02b5645fe1f8e8e1b86e;
static PyCodeObject *codeobj_28d8e0b8d6e3375e698bd62d63f8df6e;
static PyCodeObject *codeobj_0b3cfaf225fab3af673aee5fdb8786d2;
static PyCodeObject *codeobj_80d03daa77215ffba35e564f668e8082;
static PyCodeObject *codeobj_5f81f6661e60f515f7c6676d2f10d82e;
static PyCodeObject *codeobj_2cce13c72c58e1ed352ae48646cddfef;
static PyCodeObject *codeobj_cc0a02934d851b2cad5dbac4f057dcf0;
static PyCodeObject *codeobj_6d35d2995ba2228bcda04b3275f2b17b;
static PyCodeObject *codeobj_8de02f3d6b6c49ecb27e77ef0c366ff7;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[7]; CHECK_OBJECT(module_filename_obj);
    codeobj_0e83fe1186f4df7ae6fe8914087552a1 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts[160], mod_consts[160], NULL, NULL, 0, 0, 0);
    codeobj_529e50647ac01fc83c9390acb542cb37 = MAKE_CODE_OBJECT(module_filename_obj, 21, CO_FUTURE_ANNOTATIONS, mod_consts[23], mod_consts[23], mod_consts[161], NULL, 0, 0, 0);
    codeobj_cd0717d906a1fb38623dbaebdf06c8ca = MAKE_CODE_OBJECT(module_filename_obj, 203, CO_FUTURE_ANNOTATIONS, mod_consts[122], mod_consts[122], mod_consts[162], NULL, 1, 0, 0);
    codeobj_658c4a33d4d7de583895782a1d3f4c3c = MAKE_CODE_OBJECT(module_filename_obj, 207, CO_FUTURE_ANNOTATIONS, mod_consts[124], mod_consts[124], mod_consts[162], NULL, 1, 0, 0);
    codeobj_70cf325de40a2541a4439433624b43c9 = MAKE_CODE_OBJECT(module_filename_obj, 57, CO_FUTURE_ANNOTATIONS, mod_consts[45], mod_consts[45], mod_consts[163], NULL, 6, 0, 0);
    codeobj_c281d1f06b9042277f17b4cb93261226 = MAKE_CODE_OBJECT(module_filename_obj, 44, CO_FUTURE_ANNOTATIONS, mod_consts[37], mod_consts[37], mod_consts[164], NULL, 3, 0, 0);
    codeobj_1b1ab3e3e04ab14cbb14fe1c3761f535 = MAKE_CODE_OBJECT(module_filename_obj, 103, CO_FUTURE_ANNOTATIONS, mod_consts[68], mod_consts[68], mod_consts[165], NULL, 3, 0, 0);
    codeobj_c85e418cfd1ea0a38d9c1ccfc1e332cd = MAKE_CODE_OBJECT(module_filename_obj, 67, CO_FUTURE_ANNOTATIONS, mod_consts[50], mod_consts[50], mod_consts[166], NULL, 3, 0, 0);
    codeobj_953240aece38b549838b099772309d95 = MAKE_CODE_OBJECT(module_filename_obj, 261, CO_FUTURE_ANNOTATIONS, mod_consts[157], mod_consts[157], mod_consts[167], NULL, 4, 0, 0);
    codeobj_1e112e49466bffe39cd85ecb9175622c = MAKE_CODE_OBJECT(module_filename_obj, 107, CO_FUTURE_ANNOTATIONS, mod_consts[72], mod_consts[72], mod_consts[168], NULL, 4, 0, 0);
    codeobj_5aa61b8c0ddd3c6c8ec3edbdc6ddd93c = MAKE_CODE_OBJECT(module_filename_obj, 115, CO_FUTURE_ANNOTATIONS, mod_consts[76], mod_consts[76], mod_consts[164], NULL, 3, 0, 0);
    codeobj_1c73429ce9c49a90fdc0d8c4539679e0 = MAKE_CODE_OBJECT(module_filename_obj, 93, CO_FUTURE_ANNOTATIONS, mod_consts[64], mod_consts[64], mod_consts[169], NULL, 5, 0, 0);
    codeobj_c8f077efa755fd0c65ccf11701f7ced1 = MAKE_CODE_OBJECT(module_filename_obj, 119, CO_FUTURE_ANNOTATIONS, mod_consts[5], mod_consts[5], mod_consts[170], NULL, 2, 0, 0);
    codeobj_ebbf64f09a841caeb207765f92856b31 = MAKE_CODE_OBJECT(module_filename_obj, 163, CO_FUTURE_ANNOTATIONS, mod_consts[102], mod_consts[102], mod_consts[171], NULL, 2, 0, 0);
    codeobj_af2d61b29dad476856a1eec2044242dc = MAKE_CODE_OBJECT(module_filename_obj, 37, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[32], mod_consts[32], mod_consts[172], NULL, 2, 0, 0);
    codeobj_febbb6697f45c27de749f21c0f48a3c5 = MAKE_CODE_OBJECT(module_filename_obj, 123, CO_FUTURE_ANNOTATIONS, mod_consts[79], mod_consts[79], mod_consts[168], NULL, 4, 0, 0);
    codeobj_3f66d83d611378020a3540b0fc08bcc6 = MAKE_CODE_OBJECT(module_filename_obj, 167, CO_FUTURE_ANNOTATIONS, mod_consts[104], mod_consts[104], mod_consts[162], NULL, 1, 0, 0);
    codeobj_906bf4e9783da659e4f5868fbd19e94b = MAKE_CODE_OBJECT(module_filename_obj, 171, CO_FUTURE_ANNOTATIONS, mod_consts[106], mod_consts[106], mod_consts[162], NULL, 1, 0, 0);
    codeobj_c411879c981169227cef8ed6451eccda = MAKE_CODE_OBJECT(module_filename_obj, 175, CO_FUTURE_ANNOTATIONS, mod_consts[108], mod_consts[108], mod_consts[162], NULL, 1, 0, 0);
    codeobj_78d274fe09deb23a84c654feeb71a630 = MAKE_CODE_OBJECT(module_filename_obj, 179, CO_FUTURE_ANNOTATIONS, mod_consts[110], mod_consts[110], mod_consts[162], NULL, 1, 0, 0);
    codeobj_25048aec07877a3e608214ff98904e0d = MAKE_CODE_OBJECT(module_filename_obj, 183, CO_FUTURE_ANNOTATIONS, mod_consts[112], mod_consts[112], mod_consts[162], NULL, 1, 0, 0);
    codeobj_6aba134f17487044905a7ab37b653e4f = MAKE_CODE_OBJECT(module_filename_obj, 187, CO_FUTURE_ANNOTATIONS, mod_consts[114], mod_consts[114], mod_consts[162], NULL, 1, 0, 0);
    codeobj_3b38b8914ac6d007e96958e6c9d63c63 = MAKE_CODE_OBJECT(module_filename_obj, 191, CO_FUTURE_ANNOTATIONS, mod_consts[116], mod_consts[116], mod_consts[162], NULL, 1, 0, 0);
    codeobj_15cf45123ef9d412967392da62e12f66 = MAKE_CODE_OBJECT(module_filename_obj, 195, CO_FUTURE_ANNOTATIONS, mod_consts[118], mod_consts[118], mod_consts[162], NULL, 1, 0, 0);
    codeobj_2537988ca38a1ff00b169ccb552cf90b = MAKE_CODE_OBJECT(module_filename_obj, 199, CO_FUTURE_ANNOTATIONS, mod_consts[120], mod_consts[120], mod_consts[162], NULL, 1, 0, 0);
    codeobj_e8f1fbc0abc9fd386f9275ea3eeb8e77 = MAKE_CODE_OBJECT(module_filename_obj, 131, CO_FUTURE_ANNOTATIONS, mod_consts[84], mod_consts[84], mod_consts[171], NULL, 2, 0, 0);
    codeobj_6327394295e40db903fdd4e0b78dc39c = MAKE_CODE_OBJECT(module_filename_obj, 143, CO_FUTURE_ANNOTATIONS, mod_consts[90], mod_consts[90], mod_consts[162], NULL, 1, 0, 0);
    codeobj_961f2206f014416c6185f5958c85d17d = MAKE_CODE_OBJECT(module_filename_obj, 219, CO_FUTURE_ANNOTATIONS, mod_consts[130], mod_consts[130], mod_consts[162], NULL, 1, 0, 0);
    codeobj_c8775290ec527a0636ba9aa893618fcf = MAKE_CODE_OBJECT(module_filename_obj, 235, CO_FUTURE_ANNOTATIONS, mod_consts[138], mod_consts[138], mod_consts[173], NULL, 2, 0, 0);
    codeobj_b2d270766e49c239f79e6c0052147cfb = MAKE_CODE_OBJECT(module_filename_obj, 87, CO_FUTURE_ANNOTATIONS, mod_consts[61], mod_consts[61], mod_consts[169], NULL, 5, 0, 0);
    codeobj_5a3106a7537e28f9bead27f870754bad = MAKE_CODE_OBJECT(module_filename_obj, 227, CO_FUTURE_ANNOTATIONS, mod_consts[134], mod_consts[134], mod_consts[174], NULL, 2, 0, 0);
    codeobj_31ce777ffbd23d067cced383ee32d444 = MAKE_CODE_OBJECT(module_filename_obj, 48, CO_FUTURE_ANNOTATIONS, mod_consts[41], mod_consts[41], mod_consts[175], NULL, 4, 0, 0);
    codeobj_dd6dec4998dae9cc2101f224134543a5 = MAKE_CODE_OBJECT(module_filename_obj, 135, CO_FUTURE_ANNOTATIONS, mod_consts[86], mod_consts[86], mod_consts[176], NULL, 3, 0, 0);
    codeobj_14393578aa9c21e54e9808ceaa233fdb = MAKE_CODE_OBJECT(module_filename_obj, 243, CO_FUTURE_ANNOTATIONS, mod_consts[143], mod_consts[143], mod_consts[177], NULL, 2, 0, 0);
    codeobj_020ad2738505776ac93d0a246d617da8 = MAKE_CODE_OBJECT(module_filename_obj, 247, CO_FUTURE_ANNOTATIONS, mod_consts[146], mod_consts[146], mod_consts[178], NULL, 2, 0, 0);
    codeobj_ec7590e5cf7ac9f250f19b38e2309228 = MAKE_CODE_OBJECT(module_filename_obj, 83, CO_FUTURE_ANNOTATIONS, mod_consts[57], mod_consts[57], mod_consts[179], NULL, 2, 0, 0);
    codeobj_417fb2815726d2a2feb93be4d32b0293 = MAKE_CODE_OBJECT(module_filename_obj, 71, CO_FUTURE_ANNOTATIONS, mod_consts[54], mod_consts[54], mod_consts[180], NULL, 7, 0, 0);
    codeobj_92077dd3fc952899ef36ed24ddd11db6 = MAKE_CODE_OBJECT(module_filename_obj, 111, CO_FUTURE_ANNOTATIONS, mod_consts[74], mod_consts[74], mod_consts[168], NULL, 4, 0, 0);
    codeobj_f52b32e57d18a3cc6d9aee2c05598593 = MAKE_CODE_OBJECT(module_filename_obj, 127, CO_FUTURE_ANNOTATIONS, mod_consts[81], mod_consts[81], mod_consts[168], NULL, 4, 0, 0);
    codeobj_0fa4ba590f6546d3787fb1c6cea25cc3 = MAKE_CODE_OBJECT(module_filename_obj, 139, CO_FUTURE_ANNOTATIONS, mod_consts[88], mod_consts[88], mod_consts[176], NULL, 3, 0, 0);
    codeobj_419a0441d8419b07af2819873638455c = MAKE_CODE_OBJECT(module_filename_obj, 257, CO_FUTURE_ANNOTATIONS, mod_consts[153], mod_consts[153], mod_consts[181], NULL, 3, 0, 0);
    codeobj_e55efb198cb7b439e72ce5aae0b01121 = MAKE_CODE_OBJECT(module_filename_obj, 239, CO_FUTURE_ANNOTATIONS, mod_consts[140], mod_consts[140], mod_consts[173], NULL, 2, 0, 0);
    codeobj_387fc29de80f5379f573910d98e49e1e = MAKE_CODE_OBJECT(module_filename_obj, 147, CO_FUTURE_ANNOTATIONS, mod_consts[0], mod_consts[0], mod_consts[182], NULL, 4, 0, 0);
    codeobj_4456045d6d7d02b5645fe1f8e8e1b86e = MAKE_CODE_OBJECT(module_filename_obj, 151, CO_FUTURE_ANNOTATIONS, mod_consts[94], mod_consts[94], mod_consts[183], NULL, 4, 0, 0);
    codeobj_28d8e0b8d6e3375e698bd62d63f8df6e = MAKE_CODE_OBJECT(module_filename_obj, 251, CO_FUTURE_ANNOTATIONS, mod_consts[150], mod_consts[150], mod_consts[184], NULL, 5, 0, 0);
    codeobj_0b3cfaf225fab3af673aee5fdb8786d2 = MAKE_CODE_OBJECT(module_filename_obj, 63, CO_FUTURE_ANNOTATIONS, mod_consts[48], mod_consts[48], mod_consts[166], NULL, 3, 0, 0);
    codeobj_80d03daa77215ffba35e564f668e8082 = MAKE_CODE_OBJECT(module_filename_obj, 231, CO_FUTURE_ANNOTATIONS, mod_consts[136], mod_consts[136], mod_consts[173], NULL, 2, 0, 0);
    codeobj_5f81f6661e60f515f7c6676d2f10d82e = MAKE_CODE_OBJECT(module_filename_obj, 215, CO_FUTURE_ANNOTATIONS, mod_consts[128], mod_consts[128], mod_consts[162], NULL, 1, 0, 0);
    codeobj_2cce13c72c58e1ed352ae48646cddfef = MAKE_CODE_OBJECT(module_filename_obj, 211, CO_FUTURE_ANNOTATIONS, mod_consts[126], mod_consts[126], mod_consts[162], NULL, 1, 0, 0);
    codeobj_cc0a02934d851b2cad5dbac4f057dcf0 = MAKE_CODE_OBJECT(module_filename_obj, 155, CO_FUTURE_ANNOTATIONS, mod_consts[96], mod_consts[96], mod_consts[185], NULL, 2, 0, 0);
    codeobj_6d35d2995ba2228bcda04b3275f2b17b = MAKE_CODE_OBJECT(module_filename_obj, 223, CO_FUTURE_ANNOTATIONS, mod_consts[132], mod_consts[132], mod_consts[162], NULL, 1, 0, 0);
    codeobj_8de02f3d6b6c49ecb27e77ef0c366ff7 = MAKE_CODE_OBJECT(module_filename_obj, 159, CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts[99], mod_consts[99], mod_consts[186], NULL, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__10__str_fullmatch(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__11__str_encode(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__12__str_find(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__13__str_rfind(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__14__str_findall(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__15__str_get();


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__16__str_index(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__17__str_rindex(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__18__str_join(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__19__str_partition(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__1__str_getitem();


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__20__str_rpartition(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__21__str_len();


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__22__str_slice(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__23__str_slice_replace(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__24__str_translate();


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__25__str_wrap(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__26__str_get_dummies(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__27__str_isalnum();


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__28__str_isalpha();


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__29__str_isdecimal();


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__2__str_count(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__30__str_isdigit();


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__31__str_islower();


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__32__str_isnumeric();


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__33__str_isspace();


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__34__str_istitle();


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__35__str_isupper();


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__36__str_capitalize();


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__37__str_casefold();


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__38__str_title();


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__39__str_swapcase();


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__3__str_pad(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__40__str_lower();


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__41__str_upper();


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__42__str_normalize();


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__43__str_strip(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__44__str_lstrip(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__45__str_rstrip(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__46__str_removeprefix(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__47__str_removesuffix(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__48__str_split(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__49__str_rsplit(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__4__str_contains(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__50__str_extract(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__5__str_startswith(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__6__str_endswith(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__7__str_replace(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__8__str_repeat(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__9__str_match(PyObject *defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_pandas$core$strings$base$$$function__1__str_getitem(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_key = python_pars[1];
    struct Nuitka_FrameObject *frame_af2d61b29dad476856a1eec2044242dc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_af2d61b29dad476856a1eec2044242dc = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_af2d61b29dad476856a1eec2044242dc)) {
        Py_XDECREF(cache_frame_af2d61b29dad476856a1eec2044242dc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_af2d61b29dad476856a1eec2044242dc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_af2d61b29dad476856a1eec2044242dc = MAKE_FUNCTION_FRAME(tstate, codeobj_af2d61b29dad476856a1eec2044242dc, module_pandas$core$strings$base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_af2d61b29dad476856a1eec2044242dc->m_type_description == NULL);
    frame_af2d61b29dad476856a1eec2044242dc = cache_frame_af2d61b29dad476856a1eec2044242dc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_af2d61b29dad476856a1eec2044242dc);
    assert(Py_REFCNT(frame_af2d61b29dad476856a1eec2044242dc) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_key);
        tmp_isinstance_inst_1 = par_key;
        tmp_isinstance_cls_1 = (PyObject *)&PySlice_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[0]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_expression_value_2 = par_key;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[1]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 39;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_expression_value_3 = par_key;
        tmp_kw_call_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[2]);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 39;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_expression_value_4 = par_key;
        tmp_kw_call_value_2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[3]);
        if (tmp_kw_call_value_2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);

            exception_lineno = 39;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_af2d61b29dad476856a1eec2044242dc->m_frame.f_lineno = 39;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[4]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_1_1);
        Py_DECREF(tmp_kw_call_value_2_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_key);
        tmp_args_element_value_1 = par_key;
        frame_af2d61b29dad476856a1eec2044242dc->m_frame.f_lineno = 41;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[5], tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_af2d61b29dad476856a1eec2044242dc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_af2d61b29dad476856a1eec2044242dc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_af2d61b29dad476856a1eec2044242dc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_af2d61b29dad476856a1eec2044242dc,
        type_description_1,
        par_self,
        par_key
    );


    // Release cached frame if used for exception.
    if (frame_af2d61b29dad476856a1eec2044242dc == cache_frame_af2d61b29dad476856a1eec2044242dc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_af2d61b29dad476856a1eec2044242dc);
        cache_frame_af2d61b29dad476856a1eec2044242dc = NULL;
    }

    assertFrameObject(frame_af2d61b29dad476856a1eec2044242dc);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__10__str_fullmatch(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[64],
#if PYTHON_VERSION >= 0x300
        mod_consts[65],
#endif
        codeobj_1c73429ce9c49a90fdc0d8c4539679e0,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__11__str_encode(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[68],
#if PYTHON_VERSION >= 0x300
        mod_consts[69],
#endif
        codeobj_1b1ab3e3e04ab14cbb14fe1c3761f535,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__12__str_find(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        mod_consts[73],
#endif
        codeobj_1e112e49466bffe39cd85ecb9175622c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__13__str_rfind(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[74],
#if PYTHON_VERSION >= 0x300
        mod_consts[75],
#endif
        codeobj_92077dd3fc952899ef36ed24ddd11db6,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__14__str_findall(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        mod_consts[77],
#endif
        codeobj_5aa61b8c0ddd3c6c8ec3edbdc6ddd93c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__15__str_get() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[78],
#endif
        codeobj_c8f077efa755fd0c65ccf11701f7ced1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__16__str_index(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[79],
#if PYTHON_VERSION >= 0x300
        mod_consts[80],
#endif
        codeobj_febbb6697f45c27de749f21c0f48a3c5,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__17__str_rindex(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[81],
#if PYTHON_VERSION >= 0x300
        mod_consts[82],
#endif
        codeobj_f52b32e57d18a3cc6d9aee2c05598593,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__18__str_join(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[84],
#if PYTHON_VERSION >= 0x300
        mod_consts[85],
#endif
        codeobj_e8f1fbc0abc9fd386f9275ea3eeb8e77,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__19__str_partition(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[86],
#if PYTHON_VERSION >= 0x300
        mod_consts[87],
#endif
        codeobj_dd6dec4998dae9cc2101f224134543a5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__1__str_getitem() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$strings$base$$$function__1__str_getitem,
        mod_consts[32],
#if PYTHON_VERSION >= 0x300
        mod_consts[33],
#endif
        codeobj_af2d61b29dad476856a1eec2044242dc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__20__str_rpartition(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[88],
#if PYTHON_VERSION >= 0x300
        mod_consts[89],
#endif
        codeobj_0fa4ba590f6546d3787fb1c6cea25cc3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__21__str_len() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[90],
#if PYTHON_VERSION >= 0x300
        mod_consts[91],
#endif
        codeobj_6327394295e40db903fdd4e0b78dc39c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__22__str_slice(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[0],
#if PYTHON_VERSION >= 0x300
        mod_consts[93],
#endif
        codeobj_387fc29de80f5379f573910d98e49e1e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__23__str_slice_replace(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[94],
#if PYTHON_VERSION >= 0x300
        mod_consts[95],
#endif
        codeobj_4456045d6d7d02b5645fe1f8e8e1b86e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__24__str_translate() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[96],
#if PYTHON_VERSION >= 0x300
        mod_consts[97],
#endif
        codeobj_cc0a02934d851b2cad5dbac4f057dcf0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__25__str_wrap(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[99],
#if PYTHON_VERSION >= 0x300
        mod_consts[100],
#endif
        codeobj_8de02f3d6b6c49ecb27e77ef0c366ff7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__26__str_get_dummies(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[102],
#if PYTHON_VERSION >= 0x300
        mod_consts[103],
#endif
        codeobj_ebbf64f09a841caeb207765f92856b31,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__27__str_isalnum() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[104],
#if PYTHON_VERSION >= 0x300
        mod_consts[105],
#endif
        codeobj_3f66d83d611378020a3540b0fc08bcc6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__28__str_isalpha() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[106],
#if PYTHON_VERSION >= 0x300
        mod_consts[107],
#endif
        codeobj_906bf4e9783da659e4f5868fbd19e94b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__29__str_isdecimal() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[108],
#if PYTHON_VERSION >= 0x300
        mod_consts[109],
#endif
        codeobj_c411879c981169227cef8ed6451eccda,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__2__str_count(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[37],
#if PYTHON_VERSION >= 0x300
        mod_consts[38],
#endif
        codeobj_c281d1f06b9042277f17b4cb93261226,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__30__str_isdigit() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[110],
#if PYTHON_VERSION >= 0x300
        mod_consts[111],
#endif
        codeobj_78d274fe09deb23a84c654feeb71a630,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__31__str_islower() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[112],
#if PYTHON_VERSION >= 0x300
        mod_consts[113],
#endif
        codeobj_25048aec07877a3e608214ff98904e0d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__32__str_isnumeric() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[114],
#if PYTHON_VERSION >= 0x300
        mod_consts[115],
#endif
        codeobj_6aba134f17487044905a7ab37b653e4f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__33__str_isspace() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[116],
#if PYTHON_VERSION >= 0x300
        mod_consts[117],
#endif
        codeobj_3b38b8914ac6d007e96958e6c9d63c63,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__34__str_istitle() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[118],
#if PYTHON_VERSION >= 0x300
        mod_consts[119],
#endif
        codeobj_15cf45123ef9d412967392da62e12f66,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__35__str_isupper() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[120],
#if PYTHON_VERSION >= 0x300
        mod_consts[121],
#endif
        codeobj_2537988ca38a1ff00b169ccb552cf90b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__36__str_capitalize() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[122],
#if PYTHON_VERSION >= 0x300
        mod_consts[123],
#endif
        codeobj_cd0717d906a1fb38623dbaebdf06c8ca,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__37__str_casefold() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[124],
#if PYTHON_VERSION >= 0x300
        mod_consts[125],
#endif
        codeobj_658c4a33d4d7de583895782a1d3f4c3c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__38__str_title() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[126],
#if PYTHON_VERSION >= 0x300
        mod_consts[127],
#endif
        codeobj_2cce13c72c58e1ed352ae48646cddfef,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__39__str_swapcase() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[128],
#if PYTHON_VERSION >= 0x300
        mod_consts[129],
#endif
        codeobj_5f81f6661e60f515f7c6676d2f10d82e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__3__str_pad(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[41],
#if PYTHON_VERSION >= 0x300
        mod_consts[42],
#endif
        codeobj_31ce777ffbd23d067cced383ee32d444,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__40__str_lower() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[130],
#if PYTHON_VERSION >= 0x300
        mod_consts[131],
#endif
        codeobj_961f2206f014416c6185f5958c85d17d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__41__str_upper() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[132],
#if PYTHON_VERSION >= 0x300
        mod_consts[133],
#endif
        codeobj_6d35d2995ba2228bcda04b3275f2b17b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__42__str_normalize() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[134],
#if PYTHON_VERSION >= 0x300
        mod_consts[135],
#endif
        codeobj_5a3106a7537e28f9bead27f870754bad,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__43__str_strip(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[136],
#if PYTHON_VERSION >= 0x300
        mod_consts[137],
#endif
        codeobj_80d03daa77215ffba35e564f668e8082,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__44__str_lstrip(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[138],
#if PYTHON_VERSION >= 0x300
        mod_consts[139],
#endif
        codeobj_c8775290ec527a0636ba9aa893618fcf,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__45__str_rstrip(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[140],
#if PYTHON_VERSION >= 0x300
        mod_consts[141],
#endif
        codeobj_e55efb198cb7b439e72ce5aae0b01121,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__46__str_removeprefix(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[143],
#if PYTHON_VERSION >= 0x300
        mod_consts[144],
#endif
        codeobj_14393578aa9c21e54e9808ceaa233fdb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__47__str_removesuffix(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[146],
#if PYTHON_VERSION >= 0x300
        mod_consts[147],
#endif
        codeobj_020ad2738505776ac93d0a246d617da8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__48__str_split(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[150],
#if PYTHON_VERSION >= 0x300
        mod_consts[151],
#endif
        codeobj_28d8e0b8d6e3375e698bd62d63f8df6e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__49__str_rsplit(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[153],
#if PYTHON_VERSION >= 0x300
        mod_consts[154],
#endif
        codeobj_419a0441d8419b07af2819873638455c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__4__str_contains(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[45],
#if PYTHON_VERSION >= 0x300
        mod_consts[46],
#endif
        codeobj_70cf325de40a2541a4439433624b43c9,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__50__str_extract(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[157],
#if PYTHON_VERSION >= 0x300
        mod_consts[158],
#endif
        codeobj_953240aece38b549838b099772309d95,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__5__str_startswith(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[48],
#if PYTHON_VERSION >= 0x300
        mod_consts[49],
#endif
        codeobj_0b3cfaf225fab3af673aee5fdb8786d2,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__6__str_endswith(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[50],
#if PYTHON_VERSION >= 0x300
        mod_consts[51],
#endif
        codeobj_c85e418cfd1ea0a38d9c1ccfc1e332cd,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__7__str_replace(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[54],
#if PYTHON_VERSION >= 0x300
        mod_consts[55],
#endif
        codeobj_417fb2815726d2a2feb93be4d32b0293,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__8__str_repeat(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[57],
#if PYTHON_VERSION >= 0x300
        mod_consts[58],
#endif
        codeobj_ec7590e5cf7ac9f250f19b38e2309228,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$strings$base$$$function__9__str_match(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[61],
#if PYTHON_VERSION >= 0x300
        mod_consts[62],
#endif
        codeobj_b2d270766e49c239f79e6c0052147cfb,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$strings$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(PyThreadState *tstate, char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_pandas$core$strings$base[] = {
    impl_pandas$core$strings$base$$$function__1__str_getitem,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        PyThreadState *tstate = PyThreadState_GET();

        SET_CURRENT_EXCEPTION_TYPE0_STR_STATE(tstate, PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_pandas$core$strings$base;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        PyThreadState *tstate = PyThreadState_GET();

        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = MAKE_TUPLE_EMPTY(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && HAS_ERROR_OCCURRED(tstate)) {
        return NULL;
    }

    if (offset > sizeof(functable_pandas$core$strings$base) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR_STATE(tstate, PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!HAS_ERROR_OCCURRED(tstate));

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!HAS_ERROR_OCCURRED(tstate));
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!HAS_ERROR_OCCURRED(tstate));

    PyCodeObject *code_object = MAKE_CODE_OBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        function_name, // TODO: function_qualname
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_pandas$core$strings$base[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_pandas$core$strings$base,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_pandas$core$strings$base(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pandas.core.strings.base");

    // Store the module for future use.
    module_pandas$core$strings$base = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants(tstate);

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("pandas.core.strings.base: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pandas.core.strings.base: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initpandas$core$strings$base\n");

    moduledict_pandas$core$strings$base = MODULE_DICT(module_pandas$core$strings$base);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pandas$core$strings$base,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pandas$core$strings$base,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[187]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pandas$core$strings$base,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pandas$core$strings$base,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pandas$core$strings$base,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pandas$core$strings$base);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pandas$core$strings$base);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_0e83fe1186f4df7ae6fe8914087552a1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    PyObject *locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_529e50647ac01fc83c9390acb542cb37_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_2);
    }
    frame_0e83fe1186f4df7ae6fe8914087552a1 = MAKE_MODULE_FRAME(codeobj_0e83fe1186f4df7ae6fe8914087552a1, module_pandas$core$strings$base);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_0e83fe1186f4df7ae6fe8914087552a1);
    assert(Py_REFCNT(frame_0e83fe1186f4df7ae6fe8914087552a1) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[7];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[10], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[11], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[13]);
        }
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[14];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pandas$core$strings$base;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[15];
        frame_0e83fe1186f4df7ae6fe8914087552a1->m_frame.f_lineno = 3;
        tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT1(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_6 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_6);
        tmp_import_from_1__module = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = Py_False;
        UPDATE_STRING_DICT0(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_7);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_pandas$core$strings$base,
                mod_consts[17],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[17]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_pandas$core$strings$base,
                mod_consts[18],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[18]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_9);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[19];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_pandas$core$strings$base;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[15];
        frame_0e83fe1186f4df7ae6fe8914087552a1->m_frame.f_lineno = 10;
        tmp_assign_source_10 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_10);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[21]);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_2;
        }
        tmp_assign_source_11 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_11, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_12 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_2;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_2 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[15];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_2;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_14 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_14;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_3, mod_consts[22]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_2;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_4 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[22]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_2;
        }
        tmp_tuple_element_2 = mod_consts[23];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_0e83fe1186f4df7ae6fe8914087552a1->m_frame.f_lineno = 21;
        tmp_assign_source_15 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_15;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_5 = tmp_class_creation_1__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_5, mod_consts[24]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_2;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_name_value_3;
        PyObject *tmp_default_value_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[25];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_6 = tmp_class_creation_1__metaclass;
        tmp_name_value_3 = mod_consts[26];
        tmp_default_value_1 = mod_consts[27];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_6, tmp_name_value_3, tmp_default_value_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_2;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_7;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_7 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_7 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[26]);
            Py_DECREF(tmp_expression_value_7);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 21;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_2;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_16;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_17;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[28];
        tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[29], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[30];
        tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[6], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[23];
        tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[31], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_4;
        }
        frame_529e50647ac01fc83c9390acb542cb37_2 = MAKE_CLASS_FRAME(tstate, codeobj_529e50647ac01fc83c9390acb542cb37, module_pandas$core$strings$base, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_529e50647ac01fc83c9390acb542cb37_2);
        assert(Py_REFCNT(frame_529e50647ac01fc83c9390acb542cb37_2) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_pandas$core$strings$base$$$function__1__str_getitem();

        tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[32], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_defaults_1;
            PyObject *tmp_annotations_1;
            tmp_called_instance_1 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[14]);

            if (tmp_called_instance_1 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[14]);

                    if (unlikely(tmp_called_instance_1 == NULL)) {
                        tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
                    }

                    if (tmp_called_instance_1 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 43;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_1);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_defaults_1 = mod_consts[35];
            tmp_annotations_1 = DICT_COPY(mod_consts[36]);
            Py_INCREF(tmp_defaults_1);


            tmp_args_element_value_1 = MAKE_FUNCTION_pandas$core$strings$base$$$function__2__str_count(tmp_defaults_1, tmp_annotations_1);

            frame_529e50647ac01fc83c9390acb542cb37_2->m_frame.f_lineno = 43;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[34], tmp_args_element_value_1);
            Py_DECREF(tmp_called_instance_1);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[37], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_defaults_2;
            PyObject *tmp_annotations_2;
            tmp_called_instance_2 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[14]);

            if (tmp_called_instance_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[14]);

                    if (unlikely(tmp_called_instance_2 == NULL)) {
                        tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
                    }

                    if (tmp_called_instance_2 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 47;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_2);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_defaults_2 = mod_consts[39];
            tmp_annotations_2 = DICT_COPY(mod_consts[40]);
            Py_INCREF(tmp_defaults_2);


            tmp_args_element_value_2 = MAKE_FUNCTION_pandas$core$strings$base$$$function__3__str_pad(tmp_defaults_2, tmp_annotations_2);

            frame_529e50647ac01fc83c9390acb542cb37_2->m_frame.f_lineno = 47;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[34], tmp_args_element_value_2);
            Py_DECREF(tmp_called_instance_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[41], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_defaults_3;
            PyObject *tmp_annotations_3;
            tmp_called_instance_3 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[14]);

            if (tmp_called_instance_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[14]);

                    if (unlikely(tmp_called_instance_3 == NULL)) {
                        tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
                    }

                    if (tmp_called_instance_3 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 56;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_3);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_defaults_3 = mod_consts[43];
            tmp_annotations_3 = DICT_COPY(mod_consts[44]);
            Py_INCREF(tmp_defaults_3);


            tmp_args_element_value_3 = MAKE_FUNCTION_pandas$core$strings$base$$$function__4__str_contains(tmp_defaults_3, tmp_annotations_3);

            frame_529e50647ac01fc83c9390acb542cb37_2->m_frame.f_lineno = 56;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[34], tmp_args_element_value_3);
            Py_DECREF(tmp_called_instance_3);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[45], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_4;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_defaults_4;
            tmp_called_instance_4 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[14]);

            if (tmp_called_instance_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[14]);

                    if (unlikely(tmp_called_instance_4 == NULL)) {
                        tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
                    }

                    if (tmp_called_instance_4 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 62;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_4);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_defaults_4 = mod_consts[47];
            Py_INCREF(tmp_defaults_4);


            tmp_args_element_value_4 = MAKE_FUNCTION_pandas$core$strings$base$$$function__5__str_startswith(tmp_defaults_4);

            frame_529e50647ac01fc83c9390acb542cb37_2->m_frame.f_lineno = 62;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts[34], tmp_args_element_value_4);
            Py_DECREF(tmp_called_instance_4);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[48], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_5;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_defaults_5;
            tmp_called_instance_5 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[14]);

            if (tmp_called_instance_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[14]);

                    if (unlikely(tmp_called_instance_5 == NULL)) {
                        tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
                    }

                    if (tmp_called_instance_5 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 66;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_5);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_defaults_5 = mod_consts[47];
            Py_INCREF(tmp_defaults_5);


            tmp_args_element_value_5 = MAKE_FUNCTION_pandas$core$strings$base$$$function__6__str_endswith(tmp_defaults_5);

            frame_529e50647ac01fc83c9390acb542cb37_2->m_frame.f_lineno = 66;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts[34], tmp_args_element_value_5);
            Py_DECREF(tmp_called_instance_5);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[50], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_6;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_defaults_6;
            PyObject *tmp_annotations_4;
            tmp_called_instance_6 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[14]);

            if (tmp_called_instance_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[14]);

                    if (unlikely(tmp_called_instance_6 == NULL)) {
                        tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
                    }

                    if (tmp_called_instance_6 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 70;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_6);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_defaults_6 = mod_consts[52];
            tmp_annotations_4 = DICT_COPY(mod_consts[53]);
            Py_INCREF(tmp_defaults_6);


            tmp_args_element_value_6 = MAKE_FUNCTION_pandas$core$strings$base$$$function__7__str_replace(tmp_defaults_6, tmp_annotations_4);

            frame_529e50647ac01fc83c9390acb542cb37_2->m_frame.f_lineno = 70;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_6, mod_consts[34], tmp_args_element_value_6);
            Py_DECREF(tmp_called_instance_6);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[54], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_7;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_annotations_5;
            tmp_called_instance_7 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[14]);

            if (tmp_called_instance_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[14]);

                    if (unlikely(tmp_called_instance_7 == NULL)) {
                        tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
                    }

                    if (tmp_called_instance_7 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 82;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_7);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_5 = DICT_COPY(mod_consts[56]);


            tmp_args_element_value_7 = MAKE_FUNCTION_pandas$core$strings$base$$$function__8__str_repeat(tmp_annotations_5);

            frame_529e50647ac01fc83c9390acb542cb37_2->m_frame.f_lineno = 82;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_7, mod_consts[34], tmp_args_element_value_7);
            Py_DECREF(tmp_called_instance_7);
            Py_DECREF(tmp_args_element_value_7);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[57], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_args_element_value_8;
            PyObject *tmp_defaults_7;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_annotations_6;
            tmp_expression_value_8 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[14]);

            if (tmp_expression_value_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[14]);

                    if (unlikely(tmp_expression_value_8 == NULL)) {
                        tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
                    }

                    if (tmp_expression_value_8 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 86;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_8);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[34]);
            Py_DECREF(tmp_expression_value_8);
            if (tmp_called_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_tuple_element_4 = Py_True;
            tmp_defaults_7 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_expression_value_9;
                PyTuple_SET_ITEM0(tmp_defaults_7, 0, tmp_tuple_element_4);
                tmp_tuple_element_4 = mod_consts[15];
                PyTuple_SET_ITEM0(tmp_defaults_7, 1, tmp_tuple_element_4);
                tmp_expression_value_9 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[20]);

                if (tmp_expression_value_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[20]);

                        if (unlikely(tmp_expression_value_9 == NULL)) {
                            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                        }

                        if (tmp_expression_value_9 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 88;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_9);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[59]);
                Py_DECREF(tmp_expression_value_9);
                if (tmp_tuple_element_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 88;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_defaults_7, 2, tmp_tuple_element_4);
            }
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_defaults_7);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            tmp_annotations_6 = DICT_COPY(mod_consts[60]);


            tmp_args_element_value_8 = MAKE_FUNCTION_pandas$core$strings$base$$$function__9__str_match(tmp_defaults_7, tmp_annotations_6);

            frame_529e50647ac01fc83c9390acb542cb37_2->m_frame.f_lineno = 86;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_8);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_8);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[61], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_3;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_defaults_8;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_annotations_7;
            tmp_expression_value_10 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[14]);

            if (tmp_expression_value_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[14]);

                    if (unlikely(tmp_expression_value_10 == NULL)) {
                        tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
                    }

                    if (tmp_expression_value_10 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 92;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_10);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[34]);
            Py_DECREF(tmp_expression_value_10);
            if (tmp_called_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_tuple_element_5 = Py_True;
            tmp_defaults_8 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_expression_value_11;
                PyTuple_SET_ITEM0(tmp_defaults_8, 0, tmp_tuple_element_5);
                tmp_tuple_element_5 = mod_consts[15];
                PyTuple_SET_ITEM0(tmp_defaults_8, 1, tmp_tuple_element_5);
                tmp_expression_value_11 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[20]);

                if (tmp_expression_value_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[20]);

                        if (unlikely(tmp_expression_value_11 == NULL)) {
                            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                        }

                        if (tmp_expression_value_11 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 98;
                            type_description_2 = "o";
                            goto tuple_build_exception_3;
                        }
                        Py_INCREF(tmp_expression_value_11);
                    } else {
                        goto tuple_build_exception_3;
                    }
                }

                tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[59]);
                Py_DECREF(tmp_expression_value_11);
                if (tmp_tuple_element_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 98;
                    type_description_2 = "o";
                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_defaults_8, 2, tmp_tuple_element_5);
            }
            goto tuple_build_noexception_3;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_defaults_8);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_3:;
            tmp_annotations_7 = DICT_COPY(mod_consts[63]);


            tmp_args_element_value_9 = MAKE_FUNCTION_pandas$core$strings$base$$$function__10__str_fullmatch(tmp_defaults_8, tmp_annotations_7);

            frame_529e50647ac01fc83c9390acb542cb37_2->m_frame.f_lineno = 92;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_9);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_9);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[64], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_8;
            PyObject *tmp_args_element_value_10;
            PyObject *tmp_defaults_9;
            PyObject *tmp_annotations_8;
            tmp_called_instance_8 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[14]);

            if (tmp_called_instance_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[14]);

                    if (unlikely(tmp_called_instance_8 == NULL)) {
                        tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
                    }

                    if (tmp_called_instance_8 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 102;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_8);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_defaults_9 = mod_consts[66];
            tmp_annotations_8 = DICT_COPY(mod_consts[67]);
            Py_INCREF(tmp_defaults_9);


            tmp_args_element_value_10 = MAKE_FUNCTION_pandas$core$strings$base$$$function__11__str_encode(tmp_defaults_9, tmp_annotations_8);

            frame_529e50647ac01fc83c9390acb542cb37_2->m_frame.f_lineno = 102;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_8, mod_consts[34], tmp_args_element_value_10);
            Py_DECREF(tmp_called_instance_8);
            Py_DECREF(tmp_args_element_value_10);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 102;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[68], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_9;
            PyObject *tmp_args_element_value_11;
            PyObject *tmp_defaults_10;
            PyObject *tmp_annotations_9;
            tmp_called_instance_9 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[14]);

            if (tmp_called_instance_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_instance_9 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[14]);

                    if (unlikely(tmp_called_instance_9 == NULL)) {
                        tmp_called_instance_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
                    }

                    if (tmp_called_instance_9 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 106;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_9);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_defaults_10 = mod_consts[70];
            tmp_annotations_9 = DICT_COPY(mod_consts[71]);
            Py_INCREF(tmp_defaults_10);


            tmp_args_element_value_11 = MAKE_FUNCTION_pandas$core$strings$base$$$function__12__str_find(tmp_defaults_10, tmp_annotations_9);

            frame_529e50647ac01fc83c9390acb542cb37_2->m_frame.f_lineno = 106;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_9, mod_consts[34], tmp_args_element_value_11);
            Py_DECREF(tmp_called_instance_9);
            Py_DECREF(tmp_args_element_value_11);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[72], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_10;
            PyObject *tmp_args_element_value_12;
            PyObject *tmp_defaults_11;
            PyObject *tmp_annotations_10;
            tmp_called_instance_10 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[14]);

            if (tmp_called_instance_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_instance_10 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[14]);

                    if (unlikely(tmp_called_instance_10 == NULL)) {
                        tmp_called_instance_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
                    }

                    if (tmp_called_instance_10 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 110;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_10);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_defaults_11 = mod_consts[70];
            tmp_annotations_10 = DICT_COPY(mod_consts[71]);
            Py_INCREF(tmp_defaults_11);


            tmp_args_element_value_12 = MAKE_FUNCTION_pandas$core$strings$base$$$function__13__str_rfind(tmp_defaults_11, tmp_annotations_10);

            frame_529e50647ac01fc83c9390acb542cb37_2->m_frame.f_lineno = 110;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_10, mod_consts[34], tmp_args_element_value_12);
            Py_DECREF(tmp_called_instance_10);
            Py_DECREF(tmp_args_element_value_12);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[74], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_11;
            PyObject *tmp_args_element_value_13;
            PyObject *tmp_defaults_12;
            PyObject *tmp_annotations_11;
            tmp_called_instance_11 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[14]);

            if (tmp_called_instance_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_instance_11 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[14]);

                    if (unlikely(tmp_called_instance_11 == NULL)) {
                        tmp_called_instance_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
                    }

                    if (tmp_called_instance_11 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 114;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_11);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_defaults_12 = mod_consts[35];
            tmp_annotations_11 = DICT_COPY(mod_consts[36]);
            Py_INCREF(tmp_defaults_12);


            tmp_args_element_value_13 = MAKE_FUNCTION_pandas$core$strings$base$$$function__14__str_findall(tmp_defaults_12, tmp_annotations_11);

            frame_529e50647ac01fc83c9390acb542cb37_2->m_frame.f_lineno = 114;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_11, mod_consts[34], tmp_args_element_value_13);
            Py_DECREF(tmp_called_instance_11);
            Py_DECREF(tmp_args_element_value_13);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[76], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_12;
            PyObject *tmp_args_element_value_14;
            tmp_called_instance_12 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[14]);

            if (tmp_called_instance_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_instance_12 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[14]);

                    if (unlikely(tmp_called_instance_12 == NULL)) {
                        tmp_called_instance_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
                    }

                    if (tmp_called_instance_12 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 118;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_12);
                } else {
                    goto frame_exception_exit_2;
                }
            }



            tmp_args_element_value_14 = MAKE_FUNCTION_pandas$core$strings$base$$$function__15__str_get();

            frame_529e50647ac01fc83c9390acb542cb37_2->m_frame.f_lineno = 118;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_12, mod_consts[34], tmp_args_element_value_14);
            Py_DECREF(tmp_called_instance_12);
            Py_DECREF(tmp_args_element_value_14);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[5], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_13;
            PyObject *tmp_args_element_value_15;
            PyObject *tmp_defaults_13;
            PyObject *tmp_annotations_12;
            tmp_called_instance_13 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[14]);

            if (tmp_called_instance_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_instance_13 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[14]);

                    if (unlikely(tmp_called_instance_13 == NULL)) {
                        tmp_called_instance_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
                    }

                    if (tmp_called_instance_13 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 122;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_13);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_defaults_13 = mod_consts[70];
            tmp_annotations_12 = DICT_COPY(mod_consts[71]);
            Py_INCREF(tmp_defaults_13);


            tmp_args_element_value_15 = MAKE_FUNCTION_pandas$core$strings$base$$$function__16__str_index(tmp_defaults_13, tmp_annotations_12);

            frame_529e50647ac01fc83c9390acb542cb37_2->m_frame.f_lineno = 122;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_13, mod_consts[34], tmp_args_element_value_15);
            Py_DECREF(tmp_called_instance_13);
            Py_DECREF(tmp_args_element_value_15);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[79], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_14;
            PyObject *tmp_args_element_value_16;
            PyObject *tmp_defaults_14;
            PyObject *tmp_annotations_13;
            tmp_called_instance_14 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[14]);

            if (tmp_called_instance_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_instance_14 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[14]);

                    if (unlikely(tmp_called_instance_14 == NULL)) {
                        tmp_called_instance_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
                    }

                    if (tmp_called_instance_14 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 126;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_14);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_defaults_14 = mod_consts[70];
            tmp_annotations_13 = DICT_COPY(mod_consts[71]);
            Py_INCREF(tmp_defaults_14);


            tmp_args_element_value_16 = MAKE_FUNCTION_pandas$core$strings$base$$$function__17__str_rindex(tmp_defaults_14, tmp_annotations_13);

            frame_529e50647ac01fc83c9390acb542cb37_2->m_frame.f_lineno = 126;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_14, mod_consts[34], tmp_args_element_value_16);
            Py_DECREF(tmp_called_instance_14);
            Py_DECREF(tmp_args_element_value_16);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[81], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_15;
            PyObject *tmp_args_element_value_17;
            PyObject *tmp_annotations_14;
            tmp_called_instance_15 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[14]);

            if (tmp_called_instance_15 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_instance_15 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[14]);

                    if (unlikely(tmp_called_instance_15 == NULL)) {
                        tmp_called_instance_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
                    }

                    if (tmp_called_instance_15 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 130;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_15);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_14 = DICT_COPY(mod_consts[83]);


            tmp_args_element_value_17 = MAKE_FUNCTION_pandas$core$strings$base$$$function__18__str_join(tmp_annotations_14);

            frame_529e50647ac01fc83c9390acb542cb37_2->m_frame.f_lineno = 130;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_15, mod_consts[34], tmp_args_element_value_17);
            Py_DECREF(tmp_called_instance_15);
            Py_DECREF(tmp_args_element_value_17);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[84], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_16;
            PyObject *tmp_args_element_value_18;
            PyObject *tmp_annotations_15;
            tmp_called_instance_16 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[14]);

            if (tmp_called_instance_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_instance_16 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[14]);

                    if (unlikely(tmp_called_instance_16 == NULL)) {
                        tmp_called_instance_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
                    }

                    if (tmp_called_instance_16 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 134;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_16);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_15 = DICT_COPY(mod_consts[83]);


            tmp_args_element_value_18 = MAKE_FUNCTION_pandas$core$strings$base$$$function__19__str_partition(tmp_annotations_15);

            frame_529e50647ac01fc83c9390acb542cb37_2->m_frame.f_lineno = 134;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_16, mod_consts[34], tmp_args_element_value_18);
            Py_DECREF(tmp_called_instance_16);
            Py_DECREF(tmp_args_element_value_18);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[86], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_17;
            PyObject *tmp_args_element_value_19;
            PyObject *tmp_annotations_16;
            tmp_called_instance_17 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[14]);

            if (tmp_called_instance_17 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_instance_17 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[14]);

                    if (unlikely(tmp_called_instance_17 == NULL)) {
                        tmp_called_instance_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
                    }

                    if (tmp_called_instance_17 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 138;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_17);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_16 = DICT_COPY(mod_consts[83]);


            tmp_args_element_value_19 = MAKE_FUNCTION_pandas$core$strings$base$$$function__20__str_rpartition(tmp_annotations_16);

            frame_529e50647ac01fc83c9390acb542cb37_2->m_frame.f_lineno = 138;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_17, mod_consts[34], tmp_args_element_value_19);
            Py_DECREF(tmp_called_instance_17);
            Py_DECREF(tmp_args_element_value_19);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[88], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_18;
            PyObject *tmp_args_element_value_20;
            tmp_called_instance_18 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[14]);

            if (tmp_called_instance_18 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_instance_18 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[14]);

                    if (unlikely(tmp_called_instance_18 == NULL)) {
                        tmp_called_instance_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
                    }

                    if (tmp_called_instance_18 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 142;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_18);
                } else {
                    goto frame_exception_exit_2;
                }
            }



            tmp_args_element_value_20 = MAKE_FUNCTION_pandas$core$strings$base$$$function__21__str_len();

            frame_529e50647ac01fc83c9390acb542cb37_2->m_frame.f_lineno = 142;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_18, mod_consts[34], tmp_args_element_value_20);
            Py_DECREF(tmp_called_instance_18);
            Py_DECREF(tmp_args_element_value_20);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[90], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 143;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_19;
            PyObject *tmp_args_element_value_21;
            PyObject *tmp_defaults_15;
            tmp_called_instance_19 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[14]);

            if (tmp_called_instance_19 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_instance_19 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[14]);

                    if (unlikely(tmp_called_instance_19 == NULL)) {
                        tmp_called_instance_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
                    }

                    if (tmp_called_instance_19 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 146;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_19);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_defaults_15 = mod_consts[92];
            Py_INCREF(tmp_defaults_15);


            tmp_args_element_value_21 = MAKE_FUNCTION_pandas$core$strings$base$$$function__22__str_slice(tmp_defaults_15);

            frame_529e50647ac01fc83c9390acb542cb37_2->m_frame.f_lineno = 146;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_19, mod_consts[34], tmp_args_element_value_21);
            Py_DECREF(tmp_called_instance_19);
            Py_DECREF(tmp_args_element_value_21);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[0], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 147;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_20;
            PyObject *tmp_args_element_value_22;
            PyObject *tmp_defaults_16;
            tmp_called_instance_20 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[14]);

            if (tmp_called_instance_20 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_instance_20 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[14]);

                    if (unlikely(tmp_called_instance_20 == NULL)) {
                        tmp_called_instance_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
                    }

                    if (tmp_called_instance_20 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 150;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_20);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_defaults_16 = mod_consts[92];
            Py_INCREF(tmp_defaults_16);


            tmp_args_element_value_22 = MAKE_FUNCTION_pandas$core$strings$base$$$function__23__str_slice_replace(tmp_defaults_16);

            frame_529e50647ac01fc83c9390acb542cb37_2->m_frame.f_lineno = 150;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_20, mod_consts[34], tmp_args_element_value_22);
            Py_DECREF(tmp_called_instance_20);
            Py_DECREF(tmp_args_element_value_22);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[94], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 151;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_21;
            PyObject *tmp_args_element_value_23;
            tmp_called_instance_21 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[14]);

            if (tmp_called_instance_21 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_instance_21 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[14]);

                    if (unlikely(tmp_called_instance_21 == NULL)) {
                        tmp_called_instance_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
                    }

                    if (tmp_called_instance_21 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 154;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_21);
                } else {
                    goto frame_exception_exit_2;
                }
            }



            tmp_args_element_value_23 = MAKE_FUNCTION_pandas$core$strings$base$$$function__24__str_translate();

            frame_529e50647ac01fc83c9390acb542cb37_2->m_frame.f_lineno = 154;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_21, mod_consts[34], tmp_args_element_value_23);
            Py_DECREF(tmp_called_instance_21);
            Py_DECREF(tmp_args_element_value_23);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[96], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_22;
            PyObject *tmp_args_element_value_24;
            PyObject *tmp_annotations_17;
            tmp_called_instance_22 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[14]);

            if (tmp_called_instance_22 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_instance_22 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[14]);

                    if (unlikely(tmp_called_instance_22 == NULL)) {
                        tmp_called_instance_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
                    }

                    if (tmp_called_instance_22 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 158;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_22);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_17 = DICT_COPY(mod_consts[98]);


            tmp_args_element_value_24 = MAKE_FUNCTION_pandas$core$strings$base$$$function__25__str_wrap(tmp_annotations_17);

            frame_529e50647ac01fc83c9390acb542cb37_2->m_frame.f_lineno = 158;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_22, mod_consts[34], tmp_args_element_value_24);
            Py_DECREF(tmp_called_instance_22);
            Py_DECREF(tmp_args_element_value_24);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[99], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_23;
            PyObject *tmp_args_element_value_25;
            PyObject *tmp_defaults_17;
            PyObject *tmp_annotations_18;
            tmp_called_instance_23 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[14]);

            if (tmp_called_instance_23 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_instance_23 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[14]);

                    if (unlikely(tmp_called_instance_23 == NULL)) {
                        tmp_called_instance_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
                    }

                    if (tmp_called_instance_23 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 162;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_23);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_defaults_17 = mod_consts[101];
            tmp_annotations_18 = DICT_COPY(mod_consts[83]);
            Py_INCREF(tmp_defaults_17);


            tmp_args_element_value_25 = MAKE_FUNCTION_pandas$core$strings$base$$$function__26__str_get_dummies(tmp_defaults_17, tmp_annotations_18);

            frame_529e50647ac01fc83c9390acb542cb37_2->m_frame.f_lineno = 162;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_23, mod_consts[34], tmp_args_element_value_25);
            Py_DECREF(tmp_called_instance_23);
            Py_DECREF(tmp_args_element_value_25);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[102], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_24;
            PyObject *tmp_args_element_value_26;
            tmp_called_instance_24 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[14]);

            if (tmp_called_instance_24 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_instance_24 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[14]);

                    if (unlikely(tmp_called_instance_24 == NULL)) {
                        tmp_called_instance_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
                    }

                    if (tmp_called_instance_24 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 166;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_24);
                } else {
                    goto frame_exception_exit_2;
                }
            }



            tmp_args_element_value_26 = MAKE_FUNCTION_pandas$core$strings$base$$$function__27__str_isalnum();

            frame_529e50647ac01fc83c9390acb542cb37_2->m_frame.f_lineno = 166;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_24, mod_consts[34], tmp_args_element_value_26);
            Py_DECREF(tmp_called_instance_24);
            Py_DECREF(tmp_args_element_value_26);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[104], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_25;
            PyObject *tmp_args_element_value_27;
            tmp_called_instance_25 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[14]);

            if (tmp_called_instance_25 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_instance_25 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[14]);

                    if (unlikely(tmp_called_instance_25 == NULL)) {
                        tmp_called_instance_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
                    }

                    if (tmp_called_instance_25 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 170;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_25);
                } else {
                    goto frame_exception_exit_2;
                }
            }



            tmp_args_element_value_27 = MAKE_FUNCTION_pandas$core$strings$base$$$function__28__str_isalpha();

            frame_529e50647ac01fc83c9390acb542cb37_2->m_frame.f_lineno = 170;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_25, mod_consts[34], tmp_args_element_value_27);
            Py_DECREF(tmp_called_instance_25);
            Py_DECREF(tmp_args_element_value_27);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[106], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_26;
            PyObject *tmp_args_element_value_28;
            tmp_called_instance_26 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[14]);

            if (tmp_called_instance_26 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_instance_26 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[14]);

                    if (unlikely(tmp_called_instance_26 == NULL)) {
                        tmp_called_instance_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
                    }

                    if (tmp_called_instance_26 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 174;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_26);
                } else {
                    goto frame_exception_exit_2;
                }
            }



            tmp_args_element_value_28 = MAKE_FUNCTION_pandas$core$strings$base$$$function__29__str_isdecimal();

            frame_529e50647ac01fc83c9390acb542cb37_2->m_frame.f_lineno = 174;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_26, mod_consts[34], tmp_args_element_value_28);
            Py_DECREF(tmp_called_instance_26);
            Py_DECREF(tmp_args_element_value_28);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[108], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 175;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_27;
            PyObject *tmp_args_element_value_29;
            tmp_called_instance_27 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[14]);

            if (tmp_called_instance_27 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_instance_27 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[14]);

                    if (unlikely(tmp_called_instance_27 == NULL)) {
                        tmp_called_instance_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
                    }

                    if (tmp_called_instance_27 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 178;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_27);
                } else {
                    goto frame_exception_exit_2;
                }
            }



            tmp_args_element_value_29 = MAKE_FUNCTION_pandas$core$strings$base$$$function__30__str_isdigit();

            frame_529e50647ac01fc83c9390acb542cb37_2->m_frame.f_lineno = 178;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_27, mod_consts[34], tmp_args_element_value_29);
            Py_DECREF(tmp_called_instance_27);
            Py_DECREF(tmp_args_element_value_29);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 178;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[110], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_28;
            PyObject *tmp_args_element_value_30;
            tmp_called_instance_28 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[14]);

            if (tmp_called_instance_28 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_instance_28 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[14]);

                    if (unlikely(tmp_called_instance_28 == NULL)) {
                        tmp_called_instance_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
                    }

                    if (tmp_called_instance_28 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 182;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_28);
                } else {
                    goto frame_exception_exit_2;
                }
            }



            tmp_args_element_value_30 = MAKE_FUNCTION_pandas$core$strings$base$$$function__31__str_islower();

            frame_529e50647ac01fc83c9390acb542cb37_2->m_frame.f_lineno = 182;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_28, mod_consts[34], tmp_args_element_value_30);
            Py_DECREF(tmp_called_instance_28);
            Py_DECREF(tmp_args_element_value_30);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[112], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 183;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_29;
            PyObject *tmp_args_element_value_31;
            tmp_called_instance_29 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[14]);

            if (tmp_called_instance_29 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_instance_29 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[14]);

                    if (unlikely(tmp_called_instance_29 == NULL)) {
                        tmp_called_instance_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
                    }

                    if (tmp_called_instance_29 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 186;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_29);
                } else {
                    goto frame_exception_exit_2;
                }
            }



            tmp_args_element_value_31 = MAKE_FUNCTION_pandas$core$strings$base$$$function__32__str_isnumeric();

            frame_529e50647ac01fc83c9390acb542cb37_2->m_frame.f_lineno = 186;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_29, mod_consts[34], tmp_args_element_value_31);
            Py_DECREF(tmp_called_instance_29);
            Py_DECREF(tmp_args_element_value_31);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[114], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 187;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_30;
            PyObject *tmp_args_element_value_32;
            tmp_called_instance_30 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[14]);

            if (tmp_called_instance_30 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_instance_30 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[14]);

                    if (unlikely(tmp_called_instance_30 == NULL)) {
                        tmp_called_instance_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
                    }

                    if (tmp_called_instance_30 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 190;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_30);
                } else {
                    goto frame_exception_exit_2;
                }
            }



            tmp_args_element_value_32 = MAKE_FUNCTION_pandas$core$strings$base$$$function__33__str_isspace();

            frame_529e50647ac01fc83c9390acb542cb37_2->m_frame.f_lineno = 190;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_30, mod_consts[34], tmp_args_element_value_32);
            Py_DECREF(tmp_called_instance_30);
            Py_DECREF(tmp_args_element_value_32);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 190;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[116], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_31;
            PyObject *tmp_args_element_value_33;
            tmp_called_instance_31 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[14]);

            if (tmp_called_instance_31 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_instance_31 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[14]);

                    if (unlikely(tmp_called_instance_31 == NULL)) {
                        tmp_called_instance_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
                    }

                    if (tmp_called_instance_31 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 194;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_31);
                } else {
                    goto frame_exception_exit_2;
                }
            }



            tmp_args_element_value_33 = MAKE_FUNCTION_pandas$core$strings$base$$$function__34__str_istitle();

            frame_529e50647ac01fc83c9390acb542cb37_2->m_frame.f_lineno = 194;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_31, mod_consts[34], tmp_args_element_value_33);
            Py_DECREF(tmp_called_instance_31);
            Py_DECREF(tmp_args_element_value_33);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[118], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 195;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_32;
            PyObject *tmp_args_element_value_34;
            tmp_called_instance_32 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[14]);

            if (tmp_called_instance_32 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_instance_32 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[14]);

                    if (unlikely(tmp_called_instance_32 == NULL)) {
                        tmp_called_instance_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
                    }

                    if (tmp_called_instance_32 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 198;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_32);
                } else {
                    goto frame_exception_exit_2;
                }
            }



            tmp_args_element_value_34 = MAKE_FUNCTION_pandas$core$strings$base$$$function__35__str_isupper();

            frame_529e50647ac01fc83c9390acb542cb37_2->m_frame.f_lineno = 198;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_32, mod_consts[34], tmp_args_element_value_34);
            Py_DECREF(tmp_called_instance_32);
            Py_DECREF(tmp_args_element_value_34);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 198;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[120], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 199;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_33;
            PyObject *tmp_args_element_value_35;
            tmp_called_instance_33 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[14]);

            if (tmp_called_instance_33 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_instance_33 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[14]);

                    if (unlikely(tmp_called_instance_33 == NULL)) {
                        tmp_called_instance_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
                    }

                    if (tmp_called_instance_33 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 202;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_33);
                } else {
                    goto frame_exception_exit_2;
                }
            }



            tmp_args_element_value_35 = MAKE_FUNCTION_pandas$core$strings$base$$$function__36__str_capitalize();

            frame_529e50647ac01fc83c9390acb542cb37_2->m_frame.f_lineno = 202;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_33, mod_consts[34], tmp_args_element_value_35);
            Py_DECREF(tmp_called_instance_33);
            Py_DECREF(tmp_args_element_value_35);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[122], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 203;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_34;
            PyObject *tmp_args_element_value_36;
            tmp_called_instance_34 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[14]);

            if (tmp_called_instance_34 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_instance_34 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[14]);

                    if (unlikely(tmp_called_instance_34 == NULL)) {
                        tmp_called_instance_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
                    }

                    if (tmp_called_instance_34 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 206;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_34);
                } else {
                    goto frame_exception_exit_2;
                }
            }



            tmp_args_element_value_36 = MAKE_FUNCTION_pandas$core$strings$base$$$function__37__str_casefold();

            frame_529e50647ac01fc83c9390acb542cb37_2->m_frame.f_lineno = 206;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_34, mod_consts[34], tmp_args_element_value_36);
            Py_DECREF(tmp_called_instance_34);
            Py_DECREF(tmp_args_element_value_36);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[124], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 207;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_35;
            PyObject *tmp_args_element_value_37;
            tmp_called_instance_35 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[14]);

            if (tmp_called_instance_35 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_instance_35 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[14]);

                    if (unlikely(tmp_called_instance_35 == NULL)) {
                        tmp_called_instance_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
                    }

                    if (tmp_called_instance_35 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 210;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_35);
                } else {
                    goto frame_exception_exit_2;
                }
            }



            tmp_args_element_value_37 = MAKE_FUNCTION_pandas$core$strings$base$$$function__38__str_title();

            frame_529e50647ac01fc83c9390acb542cb37_2->m_frame.f_lineno = 210;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_35, mod_consts[34], tmp_args_element_value_37);
            Py_DECREF(tmp_called_instance_35);
            Py_DECREF(tmp_args_element_value_37);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[126], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_36;
            PyObject *tmp_args_element_value_38;
            tmp_called_instance_36 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[14]);

            if (tmp_called_instance_36 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_instance_36 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[14]);

                    if (unlikely(tmp_called_instance_36 == NULL)) {
                        tmp_called_instance_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
                    }

                    if (tmp_called_instance_36 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 214;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_36);
                } else {
                    goto frame_exception_exit_2;
                }
            }



            tmp_args_element_value_38 = MAKE_FUNCTION_pandas$core$strings$base$$$function__39__str_swapcase();

            frame_529e50647ac01fc83c9390acb542cb37_2->m_frame.f_lineno = 214;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_36, mod_consts[34], tmp_args_element_value_38);
            Py_DECREF(tmp_called_instance_36);
            Py_DECREF(tmp_args_element_value_38);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[128], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 215;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_37;
            PyObject *tmp_args_element_value_39;
            tmp_called_instance_37 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[14]);

            if (tmp_called_instance_37 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_instance_37 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[14]);

                    if (unlikely(tmp_called_instance_37 == NULL)) {
                        tmp_called_instance_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
                    }

                    if (tmp_called_instance_37 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 218;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_37);
                } else {
                    goto frame_exception_exit_2;
                }
            }



            tmp_args_element_value_39 = MAKE_FUNCTION_pandas$core$strings$base$$$function__40__str_lower();

            frame_529e50647ac01fc83c9390acb542cb37_2->m_frame.f_lineno = 218;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_37, mod_consts[34], tmp_args_element_value_39);
            Py_DECREF(tmp_called_instance_37);
            Py_DECREF(tmp_args_element_value_39);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[130], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_38;
            PyObject *tmp_args_element_value_40;
            tmp_called_instance_38 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[14]);

            if (tmp_called_instance_38 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_instance_38 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[14]);

                    if (unlikely(tmp_called_instance_38 == NULL)) {
                        tmp_called_instance_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
                    }

                    if (tmp_called_instance_38 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 222;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_38);
                } else {
                    goto frame_exception_exit_2;
                }
            }



            tmp_args_element_value_40 = MAKE_FUNCTION_pandas$core$strings$base$$$function__41__str_upper();

            frame_529e50647ac01fc83c9390acb542cb37_2->m_frame.f_lineno = 222;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_38, mod_consts[34], tmp_args_element_value_40);
            Py_DECREF(tmp_called_instance_38);
            Py_DECREF(tmp_args_element_value_40);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[132], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_39;
            PyObject *tmp_args_element_value_41;
            tmp_called_instance_39 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[14]);

            if (tmp_called_instance_39 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_instance_39 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[14]);

                    if (unlikely(tmp_called_instance_39 == NULL)) {
                        tmp_called_instance_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
                    }

                    if (tmp_called_instance_39 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 226;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_39);
                } else {
                    goto frame_exception_exit_2;
                }
            }



            tmp_args_element_value_41 = MAKE_FUNCTION_pandas$core$strings$base$$$function__42__str_normalize();

            frame_529e50647ac01fc83c9390acb542cb37_2->m_frame.f_lineno = 226;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_39, mod_consts[34], tmp_args_element_value_41);
            Py_DECREF(tmp_called_instance_39);
            Py_DECREF(tmp_args_element_value_41);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[134], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_40;
            PyObject *tmp_args_element_value_42;
            PyObject *tmp_defaults_18;
            tmp_called_instance_40 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[14]);

            if (tmp_called_instance_40 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_instance_40 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[14]);

                    if (unlikely(tmp_called_instance_40 == NULL)) {
                        tmp_called_instance_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
                    }

                    if (tmp_called_instance_40 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 230;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_40);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_defaults_18 = mod_consts[47];
            Py_INCREF(tmp_defaults_18);


            tmp_args_element_value_42 = MAKE_FUNCTION_pandas$core$strings$base$$$function__43__str_strip(tmp_defaults_18);

            frame_529e50647ac01fc83c9390acb542cb37_2->m_frame.f_lineno = 230;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_40, mod_consts[34], tmp_args_element_value_42);
            Py_DECREF(tmp_called_instance_40);
            Py_DECREF(tmp_args_element_value_42);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 230;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[136], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_41;
            PyObject *tmp_args_element_value_43;
            PyObject *tmp_defaults_19;
            tmp_called_instance_41 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[14]);

            if (tmp_called_instance_41 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_instance_41 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[14]);

                    if (unlikely(tmp_called_instance_41 == NULL)) {
                        tmp_called_instance_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
                    }

                    if (tmp_called_instance_41 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 234;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_41);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_defaults_19 = mod_consts[47];
            Py_INCREF(tmp_defaults_19);


            tmp_args_element_value_43 = MAKE_FUNCTION_pandas$core$strings$base$$$function__44__str_lstrip(tmp_defaults_19);

            frame_529e50647ac01fc83c9390acb542cb37_2->m_frame.f_lineno = 234;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_41, mod_consts[34], tmp_args_element_value_43);
            Py_DECREF(tmp_called_instance_41);
            Py_DECREF(tmp_args_element_value_43);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[138], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 235;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_42;
            PyObject *tmp_args_element_value_44;
            PyObject *tmp_defaults_20;
            tmp_called_instance_42 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[14]);

            if (tmp_called_instance_42 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_instance_42 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[14]);

                    if (unlikely(tmp_called_instance_42 == NULL)) {
                        tmp_called_instance_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
                    }

                    if (tmp_called_instance_42 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 238;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_42);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_defaults_20 = mod_consts[47];
            Py_INCREF(tmp_defaults_20);


            tmp_args_element_value_44 = MAKE_FUNCTION_pandas$core$strings$base$$$function__45__str_rstrip(tmp_defaults_20);

            frame_529e50647ac01fc83c9390acb542cb37_2->m_frame.f_lineno = 238;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_42, mod_consts[34], tmp_args_element_value_44);
            Py_DECREF(tmp_called_instance_42);
            Py_DECREF(tmp_args_element_value_44);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[140], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 239;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_43;
            PyObject *tmp_args_element_value_45;
            PyObject *tmp_annotations_19;
            tmp_called_instance_43 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[14]);

            if (tmp_called_instance_43 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_instance_43 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[14]);

                    if (unlikely(tmp_called_instance_43 == NULL)) {
                        tmp_called_instance_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
                    }

                    if (tmp_called_instance_43 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 242;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_43);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_19 = DICT_COPY(mod_consts[142]);


            tmp_args_element_value_45 = MAKE_FUNCTION_pandas$core$strings$base$$$function__46__str_removeprefix(tmp_annotations_19);

            frame_529e50647ac01fc83c9390acb542cb37_2->m_frame.f_lineno = 242;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_43, mod_consts[34], tmp_args_element_value_45);
            Py_DECREF(tmp_called_instance_43);
            Py_DECREF(tmp_args_element_value_45);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[143], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_44;
            PyObject *tmp_args_element_value_46;
            PyObject *tmp_annotations_20;
            tmp_called_instance_44 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[14]);

            if (tmp_called_instance_44 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_instance_44 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[14]);

                    if (unlikely(tmp_called_instance_44 == NULL)) {
                        tmp_called_instance_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
                    }

                    if (tmp_called_instance_44 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 246;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_44);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_20 = DICT_COPY(mod_consts[145]);


            tmp_args_element_value_46 = MAKE_FUNCTION_pandas$core$strings$base$$$function__47__str_removesuffix(tmp_annotations_20);

            frame_529e50647ac01fc83c9390acb542cb37_2->m_frame.f_lineno = 246;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_44, mod_consts[34], tmp_args_element_value_46);
            Py_DECREF(tmp_called_instance_44);
            Py_DECREF(tmp_args_element_value_46);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[146], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_45;
            PyObject *tmp_args_element_value_47;
            PyObject *tmp_defaults_21;
            PyObject *tmp_annotations_21;
            tmp_called_instance_45 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[14]);

            if (tmp_called_instance_45 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_instance_45 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[14]);

                    if (unlikely(tmp_called_instance_45 == NULL)) {
                        tmp_called_instance_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
                    }

                    if (tmp_called_instance_45 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 250;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_45);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_defaults_21 = mod_consts[148];
            tmp_annotations_21 = DICT_COPY(mod_consts[149]);
            Py_INCREF(tmp_defaults_21);


            tmp_args_element_value_47 = MAKE_FUNCTION_pandas$core$strings$base$$$function__48__str_split(tmp_defaults_21, tmp_annotations_21);

            frame_529e50647ac01fc83c9390acb542cb37_2->m_frame.f_lineno = 250;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_45, mod_consts[34], tmp_args_element_value_47);
            Py_DECREF(tmp_called_instance_45);
            Py_DECREF(tmp_args_element_value_47);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[150], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_46;
            PyObject *tmp_args_element_value_48;
            PyObject *tmp_defaults_22;
            tmp_called_instance_46 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[14]);

            if (tmp_called_instance_46 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_instance_46 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[14]);

                    if (unlikely(tmp_called_instance_46 == NULL)) {
                        tmp_called_instance_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
                    }

                    if (tmp_called_instance_46 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 256;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_46);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_defaults_22 = mod_consts[152];
            Py_INCREF(tmp_defaults_22);


            tmp_args_element_value_48 = MAKE_FUNCTION_pandas$core$strings$base$$$function__49__str_rsplit(tmp_defaults_22);

            frame_529e50647ac01fc83c9390acb542cb37_2->m_frame.f_lineno = 256;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_46, mod_consts[34], tmp_args_element_value_48);
            Py_DECREF(tmp_called_instance_46);
            Py_DECREF(tmp_args_element_value_48);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 256;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[153], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_47;
            PyObject *tmp_args_element_value_49;
            PyObject *tmp_defaults_23;
            PyObject *tmp_annotations_22;
            tmp_called_instance_47 = PyObject_GetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[14]);

            if (tmp_called_instance_47 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_instance_47 = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[14]);

                    if (unlikely(tmp_called_instance_47 == NULL)) {
                        tmp_called_instance_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
                    }

                    if (tmp_called_instance_47 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 260;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_47);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_defaults_23 = mod_consts[155];
            tmp_annotations_22 = DICT_COPY(mod_consts[156]);
            Py_INCREF(tmp_defaults_23);


            tmp_args_element_value_49 = MAKE_FUNCTION_pandas$core$strings$base$$$function__50__str_extract(tmp_defaults_23, tmp_annotations_22);

            frame_529e50647ac01fc83c9390acb542cb37_2->m_frame.f_lineno = 260;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_47, mod_consts[34], tmp_args_element_value_49);
            Py_DECREF(tmp_called_instance_47);
            Py_DECREF(tmp_args_element_value_49);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 260;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[157], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_529e50647ac01fc83c9390acb542cb37_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_529e50647ac01fc83c9390acb542cb37_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_529e50647ac01fc83c9390acb542cb37_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_529e50647ac01fc83c9390acb542cb37_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_529e50647ac01fc83c9390acb542cb37_2);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_4;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto try_except_handler_4;
            }
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21, mod_consts[159], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_4;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_18;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_4 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_6 = mod_consts[23];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_6 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_6);
            tmp_tuple_element_6 = locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_0e83fe1186f4df7ae6fe8914087552a1->m_frame.f_lineno = 21;
            tmp_assign_source_18 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_18;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_17 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_17);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21);
        locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21 = NULL;
        goto try_return_handler_3;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21);
        locals_pandas$core$strings$base$$$class__1_BaseStringArrayMethods_21 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 21;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_17);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_2;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0e83fe1186f4df7ae6fe8914087552a1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0e83fe1186f4df7ae6fe8914087552a1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0e83fe1186f4df7ae6fe8914087552a1, exception_lineno);
    }



    assertFrameObject(frame_0e83fe1186f4df7ae6fe8914087552a1);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;
    CHECK_OBJECT(tmp_class_creation_1__bases_orig);
    Py_DECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_1__bases);
    Py_DECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pandas.core.strings.base", false);

    Py_INCREF(module_pandas$core$strings$base);
    return module_pandas$core$strings$base;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$core$strings$base, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pandas$core$strings$base", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
