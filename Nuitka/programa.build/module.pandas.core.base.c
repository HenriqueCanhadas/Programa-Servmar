/* Generated code for Python module 'pandas.core.base'
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

/* The "module_pandas$core$base" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pandas$core$base;
PyDictObject *moduledict_pandas$core$base;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[421];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[421];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("pandas.core.base"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 421; i++) {
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
void checkModuleConstants_pandas$core$base(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 421; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_9faabfa059097986d8ff3cc57e843bb7;
static PyCodeObject *codeobj_32384bfc83d95195e9f91f62b7d11be9;
static PyCodeObject *codeobj_25625bd619ef8bfa1d5292a18b5ccd04;
static PyCodeObject *codeobj_42ebc4f3f4b4588f97dc9444868e9757;
static PyCodeObject *codeobj_36e0ce6b99b9f9f494f91e02f4bdd4a8;
static PyCodeObject *codeobj_bf9d3bd015c7765ef1c20989e41dc27b;
static PyCodeObject *codeobj_3a98811e259b5edac9af89167ca369f4;
static PyCodeObject *codeobj_9e3987ad9b099be6efed3c5f9b903b1e;
static PyCodeObject *codeobj_55955e715b0e82dd2856cc796738db93;
static PyCodeObject *codeobj_8642d27ab0083469ce8cef090e623a59;
static PyCodeObject *codeobj_36a65baca5ea354422b2fee0638e5521;
static PyCodeObject *codeobj_c328b2be73a45fa2678d051381956716;
static PyCodeObject *codeobj_a4c2a0f8faff6c3050342c9f1492d71c;
static PyCodeObject *codeobj_0d87012cfecbc679a35fb04efa294294;
static PyCodeObject *codeobj_9dbaaba0ea97c401da3414a7ae2f6a1a;
static PyCodeObject *codeobj_f23edd93916d977a408b24886d73e9d6;
static PyCodeObject *codeobj_5f35e44b40425f707b16db1e95d11a28;
static PyCodeObject *codeobj_5bed0a8bed1e776a31a737ce65ff3f06;
static PyCodeObject *codeobj_f578fb0ded0be75f13f959297fb92a2d;
static PyCodeObject *codeobj_85ac33b3acd60659494f36f85d9ed917;
static PyCodeObject *codeobj_95780c129053ad54e4a8afe77965cb74;
static PyCodeObject *codeobj_80b2f41121a255933e0ae43b207e4fa6;
static PyCodeObject *codeobj_c8ea14f6ad8b97099b81cac910ddac27;
static PyCodeObject *codeobj_8d6e325b1901f462bd90baa33f5a8e2f;
static PyCodeObject *codeobj_66257adad2909aa4883d679e0b310ed7;
static PyCodeObject *codeobj_6c68d086e802dd048245fd363eb0c91f;
static PyCodeObject *codeobj_b87e5f36cde3d1709fba67be532d40d5;
static PyCodeObject *codeobj_7cd4c0ece5bb3c20e41b554c030e8a69;
static PyCodeObject *codeobj_f24291cc733b0e7473a097e6d8e8401f;
static PyCodeObject *codeobj_ae704039fef198ff4cd6b771492f5ebe;
static PyCodeObject *codeobj_0a5e07b87d5b987922410c607225c9b4;
static PyCodeObject *codeobj_9bbe454c9a3de8a7bfec0657a34f3086;
static PyCodeObject *codeobj_45c4aff2266f43595279d63b4e35c6f0;
static PyCodeObject *codeobj_10f14def9781e7edfc5a63dff2395136;
static PyCodeObject *codeobj_2a0fbf306a0ee6264da0e66ff1700851;
static PyCodeObject *codeobj_41519162933621077f5dde7f8623b17a;
static PyCodeObject *codeobj_3de1389174140c0e5ef72d5331e86da7;
static PyCodeObject *codeobj_c1e09e0b70f166ae4e210e4b56a3f7a9;
static PyCodeObject *codeobj_9fb3165bfaa40ab8fdc5fadfa7577436;
static PyCodeObject *codeobj_ab46e6ef009a8e5762e3a55ca38a1975;
static PyCodeObject *codeobj_23f16344ab6ac86d3a1f62eb619878cf;
static PyCodeObject *codeobj_e9b575a8e560b2cea10e5276381e9a12;
static PyCodeObject *codeobj_b21e4ca3536eeb6660c1b1df82b9238b;
static PyCodeObject *codeobj_64f6e201c830f11ca63de4f5ea6c3014;
static PyCodeObject *codeobj_f9560298a27a17661557afccda5e5644;
static PyCodeObject *codeobj_68dd194fadb2c9025042006a8719577f;
static PyCodeObject *codeobj_f187c567ad9f02ebc2ed987976b194a6;
static PyCodeObject *codeobj_19fb99d5f11c8adbe03b395ae66e8073;
static PyCodeObject *codeobj_c9545f7b9e30a3b63151f01a9e1378e1;
static PyCodeObject *codeobj_8bd6255ca009b3b020d07da083ce6b46;
static PyCodeObject *codeobj_077fd7eea7ba10d8f85b0950c76d605f;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[187]; CHECK_OBJECT(module_filename_obj);
    codeobj_9faabfa059097986d8ff3cc57e843bb7 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts[395], mod_consts[395], NULL, NULL, 0, 0, 0);
    codeobj_32384bfc83d95195e9f91f62b7d11be9 = MAKE_CODE_OBJECT(module_filename_obj, 284, CO_FUTURE_ANNOTATIONS, mod_consts[306], mod_consts[306], mod_consts[396], NULL, 0, 0, 0);
    codeobj_25625bd619ef8bfa1d5292a18b5ccd04 = MAKE_CODE_OBJECT(module_filename_obj, 100, CO_FUTURE_ANNOTATIONS, mod_consts[256], mod_consts[256], mod_consts[396], NULL, 0, 0, 0);
    codeobj_42ebc4f3f4b4588f97dc9444868e9757 = MAKE_CODE_OBJECT(module_filename_obj, 181, CO_FUTURE_ANNOTATIONS, mod_consts[284], mod_consts[284], mod_consts[396], NULL, 0, 0, 0);
    codeobj_36e0ce6b99b9f9f494f91e02f4bdd4a8 = MAKE_CODE_OBJECT(module_filename_obj, 232, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[257], mod_consts[257], mod_consts[397], NULL, 2, 0, 0);
    codeobj_bf9d3bd015c7765ef1c20989e41dc27b = MAKE_CODE_OBJECT(module_filename_obj, 836, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[350], mod_consts[350], mod_consts[398], NULL, 1, 0, 0);
    codeobj_3a98811e259b5edac9af89167ca369f4 = MAKE_CODE_OBJECT(module_filename_obj, 359, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[325], mod_consts[325], mod_consts[398], NULL, 1, 0, 0);
    codeobj_9e3987ad9b099be6efed3c5f9b903b1e = MAKE_CODE_OBJECT(module_filename_obj, 115, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[1], mod_consts[1], mod_consts[398], NULL, 1, 0, 0);
    codeobj_55955e715b0e82dd2856cc796738db93 = MAKE_CODE_OBJECT(module_filename_obj, 166, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[15], mod_consts[15], mod_consts[399], NULL, 3, 0, 0);
    codeobj_8642d27ab0083469ce8cef090e623a59 = MAKE_CODE_OBJECT(module_filename_obj, 133, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[13], mod_consts[13], mod_consts[400], mod_consts[396], 1, 0, 0);
    codeobj_36a65baca5ea354422b2fee0638e5521 = MAKE_CODE_OBJECT(module_filename_obj, 1370, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[392], mod_consts[392], mod_consts[401], NULL, 3, 0, 0);
    codeobj_c328b2be73a45fa2678d051381956716 = MAKE_CODE_OBJECT(module_filename_obj, 1385, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[182], mod_consts[182], mod_consts[402], NULL, 3, 0, 0);
    codeobj_a4c2a0f8faff6c3050342c9f1492d71c = MAKE_CODE_OBJECT(module_filename_obj, 109, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[155], mod_consts[155], mod_consts[398], NULL, 1, 0, 0);
    codeobj_0d87012cfecbc679a35fb04efa294294 = MAKE_CODE_OBJECT(module_filename_obj, 1367, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[162], mod_consts[162], mod_consts[403], NULL, 2, 0, 0);
    codeobj_9dbaaba0ea97c401da3414a7ae2f6a1a = MAKE_CODE_OBJECT(module_filename_obj, 159, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[279], mod_consts[279], mod_consts[398], NULL, 1, 0, 0);
    codeobj_f23edd93916d977a408b24886d73e9d6 = MAKE_CODE_OBJECT(module_filename_obj, 248, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[41], mod_consts[41], mod_consts[404], NULL, 4, 0, 0);
    codeobj_5f35e44b40425f707b16db1e95d11a28 = MAKE_CODE_OBJECT(module_filename_obj, 264, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[301], mod_consts[301], mod_consts[405], NULL, 3, 0, 0);
    codeobj_5bed0a8bed1e776a31a737ce65ff3f06 = MAKE_CODE_OBJECT(module_filename_obj, 892, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[355], mod_consts[355], mod_consts[406], NULL, 4, 0, 0);
    codeobj_f578fb0ded0be75f13f959297fb92a2d = MAKE_CODE_OBJECT(module_filename_obj, 1136, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[369], mod_consts[369], mod_consts[407], NULL, 2, 0, 0);
    codeobj_85ac33b3acd60659494f36f85d9ed917 = MAKE_CODE_OBJECT(module_filename_obj, 216, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[295], mod_consts[295], mod_consts[398], NULL, 1, 0, 0);
    codeobj_95780c129053ad54e4a8afe77965cb74 = MAKE_CODE_OBJECT(module_filename_obj, 122, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[271], mod_consts[271], mod_consts[408], NULL, 2, 0, 0);
    codeobj_80b2f41121a255933e0ae43b207e4fa6 = MAKE_CODE_OBJECT(module_filename_obj, 203, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[27], mod_consts[27], mod_consts[398], NULL, 1, 0, 0);
    codeobj_c8ea14f6ad8b97099b81cac910ddac27 = MAKE_CODE_OBJECT(module_filename_obj, 195, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[30], mod_consts[30], mod_consts[398], NULL, 1, 0, 0);
    codeobj_8d6e325b1901f462bd90baa33f5a8e2f = MAKE_CODE_OBJECT(module_filename_obj, 301, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[57], mod_consts[57], mod_consts[398], NULL, 1, 0, 0);
    codeobj_66257adad2909aa4883d679e0b310ed7 = MAKE_CODE_OBJECT(module_filename_obj, 278, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts[303], mod_consts[303], mod_consts[409], NULL, 2, 0, 0);
    codeobj_6c68d086e802dd048245fd363eb0c91f = MAKE_CODE_OBJECT(module_filename_obj, 681, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts[106], mod_consts[106], mod_consts[410], NULL, 3, 0, 0);
    codeobj_b87e5f36cde3d1709fba67be532d40d5 = MAKE_CODE_OBJECT(module_filename_obj, 765, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts[112], mod_consts[112], mod_consts[410], NULL, 3, 0, 0);
    codeobj_7cd4c0ece5bb3c20e41b554c030e8a69 = MAKE_CODE_OBJECT(module_filename_obj, 477, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[68], mod_consts[68], mod_consts[398], NULL, 1, 0, 0);
    codeobj_f24291cc733b0e7473a097e6d8e8401f = MAKE_CODE_OBJECT(module_filename_obj, 1361, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[387], mod_consts[387], mod_consts[411], NULL, 1, 1, 0);
    codeobj_ae704039fef198ff4cd6b771492f5ebe = MAKE_CODE_OBJECT(module_filename_obj, 296, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[66], mod_consts[66], mod_consts[398], NULL, 1, 0, 0);
    codeobj_0a5e07b87d5b987922410c607225c9b4 = MAKE_CODE_OBJECT(module_filename_obj, 677, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[338], mod_consts[338], mod_consts[398], NULL, 1, 0, 0);
    codeobj_9bbe454c9a3de8a7bfec0657a34f3086 = MAKE_CODE_OBJECT(module_filename_obj, 1190, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[149], mod_consts[149], mod_consts[412], NULL, 3, 0, 0);
    codeobj_45c4aff2266f43595279d63b4e35c6f0 = MAKE_CODE_OBJECT(module_filename_obj, 865, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[352], mod_consts[352], mod_consts[398], NULL, 1, 0, 0);
    codeobj_10f14def9781e7edfc5a63dff2395136 = MAKE_CODE_OBJECT(module_filename_obj, 1113, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[142], mod_consts[142], mod_consts[413], NULL, 1, 0, 0);
    codeobj_2a0fbf306a0ee6264da0e66ff1700851 = MAKE_CODE_OBJECT(module_filename_obj, 1090, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[140], mod_consts[140], mod_consts[413], NULL, 1, 0, 0);
    codeobj_41519162933621077f5dde7f8623b17a = MAKE_CODE_OBJECT(module_filename_obj, 1069, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[364], mod_consts[364], mod_consts[398], NULL, 1, 0, 0);
    codeobj_3de1389174140c0e5ef72d5331e86da7 = MAKE_CODE_OBJECT(module_filename_obj, 390, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[116], mod_consts[116], mod_consts[398], NULL, 1, 0, 0);
    codeobj_c1e09e0b70f166ae4e210e4b56a3f7a9 = MAKE_CODE_OBJECT(module_filename_obj, 421, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[62], mod_consts[62], mod_consts[398], NULL, 1, 0, 0);
    codeobj_9fb3165bfaa40ab8fdc5fadfa7577436 = MAKE_CODE_OBJECT(module_filename_obj, 211, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[28], mod_consts[28], mod_consts[398], NULL, 1, 0, 0);
    codeobj_ab46e6ef009a8e5762e3a55ca38a1975 = MAKE_CODE_OBJECT(module_filename_obj, 364, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[28], mod_consts[28], mod_consts[398], NULL, 1, 0, 0);
    codeobj_23f16344ab6ac86d3a1f62eb619878cf = MAKE_CODE_OBJECT(module_filename_obj, 1029, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[132], mod_consts[132], mod_consts[414], NULL, 2, 0, 0);
    codeobj_e9b575a8e560b2cea10e5276381e9a12 = MAKE_CODE_OBJECT(module_filename_obj, 1318, CO_FUTURE_ANNOTATIONS, mod_consts[160], mod_consts[160], mod_consts[415], NULL, 4, 0, 0);
    codeobj_b21e4ca3536eeb6660c1b1df82b9238b = MAKE_CODE_OBJECT(module_filename_obj, 1327, CO_FUTURE_ANNOTATIONS, mod_consts[160], mod_consts[160], mod_consts[415], NULL, 4, 0, 0);
    codeobj_64f6e201c830f11ca63de4f5ea6c3014 = MAKE_CODE_OBJECT(module_filename_obj, 1336, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[160], mod_consts[160], mod_consts[416], NULL, 4, 0, 0);
    codeobj_f9560298a27a17661557afccda5e5644 = MAKE_CODE_OBJECT(module_filename_obj, 347, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[58], mod_consts[58], mod_consts[398], NULL, 1, 0, 0);
    codeobj_68dd194fadb2c9025042006a8719577f = MAKE_CODE_OBJECT(module_filename_obj, 449, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[91], mod_consts[91], mod_consts[398], NULL, 1, 0, 0);
    codeobj_f187c567ad9f02ebc2ed987976b194a6 = MAKE_CODE_OBJECT(module_filename_obj, 542, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts[69], mod_consts[69], mod_consts[417], NULL, 4, 0, 0);
    codeobj_19fb99d5f11c8adbe03b395ae66e8073 = MAKE_CODE_OBJECT(module_filename_obj, 798, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[114], mod_consts[114], mod_consts[398], NULL, 1, 0, 0);
    codeobj_c9545f7b9e30a3b63151f01a9e1378e1 = MAKE_CODE_OBJECT(module_filename_obj, 306, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts[319], mod_consts[319], mod_consts[418], NULL, 1, 0, 0);
    codeobj_8bd6255ca009b3b020d07da083ce6b46 = MAKE_CODE_OBJECT(module_filename_obj, 1019, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[128], mod_consts[128], mod_consts[419], NULL, 1, 0, 0);
    codeobj_077fd7eea7ba10d8f85b0950c76d605f = MAKE_CODE_OBJECT(module_filename_obj, 924, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[359], mod_consts[359], mod_consts[420], NULL, 6, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__8_complex_call_helper_pos_keywords_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__10__obj_with_exclusions();


static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__11___getitem__();


static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__12__gotitem(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__13__infer_selection(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__14_aggregate();


static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__15_dtype(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__16__values(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__17_transpose(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__18_shape(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__19___len__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__1__constructor();


static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__20_ndim(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__21_item();


static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__22_nbytes(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__23_size(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__24_array(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__25_to_numpy(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__26_empty(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__27_argmax(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__28_argmin(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__29_tolist();


static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__2___repr__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__30___iter__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__31_hasnans(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__32__map_values(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__33_value_counts(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__34_unique();


static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__35_nunique(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__36_is_unique(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__37_is_monotonic_increasing(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__38_is_monotonic_decreasing(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__39__memory_usage(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__3__reset_cache(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__40_factorize(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__41_searchsorted(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__42_searchsorted(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__43_searchsorted(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__44_drop_duplicates(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__45__duplicated(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__46__arith_method();


static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__47__construct_result();


static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__4___sizeof__(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__5__freeze(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__6___setattr__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__7__selection_list();


static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__8__selected_obj();


static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__9_ndim(PyObject *annotations);


// The module function definitions.
static PyObject *impl_pandas$core$base$$$function__1__constructor(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_type_arg_1;
        CHECK_OBJECT(par_self);
        tmp_type_arg_1 = par_self;
        tmp_return_value = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_return_value == NULL));
        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$base$$$function__2___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_9e3987ad9b099be6efed3c5f9b903b1e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9e3987ad9b099be6efed3c5f9b903b1e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9e3987ad9b099be6efed3c5f9b903b1e)) {
        Py_XDECREF(cache_frame_9e3987ad9b099be6efed3c5f9b903b1e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9e3987ad9b099be6efed3c5f9b903b1e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9e3987ad9b099be6efed3c5f9b903b1e = MAKE_FUNCTION_FRAME(tstate, codeobj_9e3987ad9b099be6efed3c5f9b903b1e, module_pandas$core$base, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9e3987ad9b099be6efed3c5f9b903b1e->m_type_description == NULL);
    frame_9e3987ad9b099be6efed3c5f9b903b1e = cache_frame_9e3987ad9b099be6efed3c5f9b903b1e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_9e3987ad9b099be6efed3c5f9b903b1e);
    assert(Py_REFCNT(frame_9e3987ad9b099be6efed3c5f9b903b1e) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = (PyObject *)&PyBaseObject_Type;
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        frame_9e3987ad9b099be6efed3c5f9b903b1e->m_frame.f_lineno = 120;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[1], tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9e3987ad9b099be6efed3c5f9b903b1e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9e3987ad9b099be6efed3c5f9b903b1e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9e3987ad9b099be6efed3c5f9b903b1e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9e3987ad9b099be6efed3c5f9b903b1e,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_9e3987ad9b099be6efed3c5f9b903b1e == cache_frame_9e3987ad9b099be6efed3c5f9b903b1e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9e3987ad9b099be6efed3c5f9b903b1e);
        cache_frame_9e3987ad9b099be6efed3c5f9b903b1e = NULL;
    }

    assertFrameObject(frame_9e3987ad9b099be6efed3c5f9b903b1e);

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
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$base$$$function__3__reset_cache(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_key = python_pars[1];
    struct Nuitka_FrameObject *frame_95780c129053ad54e4a8afe77965cb74;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_95780c129053ad54e4a8afe77965cb74 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_95780c129053ad54e4a8afe77965cb74)) {
        Py_XDECREF(cache_frame_95780c129053ad54e4a8afe77965cb74);

#if _DEBUG_REFCOUNTS
        if (cache_frame_95780c129053ad54e4a8afe77965cb74 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_95780c129053ad54e4a8afe77965cb74 = MAKE_FUNCTION_FRAME(tstate, codeobj_95780c129053ad54e4a8afe77965cb74, module_pandas$core$base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_95780c129053ad54e4a8afe77965cb74->m_type_description == NULL);
    frame_95780c129053ad54e4a8afe77965cb74 = cache_frame_95780c129053ad54e4a8afe77965cb74;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_95780c129053ad54e4a8afe77965cb74);
    assert(Py_REFCNT(frame_95780c129053ad54e4a8afe77965cb74) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_1, mod_consts[3]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_key);
        tmp_cmp_expr_left_1 = par_key;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[3]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[4]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_95780c129053ad54e4a8afe77965cb74->m_frame.f_lineno = 129;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[3]);
        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[5]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_args_element_value_1 = par_key;
        tmp_args_element_value_2 = Py_None;
        frame_95780c129053ad54e4a8afe77965cb74->m_frame.f_lineno = 131;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_end_2:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_95780c129053ad54e4a8afe77965cb74, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_95780c129053ad54e4a8afe77965cb74->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_95780c129053ad54e4a8afe77965cb74, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_95780c129053ad54e4a8afe77965cb74,
        type_description_1,
        par_self,
        par_key
    );


    // Release cached frame if used for exception.
    if (frame_95780c129053ad54e4a8afe77965cb74 == cache_frame_95780c129053ad54e4a8afe77965cb74) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_95780c129053ad54e4a8afe77965cb74);
        cache_frame_95780c129053ad54e4a8afe77965cb74 = NULL;
    }

    assertFrameObject(frame_95780c129053ad54e4a8afe77965cb74);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

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


static PyObject *impl_pandas$core$base$$$function__4___sizeof__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_memory_usage = NULL;
    PyObject *var_mem = NULL;
    struct Nuitka_FrameObject *frame_8642d27ab0083469ce8cef090e623a59;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_8642d27ab0083469ce8cef090e623a59 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8642d27ab0083469ce8cef090e623a59)) {
        Py_XDECREF(cache_frame_8642d27ab0083469ce8cef090e623a59);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8642d27ab0083469ce8cef090e623a59 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8642d27ab0083469ce8cef090e623a59 = MAKE_FUNCTION_FRAME(tstate, codeobj_8642d27ab0083469ce8cef090e623a59, module_pandas$core$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8642d27ab0083469ce8cef090e623a59->m_type_description == NULL);
    frame_8642d27ab0083469ce8cef090e623a59 = cache_frame_8642d27ab0083469ce8cef090e623a59;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_8642d27ab0083469ce8cef090e623a59);
    assert(Py_REFCNT(frame_8642d27ab0083469ce8cef090e623a59) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_default_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_name_value_1 = mod_consts[7];
        tmp_default_value_1 = Py_None;
        tmp_assign_source_1 = BUILTIN_GETATTR(tstate, tmp_expression_value_1, tmp_name_value_1, tmp_default_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        assert(var_memory_usage == NULL);
        var_memory_usage = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_memory_usage);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_memory_usage);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        CHECK_OBJECT(var_memory_usage);
        tmp_called_value_1 = var_memory_usage;
        frame_8642d27ab0083469ce8cef090e623a59->m_frame.f_lineno = 140;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[8], 0), mod_consts[9]);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        assert(var_mem == NULL);
        var_mem = tmp_assign_source_2;
    }
    {
        PyObject *tmp_int_arg_1;
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        int tmp_truth_name_2;
        PyObject *tmp_called_instance_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_mem);
        tmp_args_element_value_1 = var_mem;
        frame_8642d27ab0083469ce8cef090e623a59->m_frame.f_lineno = 141;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 141;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(var_mem);
        tmp_int_arg_1 = var_mem;
        Py_INCREF(tmp_int_arg_1);
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(var_mem);
        tmp_called_instance_1 = var_mem;
        frame_8642d27ab0083469ce8cef090e623a59->m_frame.f_lineno = 141;
        tmp_int_arg_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[11]);
        if (tmp_int_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
        tmp_return_value = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 144;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_2 = BUILTIN_SUPER0(tstate, moduledict_pandas$core$base, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        frame_8642d27ab0083469ce8cef090e623a59->m_frame.f_lineno = 144;
        tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[13]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8642d27ab0083469ce8cef090e623a59, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8642d27ab0083469ce8cef090e623a59->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8642d27ab0083469ce8cef090e623a59, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8642d27ab0083469ce8cef090e623a59,
        type_description_1,
        par_self,
        var_memory_usage,
        var_mem,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_8642d27ab0083469ce8cef090e623a59 == cache_frame_8642d27ab0083469ce8cef090e623a59) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8642d27ab0083469ce8cef090e623a59);
        cache_frame_8642d27ab0083469ce8cef090e623a59 = NULL;
    }

    assertFrameObject(frame_8642d27ab0083469ce8cef090e623a59);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_memory_usage);
    Py_DECREF(var_memory_usage);
    var_memory_usage = NULL;
    Py_XDECREF(var_mem);
    var_mem = NULL;
    goto function_return_exit;
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

    Py_XDECREF(var_memory_usage);
    var_memory_usage = NULL;
    Py_XDECREF(var_mem);
    var_mem = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$base$$$function__5__freeze(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_9dbaaba0ea97c401da3414a7ae2f6a1a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9dbaaba0ea97c401da3414a7ae2f6a1a = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9dbaaba0ea97c401da3414a7ae2f6a1a)) {
        Py_XDECREF(cache_frame_9dbaaba0ea97c401da3414a7ae2f6a1a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9dbaaba0ea97c401da3414a7ae2f6a1a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9dbaaba0ea97c401da3414a7ae2f6a1a = MAKE_FUNCTION_FRAME(tstate, codeobj_9dbaaba0ea97c401da3414a7ae2f6a1a, module_pandas$core$base, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9dbaaba0ea97c401da3414a7ae2f6a1a->m_type_description == NULL);
    frame_9dbaaba0ea97c401da3414a7ae2f6a1a = cache_frame_9dbaaba0ea97c401da3414a7ae2f6a1a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_9dbaaba0ea97c401da3414a7ae2f6a1a);
    assert(Py_REFCNT(frame_9dbaaba0ea97c401da3414a7ae2f6a1a) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_1 = (PyObject *)&PyBaseObject_Type;
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        tmp_args_element_value_2 = mod_consts[16];
        tmp_args_element_value_3 = Py_True;
        frame_9dbaaba0ea97c401da3414a7ae2f6a1a->m_frame.f_lineno = 163;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS3(
                tstate,
                tmp_called_instance_1,
                mod_consts[15],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9dbaaba0ea97c401da3414a7ae2f6a1a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9dbaaba0ea97c401da3414a7ae2f6a1a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9dbaaba0ea97c401da3414a7ae2f6a1a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9dbaaba0ea97c401da3414a7ae2f6a1a,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_9dbaaba0ea97c401da3414a7ae2f6a1a == cache_frame_9dbaaba0ea97c401da3414a7ae2f6a1a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9dbaaba0ea97c401da3414a7ae2f6a1a);
        cache_frame_9dbaaba0ea97c401da3414a7ae2f6a1a = NULL;
    }

    assertFrameObject(frame_9dbaaba0ea97c401da3414a7ae2f6a1a);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$base$$$function__6___setattr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_key = python_pars[1];
    PyObject *par_value = python_pars[2];
    struct Nuitka_FrameObject *frame_55955e715b0e82dd2856cc796738db93;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_55955e715b0e82dd2856cc796738db93 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_55955e715b0e82dd2856cc796738db93)) {
        Py_XDECREF(cache_frame_55955e715b0e82dd2856cc796738db93);

#if _DEBUG_REFCOUNTS
        if (cache_frame_55955e715b0e82dd2856cc796738db93 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_55955e715b0e82dd2856cc796738db93 = MAKE_FUNCTION_FRAME(tstate, codeobj_55955e715b0e82dd2856cc796738db93, module_pandas$core$base, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_55955e715b0e82dd2856cc796738db93->m_type_description == NULL);
    frame_55955e715b0e82dd2856cc796738db93 = cache_frame_55955e715b0e82dd2856cc796738db93;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_55955e715b0e82dd2856cc796738db93);
    assert(Py_REFCNT(frame_55955e715b0e82dd2856cc796738db93) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_default_value_1;
        PyObject *tmp_capi_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_operand_value_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_name_value_2;
        PyObject *tmp_default_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_name_value_1 = mod_consts[16];
        tmp_default_value_1 = Py_False;
        tmp_capi_result_1 = BUILTIN_GETATTR(tstate, tmp_expression_value_1, tmp_name_value_1, tmp_default_value_1);
        if (tmp_capi_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_capi_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_capi_result_1);

            exception_lineno = 172;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_capi_result_1);
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_key);
        tmp_cmp_expr_left_1 = par_key;
        tmp_cmp_expr_right_1 = mod_consts[3];
        tmp_or_left_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_or_left_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 173;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        CHECK_OBJECT(par_key);
        tmp_cmp_expr_left_2 = par_key;
        CHECK_OBJECT(par_self);
        tmp_type_arg_1 = par_self;
        tmp_expression_value_2 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_expression_value_2 == NULL));
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE_DICT_SLOT(tstate, tmp_expression_value_2);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_2 = (tmp_res == 1) ? Py_True : Py_False;
        tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        CHECK_OBJECT(par_key);
        tmp_name_value_2 = par_key;
        tmp_default_value_2 = Py_None;
        tmp_cmp_expr_left_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_3, tmp_name_value_2, tmp_default_value_2);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = Py_None;
        tmp_or_right_value_2 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? Py_True : Py_False;
        Py_DECREF(tmp_cmp_expr_left_3);
        tmp_or_right_value_1 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_or_right_value_1 = tmp_or_left_value_2;
        or_end_2:;
        Py_INCREF(tmp_or_right_value_1);
        tmp_operand_value_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_operand_value_1 = tmp_or_left_value_1;
        or_end_1:;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[18];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_key);
            tmp_format_value_1 = par_key;
            tmp_format_spec_1 = mod_consts[19];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[20];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[19], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_55955e715b0e82dd2856cc796738db93->m_frame.f_lineno = 177;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_AttributeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 177;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_1 = (PyObject *)&PyBaseObject_Type;
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        CHECK_OBJECT(par_key);
        tmp_args_element_value_2 = par_key;
        CHECK_OBJECT(par_value);
        tmp_args_element_value_3 = par_value;
        frame_55955e715b0e82dd2856cc796738db93->m_frame.f_lineno = 178;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS3(
                tstate,
                tmp_called_instance_1,
                mod_consts[15],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_55955e715b0e82dd2856cc796738db93, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_55955e715b0e82dd2856cc796738db93->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_55955e715b0e82dd2856cc796738db93, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_55955e715b0e82dd2856cc796738db93,
        type_description_1,
        par_self,
        par_key,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_55955e715b0e82dd2856cc796738db93 == cache_frame_55955e715b0e82dd2856cc796738db93) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_55955e715b0e82dd2856cc796738db93);
        cache_frame_55955e715b0e82dd2856cc796738db93 = NULL;
    }

    assertFrameObject(frame_55955e715b0e82dd2856cc796738db93);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$base$$$function__7__selection_list(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_c8ea14f6ad8b97099b81cac910ddac27;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c8ea14f6ad8b97099b81cac910ddac27 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c8ea14f6ad8b97099b81cac910ddac27)) {
        Py_XDECREF(cache_frame_c8ea14f6ad8b97099b81cac910ddac27);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c8ea14f6ad8b97099b81cac910ddac27 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c8ea14f6ad8b97099b81cac910ddac27 = MAKE_FUNCTION_FRAME(tstate, codeobj_c8ea14f6ad8b97099b81cac910ddac27, module_pandas$core$base, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c8ea14f6ad8b97099b81cac910ddac27->m_type_description == NULL);
    frame_c8ea14f6ad8b97099b81cac910ddac27 = cache_frame_c8ea14f6ad8b97099b81cac910ddac27;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_c8ea14f6ad8b97099b81cac910ddac27);
    assert(Py_REFCNT(frame_c8ea14f6ad8b97099b81cac910ddac27) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_isinstance_inst_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[21]);
        if (tmp_isinstance_inst_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = (PyObject *)&PyList_Type;
        tmp_isinstance_cls_1 = MAKE_TUPLE_EMPTY(5);
        {
            PyObject *tmp_expression_value_2;
            PyTuple_SET_ITEM0(tmp_isinstance_cls_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = (PyObject *)&PyTuple_Type;
            PyTuple_SET_ITEM0(tmp_isinstance_cls_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[22]);

            if (unlikely(tmp_tuple_element_1 == NULL)) {
                tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
            }

            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 197;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM0(tmp_isinstance_cls_1, 2, tmp_tuple_element_1);
            tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_tuple_element_1 == NULL)) {
                tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 197;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM0(tmp_isinstance_cls_1, 3, tmp_tuple_element_1);
            tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_expression_value_2 == NULL)) {
                tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_expression_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 197;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[25]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 197;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_isinstance_cls_1, 4, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_isinstance_inst_1);
        Py_DECREF(tmp_isinstance_cls_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_inst_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_list_element_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_list_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[21]);
        if (tmp_list_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_return_value, 0, tmp_list_element_1);
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[21]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c8ea14f6ad8b97099b81cac910ddac27, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c8ea14f6ad8b97099b81cac910ddac27->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c8ea14f6ad8b97099b81cac910ddac27, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c8ea14f6ad8b97099b81cac910ddac27,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_c8ea14f6ad8b97099b81cac910ddac27 == cache_frame_c8ea14f6ad8b97099b81cac910ddac27) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c8ea14f6ad8b97099b81cac910ddac27);
        cache_frame_c8ea14f6ad8b97099b81cac910ddac27 = NULL;
    }

    assertFrameObject(frame_c8ea14f6ad8b97099b81cac910ddac27);

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
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$base$$$function__8__selected_obj(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_80b2f41121a255933e0ae43b207e4fa6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_80b2f41121a255933e0ae43b207e4fa6 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_80b2f41121a255933e0ae43b207e4fa6)) {
        Py_XDECREF(cache_frame_80b2f41121a255933e0ae43b207e4fa6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_80b2f41121a255933e0ae43b207e4fa6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_80b2f41121a255933e0ae43b207e4fa6 = MAKE_FUNCTION_FRAME(tstate, codeobj_80b2f41121a255933e0ae43b207e4fa6, module_pandas$core$base, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_80b2f41121a255933e0ae43b207e4fa6->m_type_description == NULL);
    frame_80b2f41121a255933e0ae43b207e4fa6 = cache_frame_80b2f41121a255933e0ae43b207e4fa6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_80b2f41121a255933e0ae43b207e4fa6);
    assert(Py_REFCNT(frame_80b2f41121a255933e0ae43b207e4fa6) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[21]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_or_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_cmp_expr_left_1);
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_isinstance_inst_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[26]);
        if (tmp_isinstance_inst_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_isinstance_inst_1);

            exception_lineno = 204;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_inst_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[26]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[26]);
        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_subscript_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[21]);
        if (tmp_subscript_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_4);

            exception_lineno = 207;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_4);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_80b2f41121a255933e0ae43b207e4fa6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_80b2f41121a255933e0ae43b207e4fa6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_80b2f41121a255933e0ae43b207e4fa6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_80b2f41121a255933e0ae43b207e4fa6,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_80b2f41121a255933e0ae43b207e4fa6 == cache_frame_80b2f41121a255933e0ae43b207e4fa6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_80b2f41121a255933e0ae43b207e4fa6);
        cache_frame_80b2f41121a255933e0ae43b207e4fa6 = NULL;
    }

    assertFrameObject(frame_80b2f41121a255933e0ae43b207e4fa6);

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
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$base$$$function__9_ndim(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_9fb3165bfaa40ab8fdc5fadfa7577436;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9fb3165bfaa40ab8fdc5fadfa7577436 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9fb3165bfaa40ab8fdc5fadfa7577436)) {
        Py_XDECREF(cache_frame_9fb3165bfaa40ab8fdc5fadfa7577436);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9fb3165bfaa40ab8fdc5fadfa7577436 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9fb3165bfaa40ab8fdc5fadfa7577436 = MAKE_FUNCTION_FRAME(tstate, codeobj_9fb3165bfaa40ab8fdc5fadfa7577436, module_pandas$core$base, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9fb3165bfaa40ab8fdc5fadfa7577436->m_type_description == NULL);
    frame_9fb3165bfaa40ab8fdc5fadfa7577436 = cache_frame_9fb3165bfaa40ab8fdc5fadfa7577436;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_9fb3165bfaa40ab8fdc5fadfa7577436);
    assert(Py_REFCNT(frame_9fb3165bfaa40ab8fdc5fadfa7577436) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[27]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[28]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9fb3165bfaa40ab8fdc5fadfa7577436, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9fb3165bfaa40ab8fdc5fadfa7577436->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9fb3165bfaa40ab8fdc5fadfa7577436, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9fb3165bfaa40ab8fdc5fadfa7577436,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_9fb3165bfaa40ab8fdc5fadfa7577436 == cache_frame_9fb3165bfaa40ab8fdc5fadfa7577436) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9fb3165bfaa40ab8fdc5fadfa7577436);
        cache_frame_9fb3165bfaa40ab8fdc5fadfa7577436 = NULL;
    }

    assertFrameObject(frame_9fb3165bfaa40ab8fdc5fadfa7577436);

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
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$base$$$function__10__obj_with_exclusions(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_85ac33b3acd60659494f36f85d9ed917;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_85ac33b3acd60659494f36f85d9ed917 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_85ac33b3acd60659494f36f85d9ed917)) {
        Py_XDECREF(cache_frame_85ac33b3acd60659494f36f85d9ed917);

#if _DEBUG_REFCOUNTS
        if (cache_frame_85ac33b3acd60659494f36f85d9ed917 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_85ac33b3acd60659494f36f85d9ed917 = MAKE_FUNCTION_FRAME(tstate, codeobj_85ac33b3acd60659494f36f85d9ed917, module_pandas$core$base, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_85ac33b3acd60659494f36f85d9ed917->m_type_description == NULL);
    frame_85ac33b3acd60659494f36f85d9ed917 = cache_frame_85ac33b3acd60659494f36f85d9ed917;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_85ac33b3acd60659494f36f85d9ed917);
    assert(Py_REFCNT(frame_85ac33b3acd60659494f36f85d9ed917) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_isinstance_inst_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[26]);
        if (tmp_isinstance_inst_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_isinstance_inst_1);

            exception_lineno = 217;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_inst_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "o";
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
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[26]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[21]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[26]);
        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[29]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[30]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 221;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_85ac33b3acd60659494f36f85d9ed917->m_frame.f_lineno = 221;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        nuitka_digit tmp_cmp_expr_right_2;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[31]);
        if (tmp_len_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_2 = BUILTIN_LEN(tstate, tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = 0;
        tmp_condition_result_3 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[26]);
        if (tmp_expression_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[32]);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_10 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[31]);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 228;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[33]);
        frame_85ac33b3acd60659494f36f85d9ed917->m_frame.f_lineno = 228;
        tmp_return_value = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(par_self);
        tmp_expression_value_11 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[26]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_3:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_85ac33b3acd60659494f36f85d9ed917, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_85ac33b3acd60659494f36f85d9ed917->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_85ac33b3acd60659494f36f85d9ed917, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_85ac33b3acd60659494f36f85d9ed917,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_85ac33b3acd60659494f36f85d9ed917 == cache_frame_85ac33b3acd60659494f36f85d9ed917) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_85ac33b3acd60659494f36f85d9ed917);
        cache_frame_85ac33b3acd60659494f36f85d9ed917 = NULL;
    }

    assertFrameObject(frame_85ac33b3acd60659494f36f85d9ed917);

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
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$base$$$function__11___getitem__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_key = python_pars[1];
    PyObject *var_bad_keys = NULL;
    PyObject *var_ndim = NULL;
    struct Nuitka_FrameObject *frame_36e0ce6b99b9f9f494f91e02f4bdd4a8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_36e0ce6b99b9f9f494f91e02f4bdd4a8 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_36e0ce6b99b9f9f494f91e02f4bdd4a8)) {
        Py_XDECREF(cache_frame_36e0ce6b99b9f9f494f91e02f4bdd4a8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_36e0ce6b99b9f9f494f91e02f4bdd4a8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_36e0ce6b99b9f9f494f91e02f4bdd4a8 = MAKE_FUNCTION_FRAME(tstate, codeobj_36e0ce6b99b9f9f494f91e02f4bdd4a8, module_pandas$core$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_36e0ce6b99b9f9f494f91e02f4bdd4a8->m_type_description == NULL);
    frame_36e0ce6b99b9f9f494f91e02f4bdd4a8 = cache_frame_36e0ce6b99b9f9f494f91e02f4bdd4a8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_36e0ce6b99b9f9f494f91e02f4bdd4a8);
    assert(Py_REFCNT(frame_36e0ce6b99b9f9f494f91e02f4bdd4a8) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[21]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[34];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_2 = par_self;
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[21]);
            if (tmp_format_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[19];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[35];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[19], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_36e0ce6b99b9f9f494f91e02f4bdd4a8->m_frame.f_lineno = 234;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_IndexError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 234;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(par_key);
        tmp_isinstance_inst_1 = par_key;
        tmp_tuple_element_2 = (PyObject *)&PyList_Type;
        tmp_isinstance_cls_1 = MAKE_TUPLE_EMPTY(5);
        {
            PyObject *tmp_expression_value_3;
            PyTuple_SET_ITEM0(tmp_isinstance_cls_1, 0, tmp_tuple_element_2);
            tmp_tuple_element_2 = (PyObject *)&PyTuple_Type;
            PyTuple_SET_ITEM0(tmp_isinstance_cls_1, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[22]);

            if (unlikely(tmp_tuple_element_2 == NULL)) {
                tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
            }

            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 236;
                type_description_1 = "oooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM0(tmp_isinstance_cls_1, 2, tmp_tuple_element_2);
            tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_tuple_element_2 == NULL)) {
                tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 236;
                type_description_1 = "oooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM0(tmp_isinstance_cls_1, 3, tmp_tuple_element_2);
            tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_expression_value_3 == NULL)) {
                tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_expression_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 236;
                type_description_1 = "oooo";
                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[25]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 236;
                type_description_1 = "oooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_isinstance_cls_1, 4, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_isinstance_cls_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_set_arg_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[26]);
        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[36]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_args_element_value_1 = par_key;
        frame_36e0ce6b99b9f9f494f91e02f4bdd4a8->m_frame.f_lineno = 237;
        tmp_len_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[37], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_len_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_2 = BUILTIN_LEN(tstate, tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_set_arg_1 = par_key;
        tmp_len_arg_2 = PySet_New(tmp_set_arg_1);
        if (tmp_len_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 237;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = BUILTIN_LEN(tstate, tmp_len_arg_2);
        Py_DECREF(tmp_len_arg_2);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 237;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = RICH_COMPARE_EQ_CBOOL_LONG_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        tmp_condition_result_3 = !tmp_condition_result_3;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_list_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_set_arg_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(par_key);
        tmp_set_arg_2 = par_key;
        tmp_expression_value_6 = PySet_New(tmp_set_arg_2);
        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[38]);
        Py_DECREF(tmp_expression_value_6);
        assert(!(tmp_called_value_1 == NULL));
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[26]);
        if (tmp_expression_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 238;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[36]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 238;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_36e0ce6b99b9f9f494f91e02f4bdd4a8->m_frame.f_lineno = 238;
        tmp_list_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_list_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_LIST(tstate, tmp_list_arg_1);
        Py_DECREF(tmp_list_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_bad_keys == NULL);
        var_bad_keys = tmp_assign_source_1;
    }
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_3;
        tmp_tuple_element_3 = mod_consts[39];
        tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_unicode_arg_1;
            PyObject *tmp_subscript_value_1;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_3);
            CHECK_OBJECT(var_bad_keys);
            tmp_unicode_arg_1 = var_bad_keys;
            tmp_expression_value_9 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
            if (tmp_expression_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 239;
                type_description_1 = "oooo";
                goto tuple_build_exception_3;
            }
            tmp_subscript_value_1 = mod_consts[40];
            tmp_format_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_1);
            Py_DECREF(tmp_expression_value_9);
            if (tmp_format_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 239;
                type_description_1 = "oooo";
                goto tuple_build_exception_3;
            }
            tmp_format_spec_2 = mod_consts[19];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 239;
                type_description_1 = "oooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_string_concat_values_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_make_exception_arg_2 = PyUnicode_Join(mod_consts[19], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_make_exception_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_36e0ce6b99b9f9f494f91e02f4bdd4a8->m_frame.f_lineno = 239;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_KeyError, tmp_make_exception_arg_2);
        Py_DECREF(tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 239;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_list_arg_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_10 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[41]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_list_arg_2 = par_key;
        tmp_tuple_element_4 = MAKE_LIST(tstate, tmp_list_arg_2);
        if (tmp_tuple_element_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 240;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_4);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[42]);
        frame_36e0ce6b99b9f9f494f91e02f4bdd4a8->m_frame.f_lineno = 240;
        tmp_return_value = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(par_key);
        tmp_cmp_expr_left_3 = par_key;
        CHECK_OBJECT(par_self);
        tmp_expression_value_11 = par_self;
        tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[26]);
        if (tmp_cmp_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
        Py_DECREF(tmp_cmp_expr_right_3);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_make_exception_arg_3;
        PyObject *tmp_string_concat_values_3;
        PyObject *tmp_tuple_element_5;
        tmp_tuple_element_5 = mod_consts[43];
        tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_format_value_3;
            PyObject *tmp_format_spec_3;
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_5);
            CHECK_OBJECT(par_key);
            tmp_format_value_3 = par_key;
            tmp_format_spec_3 = mod_consts[19];
            tmp_tuple_element_5 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;
                type_description_1 = "oooo";
                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_string_concat_values_3);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_make_exception_arg_3 = PyUnicode_Join(mod_consts[19], tmp_string_concat_values_3);
        Py_DECREF(tmp_string_concat_values_3);
        if (tmp_make_exception_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_36e0ce6b99b9f9f494f91e02f4bdd4a8->m_frame.f_lineno = 244;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_KeyError, tmp_make_exception_arg_3);
        Py_DECREF(tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_3 == NULL));
        exception_type = tmp_raise_type_3;
        exception_lineno = 244;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_14 = par_self;
        tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[26]);
        if (tmp_expression_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_subscript_value_2 = par_key;
        tmp_expression_value_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_13);
        if (tmp_expression_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[28]);
        Py_DECREF(tmp_expression_value_12);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_ndim == NULL);
        var_ndim = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_15 = par_self;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[41]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_kw_call_arg_value_0_1 = par_key;
        CHECK_OBJECT(var_ndim);
        tmp_kw_call_dict_value_0_1 = var_ndim;
        frame_36e0ce6b99b9f9f494f91e02f4bdd4a8->m_frame.f_lineno = 246;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts[44]);
        }

        Py_DECREF(tmp_called_value_3);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_2:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_36e0ce6b99b9f9f494f91e02f4bdd4a8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_36e0ce6b99b9f9f494f91e02f4bdd4a8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_36e0ce6b99b9f9f494f91e02f4bdd4a8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_36e0ce6b99b9f9f494f91e02f4bdd4a8,
        type_description_1,
        par_self,
        par_key,
        var_bad_keys,
        var_ndim
    );


    // Release cached frame if used for exception.
    if (frame_36e0ce6b99b9f9f494f91e02f4bdd4a8 == cache_frame_36e0ce6b99b9f9f494f91e02f4bdd4a8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_36e0ce6b99b9f9f494f91e02f4bdd4a8);
        cache_frame_36e0ce6b99b9f9f494f91e02f4bdd4a8 = NULL;
    }

    assertFrameObject(frame_36e0ce6b99b9f9f494f91e02f4bdd4a8);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_ndim);
    var_ndim = NULL;
    goto function_return_exit;
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

    Py_XDECREF(var_bad_keys);
    var_bad_keys = NULL;
    Py_XDECREF(var_ndim);
    var_ndim = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

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


static PyObject *impl_pandas$core$base$$$function__12__gotitem(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_key = python_pars[1];
    PyObject *par_ndim = python_pars[2];
    PyObject *par_subset = python_pars[3];
    struct Nuitka_FrameObject *frame_f23edd93916d977a408b24886d73e9d6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f23edd93916d977a408b24886d73e9d6 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f23edd93916d977a408b24886d73e9d6)) {
        Py_XDECREF(cache_frame_f23edd93916d977a408b24886d73e9d6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f23edd93916d977a408b24886d73e9d6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f23edd93916d977a408b24886d73e9d6 = MAKE_FUNCTION_FRAME(tstate, codeobj_f23edd93916d977a408b24886d73e9d6, module_pandas$core$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f23edd93916d977a408b24886d73e9d6->m_type_description == NULL);
    frame_f23edd93916d977a408b24886d73e9d6 = cache_frame_f23edd93916d977a408b24886d73e9d6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f23edd93916d977a408b24886d73e9d6);
    assert(Py_REFCNT(frame_f23edd93916d977a408b24886d73e9d6) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        frame_f23edd93916d977a408b24886d73e9d6->m_frame.f_lineno = 261;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_raise_type_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 261;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f23edd93916d977a408b24886d73e9d6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f23edd93916d977a408b24886d73e9d6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f23edd93916d977a408b24886d73e9d6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f23edd93916d977a408b24886d73e9d6,
        type_description_1,
        par_self,
        par_key,
        par_ndim,
        par_subset
    );


    // Release cached frame if used for exception.
    if (frame_f23edd93916d977a408b24886d73e9d6 == cache_frame_f23edd93916d977a408b24886d73e9d6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f23edd93916d977a408b24886d73e9d6);
        cache_frame_f23edd93916d977a408b24886d73e9d6 = NULL;
    }

    assertFrameObject(frame_f23edd93916d977a408b24886d73e9d6);

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
    CHECK_OBJECT(par_ndim);
    Py_DECREF(par_ndim);
    CHECK_OBJECT(par_subset);
    Py_DECREF(par_subset);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_pandas$core$base$$$function__13__infer_selection(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_key = python_pars[1];
    PyObject *par_subset = python_pars[2];
    PyObject *var_selection = NULL;
    struct Nuitka_FrameObject *frame_5f35e44b40425f707b16db1e95d11a28;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_5f35e44b40425f707b16db1e95d11a28 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        assert(var_selection == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_selection = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_5f35e44b40425f707b16db1e95d11a28)) {
        Py_XDECREF(cache_frame_5f35e44b40425f707b16db1e95d11a28);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5f35e44b40425f707b16db1e95d11a28 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5f35e44b40425f707b16db1e95d11a28 = MAKE_FUNCTION_FRAME(tstate, codeobj_5f35e44b40425f707b16db1e95d11a28, module_pandas$core$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5f35e44b40425f707b16db1e95d11a28->m_type_description == NULL);
    frame_5f35e44b40425f707b16db1e95d11a28 = cache_frame_5f35e44b40425f707b16db1e95d11a28;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_5f35e44b40425f707b16db1e95d11a28);
    assert(Py_REFCNT(frame_5f35e44b40425f707b16db1e95d11a28) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_subset);
        tmp_expression_value_1 = par_subset;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[28]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[47];
        tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_args_element_value_1 = par_key;
        frame_5f35e44b40425f707b16db1e95d11a28->m_frame.f_lineno = 271;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[10], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 271;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(par_key);
        tmp_cmp_expr_left_2 = par_key;
        CHECK_OBJECT(par_subset);
        tmp_cmp_expr_right_2 = par_subset;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_or_left_value_1 = tmp_and_left_value_2;
        and_end_2:;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_args_element_value_2 = par_key;
        frame_5f35e44b40425f707b16db1e95d11a28->m_frame.f_lineno = 271;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[49], tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 271;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_2);
        tmp_and_right_value_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_and_right_value_1 = tmp_or_left_value_1;
        or_end_1:;
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        if (par_key == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[50]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 273;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_2 = par_key;
        {
            PyObject *old = var_selection;
            assert(old != NULL);
            var_selection = tmp_assign_source_2;
            Py_INCREF(var_selection);
            Py_DECREF(old);
        }

    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_3;
        nuitka_bool tmp_and_left_value_3;
        nuitka_bool tmp_and_right_value_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_2;
        int tmp_and_left_truth_4;
        nuitka_bool tmp_and_left_value_4;
        nuitka_bool tmp_and_right_value_4;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_3;
        int tmp_truth_name_3;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_subset);
        tmp_expression_value_2 = par_subset;
        tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[28]);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = mod_consts[51];
        tmp_and_left_value_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_and_left_value_3 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_3 == 1) {
            goto and_right_3;
        } else {
            goto and_left_3;
        }
        and_right_3:;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[10]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (par_key == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[50]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 274;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_3 = par_key;
        frame_5f35e44b40425f707b16db1e95d11a28->m_frame.f_lineno = 274;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_3);
        if (tmp_truth_name_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_3);

            exception_lineno = 274;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_4 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_3);
        tmp_and_left_truth_4 = tmp_and_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_4 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_4 == 1) {
            goto and_right_4;
        } else {
            goto and_left_4;
        }
        and_right_4:;
        if (par_key == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[50]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 274;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_4 = par_key;
        CHECK_OBJECT(par_subset);
        tmp_expression_value_4 = par_subset;
        tmp_cmp_expr_right_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[52]);
        if (tmp_cmp_expr_right_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_right_4);
        if (tmp_and_right_value_4 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_3 = tmp_and_right_value_4;
        goto and_end_4;
        and_left_4:;
        tmp_and_right_value_3 = tmp_and_left_value_4;
        and_end_4:;
        tmp_condition_result_2 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_condition_result_2 = tmp_and_left_value_3;
        and_end_3:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_3;
        if (par_key == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[50]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 275;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_3 = par_key;
        {
            PyObject *old = var_selection;
            assert(old != NULL);
            var_selection = tmp_assign_source_3;
            Py_INCREF(var_selection);
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5f35e44b40425f707b16db1e95d11a28, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5f35e44b40425f707b16db1e95d11a28->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5f35e44b40425f707b16db1e95d11a28, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5f35e44b40425f707b16db1e95d11a28,
        type_description_1,
        par_self,
        par_key,
        par_subset,
        var_selection
    );


    // Release cached frame if used for exception.
    if (frame_5f35e44b40425f707b16db1e95d11a28 == cache_frame_5f35e44b40425f707b16db1e95d11a28) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5f35e44b40425f707b16db1e95d11a28);
        cache_frame_5f35e44b40425f707b16db1e95d11a28 = NULL;
    }

    assertFrameObject(frame_5f35e44b40425f707b16db1e95d11a28);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_selection);
    tmp_return_value = var_selection;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_selection);
    Py_DECREF(var_selection);
    var_selection = NULL;
    goto function_return_exit;
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

    CHECK_OBJECT(var_selection);
    Py_DECREF(var_selection);
    var_selection = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_subset);
    Py_DECREF(par_subset);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_subset);
    Py_DECREF(par_subset);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$base$$$function__14_aggregate(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_func = python_pars[1];
    PyObject *par_args = python_pars[2];
    PyObject *par_kwargs = python_pars[3];
    struct Nuitka_FrameObject *frame_66257adad2909aa4883d679e0b310ed7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_66257adad2909aa4883d679e0b310ed7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_66257adad2909aa4883d679e0b310ed7)) {
        Py_XDECREF(cache_frame_66257adad2909aa4883d679e0b310ed7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_66257adad2909aa4883d679e0b310ed7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_66257adad2909aa4883d679e0b310ed7 = MAKE_FUNCTION_FRAME(tstate, codeobj_66257adad2909aa4883d679e0b310ed7, module_pandas$core$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_66257adad2909aa4883d679e0b310ed7->m_type_description == NULL);
    frame_66257adad2909aa4883d679e0b310ed7 = cache_frame_66257adad2909aa4883d679e0b310ed7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_66257adad2909aa4883d679e0b310ed7);
    assert(Py_REFCNT(frame_66257adad2909aa4883d679e0b310ed7) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        frame_66257adad2909aa4883d679e0b310ed7->m_frame.f_lineno = 279;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_raise_type_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 279;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_66257adad2909aa4883d679e0b310ed7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_66257adad2909aa4883d679e0b310ed7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_66257adad2909aa4883d679e0b310ed7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_66257adad2909aa4883d679e0b310ed7,
        type_description_1,
        par_self,
        par_func,
        par_args,
        par_kwargs
    );


    // Release cached frame if used for exception.
    if (frame_66257adad2909aa4883d679e0b310ed7 == cache_frame_66257adad2909aa4883d679e0b310ed7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_66257adad2909aa4883d679e0b310ed7);
        cache_frame_66257adad2909aa4883d679e0b310ed7 = NULL;
    }

    assertFrameObject(frame_66257adad2909aa4883d679e0b310ed7);

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
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_pandas$core$base$$$function__15_dtype(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_ae704039fef198ff4cd6b771492f5ebe;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ae704039fef198ff4cd6b771492f5ebe = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ae704039fef198ff4cd6b771492f5ebe)) {
        Py_XDECREF(cache_frame_ae704039fef198ff4cd6b771492f5ebe);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ae704039fef198ff4cd6b771492f5ebe == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ae704039fef198ff4cd6b771492f5ebe = MAKE_FUNCTION_FRAME(tstate, codeobj_ae704039fef198ff4cd6b771492f5ebe, module_pandas$core$base, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ae704039fef198ff4cd6b771492f5ebe->m_type_description == NULL);
    frame_ae704039fef198ff4cd6b771492f5ebe = cache_frame_ae704039fef198ff4cd6b771492f5ebe;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_ae704039fef198ff4cd6b771492f5ebe);
    assert(Py_REFCNT(frame_ae704039fef198ff4cd6b771492f5ebe) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        frame_ae704039fef198ff4cd6b771492f5ebe->m_frame.f_lineno = 298;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_raise_type_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 298;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ae704039fef198ff4cd6b771492f5ebe, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ae704039fef198ff4cd6b771492f5ebe->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ae704039fef198ff4cd6b771492f5ebe, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ae704039fef198ff4cd6b771492f5ebe,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_ae704039fef198ff4cd6b771492f5ebe == cache_frame_ae704039fef198ff4cd6b771492f5ebe) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ae704039fef198ff4cd6b771492f5ebe);
        cache_frame_ae704039fef198ff4cd6b771492f5ebe = NULL;
    }

    assertFrameObject(frame_ae704039fef198ff4cd6b771492f5ebe);

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
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_pandas$core$base$$$function__16__values(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_8d6e325b1901f462bd90baa33f5a8e2f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8d6e325b1901f462bd90baa33f5a8e2f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8d6e325b1901f462bd90baa33f5a8e2f)) {
        Py_XDECREF(cache_frame_8d6e325b1901f462bd90baa33f5a8e2f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8d6e325b1901f462bd90baa33f5a8e2f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8d6e325b1901f462bd90baa33f5a8e2f = MAKE_FUNCTION_FRAME(tstate, codeobj_8d6e325b1901f462bd90baa33f5a8e2f, module_pandas$core$base, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8d6e325b1901f462bd90baa33f5a8e2f->m_type_description == NULL);
    frame_8d6e325b1901f462bd90baa33f5a8e2f = cache_frame_8d6e325b1901f462bd90baa33f5a8e2f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_8d6e325b1901f462bd90baa33f5a8e2f);
    assert(Py_REFCNT(frame_8d6e325b1901f462bd90baa33f5a8e2f) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        frame_8d6e325b1901f462bd90baa33f5a8e2f->m_frame.f_lineno = 303;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_raise_type_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 303;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8d6e325b1901f462bd90baa33f5a8e2f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8d6e325b1901f462bd90baa33f5a8e2f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8d6e325b1901f462bd90baa33f5a8e2f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8d6e325b1901f462bd90baa33f5a8e2f,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_8d6e325b1901f462bd90baa33f5a8e2f == cache_frame_8d6e325b1901f462bd90baa33f5a8e2f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8d6e325b1901f462bd90baa33f5a8e2f);
        cache_frame_8d6e325b1901f462bd90baa33f5a8e2f = NULL;
    }

    assertFrameObject(frame_8d6e325b1901f462bd90baa33f5a8e2f);

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
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_pandas$core$base$$$function__17_transpose(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_args = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    struct Nuitka_FrameObject *frame_c9545f7b9e30a3b63151f01a9e1378e1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c9545f7b9e30a3b63151f01a9e1378e1 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c9545f7b9e30a3b63151f01a9e1378e1)) {
        Py_XDECREF(cache_frame_c9545f7b9e30a3b63151f01a9e1378e1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c9545f7b9e30a3b63151f01a9e1378e1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c9545f7b9e30a3b63151f01a9e1378e1 = MAKE_FUNCTION_FRAME(tstate, codeobj_c9545f7b9e30a3b63151f01a9e1378e1, module_pandas$core$base, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c9545f7b9e30a3b63151f01a9e1378e1->m_type_description == NULL);
    frame_c9545f7b9e30a3b63151f01a9e1378e1 = cache_frame_c9545f7b9e30a3b63151f01a9e1378e1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_c9545f7b9e30a3b63151f01a9e1378e1);
    assert(Py_REFCNT(frame_c9545f7b9e30a3b63151f01a9e1378e1) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_args);
        tmp_args_element_value_1 = par_args;
        CHECK_OBJECT(par_kwargs);
        tmp_args_element_value_2 = par_kwargs;
        frame_c9545f7b9e30a3b63151f01a9e1378e1->m_frame.f_lineno = 314;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_1,
                mod_consts[55],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c9545f7b9e30a3b63151f01a9e1378e1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c9545f7b9e30a3b63151f01a9e1378e1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c9545f7b9e30a3b63151f01a9e1378e1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c9545f7b9e30a3b63151f01a9e1378e1,
        type_description_1,
        par_self,
        par_args,
        par_kwargs
    );


    // Release cached frame if used for exception.
    if (frame_c9545f7b9e30a3b63151f01a9e1378e1 == cache_frame_c9545f7b9e30a3b63151f01a9e1378e1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c9545f7b9e30a3b63151f01a9e1378e1);
        cache_frame_c9545f7b9e30a3b63151f01a9e1378e1 = NULL;
    }

    assertFrameObject(frame_c9545f7b9e30a3b63151f01a9e1378e1);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    CHECK_OBJECT(par_self);
    tmp_return_value = par_self;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$base$$$function__18_shape(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_f9560298a27a17661557afccda5e5644;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f9560298a27a17661557afccda5e5644 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f9560298a27a17661557afccda5e5644)) {
        Py_XDECREF(cache_frame_f9560298a27a17661557afccda5e5644);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f9560298a27a17661557afccda5e5644 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f9560298a27a17661557afccda5e5644 = MAKE_FUNCTION_FRAME(tstate, codeobj_f9560298a27a17661557afccda5e5644, module_pandas$core$base, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f9560298a27a17661557afccda5e5644->m_type_description == NULL);
    frame_f9560298a27a17661557afccda5e5644 = cache_frame_f9560298a27a17661557afccda5e5644;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f9560298a27a17661557afccda5e5644);
    assert(Py_REFCNT(frame_f9560298a27a17661557afccda5e5644) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[57]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[58]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f9560298a27a17661557afccda5e5644, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f9560298a27a17661557afccda5e5644->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f9560298a27a17661557afccda5e5644, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f9560298a27a17661557afccda5e5644,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_f9560298a27a17661557afccda5e5644 == cache_frame_f9560298a27a17661557afccda5e5644) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f9560298a27a17661557afccda5e5644);
        cache_frame_f9560298a27a17661557afccda5e5644 = NULL;
    }

    assertFrameObject(frame_f9560298a27a17661557afccda5e5644);

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
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$base$$$function__19___len__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_3a98811e259b5edac9af89167ca369f4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3a98811e259b5edac9af89167ca369f4 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3a98811e259b5edac9af89167ca369f4)) {
        Py_XDECREF(cache_frame_3a98811e259b5edac9af89167ca369f4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3a98811e259b5edac9af89167ca369f4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3a98811e259b5edac9af89167ca369f4 = MAKE_FUNCTION_FRAME(tstate, codeobj_3a98811e259b5edac9af89167ca369f4, module_pandas$core$base, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3a98811e259b5edac9af89167ca369f4->m_type_description == NULL);
    frame_3a98811e259b5edac9af89167ca369f4 = cache_frame_3a98811e259b5edac9af89167ca369f4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_3a98811e259b5edac9af89167ca369f4);
    assert(Py_REFCNT(frame_3a98811e259b5edac9af89167ca369f4) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        frame_3a98811e259b5edac9af89167ca369f4->m_frame.f_lineno = 361;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_raise_type_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 361;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3a98811e259b5edac9af89167ca369f4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3a98811e259b5edac9af89167ca369f4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3a98811e259b5edac9af89167ca369f4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3a98811e259b5edac9af89167ca369f4,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_3a98811e259b5edac9af89167ca369f4 == cache_frame_3a98811e259b5edac9af89167ca369f4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3a98811e259b5edac9af89167ca369f4);
        cache_frame_3a98811e259b5edac9af89167ca369f4 = NULL;
    }

    assertFrameObject(frame_3a98811e259b5edac9af89167ca369f4);

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
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_pandas$core$base$$$function__21_item(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_3de1389174140c0e5ef72d5331e86da7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_3de1389174140c0e5ef72d5331e86da7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3de1389174140c0e5ef72d5331e86da7)) {
        Py_XDECREF(cache_frame_3de1389174140c0e5ef72d5331e86da7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3de1389174140c0e5ef72d5331e86da7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3de1389174140c0e5ef72d5331e86da7 = MAKE_FUNCTION_FRAME(tstate, codeobj_3de1389174140c0e5ef72d5331e86da7, module_pandas$core$base, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3de1389174140c0e5ef72d5331e86da7->m_type_description == NULL);
    frame_3de1389174140c0e5ef72d5331e86da7 = cache_frame_3de1389174140c0e5ef72d5331e86da7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_3de1389174140c0e5ef72d5331e86da7);
    assert(Py_REFCNT(frame_3de1389174140c0e5ef72d5331e86da7) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        nuitka_digit tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_self);
        tmp_len_arg_1 = par_self;
        tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = 1;
        tmp_condition_result_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_value_value_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_self);
        tmp_iter_arg_1 = par_self;
        tmp_value_value_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        if (tmp_value_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = ITERATOR_NEXT(tmp_value_value_1);
        Py_DECREF(tmp_value_value_1);
        if (tmp_return_value == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "o";
            exception_lineno = 417;
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[60];
        frame_3de1389174140c0e5ef72d5331e86da7->m_frame.f_lineno = 418;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 418;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3de1389174140c0e5ef72d5331e86da7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3de1389174140c0e5ef72d5331e86da7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3de1389174140c0e5ef72d5331e86da7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3de1389174140c0e5ef72d5331e86da7,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_3de1389174140c0e5ef72d5331e86da7 == cache_frame_3de1389174140c0e5ef72d5331e86da7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3de1389174140c0e5ef72d5331e86da7);
        cache_frame_3de1389174140c0e5ef72d5331e86da7 = NULL;
    }

    assertFrameObject(frame_3de1389174140c0e5ef72d5331e86da7);

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
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$base$$$function__22_nbytes(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_c1e09e0b70f166ae4e210e4b56a3f7a9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c1e09e0b70f166ae4e210e4b56a3f7a9 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c1e09e0b70f166ae4e210e4b56a3f7a9)) {
        Py_XDECREF(cache_frame_c1e09e0b70f166ae4e210e4b56a3f7a9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c1e09e0b70f166ae4e210e4b56a3f7a9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c1e09e0b70f166ae4e210e4b56a3f7a9 = MAKE_FUNCTION_FRAME(tstate, codeobj_c1e09e0b70f166ae4e210e4b56a3f7a9, module_pandas$core$base, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c1e09e0b70f166ae4e210e4b56a3f7a9->m_type_description == NULL);
    frame_c1e09e0b70f166ae4e210e4b56a3f7a9 = cache_frame_c1e09e0b70f166ae4e210e4b56a3f7a9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_c1e09e0b70f166ae4e210e4b56a3f7a9);
    assert(Py_REFCNT(frame_c1e09e0b70f166ae4e210e4b56a3f7a9) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[57]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[62]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c1e09e0b70f166ae4e210e4b56a3f7a9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c1e09e0b70f166ae4e210e4b56a3f7a9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c1e09e0b70f166ae4e210e4b56a3f7a9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c1e09e0b70f166ae4e210e4b56a3f7a9,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_c1e09e0b70f166ae4e210e4b56a3f7a9 == cache_frame_c1e09e0b70f166ae4e210e4b56a3f7a9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c1e09e0b70f166ae4e210e4b56a3f7a9);
        cache_frame_c1e09e0b70f166ae4e210e4b56a3f7a9 = NULL;
    }

    assertFrameObject(frame_c1e09e0b70f166ae4e210e4b56a3f7a9);

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
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$base$$$function__23_size(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_68dd194fadb2c9025042006a8719577f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_68dd194fadb2c9025042006a8719577f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_68dd194fadb2c9025042006a8719577f)) {
        Py_XDECREF(cache_frame_68dd194fadb2c9025042006a8719577f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_68dd194fadb2c9025042006a8719577f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_68dd194fadb2c9025042006a8719577f = MAKE_FUNCTION_FRAME(tstate, codeobj_68dd194fadb2c9025042006a8719577f, module_pandas$core$base, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_68dd194fadb2c9025042006a8719577f->m_type_description == NULL);
    frame_68dd194fadb2c9025042006a8719577f = cache_frame_68dd194fadb2c9025042006a8719577f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_68dd194fadb2c9025042006a8719577f);
    assert(Py_REFCNT(frame_68dd194fadb2c9025042006a8719577f) == 2);

    // Framed code:
    {
        PyObject *tmp_len_arg_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[57]);
        if (tmp_len_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BUILTIN_LEN(tstate, tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_68dd194fadb2c9025042006a8719577f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_68dd194fadb2c9025042006a8719577f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_68dd194fadb2c9025042006a8719577f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_68dd194fadb2c9025042006a8719577f,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_68dd194fadb2c9025042006a8719577f == cache_frame_68dd194fadb2c9025042006a8719577f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_68dd194fadb2c9025042006a8719577f);
        cache_frame_68dd194fadb2c9025042006a8719577f = NULL;
    }

    assertFrameObject(frame_68dd194fadb2c9025042006a8719577f);

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
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$base$$$function__24_array(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_7cd4c0ece5bb3c20e41b554c030e8a69;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7cd4c0ece5bb3c20e41b554c030e8a69 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7cd4c0ece5bb3c20e41b554c030e8a69)) {
        Py_XDECREF(cache_frame_7cd4c0ece5bb3c20e41b554c030e8a69);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7cd4c0ece5bb3c20e41b554c030e8a69 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7cd4c0ece5bb3c20e41b554c030e8a69 = MAKE_FUNCTION_FRAME(tstate, codeobj_7cd4c0ece5bb3c20e41b554c030e8a69, module_pandas$core$base, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7cd4c0ece5bb3c20e41b554c030e8a69->m_type_description == NULL);
    frame_7cd4c0ece5bb3c20e41b554c030e8a69 = cache_frame_7cd4c0ece5bb3c20e41b554c030e8a69;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_7cd4c0ece5bb3c20e41b554c030e8a69);
    assert(Py_REFCNT(frame_7cd4c0ece5bb3c20e41b554c030e8a69) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        frame_7cd4c0ece5bb3c20e41b554c030e8a69->m_frame.f_lineno = 539;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_raise_type_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 539;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7cd4c0ece5bb3c20e41b554c030e8a69, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7cd4c0ece5bb3c20e41b554c030e8a69->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7cd4c0ece5bb3c20e41b554c030e8a69, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7cd4c0ece5bb3c20e41b554c030e8a69,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_7cd4c0ece5bb3c20e41b554c030e8a69 == cache_frame_7cd4c0ece5bb3c20e41b554c030e8a69) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7cd4c0ece5bb3c20e41b554c030e8a69);
        cache_frame_7cd4c0ece5bb3c20e41b554c030e8a69 = NULL;
    }

    assertFrameObject(frame_7cd4c0ece5bb3c20e41b554c030e8a69);

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
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_pandas$core$base$$$function__25_to_numpy(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_dtype = python_pars[1];
    PyObject *par_copy = python_pars[2];
    PyObject *par_na_value = python_pars[3];
    PyObject *par_kwargs = python_pars[4];
    PyObject *var_bad_keys = NULL;
    PyObject *var_fillna = NULL;
    PyObject *var_values = NULL;
    PyObject *var_result = NULL;
    struct Nuitka_FrameObject *frame_f187c567ad9f02ebc2ed987976b194a6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_f187c567ad9f02ebc2ed987976b194a6 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f187c567ad9f02ebc2ed987976b194a6)) {
        Py_XDECREF(cache_frame_f187c567ad9f02ebc2ed987976b194a6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f187c567ad9f02ebc2ed987976b194a6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f187c567ad9f02ebc2ed987976b194a6 = MAKE_FUNCTION_FRAME(tstate, codeobj_f187c567ad9f02ebc2ed987976b194a6, module_pandas$core$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f187c567ad9f02ebc2ed987976b194a6->m_type_description == NULL);
    frame_f187c567ad9f02ebc2ed987976b194a6 = cache_frame_f187c567ad9f02ebc2ed987976b194a6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f187c567ad9f02ebc2ed987976b194a6);
    assert(Py_REFCNT(frame_f187c567ad9f02ebc2ed987976b194a6) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_isinstance_inst_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[66]);
        if (tmp_isinstance_inst_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 636;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_isinstance_inst_1);

            exception_lineno = 636;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_inst_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 636;
            type_description_1 = "ooooooooo";
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
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg4_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[68]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 637;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[69]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 637;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dtype);
        tmp_tuple_element_1 = par_dtype;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        tmp_dict_key_1 = mod_consts[70];
        CHECK_OBJECT(par_copy);
        tmp_dict_value_1 = par_copy;
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[71];
        CHECK_OBJECT(par_na_value);
        tmp_dict_value_1 = par_na_value;
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg4_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_return_value = impl___main__$$$function__8_complex_call_helper_pos_keywords_star_dict(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 637;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        CHECK_OBJECT(par_kwargs);
        tmp_condition_result_2 = CHECK_IF_TRUE(par_kwargs) == 1;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_value_value_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_dict_arg_1;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_1 = par_kwargs;
        tmp_iter_arg_1 = DICT_ITERKEYS(tmp_dict_arg_1);
        assert(!(tmp_iter_arg_1 == NULL));
        tmp_value_value_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_value_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 639;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_value_value_1);
        Py_DECREF(tmp_value_value_1);
        if (tmp_assign_source_1 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 639;
            goto frame_exception_exit_1;
        }
        assert(var_bad_keys == NULL);
        var_bad_keys = tmp_assign_source_1;
    }
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_2;
        tmp_tuple_element_2 = mod_consts[72];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(var_bad_keys);
            tmp_format_value_1 = var_bad_keys;
            tmp_format_spec_1 = mod_consts[19];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 641;
                type_description_1 = "ooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[20];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[19], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 641;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_f187c567ad9f02ebc2ed987976b194a6->m_frame.f_lineno = 640;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 640;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    branch_end_1:;
    {
        PyObject *tmp_assign_source_2;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_operand_value_1;
        int tmp_and_left_truth_2;
        PyObject *tmp_and_left_value_2;
        PyObject *tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(par_na_value);
        tmp_cmp_expr_left_1 = par_na_value;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 645;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[73]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 645;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? Py_True : Py_False;
        Py_DECREF(tmp_cmp_expr_right_1);
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_na_value);
        tmp_cmp_expr_left_2 = par_na_value;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 647;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[74]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 647;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? Py_True : Py_False;
        Py_DECREF(tmp_cmp_expr_right_2);
        tmp_and_left_truth_2 = CHECK_IF_TRUE(tmp_and_left_value_2);
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 647;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[75]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 647;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[66]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 647;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 647;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[76]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 647;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_f187c567ad9f02ebc2ed987976b194a6->m_frame.f_lineno = 647;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_and_right_value_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_and_right_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 647;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        Py_INCREF(tmp_and_left_value_2);
        tmp_operand_value_1 = tmp_and_left_value_2;
        and_end_2:;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 647;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res == 0) ? Py_True : Py_False;
        tmp_assign_source_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_assign_source_2 = tmp_and_left_value_1;
        and_end_1:;
        assert(var_fillna == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_fillna = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[57]);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 650;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_values == NULL);
        var_values = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_fillna);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_fillna);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 651;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[77]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 652;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_values);
        tmp_args_element_value_3 = var_values;
        CHECK_OBJECT(par_na_value);
        tmp_args_element_value_4 = par_na_value;
        frame_f187c567ad9f02ebc2ed987976b194a6->m_frame.f_lineno = 652;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        if (tmp_operand_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 652;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 652;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 656;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[78]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 656;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_values);
        tmp_kw_call_arg_value_0_1 = var_values;
        CHECK_OBJECT(par_dtype);
        tmp_kw_call_dict_value_0_1 = par_dtype;
        frame_f187c567ad9f02ebc2ed987976b194a6->m_frame.f_lineno = 656;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts[79]);
        }

        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 656;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_values;
            assert(old != NULL);
            var_values = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(var_values);
        tmp_expression_value_11 = var_values;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[70]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 658;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_f187c567ad9f02ebc2ed987976b194a6->m_frame.f_lineno = 658;
        tmp_assign_source_5 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
        Py_DECREF(tmp_called_value_4);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 658;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_values;
            assert(old != NULL);
            var_values = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    branch_end_4:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(par_na_value);
        tmp_ass_subvalue_1 = par_na_value;
        CHECK_OBJECT(var_values);
        tmp_ass_subscribed_1 = var_values;
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 660;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[80]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 660;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 660;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_6 = par_self;
        frame_f187c567ad9f02ebc2ed987976b194a6->m_frame.f_lineno = 660;
        tmp_args_element_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_6);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 660;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_f187c567ad9f02ebc2ed987976b194a6->m_frame.f_lineno = 660;
        tmp_ass_subscript_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_ass_subscript_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 660;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscript_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 660;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 662;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[78]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 662;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_values == NULL) {
            Py_DECREF(tmp_called_value_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[82]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 662;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_0_2 = var_values;
        if (par_dtype == NULL) {
            Py_DECREF(tmp_called_value_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[66]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 662;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_dict_value_0_2 = par_dtype;
        frame_f187c567ad9f02ebc2ed987976b194a6->m_frame.f_lineno = 662;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_7, args, kw_values, mod_consts[79]);
        }

        Py_DECREF(tmp_called_value_7);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 662;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_6;
    }
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        int tmp_and_left_truth_3;
        nuitka_bool tmp_and_left_value_3;
        nuitka_bool tmp_and_right_value_3;
        int tmp_truth_name_2;
        PyObject *tmp_operand_value_3;
        int tmp_and_left_truth_4;
        nuitka_bool tmp_and_left_value_4;
        nuitka_bool tmp_and_right_value_4;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_called_value_8;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_3;
        CHECK_OBJECT(par_copy);
        tmp_truth_name_2 = CHECK_IF_TRUE(par_copy);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 664;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 664;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_3 == 1) {
            goto and_right_3;
        } else {
            goto and_left_3;
        }
        and_right_3:;
        CHECK_OBJECT(var_fillna);
        tmp_operand_value_3 = var_fillna;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 664;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_3 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_value_1 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_or_left_value_1 = tmp_and_left_value_3;
        and_end_3:;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 664;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_copy);
        tmp_operand_value_4 = par_copy;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 664;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_4 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_4 = tmp_and_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_4 == 1) {
            goto and_right_4;
        } else {
            goto and_left_4;
        }
        and_right_4:;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 664;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_f187c567ad9f02ebc2ed987976b194a6->m_frame.f_lineno = 664;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_8);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 664;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 664;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_4 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        tmp_or_right_value_1 = tmp_and_right_value_4;
        goto and_end_4;
        and_left_4:;
        tmp_or_right_value_1 = tmp_and_left_value_4;
        and_end_4:;
        tmp_condition_result_5 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_5 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_subscript_value_2;
        int tmp_truth_name_4;
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 665;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[84]);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 665;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_16 = par_self;
        tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[57]);
        if (tmp_expression_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 665;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[85];
        tmp_args_element_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_15, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_15);
        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 665;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_result);
        tmp_expression_value_17 = var_result;
        tmp_subscript_value_2 = mod_consts[85];
        tmp_args_element_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_17, tmp_subscript_value_2);
        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_args_element_value_7);

            exception_lineno = 665;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_f187c567ad9f02ebc2ed987976b194a6->m_frame.f_lineno = 665;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_9, call_args);
        }

        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_7);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 665;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_4 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 665;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_2);
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        nuitka_bool tmp_condition_result_7;
        int tmp_and_left_truth_5;
        nuitka_bool tmp_and_left_value_5;
        nuitka_bool tmp_and_right_value_5;
        PyObject *tmp_called_value_10;
        PyObject *tmp_call_result_3;
        int tmp_truth_name_5;
        PyObject *tmp_operand_value_5;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 667;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_f187c567ad9f02ebc2ed987976b194a6->m_frame.f_lineno = 667;
        tmp_call_result_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_10);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 667;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_call_result_3);
        if (tmp_truth_name_5 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_3);

            exception_lineno = 667;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_5 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_3);
        tmp_and_left_truth_5 = tmp_and_left_value_5 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_5 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 667;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_5 == 1) {
            goto and_right_5;
        } else {
            goto and_left_5;
        }
        and_right_5:;
        CHECK_OBJECT(par_copy);
        tmp_operand_value_5 = par_copy;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 667;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_5 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_7 = tmp_and_right_value_5;
        goto and_end_5;
        and_left_5:;
        tmp_condition_result_7 = tmp_and_left_value_5;
        and_end_5:;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(var_result);
        tmp_called_instance_1 = var_result;
        frame_f187c567ad9f02ebc2ed987976b194a6->m_frame.f_lineno = 668;
        tmp_assign_source_7 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[86]);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 668;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_result;
            assert(old != NULL);
            var_result = tmp_assign_source_7;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_expression_value_18;
        tmp_assattr_value_1 = Py_False;
        CHECK_OBJECT(var_result);
        tmp_expression_value_18 = var_result;
        tmp_assattr_target_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[87]);
        if (tmp_assattr_target_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 669;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[88], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_target_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 669;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_19;
        CHECK_OBJECT(var_result);
        tmp_expression_value_19 = var_result;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[70]);
        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 671;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_f187c567ad9f02ebc2ed987976b194a6->m_frame.f_lineno = 671;
        tmp_assign_source_8 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_11);
        Py_DECREF(tmp_called_value_11);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 671;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_result;
            assert(old != NULL);
            var_result = tmp_assign_source_8;
            Py_DECREF(old);
        }

    }
    branch_end_7:;
    branch_no_6:;
    branch_no_5:;
    if (var_result == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[89]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 673;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_result;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f187c567ad9f02ebc2ed987976b194a6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f187c567ad9f02ebc2ed987976b194a6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f187c567ad9f02ebc2ed987976b194a6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f187c567ad9f02ebc2ed987976b194a6,
        type_description_1,
        par_self,
        par_dtype,
        par_copy,
        par_na_value,
        par_kwargs,
        var_bad_keys,
        var_fillna,
        var_values,
        var_result
    );


    // Release cached frame if used for exception.
    if (frame_f187c567ad9f02ebc2ed987976b194a6 == cache_frame_f187c567ad9f02ebc2ed987976b194a6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f187c567ad9f02ebc2ed987976b194a6);
        cache_frame_f187c567ad9f02ebc2ed987976b194a6 = NULL;
    }

    assertFrameObject(frame_f187c567ad9f02ebc2ed987976b194a6);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_fillna);
    var_fillna = NULL;
    Py_XDECREF(var_values);
    var_values = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    goto function_return_exit;
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

    Py_XDECREF(var_bad_keys);
    var_bad_keys = NULL;
    Py_XDECREF(var_fillna);
    var_fillna = NULL;
    Py_XDECREF(var_values);
    var_values = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);
    CHECK_OBJECT(par_copy);
    Py_DECREF(par_copy);
    CHECK_OBJECT(par_na_value);
    Py_DECREF(par_na_value);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);
    CHECK_OBJECT(par_copy);
    Py_DECREF(par_copy);
    CHECK_OBJECT(par_na_value);
    Py_DECREF(par_na_value);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$base$$$function__26_empty(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_0a5e07b87d5b987922410c607225c9b4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_0a5e07b87d5b987922410c607225c9b4 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0a5e07b87d5b987922410c607225c9b4)) {
        Py_XDECREF(cache_frame_0a5e07b87d5b987922410c607225c9b4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0a5e07b87d5b987922410c607225c9b4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0a5e07b87d5b987922410c607225c9b4 = MAKE_FUNCTION_FRAME(tstate, codeobj_0a5e07b87d5b987922410c607225c9b4, module_pandas$core$base, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0a5e07b87d5b987922410c607225c9b4->m_type_description == NULL);
    frame_0a5e07b87d5b987922410c607225c9b4 = cache_frame_0a5e07b87d5b987922410c607225c9b4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_0a5e07b87d5b987922410c607225c9b4);
    assert(Py_REFCNT(frame_0a5e07b87d5b987922410c607225c9b4) == 2);

    // Framed code:
    {
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[91]);
        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 678;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 678;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res == 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0a5e07b87d5b987922410c607225c9b4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0a5e07b87d5b987922410c607225c9b4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0a5e07b87d5b987922410c607225c9b4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0a5e07b87d5b987922410c607225c9b4,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_0a5e07b87d5b987922410c607225c9b4 == cache_frame_0a5e07b87d5b987922410c607225c9b4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0a5e07b87d5b987922410c607225c9b4);
        cache_frame_0a5e07b87d5b987922410c607225c9b4 = NULL;
    }

    assertFrameObject(frame_0a5e07b87d5b987922410c607225c9b4);

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
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$base$$$function__27_argmax(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_axis = python_pars[1];
    PyObject *par_skipna = python_pars[2];
    PyObject *par_args = python_pars[3];
    PyObject *par_kwargs = python_pars[4];
    PyObject *var_delegate = NULL;
    PyObject *var_result = NULL;
    struct Nuitka_FrameObject *frame_6c68d086e802dd048245fd363eb0c91f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6c68d086e802dd048245fd363eb0c91f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6c68d086e802dd048245fd363eb0c91f)) {
        Py_XDECREF(cache_frame_6c68d086e802dd048245fd363eb0c91f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6c68d086e802dd048245fd363eb0c91f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6c68d086e802dd048245fd363eb0c91f = MAKE_FUNCTION_FRAME(tstate, codeobj_6c68d086e802dd048245fd363eb0c91f, module_pandas$core$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6c68d086e802dd048245fd363eb0c91f->m_type_description == NULL);
    frame_6c68d086e802dd048245fd363eb0c91f = cache_frame_6c68d086e802dd048245fd363eb0c91f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_6c68d086e802dd048245fd363eb0c91f);
    assert(Py_REFCNT(frame_6c68d086e802dd048245fd363eb0c91f) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[57]);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 734;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_delegate == NULL);
        var_delegate = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 735;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_axis);
        tmp_args_element_value_1 = par_axis;
        frame_6c68d086e802dd048245fd363eb0c91f->m_frame.f_lineno = 735;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[92], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 735;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 736;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_skipna);
        tmp_args_element_value_2 = par_skipna;
        CHECK_OBJECT(par_args);
        tmp_args_element_value_3 = par_args;
        CHECK_OBJECT(par_kwargs);
        tmp_args_element_value_4 = par_kwargs;
        frame_6c68d086e802dd048245fd363eb0c91f->m_frame.f_lineno = 736;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS3(
                tstate,
                tmp_called_instance_2,
                mod_consts[93],
                call_args
            );
        }

        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 736;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_skipna;
            assert(old != NULL);
            par_skipna = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(var_delegate);
        tmp_isinstance_inst_1 = var_delegate;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[94]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 738;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 738;
            type_description_1 = "ooooooo";
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
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_skipna);
        tmp_operand_value_1 = par_skipna;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 739;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_delegate);
        tmp_called_instance_4 = var_delegate;
        frame_6c68d086e802dd048245fd363eb0c91f->m_frame.f_lineno = 739;
        tmp_called_instance_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts[81]);
        if (tmp_called_instance_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 739;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_6c68d086e802dd048245fd363eb0c91f->m_frame.f_lineno = 739;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[95]);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 739;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 739;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_2);
        tmp_condition_result_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_2 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_3;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_called_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[96]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 740;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[97]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 740;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[98];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_type_arg_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_type_arg_1 = par_self;
            tmp_expression_value_3 = BUILTIN_TYPE1(tmp_type_arg_1);
            assert(!(tmp_expression_value_3 == NULL));
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[99]);
            Py_DECREF(tmp_expression_value_3);
            if (tmp_format_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 741;
                type_description_1 = "ooooooo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[19];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 741;
                type_description_1 = "ooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[100];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kw_call_arg_value_0_1 = PyUnicode_Join(mod_consts[19], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 741;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_1_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_kw_call_arg_value_1_1 == NULL)) {
            tmp_kw_call_arg_value_1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_kw_call_arg_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 744;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[102]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 745;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_6c68d086e802dd048245fd363eb0c91f->m_frame.f_lineno = 745;
        tmp_kw_call_dict_value_0_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 745;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_6c68d086e802dd048245fd363eb0c91f->m_frame.f_lineno = 740;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[103]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 740;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    tmp_return_value = mod_consts[104];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_called_instance_5;
        if (var_delegate == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[105]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 749;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_5 = var_delegate;
        frame_6c68d086e802dd048245fd363eb0c91f->m_frame.f_lineno = 749;
        tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts[106]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 749;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 751;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[108]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 751;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_delegate);
        tmp_kw_call_arg_value_0_2 = var_delegate;
        CHECK_OBJECT(par_skipna);
        tmp_kw_call_dict_value_0_2 = par_skipna;
        frame_6c68d086e802dd048245fd363eb0c91f->m_frame.f_lineno = 751;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts[109]);
        }

        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 751;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_result);
        tmp_cmp_expr_left_1 = var_result;
        tmp_cmp_expr_right_1 = mod_consts[104];
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 752;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_4;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_kw_call_dict_value_0_3;
        PyObject *tmp_called_value_5;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[96]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 753;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[97]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 753;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = mod_consts[98];
        tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_type_arg_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
            CHECK_OBJECT(par_self);
            tmp_type_arg_2 = par_self;
            tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_6 == NULL));
            tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[99]);
            Py_DECREF(tmp_expression_value_6);
            if (tmp_format_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 754;
                type_description_1 = "ooooooo";
                goto tuple_build_exception_2;
            }
            tmp_format_spec_2 = mod_consts[19];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 754;
                type_description_1 = "ooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[100];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_string_concat_values_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_kw_call_arg_value_0_3 = PyUnicode_Join(mod_consts[19], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_kw_call_arg_value_0_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 754;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_1_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_kw_call_arg_value_1_2 == NULL)) {
            tmp_kw_call_arg_value_1_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_kw_call_arg_value_1_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_arg_value_0_3);

            exception_lineno = 757;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[102]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_arg_value_0_3);

            exception_lineno = 758;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_6c68d086e802dd048245fd363eb0c91f->m_frame.f_lineno = 758;
        tmp_kw_call_dict_value_0_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_5);
        if (tmp_kw_call_dict_value_0_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_arg_value_0_3);

            exception_lineno = 758;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_6c68d086e802dd048245fd363eb0c91f->m_frame.f_lineno = 753;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_3};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tstate, tmp_called_value_4, args, kw_values, mod_consts[103]);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_kw_call_arg_value_0_3);
        Py_DECREF(tmp_kw_call_dict_value_0_3);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 753;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_3:;
    CHECK_OBJECT(var_result);
    tmp_return_value = var_result;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6c68d086e802dd048245fd363eb0c91f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6c68d086e802dd048245fd363eb0c91f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6c68d086e802dd048245fd363eb0c91f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6c68d086e802dd048245fd363eb0c91f,
        type_description_1,
        par_self,
        par_axis,
        par_skipna,
        par_args,
        par_kwargs,
        var_delegate,
        var_result
    );


    // Release cached frame if used for exception.
    if (frame_6c68d086e802dd048245fd363eb0c91f == cache_frame_6c68d086e802dd048245fd363eb0c91f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6c68d086e802dd048245fd363eb0c91f);
        cache_frame_6c68d086e802dd048245fd363eb0c91f = NULL;
    }

    assertFrameObject(frame_6c68d086e802dd048245fd363eb0c91f);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_skipna);
    Py_DECREF(par_skipna);
    par_skipna = NULL;
    Py_XDECREF(var_delegate);
    var_delegate = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    goto function_return_exit;
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

    Py_XDECREF(par_skipna);
    par_skipna = NULL;
    Py_XDECREF(var_delegate);
    var_delegate = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$base$$$function__28_argmin(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_axis = python_pars[1];
    PyObject *par_skipna = python_pars[2];
    PyObject *par_args = python_pars[3];
    PyObject *par_kwargs = python_pars[4];
    PyObject *var_delegate = NULL;
    PyObject *var_result = NULL;
    struct Nuitka_FrameObject *frame_b87e5f36cde3d1709fba67be532d40d5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_b87e5f36cde3d1709fba67be532d40d5 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b87e5f36cde3d1709fba67be532d40d5)) {
        Py_XDECREF(cache_frame_b87e5f36cde3d1709fba67be532d40d5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b87e5f36cde3d1709fba67be532d40d5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b87e5f36cde3d1709fba67be532d40d5 = MAKE_FUNCTION_FRAME(tstate, codeobj_b87e5f36cde3d1709fba67be532d40d5, module_pandas$core$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b87e5f36cde3d1709fba67be532d40d5->m_type_description == NULL);
    frame_b87e5f36cde3d1709fba67be532d40d5 = cache_frame_b87e5f36cde3d1709fba67be532d40d5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_b87e5f36cde3d1709fba67be532d40d5);
    assert(Py_REFCNT(frame_b87e5f36cde3d1709fba67be532d40d5) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[57]);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 768;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_delegate == NULL);
        var_delegate = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 769;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_axis);
        tmp_args_element_value_1 = par_axis;
        frame_b87e5f36cde3d1709fba67be532d40d5->m_frame.f_lineno = 769;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[92], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 769;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 770;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_skipna);
        tmp_args_element_value_2 = par_skipna;
        CHECK_OBJECT(par_args);
        tmp_args_element_value_3 = par_args;
        CHECK_OBJECT(par_kwargs);
        tmp_args_element_value_4 = par_kwargs;
        frame_b87e5f36cde3d1709fba67be532d40d5->m_frame.f_lineno = 770;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS3(
                tstate,
                tmp_called_instance_2,
                mod_consts[111],
                call_args
            );
        }

        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 770;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_skipna;
            assert(old != NULL);
            par_skipna = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(var_delegate);
        tmp_isinstance_inst_1 = var_delegate;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[94]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 772;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 772;
            type_description_1 = "ooooooo";
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
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_skipna);
        tmp_operand_value_1 = par_skipna;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 773;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_delegate);
        tmp_called_instance_4 = var_delegate;
        frame_b87e5f36cde3d1709fba67be532d40d5->m_frame.f_lineno = 773;
        tmp_called_instance_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts[81]);
        if (tmp_called_instance_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 773;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_b87e5f36cde3d1709fba67be532d40d5->m_frame.f_lineno = 773;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[95]);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 773;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 773;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_2);
        tmp_condition_result_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_2 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_3;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_called_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[96]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 774;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[97]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 774;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[98];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_type_arg_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_type_arg_1 = par_self;
            tmp_expression_value_3 = BUILTIN_TYPE1(tmp_type_arg_1);
            assert(!(tmp_expression_value_3 == NULL));
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[99]);
            Py_DECREF(tmp_expression_value_3);
            if (tmp_format_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 775;
                type_description_1 = "ooooooo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[19];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 775;
                type_description_1 = "ooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[100];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kw_call_arg_value_0_1 = PyUnicode_Join(mod_consts[19], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 775;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_1_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_kw_call_arg_value_1_1 == NULL)) {
            tmp_kw_call_arg_value_1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_kw_call_arg_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 778;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[102]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 779;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_b87e5f36cde3d1709fba67be532d40d5->m_frame.f_lineno = 779;
        tmp_kw_call_dict_value_0_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 779;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_b87e5f36cde3d1709fba67be532d40d5->m_frame.f_lineno = 774;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[103]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 774;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    tmp_return_value = mod_consts[104];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_called_instance_5;
        if (var_delegate == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[105]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 783;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_5 = var_delegate;
        frame_b87e5f36cde3d1709fba67be532d40d5->m_frame.f_lineno = 783;
        tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts[112]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 783;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 785;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[113]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 785;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_delegate);
        tmp_kw_call_arg_value_0_2 = var_delegate;
        CHECK_OBJECT(par_skipna);
        tmp_kw_call_dict_value_0_2 = par_skipna;
        frame_b87e5f36cde3d1709fba67be532d40d5->m_frame.f_lineno = 785;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts[109]);
        }

        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 785;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_result);
        tmp_cmp_expr_left_1 = var_result;
        tmp_cmp_expr_right_1 = mod_consts[104];
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 786;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_4;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_kw_call_dict_value_0_3;
        PyObject *tmp_called_value_5;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[96]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 787;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[97]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 787;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = mod_consts[98];
        tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_type_arg_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
            CHECK_OBJECT(par_self);
            tmp_type_arg_2 = par_self;
            tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_6 == NULL));
            tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[99]);
            Py_DECREF(tmp_expression_value_6);
            if (tmp_format_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 788;
                type_description_1 = "ooooooo";
                goto tuple_build_exception_2;
            }
            tmp_format_spec_2 = mod_consts[19];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 788;
                type_description_1 = "ooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[100];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_string_concat_values_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_kw_call_arg_value_0_3 = PyUnicode_Join(mod_consts[19], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_kw_call_arg_value_0_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 788;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_1_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_kw_call_arg_value_1_2 == NULL)) {
            tmp_kw_call_arg_value_1_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_kw_call_arg_value_1_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_arg_value_0_3);

            exception_lineno = 791;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[102]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_arg_value_0_3);

            exception_lineno = 792;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_b87e5f36cde3d1709fba67be532d40d5->m_frame.f_lineno = 792;
        tmp_kw_call_dict_value_0_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_5);
        if (tmp_kw_call_dict_value_0_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_arg_value_0_3);

            exception_lineno = 792;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_b87e5f36cde3d1709fba67be532d40d5->m_frame.f_lineno = 787;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_3};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tstate, tmp_called_value_4, args, kw_values, mod_consts[103]);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_kw_call_arg_value_0_3);
        Py_DECREF(tmp_kw_call_dict_value_0_3);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 787;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_3:;
    CHECK_OBJECT(var_result);
    tmp_return_value = var_result;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b87e5f36cde3d1709fba67be532d40d5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b87e5f36cde3d1709fba67be532d40d5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b87e5f36cde3d1709fba67be532d40d5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b87e5f36cde3d1709fba67be532d40d5,
        type_description_1,
        par_self,
        par_axis,
        par_skipna,
        par_args,
        par_kwargs,
        var_delegate,
        var_result
    );


    // Release cached frame if used for exception.
    if (frame_b87e5f36cde3d1709fba67be532d40d5 == cache_frame_b87e5f36cde3d1709fba67be532d40d5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b87e5f36cde3d1709fba67be532d40d5);
        cache_frame_b87e5f36cde3d1709fba67be532d40d5 = NULL;
    }

    assertFrameObject(frame_b87e5f36cde3d1709fba67be532d40d5);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_skipna);
    Py_DECREF(par_skipna);
    par_skipna = NULL;
    Py_XDECREF(var_delegate);
    var_delegate = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    goto function_return_exit;
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

    Py_XDECREF(par_skipna);
    par_skipna = NULL;
    Py_XDECREF(var_delegate);
    var_delegate = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$base$$$function__29_tolist(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_19fb99d5f11c8adbe03b395ae66e8073;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_19fb99d5f11c8adbe03b395ae66e8073 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_19fb99d5f11c8adbe03b395ae66e8073)) {
        Py_XDECREF(cache_frame_19fb99d5f11c8adbe03b395ae66e8073);

#if _DEBUG_REFCOUNTS
        if (cache_frame_19fb99d5f11c8adbe03b395ae66e8073 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_19fb99d5f11c8adbe03b395ae66e8073 = MAKE_FUNCTION_FRAME(tstate, codeobj_19fb99d5f11c8adbe03b395ae66e8073, module_pandas$core$base, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_19fb99d5f11c8adbe03b395ae66e8073->m_type_description == NULL);
    frame_19fb99d5f11c8adbe03b395ae66e8073 = cache_frame_19fb99d5f11c8adbe03b395ae66e8073;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_19fb99d5f11c8adbe03b395ae66e8073);
    assert(Py_REFCNT(frame_19fb99d5f11c8adbe03b395ae66e8073) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[57]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 832;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_19fb99d5f11c8adbe03b395ae66e8073->m_frame.f_lineno = 832;
        tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[114]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 832;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_19fb99d5f11c8adbe03b395ae66e8073, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_19fb99d5f11c8adbe03b395ae66e8073->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_19fb99d5f11c8adbe03b395ae66e8073, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_19fb99d5f11c8adbe03b395ae66e8073,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_19fb99d5f11c8adbe03b395ae66e8073 == cache_frame_19fb99d5f11c8adbe03b395ae66e8073) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_19fb99d5f11c8adbe03b395ae66e8073);
        cache_frame_19fb99d5f11c8adbe03b395ae66e8073 = NULL;
    }

    assertFrameObject(frame_19fb99d5f11c8adbe03b395ae66e8073);

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
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$base$$$function__30___iter__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_bf9d3bd015c7765ef1c20989e41dc27b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_bf9d3bd015c7765ef1c20989e41dc27b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bf9d3bd015c7765ef1c20989e41dc27b)) {
        Py_XDECREF(cache_frame_bf9d3bd015c7765ef1c20989e41dc27b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bf9d3bd015c7765ef1c20989e41dc27b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bf9d3bd015c7765ef1c20989e41dc27b = MAKE_FUNCTION_FRAME(tstate, codeobj_bf9d3bd015c7765ef1c20989e41dc27b, module_pandas$core$base, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bf9d3bd015c7765ef1c20989e41dc27b->m_type_description == NULL);
    frame_bf9d3bd015c7765ef1c20989e41dc27b = cache_frame_bf9d3bd015c7765ef1c20989e41dc27b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_bf9d3bd015c7765ef1c20989e41dc27b);
    assert(Py_REFCNT(frame_bf9d3bd015c7765ef1c20989e41dc27b) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_isinstance_inst_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[57]);
        if (tmp_isinstance_inst_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 858;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_isinstance_inst_1);

            exception_lineno = 858;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[25]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_isinstance_inst_1);

            exception_lineno = 858;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_inst_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 858;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 858;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[57]);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 860;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 860;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        tmp_called_value_1 = (PyObject *)&PyMap_Type;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[57]);
        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 862;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[116]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 862;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[57]);
        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 862;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_xrange_low_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[91]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_xrange_low_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 862;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_1);
        Py_DECREF(tmp_xrange_low_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 862;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_bf9d3bd015c7765ef1c20989e41dc27b->m_frame.f_lineno = 862;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 862;
            type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_bf9d3bd015c7765ef1c20989e41dc27b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bf9d3bd015c7765ef1c20989e41dc27b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bf9d3bd015c7765ef1c20989e41dc27b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bf9d3bd015c7765ef1c20989e41dc27b,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_bf9d3bd015c7765ef1c20989e41dc27b == cache_frame_bf9d3bd015c7765ef1c20989e41dc27b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bf9d3bd015c7765ef1c20989e41dc27b);
        cache_frame_bf9d3bd015c7765ef1c20989e41dc27b = NULL;
    }

    assertFrameObject(frame_bf9d3bd015c7765ef1c20989e41dc27b);

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
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$base$$$function__31_hasnans(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_45c4aff2266f43595279d63b4e35c6f0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_45c4aff2266f43595279d63b4e35c6f0 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_45c4aff2266f43595279d63b4e35c6f0)) {
        Py_XDECREF(cache_frame_45c4aff2266f43595279d63b4e35c6f0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_45c4aff2266f43595279d63b4e35c6f0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_45c4aff2266f43595279d63b4e35c6f0 = MAKE_FUNCTION_FRAME(tstate, codeobj_45c4aff2266f43595279d63b4e35c6f0, module_pandas$core$base, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_45c4aff2266f43595279d63b4e35c6f0->m_type_description == NULL);
    frame_45c4aff2266f43595279d63b4e35c6f0 = cache_frame_45c4aff2266f43595279d63b4e35c6f0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_45c4aff2266f43595279d63b4e35c6f0);
    assert(Py_REFCNT(frame_45c4aff2266f43595279d63b4e35c6f0) == 2);

    // Framed code:
    {
        PyObject *tmp_value_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 889;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        frame_45c4aff2266f43595279d63b4e35c6f0->m_frame.f_lineno = 889;
        tmp_called_instance_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 889;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_45c4aff2266f43595279d63b4e35c6f0->m_frame.f_lineno = 889;
        tmp_value_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[95]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_value_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 889;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
        Py_DECREF(tmp_value_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 889;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_45c4aff2266f43595279d63b4e35c6f0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_45c4aff2266f43595279d63b4e35c6f0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_45c4aff2266f43595279d63b4e35c6f0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_45c4aff2266f43595279d63b4e35c6f0,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_45c4aff2266f43595279d63b4e35c6f0 == cache_frame_45c4aff2266f43595279d63b4e35c6f0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_45c4aff2266f43595279d63b4e35c6f0);
        cache_frame_45c4aff2266f43595279d63b4e35c6f0 = NULL;
    }

    assertFrameObject(frame_45c4aff2266f43595279d63b4e35c6f0);

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
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$base$$$function__32__map_values(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_mapper = python_pars[1];
    PyObject *par_na_action = python_pars[2];
    PyObject *par_convert = python_pars[3];
    PyObject *var_arr = NULL;
    struct Nuitka_FrameObject *frame_5bed0a8bed1e776a31a737ce65ff3f06;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5bed0a8bed1e776a31a737ce65ff3f06 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_5bed0a8bed1e776a31a737ce65ff3f06)) {
        Py_XDECREF(cache_frame_5bed0a8bed1e776a31a737ce65ff3f06);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5bed0a8bed1e776a31a737ce65ff3f06 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5bed0a8bed1e776a31a737ce65ff3f06 = MAKE_FUNCTION_FRAME(tstate, codeobj_5bed0a8bed1e776a31a737ce65ff3f06, module_pandas$core$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5bed0a8bed1e776a31a737ce65ff3f06->m_type_description == NULL);
    frame_5bed0a8bed1e776a31a737ce65ff3f06 = cache_frame_5bed0a8bed1e776a31a737ce65ff3f06;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_5bed0a8bed1e776a31a737ce65ff3f06);
    assert(Py_REFCNT(frame_5bed0a8bed1e776a31a737ce65ff3f06) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[57]);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 916;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_arr == NULL);
        var_arr = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(var_arr);
        tmp_isinstance_inst_1 = var_arr;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[94]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 918;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 918;
            type_description_1 = "ooooo";
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
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        CHECK_OBJECT(var_arr);
        tmp_expression_value_2 = var_arr;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[119]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 919;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_mapper);
        tmp_kw_call_arg_value_0_1 = par_mapper;
        CHECK_OBJECT(par_na_action);
        tmp_kw_call_dict_value_0_1 = par_na_action;
        frame_5bed0a8bed1e776a31a737ce65ff3f06->m_frame.f_lineno = 919;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[120]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 919;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_kw_call_dict_value_1_1;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[121]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 921;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[122]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 921;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_arr);
        tmp_kw_call_arg_value_0_2 = var_arr;
        CHECK_OBJECT(par_mapper);
        tmp_kw_call_arg_value_1_1 = par_mapper;
        CHECK_OBJECT(par_na_action);
        tmp_kw_call_dict_value_0_2 = par_na_action;
        CHECK_OBJECT(par_convert);
        tmp_kw_call_dict_value_1_1 = par_convert;
        frame_5bed0a8bed1e776a31a737ce65ff3f06->m_frame.f_lineno = 921;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts[123]);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 921;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5bed0a8bed1e776a31a737ce65ff3f06, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5bed0a8bed1e776a31a737ce65ff3f06->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5bed0a8bed1e776a31a737ce65ff3f06, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5bed0a8bed1e776a31a737ce65ff3f06,
        type_description_1,
        par_self,
        par_mapper,
        par_na_action,
        par_convert,
        var_arr
    );


    // Release cached frame if used for exception.
    if (frame_5bed0a8bed1e776a31a737ce65ff3f06 == cache_frame_5bed0a8bed1e776a31a737ce65ff3f06) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5bed0a8bed1e776a31a737ce65ff3f06);
        cache_frame_5bed0a8bed1e776a31a737ce65ff3f06 = NULL;
    }

    assertFrameObject(frame_5bed0a8bed1e776a31a737ce65ff3f06);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_arr);
    var_arr = NULL;
    goto function_return_exit;
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

    Py_XDECREF(var_arr);
    var_arr = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_mapper);
    Py_DECREF(par_mapper);
    CHECK_OBJECT(par_na_action);
    Py_DECREF(par_na_action);
    CHECK_OBJECT(par_convert);
    Py_DECREF(par_convert);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_mapper);
    Py_DECREF(par_mapper);
    CHECK_OBJECT(par_na_action);
    Py_DECREF(par_na_action);
    CHECK_OBJECT(par_convert);
    Py_DECREF(par_convert);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$base$$$function__33_value_counts(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_normalize = python_pars[1];
    PyObject *par_sort = python_pars[2];
    PyObject *par_ascending = python_pars[3];
    PyObject *par_bins = python_pars[4];
    PyObject *par_dropna = python_pars[5];
    struct Nuitka_FrameObject *frame_077fd7eea7ba10d8f85b0950c76d605f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_077fd7eea7ba10d8f85b0950c76d605f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_077fd7eea7ba10d8f85b0950c76d605f)) {
        Py_XDECREF(cache_frame_077fd7eea7ba10d8f85b0950c76d605f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_077fd7eea7ba10d8f85b0950c76d605f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_077fd7eea7ba10d8f85b0950c76d605f = MAKE_FUNCTION_FRAME(tstate, codeobj_077fd7eea7ba10d8f85b0950c76d605f, module_pandas$core$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_077fd7eea7ba10d8f85b0950c76d605f->m_type_description == NULL);
    frame_077fd7eea7ba10d8f85b0950c76d605f = cache_frame_077fd7eea7ba10d8f85b0950c76d605f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_077fd7eea7ba10d8f85b0950c76d605f);
    assert(Py_REFCNT(frame_077fd7eea7ba10d8f85b0950c76d605f) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_kw_call_dict_value_3_1;
        PyObject *tmp_kw_call_dict_value_4_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[121]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1010;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[125]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1010;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_arg_value_0_1 = par_self;
        CHECK_OBJECT(par_sort);
        tmp_kw_call_dict_value_0_1 = par_sort;
        CHECK_OBJECT(par_ascending);
        tmp_kw_call_dict_value_1_1 = par_ascending;
        CHECK_OBJECT(par_normalize);
        tmp_kw_call_dict_value_2_1 = par_normalize;
        CHECK_OBJECT(par_bins);
        tmp_kw_call_dict_value_3_1 = par_bins;
        CHECK_OBJECT(par_dropna);
        tmp_kw_call_dict_value_4_1 = par_dropna;
        frame_077fd7eea7ba10d8f85b0950c76d605f->m_frame.f_lineno = 1010;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[5] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[126]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1010;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_077fd7eea7ba10d8f85b0950c76d605f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_077fd7eea7ba10d8f85b0950c76d605f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_077fd7eea7ba10d8f85b0950c76d605f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_077fd7eea7ba10d8f85b0950c76d605f,
        type_description_1,
        par_self,
        par_normalize,
        par_sort,
        par_ascending,
        par_bins,
        par_dropna
    );


    // Release cached frame if used for exception.
    if (frame_077fd7eea7ba10d8f85b0950c76d605f == cache_frame_077fd7eea7ba10d8f85b0950c76d605f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_077fd7eea7ba10d8f85b0950c76d605f);
        cache_frame_077fd7eea7ba10d8f85b0950c76d605f = NULL;
    }

    assertFrameObject(frame_077fd7eea7ba10d8f85b0950c76d605f);

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
    CHECK_OBJECT(par_normalize);
    Py_DECREF(par_normalize);
    CHECK_OBJECT(par_sort);
    Py_DECREF(par_sort);
    CHECK_OBJECT(par_ascending);
    Py_DECREF(par_ascending);
    CHECK_OBJECT(par_bins);
    Py_DECREF(par_bins);
    CHECK_OBJECT(par_dropna);
    Py_DECREF(par_dropna);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_normalize);
    Py_DECREF(par_normalize);
    CHECK_OBJECT(par_sort);
    Py_DECREF(par_sort);
    CHECK_OBJECT(par_ascending);
    Py_DECREF(par_ascending);
    CHECK_OBJECT(par_bins);
    Py_DECREF(par_bins);
    CHECK_OBJECT(par_dropna);
    Py_DECREF(par_dropna);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$base$$$function__34_unique(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_values = NULL;
    PyObject *var_result = NULL;
    struct Nuitka_FrameObject *frame_8bd6255ca009b3b020d07da083ce6b46;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_8bd6255ca009b3b020d07da083ce6b46 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8bd6255ca009b3b020d07da083ce6b46)) {
        Py_XDECREF(cache_frame_8bd6255ca009b3b020d07da083ce6b46);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8bd6255ca009b3b020d07da083ce6b46 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8bd6255ca009b3b020d07da083ce6b46 = MAKE_FUNCTION_FRAME(tstate, codeobj_8bd6255ca009b3b020d07da083ce6b46, module_pandas$core$base, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8bd6255ca009b3b020d07da083ce6b46->m_type_description == NULL);
    frame_8bd6255ca009b3b020d07da083ce6b46 = cache_frame_8bd6255ca009b3b020d07da083ce6b46;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_8bd6255ca009b3b020d07da083ce6b46);
    assert(Py_REFCNT(frame_8bd6255ca009b3b020d07da083ce6b46) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[57]);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1020;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_values == NULL);
        var_values = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_values);
        tmp_isinstance_inst_1 = var_values;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1021;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[25]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1021;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1021;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1021;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(var_values);
        tmp_called_instance_1 = var_values;
        frame_8bd6255ca009b3b020d07da083ce6b46->m_frame.f_lineno = 1023;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[128]);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1023;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_2;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[121]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1025;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_values);
        tmp_args_element_value_1 = var_values;
        frame_8bd6255ca009b3b020d07da083ce6b46->m_frame.f_lineno = 1025;
        tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[129], tmp_args_element_value_1);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1025;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_3;
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8bd6255ca009b3b020d07da083ce6b46, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8bd6255ca009b3b020d07da083ce6b46->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8bd6255ca009b3b020d07da083ce6b46, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8bd6255ca009b3b020d07da083ce6b46,
        type_description_1,
        par_self,
        var_values,
        var_result
    );


    // Release cached frame if used for exception.
    if (frame_8bd6255ca009b3b020d07da083ce6b46 == cache_frame_8bd6255ca009b3b020d07da083ce6b46) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8bd6255ca009b3b020d07da083ce6b46);
        cache_frame_8bd6255ca009b3b020d07da083ce6b46 = NULL;
    }

    assertFrameObject(frame_8bd6255ca009b3b020d07da083ce6b46);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_result);
    tmp_return_value = var_result;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_values);
    var_values = NULL;
    CHECK_OBJECT(var_result);
    Py_DECREF(var_result);
    var_result = NULL;
    goto function_return_exit;
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

    Py_XDECREF(var_values);
    var_values = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$base$$$function__35_nunique(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_dropna = python_pars[1];
    PyObject *var_uniqs = NULL;
    struct Nuitka_FrameObject *frame_23f16344ab6ac86d3a1f62eb619878cf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_23f16344ab6ac86d3a1f62eb619878cf = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_23f16344ab6ac86d3a1f62eb619878cf)) {
        Py_XDECREF(cache_frame_23f16344ab6ac86d3a1f62eb619878cf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_23f16344ab6ac86d3a1f62eb619878cf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_23f16344ab6ac86d3a1f62eb619878cf = MAKE_FUNCTION_FRAME(tstate, codeobj_23f16344ab6ac86d3a1f62eb619878cf, module_pandas$core$base, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_23f16344ab6ac86d3a1f62eb619878cf->m_type_description == NULL);
    frame_23f16344ab6ac86d3a1f62eb619878cf = cache_frame_23f16344ab6ac86d3a1f62eb619878cf;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_23f16344ab6ac86d3a1f62eb619878cf);
    assert(Py_REFCNT(frame_23f16344ab6ac86d3a1f62eb619878cf) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_23f16344ab6ac86d3a1f62eb619878cf->m_frame.f_lineno = 1063;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[128]);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1063;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_uniqs == NULL);
        var_uniqs = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_dropna);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_dropna);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1064;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[130]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[130]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1065;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_uniqs);
        tmp_args_element_value_1 = var_uniqs;
        frame_23f16344ab6ac86d3a1f62eb619878cf->m_frame.f_lineno = 1065;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1065;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_uniqs;
            assert(old != NULL);
            var_uniqs = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(var_uniqs);
        tmp_len_arg_1 = var_uniqs;
        tmp_return_value = BUILTIN_LEN(tstate, tmp_len_arg_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1066;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_23f16344ab6ac86d3a1f62eb619878cf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_23f16344ab6ac86d3a1f62eb619878cf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_23f16344ab6ac86d3a1f62eb619878cf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_23f16344ab6ac86d3a1f62eb619878cf,
        type_description_1,
        par_self,
        par_dropna,
        var_uniqs
    );


    // Release cached frame if used for exception.
    if (frame_23f16344ab6ac86d3a1f62eb619878cf == cache_frame_23f16344ab6ac86d3a1f62eb619878cf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_23f16344ab6ac86d3a1f62eb619878cf);
        cache_frame_23f16344ab6ac86d3a1f62eb619878cf = NULL;
    }

    assertFrameObject(frame_23f16344ab6ac86d3a1f62eb619878cf);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_uniqs);
    Py_DECREF(var_uniqs);
    var_uniqs = NULL;
    goto function_return_exit;
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

    Py_XDECREF(var_uniqs);
    var_uniqs = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_dropna);
    Py_DECREF(par_dropna);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_dropna);
    Py_DECREF(par_dropna);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$base$$$function__36_is_unique(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_41519162933621077f5dde7f8623b17a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_41519162933621077f5dde7f8623b17a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_41519162933621077f5dde7f8623b17a)) {
        Py_XDECREF(cache_frame_41519162933621077f5dde7f8623b17a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_41519162933621077f5dde7f8623b17a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_41519162933621077f5dde7f8623b17a = MAKE_FUNCTION_FRAME(tstate, codeobj_41519162933621077f5dde7f8623b17a, module_pandas$core$base, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_41519162933621077f5dde7f8623b17a->m_type_description == NULL);
    frame_41519162933621077f5dde7f8623b17a = cache_frame_41519162933621077f5dde7f8623b17a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_41519162933621077f5dde7f8623b17a);
    assert(Py_REFCNT(frame_41519162933621077f5dde7f8623b17a) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[132]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1087;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_41519162933621077f5dde7f8623b17a->m_frame.f_lineno = 1087;
        tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[133], 0), mod_consts[134]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1087;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_len_arg_1 = par_self;
        tmp_cmp_expr_right_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 1087;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1087;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_41519162933621077f5dde7f8623b17a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_41519162933621077f5dde7f8623b17a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_41519162933621077f5dde7f8623b17a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_41519162933621077f5dde7f8623b17a,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_41519162933621077f5dde7f8623b17a == cache_frame_41519162933621077f5dde7f8623b17a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_41519162933621077f5dde7f8623b17a);
        cache_frame_41519162933621077f5dde7f8623b17a = NULL;
    }

    assertFrameObject(frame_41519162933621077f5dde7f8623b17a);

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
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$base$$$function__37_is_monotonic_increasing(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_Index = NULL;
    struct Nuitka_FrameObject *frame_2a0fbf306a0ee6264da0e66ff1700851;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_2a0fbf306a0ee6264da0e66ff1700851 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_2a0fbf306a0ee6264da0e66ff1700851)) {
        Py_XDECREF(cache_frame_2a0fbf306a0ee6264da0e66ff1700851);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2a0fbf306a0ee6264da0e66ff1700851 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2a0fbf306a0ee6264da0e66ff1700851 = MAKE_FUNCTION_FRAME(tstate, codeobj_2a0fbf306a0ee6264da0e66ff1700851, module_pandas$core$base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2a0fbf306a0ee6264da0e66ff1700851->m_type_description == NULL);
    frame_2a0fbf306a0ee6264da0e66ff1700851 = cache_frame_2a0fbf306a0ee6264da0e66ff1700851;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_2a0fbf306a0ee6264da0e66ff1700851);
    assert(Py_REFCNT(frame_2a0fbf306a0ee6264da0e66ff1700851) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[136];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pandas$core$base;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[137];
        tmp_level_value_1 = mod_consts[138];
        frame_2a0fbf306a0ee6264da0e66ff1700851->m_frame.f_lineno = 1108;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1108;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_pandas$core$base,
                mod_consts[139],
                mod_consts[138]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[139]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1108;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_Index == NULL);
        var_Index = tmp_assign_source_1;
    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(var_Index);
        tmp_called_value_1 = var_Index;
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        frame_2a0fbf306a0ee6264da0e66ff1700851->m_frame.f_lineno = 1110;
        tmp_expression_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1110;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[140]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1110;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2a0fbf306a0ee6264da0e66ff1700851, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2a0fbf306a0ee6264da0e66ff1700851->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2a0fbf306a0ee6264da0e66ff1700851, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2a0fbf306a0ee6264da0e66ff1700851,
        type_description_1,
        par_self,
        var_Index
    );


    // Release cached frame if used for exception.
    if (frame_2a0fbf306a0ee6264da0e66ff1700851 == cache_frame_2a0fbf306a0ee6264da0e66ff1700851) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2a0fbf306a0ee6264da0e66ff1700851);
        cache_frame_2a0fbf306a0ee6264da0e66ff1700851 = NULL;
    }

    assertFrameObject(frame_2a0fbf306a0ee6264da0e66ff1700851);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_Index);
    Py_DECREF(var_Index);
    var_Index = NULL;
    goto function_return_exit;
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

    Py_XDECREF(var_Index);
    var_Index = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$base$$$function__38_is_monotonic_decreasing(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_Index = NULL;
    struct Nuitka_FrameObject *frame_10f14def9781e7edfc5a63dff2395136;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_10f14def9781e7edfc5a63dff2395136 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_10f14def9781e7edfc5a63dff2395136)) {
        Py_XDECREF(cache_frame_10f14def9781e7edfc5a63dff2395136);

#if _DEBUG_REFCOUNTS
        if (cache_frame_10f14def9781e7edfc5a63dff2395136 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_10f14def9781e7edfc5a63dff2395136 = MAKE_FUNCTION_FRAME(tstate, codeobj_10f14def9781e7edfc5a63dff2395136, module_pandas$core$base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_10f14def9781e7edfc5a63dff2395136->m_type_description == NULL);
    frame_10f14def9781e7edfc5a63dff2395136 = cache_frame_10f14def9781e7edfc5a63dff2395136;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_10f14def9781e7edfc5a63dff2395136);
    assert(Py_REFCNT(frame_10f14def9781e7edfc5a63dff2395136) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[136];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pandas$core$base;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[137];
        tmp_level_value_1 = mod_consts[138];
        frame_10f14def9781e7edfc5a63dff2395136->m_frame.f_lineno = 1131;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1131;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_pandas$core$base,
                mod_consts[139],
                mod_consts[138]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[139]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1131;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_Index == NULL);
        var_Index = tmp_assign_source_1;
    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(var_Index);
        tmp_called_value_1 = var_Index;
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        frame_10f14def9781e7edfc5a63dff2395136->m_frame.f_lineno = 1133;
        tmp_expression_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1133;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[142]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1133;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_10f14def9781e7edfc5a63dff2395136, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_10f14def9781e7edfc5a63dff2395136->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_10f14def9781e7edfc5a63dff2395136, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_10f14def9781e7edfc5a63dff2395136,
        type_description_1,
        par_self,
        var_Index
    );


    // Release cached frame if used for exception.
    if (frame_10f14def9781e7edfc5a63dff2395136 == cache_frame_10f14def9781e7edfc5a63dff2395136) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_10f14def9781e7edfc5a63dff2395136);
        cache_frame_10f14def9781e7edfc5a63dff2395136 = NULL;
    }

    assertFrameObject(frame_10f14def9781e7edfc5a63dff2395136);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_Index);
    Py_DECREF(var_Index);
    var_Index = NULL;
    goto function_return_exit;
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

    Py_XDECREF(var_Index);
    var_Index = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$base$$$function__39__memory_usage(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_deep = python_pars[1];
    PyObject *var_v = NULL;
    PyObject *var_values = NULL;
    struct Nuitka_FrameObject *frame_f578fb0ded0be75f13f959297fb92a2d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_f578fb0ded0be75f13f959297fb92a2d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f578fb0ded0be75f13f959297fb92a2d)) {
        Py_XDECREF(cache_frame_f578fb0ded0be75f13f959297fb92a2d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f578fb0ded0be75f13f959297fb92a2d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f578fb0ded0be75f13f959297fb92a2d = MAKE_FUNCTION_FRAME(tstate, codeobj_f578fb0ded0be75f13f959297fb92a2d, module_pandas$core$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f578fb0ded0be75f13f959297fb92a2d->m_type_description == NULL);
    frame_f578fb0ded0be75f13f959297fb92a2d = cache_frame_f578fb0ded0be75f13f959297fb92a2d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f578fb0ded0be75f13f959297fb92a2d);
    assert(Py_REFCNT(frame_f578fb0ded0be75f13f959297fb92a2d) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[68]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1166;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_1, mod_consts[7]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1166;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_value_0_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[68]);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1167;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[7]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1167;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_deep);
        tmp_kw_call_value_0_1 = par_deep;
        frame_f578fb0ded0be75f13f959297fb92a2d->m_frame.f_lineno = 1167;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[9]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1167;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[68]);
        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1171;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[62]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1171;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_v == NULL);
        var_v = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_7;
        int tmp_truth_name_2;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(par_deep);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_deep);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1172;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1172;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[144]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[144]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1172;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[66]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1172;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_f578fb0ded0be75f13f959297fb92a2d->m_frame.f_lineno = 1172;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1172;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 1172;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1172;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        tmp_operand_value_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_operand_value_1 == NULL)) {
            tmp_operand_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[145]);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1172;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1172;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_right_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_and_right_value_1 = tmp_and_left_value_2;
        and_end_2:;
        tmp_condition_result_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_2 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_9;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[146]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[146]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1173;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1173;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[25]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1173;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[57]);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 1173;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_f578fb0ded0be75f13f959297fb92a2d->m_frame.f_lineno = 1173;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1173;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_values == NULL);
        var_values = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(var_v);
        tmp_iadd_expr_left_1 = var_v;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1174;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_values);
        tmp_args_element_value_4 = var_values;
        frame_f578fb0ded0be75f13f959297fb92a2d->m_frame.f_lineno = 1174;
        tmp_iadd_expr_right_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[147], tmp_args_element_value_4);
        if (tmp_iadd_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1174;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        Py_DECREF(tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1174;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = tmp_iadd_expr_left_1;
        var_v = tmp_assign_source_3;

    }
    branch_no_2:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f578fb0ded0be75f13f959297fb92a2d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f578fb0ded0be75f13f959297fb92a2d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f578fb0ded0be75f13f959297fb92a2d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f578fb0ded0be75f13f959297fb92a2d,
        type_description_1,
        par_self,
        par_deep,
        var_v,
        var_values
    );


    // Release cached frame if used for exception.
    if (frame_f578fb0ded0be75f13f959297fb92a2d == cache_frame_f578fb0ded0be75f13f959297fb92a2d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f578fb0ded0be75f13f959297fb92a2d);
        cache_frame_f578fb0ded0be75f13f959297fb92a2d = NULL;
    }

    assertFrameObject(frame_f578fb0ded0be75f13f959297fb92a2d);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_v);
    tmp_return_value = var_v;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_v);
    var_v = NULL;
    Py_XDECREF(var_values);
    var_values = NULL;
    goto function_return_exit;
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

    Py_XDECREF(var_v);
    var_v = NULL;
    Py_XDECREF(var_values);
    var_values = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_deep);
    Py_DECREF(par_deep);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_deep);
    Py_DECREF(par_deep);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$base$$$function__40_factorize(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_sort = python_pars[1];
    PyObject *par_use_na_sentinel = python_pars[2];
    PyObject *var_codes = NULL;
    PyObject *var_uniques = NULL;
    PyObject *var_Index = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_9bbe454c9a3de8a7bfec0657a34f3086;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_9bbe454c9a3de8a7bfec0657a34f3086 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_9bbe454c9a3de8a7bfec0657a34f3086)) {
        Py_XDECREF(cache_frame_9bbe454c9a3de8a7bfec0657a34f3086);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9bbe454c9a3de8a7bfec0657a34f3086 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9bbe454c9a3de8a7bfec0657a34f3086 = MAKE_FUNCTION_FRAME(tstate, codeobj_9bbe454c9a3de8a7bfec0657a34f3086, module_pandas$core$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9bbe454c9a3de8a7bfec0657a34f3086->m_type_description == NULL);
    frame_9bbe454c9a3de8a7bfec0657a34f3086 = cache_frame_9bbe454c9a3de8a7bfec0657a34f3086;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_9bbe454c9a3de8a7bfec0657a34f3086);
    assert(Py_REFCNT(frame_9bbe454c9a3de8a7bfec0657a34f3086) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[121]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1195;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[149]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1195;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_kw_call_arg_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[57]);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 1196;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_sort);
        tmp_kw_call_dict_value_0_1 = par_sort;
        CHECK_OBJECT(par_use_na_sentinel);
        tmp_kw_call_dict_value_1_1 = par_use_na_sentinel;
        frame_9bbe454c9a3de8a7bfec0657a34f3086->m_frame.f_lineno = 1195;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[150]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_arg_value_0_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1195;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1195;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 2);
        if (tmp_assign_source_2 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooo";
            exception_lineno = 1195;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooo";
            exception_lineno = 1195;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooo";
                    exception_lineno = 1195;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[151];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooo";
            exception_lineno = 1195;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        assert(var_codes == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_codes = tmp_assign_source_4;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert(var_uniques == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_uniques = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(var_uniques);
        tmp_expression_value_3 = var_uniques;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[66]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1198;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 1198;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[152]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 1198;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1198;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(var_uniques);
        tmp_expression_value_5 = var_uniques;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[153]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1199;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 1199;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[154]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 1199;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_9bbe454c9a3de8a7bfec0657a34f3086->m_frame.f_lineno = 1199;
        tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1199;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_uniques;
            assert(old != NULL);
            var_uniques = tmp_assign_source_6;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_self);
        tmp_isinstance_inst_1 = par_self;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1201;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1201;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[155]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1203;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (var_uniques == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[156]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 1203;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_2 = var_uniques;
        frame_9bbe454c9a3de8a7bfec0657a34f3086->m_frame.f_lineno = 1203;
        tmp_assign_source_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1203;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_uniques;
            var_uniques = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[136];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pandas$core$base;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[137];
        tmp_level_value_1 = mod_consts[138];
        frame_9bbe454c9a3de8a7bfec0657a34f3086->m_frame.f_lineno = 1205;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1205;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_pandas$core$base,
                mod_consts[139],
                mod_consts[138]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[139]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1205;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_Index == NULL);
        var_Index = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(var_Index);
        tmp_called_value_4 = var_Index;
        if (var_uniques == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[156]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 1207;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_3 = var_uniques;
        frame_9bbe454c9a3de8a7bfec0657a34f3086->m_frame.f_lineno = 1207;
        tmp_assign_source_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1207;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_uniques;
            var_uniques = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    branch_end_2:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9bbe454c9a3de8a7bfec0657a34f3086, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9bbe454c9a3de8a7bfec0657a34f3086->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9bbe454c9a3de8a7bfec0657a34f3086, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9bbe454c9a3de8a7bfec0657a34f3086,
        type_description_1,
        par_self,
        par_sort,
        par_use_na_sentinel,
        var_codes,
        var_uniques,
        var_Index
    );


    // Release cached frame if used for exception.
    if (frame_9bbe454c9a3de8a7bfec0657a34f3086 == cache_frame_9bbe454c9a3de8a7bfec0657a34f3086) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9bbe454c9a3de8a7bfec0657a34f3086);
        cache_frame_9bbe454c9a3de8a7bfec0657a34f3086 = NULL;
    }

    assertFrameObject(frame_9bbe454c9a3de8a7bfec0657a34f3086);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_codes);
        tmp_tuple_element_1 = var_codes;
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_uniques);
        tmp_tuple_element_1 = var_uniques;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_codes);
    Py_DECREF(var_codes);
    var_codes = NULL;
    CHECK_OBJECT(var_uniques);
    Py_DECREF(var_uniques);
    var_uniques = NULL;
    Py_XDECREF(var_Index);
    var_Index = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_codes);
    var_codes = NULL;
    Py_XDECREF(var_uniques);
    var_uniques = NULL;
    Py_XDECREF(var_Index);
    var_Index = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_sort);
    Py_DECREF(par_sort);
    CHECK_OBJECT(par_use_na_sentinel);
    Py_DECREF(par_use_na_sentinel);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_sort);
    Py_DECREF(par_sort);
    CHECK_OBJECT(par_use_na_sentinel);
    Py_DECREF(par_use_na_sentinel);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$base$$$function__43_searchsorted(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    PyObject *par_side = python_pars[2];
    PyObject *par_sorter = python_pars[3];
    PyObject *var_msg = NULL;
    PyObject *var_values = NULL;
    struct Nuitka_FrameObject *frame_64f6e201c830f11ca63de4f5ea6c3014;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_64f6e201c830f11ca63de4f5ea6c3014 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_64f6e201c830f11ca63de4f5ea6c3014)) {
        Py_XDECREF(cache_frame_64f6e201c830f11ca63de4f5ea6c3014);

#if _DEBUG_REFCOUNTS
        if (cache_frame_64f6e201c830f11ca63de4f5ea6c3014 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_64f6e201c830f11ca63de4f5ea6c3014 = MAKE_FUNCTION_FRAME(tstate, codeobj_64f6e201c830f11ca63de4f5ea6c3014, module_pandas$core$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_64f6e201c830f11ca63de4f5ea6c3014->m_type_description == NULL);
    frame_64f6e201c830f11ca63de4f5ea6c3014 = cache_frame_64f6e201c830f11ca63de4f5ea6c3014;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_64f6e201c830f11ca63de4f5ea6c3014);
    assert(Py_REFCNT(frame_64f6e201c830f11ca63de4f5ea6c3014) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_value);
        tmp_isinstance_inst_1 = par_value;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[157]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[157]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1342;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1342;
            type_description_1 = "oooooo";
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[158];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_type_arg_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_value);
            tmp_type_arg_1 = par_value;
            tmp_expression_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
            assert(!(tmp_expression_value_1 == NULL));
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[99]);
            Py_DECREF(tmp_expression_value_1);
            if (tmp_format_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1345;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[19];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1345;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[159];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_1 = PyUnicode_Join(mod_consts[19], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1344;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_msg == NULL);
        var_msg = tmp_assign_source_1;
    }
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        CHECK_OBJECT(var_msg);
        tmp_make_exception_arg_1 = var_msg;
        frame_64f6e201c830f11ca63de4f5ea6c3014->m_frame.f_lineno = 1347;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 1347;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[57]);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1349;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_values == NULL);
        var_values = tmp_assign_source_2;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_values);
        tmp_isinstance_inst_2 = var_values;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1350;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[25]);
        if (tmp_isinstance_cls_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1350;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        Py_DECREF(tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1350;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1350;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        CHECK_OBJECT(var_values);
        tmp_expression_value_4 = var_values;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[160]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1352;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_kw_call_arg_value_0_1 = par_value;
        CHECK_OBJECT(par_side);
        tmp_kw_call_dict_value_0_1 = par_side;
        CHECK_OBJECT(par_sorter);
        tmp_kw_call_dict_value_1_1 = par_sorter;
        frame_64f6e201c830f11ca63de4f5ea6c3014->m_frame.f_lineno = 1352;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[161]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1352;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_kw_call_dict_value_1_2;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[121]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1354;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[160]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1354;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_values);
        tmp_kw_call_arg_value_0_2 = var_values;
        CHECK_OBJECT(par_value);
        tmp_kw_call_arg_value_1_1 = par_value;
        CHECK_OBJECT(par_side);
        tmp_kw_call_dict_value_0_2 = par_side;
        CHECK_OBJECT(par_sorter);
        tmp_kw_call_dict_value_1_2 = par_sorter;
        frame_64f6e201c830f11ca63de4f5ea6c3014->m_frame.f_lineno = 1354;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts[161]);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1354;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_64f6e201c830f11ca63de4f5ea6c3014, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_64f6e201c830f11ca63de4f5ea6c3014->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_64f6e201c830f11ca63de4f5ea6c3014, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_64f6e201c830f11ca63de4f5ea6c3014,
        type_description_1,
        par_self,
        par_value,
        par_side,
        par_sorter,
        var_msg,
        var_values
    );


    // Release cached frame if used for exception.
    if (frame_64f6e201c830f11ca63de4f5ea6c3014 == cache_frame_64f6e201c830f11ca63de4f5ea6c3014) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_64f6e201c830f11ca63de4f5ea6c3014);
        cache_frame_64f6e201c830f11ca63de4f5ea6c3014 = NULL;
    }

    assertFrameObject(frame_64f6e201c830f11ca63de4f5ea6c3014);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_values);
    var_values = NULL;
    goto function_return_exit;
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

    Py_XDECREF(var_msg);
    var_msg = NULL;
    Py_XDECREF(var_values);
    var_values = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_side);
    Py_DECREF(par_side);
    CHECK_OBJECT(par_sorter);
    Py_DECREF(par_sorter);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_side);
    Py_DECREF(par_side);
    CHECK_OBJECT(par_sorter);
    Py_DECREF(par_sorter);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$base$$$function__44_drop_duplicates(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_keep = python_pars[1];
    PyObject *var_duplicated = NULL;
    struct Nuitka_FrameObject *frame_f24291cc733b0e7473a097e6d8e8401f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_f24291cc733b0e7473a097e6d8e8401f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f24291cc733b0e7473a097e6d8e8401f)) {
        Py_XDECREF(cache_frame_f24291cc733b0e7473a097e6d8e8401f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f24291cc733b0e7473a097e6d8e8401f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f24291cc733b0e7473a097e6d8e8401f = MAKE_FUNCTION_FRAME(tstate, codeobj_f24291cc733b0e7473a097e6d8e8401f, module_pandas$core$base, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f24291cc733b0e7473a097e6d8e8401f->m_type_description == NULL);
    frame_f24291cc733b0e7473a097e6d8e8401f = cache_frame_f24291cc733b0e7473a097e6d8e8401f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f24291cc733b0e7473a097e6d8e8401f);
    assert(Py_REFCNT(frame_f24291cc733b0e7473a097e6d8e8401f) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_value_0_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[162]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1362;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_keep);
        tmp_kw_call_value_0_1 = par_keep;
        frame_f24291cc733b0e7473a097e6d8e8401f->m_frame.f_lineno = 1362;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[163]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1362;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_duplicated == NULL);
        var_duplicated = tmp_assign_source_1;
    }
    {
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        CHECK_OBJECT(var_duplicated);
        tmp_operand_value_1 = var_duplicated;
        tmp_subscript_value_1 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_value_1);
        if (tmp_subscript_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1364;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1364;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f24291cc733b0e7473a097e6d8e8401f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f24291cc733b0e7473a097e6d8e8401f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f24291cc733b0e7473a097e6d8e8401f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f24291cc733b0e7473a097e6d8e8401f,
        type_description_1,
        par_self,
        par_keep,
        var_duplicated
    );


    // Release cached frame if used for exception.
    if (frame_f24291cc733b0e7473a097e6d8e8401f == cache_frame_f24291cc733b0e7473a097e6d8e8401f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f24291cc733b0e7473a097e6d8e8401f);
        cache_frame_f24291cc733b0e7473a097e6d8e8401f = NULL;
    }

    assertFrameObject(frame_f24291cc733b0e7473a097e6d8e8401f);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_duplicated);
    Py_DECREF(var_duplicated);
    var_duplicated = NULL;
    goto function_return_exit;
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

    Py_XDECREF(var_duplicated);
    var_duplicated = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_keep);
    Py_DECREF(par_keep);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_keep);
    Py_DECREF(par_keep);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$base$$$function__45__duplicated(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_keep = python_pars[1];
    struct Nuitka_FrameObject *frame_0d87012cfecbc679a35fb04efa294294;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0d87012cfecbc679a35fb04efa294294 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0d87012cfecbc679a35fb04efa294294)) {
        Py_XDECREF(cache_frame_0d87012cfecbc679a35fb04efa294294);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0d87012cfecbc679a35fb04efa294294 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0d87012cfecbc679a35fb04efa294294 = MAKE_FUNCTION_FRAME(tstate, codeobj_0d87012cfecbc679a35fb04efa294294, module_pandas$core$base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0d87012cfecbc679a35fb04efa294294->m_type_description == NULL);
    frame_0d87012cfecbc679a35fb04efa294294 = cache_frame_0d87012cfecbc679a35fb04efa294294;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_0d87012cfecbc679a35fb04efa294294);
    assert(Py_REFCNT(frame_0d87012cfecbc679a35fb04efa294294) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[121]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1368;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[164]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1368;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_kw_call_arg_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[57]);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 1368;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_keep);
        tmp_kw_call_dict_value_0_1 = par_keep;
        frame_0d87012cfecbc679a35fb04efa294294->m_frame.f_lineno = 1368;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[163]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_arg_value_0_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1368;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0d87012cfecbc679a35fb04efa294294, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0d87012cfecbc679a35fb04efa294294->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0d87012cfecbc679a35fb04efa294294, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0d87012cfecbc679a35fb04efa294294,
        type_description_1,
        par_self,
        par_keep
    );


    // Release cached frame if used for exception.
    if (frame_0d87012cfecbc679a35fb04efa294294 == cache_frame_0d87012cfecbc679a35fb04efa294294) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0d87012cfecbc679a35fb04efa294294);
        cache_frame_0d87012cfecbc679a35fb04efa294294 = NULL;
    }

    assertFrameObject(frame_0d87012cfecbc679a35fb04efa294294);

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
    CHECK_OBJECT(par_keep);
    Py_DECREF(par_keep);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_keep);
    Py_DECREF(par_keep);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$base$$$function__46__arith_method(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    PyObject *par_op = python_pars[2];
    PyObject *var_res_name = NULL;
    PyObject *var_lvalues = NULL;
    PyObject *var_rvalues = NULL;
    PyObject *var_result = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_36a65baca5ea354422b2fee0638e5521;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_36a65baca5ea354422b2fee0638e5521 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_36a65baca5ea354422b2fee0638e5521)) {
        Py_XDECREF(cache_frame_36a65baca5ea354422b2fee0638e5521);

#if _DEBUG_REFCOUNTS
        if (cache_frame_36a65baca5ea354422b2fee0638e5521 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_36a65baca5ea354422b2fee0638e5521 = MAKE_FUNCTION_FRAME(tstate, codeobj_36a65baca5ea354422b2fee0638e5521, module_pandas$core$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_36a65baca5ea354422b2fee0638e5521->m_type_description == NULL);
    frame_36a65baca5ea354422b2fee0638e5521 = cache_frame_36a65baca5ea354422b2fee0638e5521;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_36a65baca5ea354422b2fee0638e5521);
    assert(Py_REFCNT(frame_36a65baca5ea354422b2fee0638e5521) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[165]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[165]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1371;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        CHECK_OBJECT(par_other);
        tmp_args_element_value_2 = par_other;
        frame_36a65baca5ea354422b2fee0638e5521->m_frame.f_lineno = 1371;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_1,
                mod_consts[166],
                call_args
            );
        }

        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1371;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_res_name == NULL);
        var_res_name = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[57]);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1373;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_lvalues == NULL);
        var_lvalues = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[167]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[167]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1374;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_tuple_element_1 = par_other;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[168]);
        frame_36a65baca5ea354422b2fee0638e5521->m_frame.f_lineno = 1374;
        tmp_assign_source_3 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1374;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_rvalues == NULL);
        var_rvalues = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[165]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[165]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1375;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[169]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1375;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_rvalues);
        tmp_args_element_value_3 = var_rvalues;
        CHECK_OBJECT(var_lvalues);
        tmp_expression_value_3 = var_lvalues;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[58]);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 1375;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_36a65baca5ea354422b2fee0638e5521->m_frame.f_lineno = 1375;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1375;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_rvalues;
            assert(old != NULL);
            var_rvalues = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[170]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[170]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1376;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_rvalues);
        tmp_args_element_value_5 = var_rvalues;
        frame_36a65baca5ea354422b2fee0638e5521->m_frame.f_lineno = 1376;
        tmp_assign_source_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_5);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1376;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_rvalues;
            assert(old != NULL);
            var_rvalues = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(var_rvalues);
        tmp_isinstance_inst_1 = var_rvalues;
        tmp_isinstance_cls_1 = (PyObject *)&PyRange_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1377;
            type_description_1 = "ooooooo";
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
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_7;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1378;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[171]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1378;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_rvalues);
        tmp_expression_value_5 = var_rvalues;
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[172]);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 1378;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_rvalues);
        tmp_expression_value_6 = var_rvalues;
        tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[173]);
        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_6);

            exception_lineno = 1378;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_rvalues);
        tmp_expression_value_7 = var_rvalues;
        tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[174]);
        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);

            exception_lineno = 1378;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_36a65baca5ea354422b2fee0638e5521->m_frame.f_lineno = 1378;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_6);
        Py_DECREF(tmp_args_element_value_7);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1378;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_rvalues;
            assert(old != NULL);
            var_rvalues = tmp_assign_source_6;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_8;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1380;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[175]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1380;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        frame_36a65baca5ea354422b2fee0638e5521->m_frame.f_lineno = 1380;
        tmp_assign_source_7 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_5, &PyTuple_GET_ITEM(mod_consts[176], 0), mod_consts[177]);
        Py_DECREF(tmp_called_value_5);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1380;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__source == NULL);
        tmp_with_1__source = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_9 = tmp_with_1__source;
        tmp_called_value_6 = LOOKUP_SPECIAL(tstate, tmp_expression_value_9, mod_consts[178]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1380;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        frame_36a65baca5ea354422b2fee0638e5521->m_frame.f_lineno = 1380;
        tmp_assign_source_8 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_6);
        Py_DECREF(tmp_called_value_6);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1380;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_10 = tmp_with_1__source;
        tmp_assign_source_9 = LOOKUP_SPECIAL(tstate, tmp_expression_value_10, mod_consts[179]);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1380;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__exit == NULL);
        tmp_with_1__exit = tmp_assign_source_9;
    }
    {
        nuitka_bool tmp_assign_source_10;
        tmp_assign_source_10 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_10;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[165]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[165]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1381;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_lvalues);
        tmp_args_element_value_9 = var_lvalues;
        CHECK_OBJECT(var_rvalues);
        tmp_args_element_value_10 = var_rvalues;
        CHECK_OBJECT(par_op);
        tmp_args_element_value_11 = par_op;
        frame_36a65baca5ea354422b2fee0638e5521->m_frame.f_lineno = 1381;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11};
            tmp_assign_source_11 = CALL_METHOD_WITH_ARGS3(
                tstate,
                tmp_called_instance_2,
                mod_consts[180],
                call_args
            );
        }

        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1381;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_11;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_36a65baca5ea354422b2fee0638e5521, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_36a65baca5ea354422b2fee0638e5521, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        nuitka_bool tmp_assign_source_12;
        tmp_assign_source_12 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_12;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_7 = tmp_with_1__exit;
        tmp_args_element_value_12 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_13 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_14 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(PyThreadState_GET()));
        frame_36a65baca5ea354422b2fee0638e5521->m_frame.f_lineno = 1380;
        {
            PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_7, call_args);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1380;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1380;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 1380;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_36a65baca5ea354422b2fee0638e5521->m_frame) frame_36a65baca5ea354422b2fee0638e5521->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooo";
    goto try_except_handler_5;
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 1380;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_36a65baca5ea354422b2fee0638e5521->m_frame) frame_36a65baca5ea354422b2fee0638e5521->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooo";
    goto try_except_handler_5;
    branch_end_2:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    goto try_end_3;
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

    {
        bool tmp_condition_result_4;
        nuitka_bool tmp_cmp_expr_left_2;
        nuitka_bool tmp_cmp_expr_right_2;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_2 = tmp_with_1__indicator;
        tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_8 = tmp_with_1__exit;
        frame_36a65baca5ea354422b2fee0638e5521->m_frame.f_lineno = 1380;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_8, mod_consts[181]);

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_3);
            Py_XDECREF(exception_keeper_value_3);
            Py_XDECREF(exception_keeper_tb_3);

            exception_lineno = 1380;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_4:;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    {
        bool tmp_condition_result_5;
        nuitka_bool tmp_cmp_expr_left_3;
        nuitka_bool tmp_cmp_expr_right_3;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_3 = tmp_with_1__indicator;
        tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_5 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_9 = tmp_with_1__exit;
        frame_36a65baca5ea354422b2fee0638e5521->m_frame.f_lineno = 1380;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_9, mod_consts[181]);

        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1380;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_5:;
    goto try_end_4;
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

    Py_XDECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    Py_XDECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_11 = par_self;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[182]);
        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1383;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_result == NULL) {
            Py_DECREF(tmp_called_value_10);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[89]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 1383;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_0_1 = var_result;
        CHECK_OBJECT(var_res_name);
        tmp_kw_call_dict_value_0_1 = var_res_name;
        frame_36a65baca5ea354422b2fee0638e5521->m_frame.f_lineno = 1383;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_10, args, kw_values, mod_consts[183]);
        }

        Py_DECREF(tmp_called_value_10);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1383;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_36a65baca5ea354422b2fee0638e5521, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_36a65baca5ea354422b2fee0638e5521->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_36a65baca5ea354422b2fee0638e5521, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_36a65baca5ea354422b2fee0638e5521,
        type_description_1,
        par_self,
        par_other,
        par_op,
        var_res_name,
        var_lvalues,
        var_rvalues,
        var_result
    );


    // Release cached frame if used for exception.
    if (frame_36a65baca5ea354422b2fee0638e5521 == cache_frame_36a65baca5ea354422b2fee0638e5521) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_36a65baca5ea354422b2fee0638e5521);
        cache_frame_36a65baca5ea354422b2fee0638e5521 = NULL;
    }

    assertFrameObject(frame_36a65baca5ea354422b2fee0638e5521);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_res_name);
    Py_DECREF(var_res_name);
    var_res_name = NULL;
    CHECK_OBJECT(var_lvalues);
    Py_DECREF(var_lvalues);
    var_lvalues = NULL;
    CHECK_OBJECT(var_rvalues);
    Py_DECREF(var_rvalues);
    var_rvalues = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_res_name);
    var_res_name = NULL;
    Py_XDECREF(var_lvalues);
    var_lvalues = NULL;
    Py_XDECREF(var_rvalues);
    var_rvalues = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    CHECK_OBJECT(par_op);
    Py_DECREF(par_op);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    CHECK_OBJECT(par_op);
    Py_DECREF(par_op);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$base$$$function__47__construct_result(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_result = python_pars[1];
    PyObject *par_name = python_pars[2];
    struct Nuitka_FrameObject *frame_c328b2be73a45fa2678d051381956716;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c328b2be73a45fa2678d051381956716 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c328b2be73a45fa2678d051381956716)) {
        Py_XDECREF(cache_frame_c328b2be73a45fa2678d051381956716);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c328b2be73a45fa2678d051381956716 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c328b2be73a45fa2678d051381956716 = MAKE_FUNCTION_FRAME(tstate, codeobj_c328b2be73a45fa2678d051381956716, module_pandas$core$base, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c328b2be73a45fa2678d051381956716->m_type_description == NULL);
    frame_c328b2be73a45fa2678d051381956716 = cache_frame_c328b2be73a45fa2678d051381956716;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_c328b2be73a45fa2678d051381956716);
    assert(Py_REFCNT(frame_c328b2be73a45fa2678d051381956716) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1390;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        frame_c328b2be73a45fa2678d051381956716->m_frame.f_lineno = 1390;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_raise_type_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1390;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 1390;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c328b2be73a45fa2678d051381956716, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c328b2be73a45fa2678d051381956716->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c328b2be73a45fa2678d051381956716, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c328b2be73a45fa2678d051381956716,
        type_description_1,
        par_self,
        par_result,
        par_name
    );


    // Release cached frame if used for exception.
    if (frame_c328b2be73a45fa2678d051381956716 == cache_frame_c328b2be73a45fa2678d051381956716) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c328b2be73a45fa2678d051381956716);
        cache_frame_c328b2be73a45fa2678d051381956716 = NULL;
    }

    assertFrameObject(frame_c328b2be73a45fa2678d051381956716);

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
    CHECK_OBJECT(par_result);
    Py_DECREF(par_result);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}



static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__10__obj_with_exclusions() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$base$$$function__10__obj_with_exclusions,
        mod_consts[295],
#if PYTHON_VERSION >= 0x300
        mod_consts[296],
#endif
        codeobj_85ac33b3acd60659494f36f85d9ed917,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__11___getitem__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$base$$$function__11___getitem__,
        mod_consts[257],
#if PYTHON_VERSION >= 0x300
        mod_consts[297],
#endif
        codeobj_36e0ce6b99b9f9f494f91e02f4bdd4a8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__12__gotitem(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$base$$$function__12__gotitem,
        mod_consts[41],
#if PYTHON_VERSION >= 0x300
        mod_consts[299],
#endif
        codeobj_f23edd93916d977a408b24886d73e9d6,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$base,
        mod_consts[46],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__13__infer_selection(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$base$$$function__13__infer_selection,
        mod_consts[301],
#if PYTHON_VERSION >= 0x300
        mod_consts[302],
#endif
        codeobj_5f35e44b40425f707b16db1e95d11a28,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$base,
        mod_consts[53],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__14_aggregate() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$base$$$function__14_aggregate,
        mod_consts[303],
#if PYTHON_VERSION >= 0x300
        mod_consts[304],
#endif
        codeobj_66257adad2909aa4883d679e0b310ed7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__15_dtype(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$base$$$function__15_dtype,
        mod_consts[66],
#if PYTHON_VERSION >= 0x300
        mod_consts[315],
#endif
        codeobj_ae704039fef198ff4cd6b771492f5ebe,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__16__values(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$base$$$function__16__values,
        mod_consts[57],
#if PYTHON_VERSION >= 0x300
        mod_consts[317],
#endif
        codeobj_8d6e325b1901f462bd90baa33f5a8e2f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__17_transpose(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$base$$$function__17_transpose,
        mod_consts[319],
#if PYTHON_VERSION >= 0x300
        mod_consts[320],
#endif
        codeobj_c9545f7b9e30a3b63151f01a9e1378e1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$base,
        mod_consts[56],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__18_shape(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$base$$$function__18_shape,
        mod_consts[58],
#if PYTHON_VERSION >= 0x300
        mod_consts[324],
#endif
        codeobj_f9560298a27a17661557afccda5e5644,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$base,
        mod_consts[59],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__19___len__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$base$$$function__19___len__,
        mod_consts[325],
#if PYTHON_VERSION >= 0x300
        mod_consts[326],
#endif
        codeobj_3a98811e259b5edac9af89167ca369f4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__1__constructor() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$base$$$function__1__constructor,
        mod_consts[155],
#if PYTHON_VERSION >= 0x300
        mod_consts[266],
#endif
        codeobj_a4c2a0f8faff6c3050342c9f1492d71c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$base,
        mod_consts[0],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__20_ndim(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[28],
#if PYTHON_VERSION >= 0x300
        mod_consts[329],
#endif
        codeobj_ab46e6ef009a8e5762e3a55ca38a1975,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$base,
        mod_consts[328],
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnGeneric(result, mod_consts[51]);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__21_item() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$base$$$function__21_item,
        mod_consts[116],
#if PYTHON_VERSION >= 0x300
        mod_consts[330],
#endif
        codeobj_3de1389174140c0e5ef72d5331e86da7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$base,
        mod_consts[61],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__22_nbytes(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$base$$$function__22_nbytes,
        mod_consts[62],
#if PYTHON_VERSION >= 0x300
        mod_consts[331],
#endif
        codeobj_c1e09e0b70f166ae4e210e4b56a3f7a9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$base,
        mod_consts[63],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__23_size(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$base$$$function__23_size,
        mod_consts[91],
#if PYTHON_VERSION >= 0x300
        mod_consts[332],
#endif
        codeobj_68dd194fadb2c9025042006a8719577f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$base,
        mod_consts[64],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__24_array(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$base$$$function__24_array,
        mod_consts[68],
#if PYTHON_VERSION >= 0x300
        mod_consts[334],
#endif
        codeobj_7cd4c0ece5bb3c20e41b554c030e8a69,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$base,
        mod_consts[65],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__25_to_numpy(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$base$$$function__25_to_numpy,
        mod_consts[69],
#if PYTHON_VERSION >= 0x300
        mod_consts[336],
#endif
        codeobj_f187c567ad9f02ebc2ed987976b194a6,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$base,
        mod_consts[90],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__26_empty(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$base$$$function__26_empty,
        mod_consts[338],
#if PYTHON_VERSION >= 0x300
        mod_consts[339],
#endif
        codeobj_0a5e07b87d5b987922410c607225c9b4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__27_argmax(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$base$$$function__27_argmax,
        mod_consts[106],
#if PYTHON_VERSION >= 0x300
        mod_consts[344],
#endif
        codeobj_6c68d086e802dd048245fd363eb0c91f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$base,
        mod_consts[110],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__28_argmin(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$base$$$function__28_argmin,
        mod_consts[112],
#if PYTHON_VERSION >= 0x300
        mod_consts[346],
#endif
        codeobj_b87e5f36cde3d1709fba67be532d40d5,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__29_tolist() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$base$$$function__29_tolist,
        mod_consts[114],
#if PYTHON_VERSION >= 0x300
        mod_consts[347],
#endif
        codeobj_19fb99d5f11c8adbe03b395ae66e8073,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$base,
        mod_consts[115],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__2___repr__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$base$$$function__2___repr__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[268],
#endif
        codeobj_9e3987ad9b099be6efed3c5f9b903b1e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$base,
        mod_consts[2],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__30___iter__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$base$$$function__30___iter__,
        mod_consts[350],
#if PYTHON_VERSION >= 0x300
        mod_consts[351],
#endif
        codeobj_bf9d3bd015c7765ef1c20989e41dc27b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$base,
        mod_consts[117],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__31_hasnans(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$base$$$function__31_hasnans,
        mod_consts[352],
#if PYTHON_VERSION >= 0x300
        mod_consts[353],
#endif
        codeobj_45c4aff2266f43595279d63b4e35c6f0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$base,
        mod_consts[118],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__32__map_values(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$base$$$function__32__map_values,
        mod_consts[355],
#if PYTHON_VERSION >= 0x300
        mod_consts[356],
#endif
        codeobj_5bed0a8bed1e776a31a737ce65ff3f06,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$base,
        mod_consts[124],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__33_value_counts(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$base$$$function__33_value_counts,
        mod_consts[359],
#if PYTHON_VERSION >= 0x300
        mod_consts[360],
#endif
        codeobj_077fd7eea7ba10d8f85b0950c76d605f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$base,
        mod_consts[127],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__34_unique() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$base$$$function__34_unique,
        mod_consts[128],
#if PYTHON_VERSION >= 0x300
        mod_consts[361],
#endif
        codeobj_8bd6255ca009b3b020d07da083ce6b46,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__35_nunique(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$base$$$function__35_nunique,
        mod_consts[132],
#if PYTHON_VERSION >= 0x300
        mod_consts[363],
#endif
        codeobj_23f16344ab6ac86d3a1f62eb619878cf,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$base,
        mod_consts[131],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__36_is_unique(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$base$$$function__36_is_unique,
        mod_consts[364],
#if PYTHON_VERSION >= 0x300
        mod_consts[365],
#endif
        codeobj_41519162933621077f5dde7f8623b17a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$base,
        mod_consts[135],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__37_is_monotonic_increasing(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$base$$$function__37_is_monotonic_increasing,
        mod_consts[140],
#if PYTHON_VERSION >= 0x300
        mod_consts[366],
#endif
        codeobj_2a0fbf306a0ee6264da0e66ff1700851,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$base,
        mod_consts[141],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__38_is_monotonic_decreasing(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$base$$$function__38_is_monotonic_decreasing,
        mod_consts[142],
#if PYTHON_VERSION >= 0x300
        mod_consts[367],
#endif
        codeobj_10f14def9781e7edfc5a63dff2395136,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$base,
        mod_consts[143],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__39__memory_usage(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$base$$$function__39__memory_usage,
        mod_consts[369],
#if PYTHON_VERSION >= 0x300
        mod_consts[370],
#endif
        codeobj_f578fb0ded0be75f13f959297fb92a2d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$base,
        mod_consts[148],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__3__reset_cache(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$base$$$function__3__reset_cache,
        mod_consts[271],
#if PYTHON_VERSION >= 0x300
        mod_consts[272],
#endif
        codeobj_95780c129053ad54e4a8afe77965cb74,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$base,
        mod_consts[6],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__40_factorize(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$base$$$function__40_factorize,
        mod_consts[149],
#if PYTHON_VERSION >= 0x300
        mod_consts[376],
#endif
        codeobj_9bbe454c9a3de8a7bfec0657a34f3086,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__41_searchsorted(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[160],
#if PYTHON_VERSION >= 0x300
        mod_consts[380],
#endif
        codeobj_e9b575a8e560b2cea10e5276381e9a12,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__42_searchsorted(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[160],
#if PYTHON_VERSION >= 0x300
        mod_consts[380],
#endif
        codeobj_b21e4ca3536eeb6660c1b1df82b9238b,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__43_searchsorted(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$base$$$function__43_searchsorted,
        mod_consts[160],
#if PYTHON_VERSION >= 0x300
        mod_consts[380],
#endif
        codeobj_64f6e201c830f11ca63de4f5ea6c3014,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__44_drop_duplicates(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$base$$$function__44_drop_duplicates,
        mod_consts[387],
#if PYTHON_VERSION >= 0x300
        mod_consts[388],
#endif
        codeobj_f24291cc733b0e7473a097e6d8e8401f,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_pandas$core$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__45__duplicated(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$base$$$function__45__duplicated,
        mod_consts[162],
#if PYTHON_VERSION >= 0x300
        mod_consts[391],
#endif
        codeobj_0d87012cfecbc679a35fb04efa294294,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__46__arith_method() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$base$$$function__46__arith_method,
        mod_consts[392],
#if PYTHON_VERSION >= 0x300
        mod_consts[393],
#endif
        codeobj_36a65baca5ea354422b2fee0638e5521,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__47__construct_result() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$base$$$function__47__construct_result,
        mod_consts[182],
#if PYTHON_VERSION >= 0x300
        mod_consts[394],
#endif
        codeobj_c328b2be73a45fa2678d051381956716,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$base,
        mod_consts[184],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__4___sizeof__(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$base$$$function__4___sizeof__,
        mod_consts[13],
#if PYTHON_VERSION >= 0x300
        mod_consts[274],
#endif
        codeobj_8642d27ab0083469ce8cef090e623a59,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$base,
        mod_consts[14],
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__5__freeze(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$base$$$function__5__freeze,
        mod_consts[279],
#if PYTHON_VERSION >= 0x300
        mod_consts[280],
#endif
        codeobj_9dbaaba0ea97c401da3414a7ae2f6a1a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$base,
        mod_consts[17],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__6___setattr__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$base$$$function__6___setattr__,
        mod_consts[15],
#if PYTHON_VERSION >= 0x300
        mod_consts[282],
#endif
        codeobj_55955e715b0e82dd2856cc796738db93,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__7__selection_list() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$base$$$function__7__selection_list,
        mod_consts[30],
#if PYTHON_VERSION >= 0x300
        mod_consts[292],
#endif
        codeobj_c8ea14f6ad8b97099b81cac910ddac27,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__8__selected_obj() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$base$$$function__8__selected_obj,
        mod_consts[27],
#if PYTHON_VERSION >= 0x300
        mod_consts[293],
#endif
        codeobj_80b2f41121a255933e0ae43b207e4fa6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$base$$$function__9_ndim(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$base$$$function__9_ndim,
        mod_consts[28],
#if PYTHON_VERSION >= 0x300
        mod_consts[294],
#endif
        codeobj_9fb3165bfaa40ab8fdc5fadfa7577436,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$base,
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

function_impl_code functable_pandas$core$base[] = {
    impl_pandas$core$base$$$function__1__constructor,
    impl_pandas$core$base$$$function__2___repr__,
    impl_pandas$core$base$$$function__3__reset_cache,
    impl_pandas$core$base$$$function__4___sizeof__,
    impl_pandas$core$base$$$function__5__freeze,
    impl_pandas$core$base$$$function__6___setattr__,
    impl_pandas$core$base$$$function__7__selection_list,
    impl_pandas$core$base$$$function__8__selected_obj,
    impl_pandas$core$base$$$function__9_ndim,
    impl_pandas$core$base$$$function__10__obj_with_exclusions,
    impl_pandas$core$base$$$function__11___getitem__,
    impl_pandas$core$base$$$function__12__gotitem,
    impl_pandas$core$base$$$function__13__infer_selection,
    impl_pandas$core$base$$$function__14_aggregate,
    impl_pandas$core$base$$$function__15_dtype,
    impl_pandas$core$base$$$function__16__values,
    impl_pandas$core$base$$$function__17_transpose,
    impl_pandas$core$base$$$function__18_shape,
    impl_pandas$core$base$$$function__19___len__,
    NULL,
    impl_pandas$core$base$$$function__21_item,
    impl_pandas$core$base$$$function__22_nbytes,
    impl_pandas$core$base$$$function__23_size,
    impl_pandas$core$base$$$function__24_array,
    impl_pandas$core$base$$$function__25_to_numpy,
    impl_pandas$core$base$$$function__26_empty,
    impl_pandas$core$base$$$function__27_argmax,
    impl_pandas$core$base$$$function__28_argmin,
    impl_pandas$core$base$$$function__29_tolist,
    impl_pandas$core$base$$$function__30___iter__,
    impl_pandas$core$base$$$function__31_hasnans,
    impl_pandas$core$base$$$function__32__map_values,
    impl_pandas$core$base$$$function__33_value_counts,
    impl_pandas$core$base$$$function__34_unique,
    impl_pandas$core$base$$$function__35_nunique,
    impl_pandas$core$base$$$function__36_is_unique,
    impl_pandas$core$base$$$function__37_is_monotonic_increasing,
    impl_pandas$core$base$$$function__38_is_monotonic_decreasing,
    impl_pandas$core$base$$$function__39__memory_usage,
    impl_pandas$core$base$$$function__40_factorize,
    NULL,
    NULL,
    impl_pandas$core$base$$$function__43_searchsorted,
    impl_pandas$core$base$$$function__44_drop_duplicates,
    impl_pandas$core$base$$$function__45__duplicated,
    impl_pandas$core$base$$$function__46__arith_method,
    impl_pandas$core$base$$$function__47__construct_result,
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

    function_impl_code *current = functable_pandas$core$base;
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

    if (offset > sizeof(functable_pandas$core$base) || offset < 0) {
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
        functable_pandas$core$base[offset],
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
        module_pandas$core$base,
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
PyObject *modulecode_pandas$core$base(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pandas.core.base");

    // Store the module for future use.
    module_pandas$core$base = module;

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
        PRINT_STRING("pandas.core.base: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pandas.core.base: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initpandas$core$base\n");

    moduledict_pandas$core$base = MODULE_DICT(module_pandas$core$base);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pandas$core$base,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pandas$core$base,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[19]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pandas$core$base,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pandas$core$base,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pandas$core$base,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pandas$core$base);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pandas$core$base, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_pandas$core$base, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pandas$core$base, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pandas$core$base);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pandas$core$base, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_CellObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__bases_orig = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__bases_orig = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    PyObject *tmp_import_from_5__module = NULL;
    PyObject *tmp_import_from_6__module = NULL;
    PyObject *tmp_import_from_7__module = NULL;
    PyObject *tmp_import_from_8__module = NULL;
    struct Nuitka_FrameObject *frame_9faabfa059097986d8ff3cc57e843bb7;
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
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    int tmp_res;
    PyObject *locals_pandas$core$base$$$class__1_PandasObject_100 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_25625bd619ef8bfa1d5292a18b5ccd04_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *locals_pandas$core$base$$$class__2_NoNewAttributesMixin_147 = NULL;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *locals_pandas$core$base$$$class__3_SelectionMixin_181 = NULL;
    struct Nuitka_FrameObject *frame_42ebc4f3f4b4588f97dc9444868e9757_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *locals_pandas$core$base$$$class__4_IndexOpsMixin_284 = NULL;
    struct Nuitka_FrameObject *frame_32384bfc83d95195e9f91f62b7d11be9_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[185];
        UPDATE_STRING_DICT0(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[186], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[187];
        UPDATE_STRING_DICT0(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[188], tmp_assign_source_2);
    }
    frame_9faabfa059097986d8ff3cc57e843bb7 = MAKE_MODULE_FRAME(codeobj_9faabfa059097986d8ff3cc57e843bb7, module_pandas$core$base);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_9faabfa059097986d8ff3cc57e843bb7);
    assert(Py_REFCNT(frame_9faabfa059097986d8ff3cc57e843bb7) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[187];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[189]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[189]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[190], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[189]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[189]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[191], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[192], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = MAKE_DICT_EMPTY();
        UPDATE_STRING_DICT1(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[193], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[194]);
        }
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT1(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[194], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[195];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pandas$core$base;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[138];
        frame_9faabfa059097986d8ff3cc57e843bb7->m_frame.f_lineno = 7;
        tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[195], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_7 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_7);
        tmp_import_from_1__module = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = Py_False;
        UPDATE_STRING_DICT0(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[196], tmp_assign_source_8);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_pandas$core$base,
                mod_consts[197],
                mod_consts[138]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[197]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[197], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_pandas$core$base,
                mod_consts[198],
                mod_consts[138]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[198]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[198], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_pandas$core$base,
                mod_consts[199],
                mod_consts[138]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[199]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[199], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_pandas$core$base,
                mod_consts[146],
                mod_consts[138]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[146]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_pandas$core$base,
                mod_consts[200],
                mod_consts[138]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[200]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[200], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_6,
                (PyObject *)moduledict_pandas$core$base,
                mod_consts[201],
                mod_consts[138]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[201]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[201], tmp_assign_source_14);
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
        PyObject *tmp_assign_source_15;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[96];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_pandas$core$base;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[138];
        frame_9faabfa059097986d8ff3cc57e843bb7->m_frame.f_lineno = 17;
        tmp_assign_source_15 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[202];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_pandas$core$base;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[138];
        frame_9faabfa059097986d8ff3cc57e843bb7->m_frame.f_lineno = 19;
        tmp_assign_source_16 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[203];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_pandas$core$base;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[204];
        tmp_level_value_4 = mod_consts[138];
        frame_9faabfa059097986d8ff3cc57e843bb7->m_frame.f_lineno = 21;
        tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_7,
                (PyObject *)moduledict_pandas$core$base,
                mod_consts[83],
                mod_consts[138]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[83]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[205];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_pandas$core$base;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[206];
        tmp_level_value_5 = mod_consts[138];
        frame_9faabfa059097986d8ff3cc57e843bb7->m_frame.f_lineno = 23;
        tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_8,
                (PyObject *)moduledict_pandas$core$base,
                mod_consts[48],
                mod_consts[138]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts[48]);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[207];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_pandas$core$base;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[208];
        tmp_level_value_6 = mod_consts[138];
        frame_9faabfa059097986d8ff3cc57e843bb7->m_frame.f_lineno = 24;
        tmp_assign_source_19 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_19;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_9 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_9,
                (PyObject *)moduledict_pandas$core$base,
                mod_consts[209],
                mod_consts[138]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts[209]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[209], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_10 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_10,
                (PyObject *)moduledict_pandas$core$base,
                mod_consts[210],
                mod_consts[138]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts[210]);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[210], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_11 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_11,
                (PyObject *)moduledict_pandas$core$base,
                mod_consts[211],
                mod_consts[138]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts[211]);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[211], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_12 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_12,
                (PyObject *)moduledict_pandas$core$base,
                mod_consts[212],
                mod_consts[138]
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts[212]);
        }

        if (tmp_assign_source_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[212], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_13 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_13,
                (PyObject *)moduledict_pandas$core$base,
                mod_consts[213],
                mod_consts[138]
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts[213]);
        }

        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[213], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_14 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_14,
                (PyObject *)moduledict_pandas$core$base,
                mod_consts[214],
                mod_consts[138]
            );
        } else {
            tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts[214]);
        }

        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[214], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_15 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_15,
                (PyObject *)moduledict_pandas$core$base,
                mod_consts[215],
                mod_consts[138]
            );
        } else {
            tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts[215]);
        }

        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[215], tmp_assign_source_26);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_16;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[216];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_pandas$core$base;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[217];
        tmp_level_value_7 = mod_consts[138];
        frame_9faabfa059097986d8ff3cc57e843bb7->m_frame.f_lineno = 33;
        tmp_import_name_from_16 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_16,
                (PyObject *)moduledict_pandas$core$base,
                mod_consts[145],
                mod_consts[138]
            );
        } else {
            tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts[145]);
        }

        Py_DECREF(tmp_import_name_from_16);
        if (tmp_assign_source_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_17;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[218];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_pandas$core$base;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[219];
        tmp_level_value_8 = mod_consts[138];
        frame_9faabfa059097986d8ff3cc57e843bb7->m_frame.f_lineno = 34;
        tmp_import_name_from_17 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_17,
                (PyObject *)moduledict_pandas$core$base,
                mod_consts[220],
                mod_consts[138]
            );
        } else {
            tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts[220]);
        }

        Py_DECREF(tmp_import_name_from_17);
        if (tmp_assign_source_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_import_name_from_18;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[221];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_pandas$core$base;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[222];
        tmp_level_value_9 = mod_consts[138];
        frame_9faabfa059097986d8ff3cc57e843bb7->m_frame.f_lineno = 35;
        tmp_import_name_from_18 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_import_name_from_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_18,
                (PyObject *)moduledict_pandas$core$base,
                mod_consts[45],
                mod_consts[138]
            );
        } else {
            tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts[45]);
        }

        Py_DECREF(tmp_import_name_from_18);
        if (tmp_assign_source_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[223];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_pandas$core$base;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = mod_consts[224];
        tmp_level_value_10 = mod_consts[138];
        frame_9faabfa059097986d8ff3cc57e843bb7->m_frame.f_lineno = 36;
        tmp_assign_source_30 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_assign_source_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_30;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_import_name_from_19;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_19 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_19)) {
            tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_19,
                (PyObject *)moduledict_pandas$core$base,
                mod_consts[225],
                mod_consts[138]
            );
        } else {
            tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts[225]);
        }

        if (tmp_assign_source_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[225], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_import_name_from_20;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_20 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_20)) {
            tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_20,
                (PyObject *)moduledict_pandas$core$base,
                mod_consts[226],
                mod_consts[138]
            );
        } else {
            tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts[226]);
        }

        if (tmp_assign_source_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[226], tmp_assign_source_32);
    }
    goto try_end_3;
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

    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_import_name_from_21;
        PyObject *tmp_name_value_11;
        PyObject *tmp_globals_arg_value_11;
        PyObject *tmp_locals_arg_value_11;
        PyObject *tmp_fromlist_value_11;
        PyObject *tmp_level_value_11;
        tmp_name_value_11 = mod_consts[227];
        tmp_globals_arg_value_11 = (PyObject *)moduledict_pandas$core$base;
        tmp_locals_arg_value_11 = Py_None;
        tmp_fromlist_value_11 = mod_consts[228];
        tmp_level_value_11 = mod_consts[138];
        frame_9faabfa059097986d8ff3cc57e843bb7->m_frame.f_lineno = 40;
        tmp_import_name_from_21 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
        if (tmp_import_name_from_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_21)) {
            tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_21,
                (PyObject *)moduledict_pandas$core$base,
                mod_consts[102],
                mod_consts[138]
            );
        } else {
            tmp_assign_source_33 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts[102]);
        }

        Py_DECREF(tmp_import_name_from_21);
        if (tmp_assign_source_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_import_name_from_22;
        PyObject *tmp_name_value_12;
        PyObject *tmp_globals_arg_value_12;
        PyObject *tmp_locals_arg_value_12;
        PyObject *tmp_fromlist_value_12;
        PyObject *tmp_level_value_12;
        tmp_name_value_12 = mod_consts[229];
        tmp_globals_arg_value_12 = (PyObject *)moduledict_pandas$core$base;
        tmp_locals_arg_value_12 = Py_None;
        tmp_fromlist_value_12 = mod_consts[230];
        tmp_level_value_12 = mod_consts[138];
        frame_9faabfa059097986d8ff3cc57e843bb7->m_frame.f_lineno = 42;
        tmp_import_name_from_22 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
        if (tmp_import_name_from_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_22)) {
            tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_22,
                (PyObject *)moduledict_pandas$core$base,
                mod_consts[77],
                mod_consts[138]
            );
        } else {
            tmp_assign_source_34 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts[77]);
        }

        Py_DECREF(tmp_import_name_from_22);
        if (tmp_assign_source_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_name_value_13;
        PyObject *tmp_globals_arg_value_13;
        PyObject *tmp_locals_arg_value_13;
        PyObject *tmp_fromlist_value_13;
        PyObject *tmp_level_value_13;
        tmp_name_value_13 = mod_consts[231];
        tmp_globals_arg_value_13 = (PyObject *)moduledict_pandas$core$base;
        tmp_locals_arg_value_13 = Py_None;
        tmp_fromlist_value_13 = mod_consts[232];
        tmp_level_value_13 = mod_consts[138];
        frame_9faabfa059097986d8ff3cc57e843bb7->m_frame.f_lineno = 43;
        tmp_assign_source_35 = IMPORT_MODULE5(tstate, tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
        if (tmp_assign_source_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_4__module == NULL);
        tmp_import_from_4__module = tmp_assign_source_35;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_import_name_from_23;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_23 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_23)) {
            tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_23,
                (PyObject *)moduledict_pandas$core$base,
                mod_consts[144],
                mod_consts[138]
            );
        } else {
            tmp_assign_source_36 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_23, mod_consts[144]);
        }

        if (tmp_assign_source_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[144], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_import_name_from_24;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_24 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_24)) {
            tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_24,
                (PyObject *)moduledict_pandas$core$base,
                mod_consts[10],
                mod_consts[138]
            );
        } else {
            tmp_assign_source_37 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_24, mod_consts[10]);
        }

        if (tmp_assign_source_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_37);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_4__module);
    Py_DECREF(tmp_import_from_4__module);
    tmp_import_from_4__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_import_from_4__module);
    Py_DECREF(tmp_import_from_4__module);
    tmp_import_from_4__module = NULL;
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_import_name_from_25;
        PyObject *tmp_name_value_14;
        PyObject *tmp_globals_arg_value_14;
        PyObject *tmp_locals_arg_value_14;
        PyObject *tmp_fromlist_value_14;
        PyObject *tmp_level_value_14;
        tmp_name_value_14 = mod_consts[233];
        tmp_globals_arg_value_14 = (PyObject *)moduledict_pandas$core$base;
        tmp_locals_arg_value_14 = Py_None;
        tmp_fromlist_value_14 = mod_consts[234];
        tmp_level_value_14 = mod_consts[138];
        frame_9faabfa059097986d8ff3cc57e843bb7->m_frame.f_lineno = 47;
        tmp_import_name_from_25 = IMPORT_MODULE5(tstate, tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
        if (tmp_import_name_from_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_25)) {
            tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_25,
                (PyObject *)moduledict_pandas$core$base,
                mod_consts[67],
                mod_consts[138]
            );
        } else {
            tmp_assign_source_38 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_25, mod_consts[67]);
        }

        Py_DECREF(tmp_import_name_from_25);
        if (tmp_assign_source_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_name_value_15;
        PyObject *tmp_globals_arg_value_15;
        PyObject *tmp_locals_arg_value_15;
        PyObject *tmp_fromlist_value_15;
        PyObject *tmp_level_value_15;
        tmp_name_value_15 = mod_consts[235];
        tmp_globals_arg_value_15 = (PyObject *)moduledict_pandas$core$base;
        tmp_locals_arg_value_15 = Py_None;
        tmp_fromlist_value_15 = mod_consts[236];
        tmp_level_value_15 = mod_consts[138];
        frame_9faabfa059097986d8ff3cc57e843bb7->m_frame.f_lineno = 48;
        tmp_assign_source_39 = IMPORT_MODULE5(tstate, tmp_name_value_15, tmp_globals_arg_value_15, tmp_locals_arg_value_15, tmp_fromlist_value_15, tmp_level_value_15);
        if (tmp_assign_source_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_5__module == NULL);
        tmp_import_from_5__module = tmp_assign_source_39;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_import_name_from_26;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_26 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_26)) {
            tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_26,
                (PyObject *)moduledict_pandas$core$base,
                mod_consts[157],
                mod_consts[138]
            );
        } else {
            tmp_assign_source_40 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_26, mod_consts[157]);
        }

        if (tmp_assign_source_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[157], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_import_name_from_27;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_27 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_27)) {
            tmp_assign_source_41 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_27,
                (PyObject *)moduledict_pandas$core$base,
                mod_consts[23],
                mod_consts[138]
            );
        } else {
            tmp_assign_source_41 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_27, mod_consts[23]);
        }

        if (tmp_assign_source_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_import_name_from_28;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_28 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_28)) {
            tmp_assign_source_42 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_28,
                (PyObject *)moduledict_pandas$core$base,
                mod_consts[22],
                mod_consts[138]
            );
        } else {
            tmp_assign_source_42 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_28, mod_consts[22]);
        }

        if (tmp_assign_source_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_42);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_5__module);
    Py_DECREF(tmp_import_from_5__module);
    tmp_import_from_5__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_import_from_5__module);
    Py_DECREF(tmp_import_from_5__module);
    tmp_import_from_5__module = NULL;
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_name_value_16;
        PyObject *tmp_globals_arg_value_16;
        PyObject *tmp_locals_arg_value_16;
        PyObject *tmp_fromlist_value_16;
        PyObject *tmp_level_value_16;
        tmp_name_value_16 = mod_consts[237];
        tmp_globals_arg_value_16 = (PyObject *)moduledict_pandas$core$base;
        tmp_locals_arg_value_16 = Py_None;
        tmp_fromlist_value_16 = mod_consts[238];
        tmp_level_value_16 = mod_consts[138];
        frame_9faabfa059097986d8ff3cc57e843bb7->m_frame.f_lineno = 53;
        tmp_assign_source_43 = IMPORT_MODULE5(tstate, tmp_name_value_16, tmp_globals_arg_value_16, tmp_locals_arg_value_16, tmp_fromlist_value_16, tmp_level_value_16);
        if (tmp_assign_source_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_6__module == NULL);
        tmp_import_from_6__module = tmp_assign_source_43;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_import_name_from_29;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_29 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_29)) {
            tmp_assign_source_44 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_29,
                (PyObject *)moduledict_pandas$core$base,
                mod_consts[81],
                mod_consts[138]
            );
        } else {
            tmp_assign_source_44 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_29, mod_consts[81]);
        }

        if (tmp_assign_source_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_import_name_from_30;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_30 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_30)) {
            tmp_assign_source_45 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_30,
                (PyObject *)moduledict_pandas$core$base,
                mod_consts[130],
                mod_consts[138]
            );
        } else {
            tmp_assign_source_45 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_30, mod_consts[130]);
        }

        if (tmp_assign_source_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_45);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_6__module);
    Py_DECREF(tmp_import_from_6__module);
    tmp_import_from_6__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_import_from_6__module);
    Py_DECREF(tmp_import_from_6__module);
    tmp_import_from_6__module = NULL;
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_name_value_17;
        PyObject *tmp_globals_arg_value_17;
        PyObject *tmp_locals_arg_value_17;
        PyObject *tmp_fromlist_value_17;
        PyObject *tmp_level_value_17;
        tmp_name_value_17 = mod_consts[239];
        tmp_globals_arg_value_17 = (PyObject *)moduledict_pandas$core$base;
        tmp_locals_arg_value_17 = Py_None;
        tmp_fromlist_value_17 = mod_consts[240];
        tmp_level_value_17 = mod_consts[138];
        frame_9faabfa059097986d8ff3cc57e843bb7->m_frame.f_lineno = 58;
        tmp_assign_source_46 = IMPORT_MODULE5(tstate, tmp_name_value_17, tmp_globals_arg_value_17, tmp_locals_arg_value_17, tmp_fromlist_value_17, tmp_level_value_17);
        if (tmp_assign_source_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_7__module == NULL);
        tmp_import_from_7__module = tmp_assign_source_46;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_import_name_from_31;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_31 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_31)) {
            tmp_assign_source_47 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_31,
                (PyObject *)moduledict_pandas$core$base,
                mod_consts[121],
                mod_consts[138]
            );
        } else {
            tmp_assign_source_47 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_31, mod_consts[121]);
        }

        if (tmp_assign_source_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_import_name_from_32;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_32 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_32)) {
            tmp_assign_source_48 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_32,
                (PyObject *)moduledict_pandas$core$base,
                mod_consts[107],
                mod_consts[138]
            );
        } else {
            tmp_assign_source_48 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_32, mod_consts[107]);
        }

        if (tmp_assign_source_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_import_name_from_33;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_33 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_33)) {
            tmp_assign_source_49 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_33,
                (PyObject *)moduledict_pandas$core$base,
                mod_consts[165],
                mod_consts[138]
            );
        } else {
            tmp_assign_source_49 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_33, mod_consts[165]);
        }

        if (tmp_assign_source_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[165], tmp_assign_source_49);
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_7__module);
    Py_DECREF(tmp_import_from_7__module);
    tmp_import_from_7__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT(tmp_import_from_7__module);
    Py_DECREF(tmp_import_from_7__module);
    tmp_import_from_7__module = NULL;
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_import_name_from_34;
        PyObject *tmp_name_value_18;
        PyObject *tmp_globals_arg_value_18;
        PyObject *tmp_locals_arg_value_18;
        PyObject *tmp_fromlist_value_18;
        PyObject *tmp_level_value_18;
        tmp_name_value_18 = mod_consts[241];
        tmp_globals_arg_value_18 = (PyObject *)moduledict_pandas$core$base;
        tmp_locals_arg_value_18 = Py_None;
        tmp_fromlist_value_18 = mod_consts[242];
        tmp_level_value_18 = mod_consts[138];
        frame_9faabfa059097986d8ff3cc57e843bb7->m_frame.f_lineno = 63;
        tmp_import_name_from_34 = IMPORT_MODULE5(tstate, tmp_name_value_18, tmp_globals_arg_value_18, tmp_locals_arg_value_18, tmp_fromlist_value_18, tmp_level_value_18);
        if (tmp_import_name_from_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_34)) {
            tmp_assign_source_50 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_34,
                (PyObject *)moduledict_pandas$core$base,
                mod_consts[243],
                mod_consts[138]
            );
        } else {
            tmp_assign_source_50 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_34, mod_consts[243]);
        }

        Py_DECREF(tmp_import_name_from_34);
        if (tmp_assign_source_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[243], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_import_name_from_35;
        PyObject *tmp_name_value_19;
        PyObject *tmp_globals_arg_value_19;
        PyObject *tmp_locals_arg_value_19;
        PyObject *tmp_fromlist_value_19;
        PyObject *tmp_level_value_19;
        tmp_name_value_19 = mod_consts[244];
        tmp_globals_arg_value_19 = (PyObject *)moduledict_pandas$core$base;
        tmp_locals_arg_value_19 = Py_None;
        tmp_fromlist_value_19 = mod_consts[245];
        tmp_level_value_19 = mod_consts[138];
        frame_9faabfa059097986d8ff3cc57e843bb7->m_frame.f_lineno = 64;
        tmp_import_name_from_35 = IMPORT_MODULE5(tstate, tmp_name_value_19, tmp_globals_arg_value_19, tmp_locals_arg_value_19, tmp_fromlist_value_19, tmp_level_value_19);
        if (tmp_import_name_from_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_35)) {
            tmp_assign_source_51 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_35,
                (PyObject *)moduledict_pandas$core$base,
                mod_consts[246],
                mod_consts[138]
            );
        } else {
            tmp_assign_source_51 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_35, mod_consts[246]);
        }

        Py_DECREF(tmp_import_name_from_35);
        if (tmp_assign_source_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[246], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_import_name_from_36;
        PyObject *tmp_name_value_20;
        PyObject *tmp_globals_arg_value_20;
        PyObject *tmp_locals_arg_value_20;
        PyObject *tmp_fromlist_value_20;
        PyObject *tmp_level_value_20;
        tmp_name_value_20 = mod_consts[247];
        tmp_globals_arg_value_20 = (PyObject *)moduledict_pandas$core$base;
        tmp_locals_arg_value_20 = Py_None;
        tmp_fromlist_value_20 = mod_consts[248];
        tmp_level_value_20 = mod_consts[138];
        frame_9faabfa059097986d8ff3cc57e843bb7->m_frame.f_lineno = 65;
        tmp_import_name_from_36 = IMPORT_MODULE5(tstate, tmp_name_value_20, tmp_globals_arg_value_20, tmp_locals_arg_value_20, tmp_fromlist_value_20, tmp_level_value_20);
        if (tmp_import_name_from_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_36)) {
            tmp_assign_source_52 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_36,
                (PyObject *)moduledict_pandas$core$base,
                mod_consts[94],
                mod_consts[138]
            );
        } else {
            tmp_assign_source_52 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_36, mod_consts[94]);
        }

        Py_DECREF(tmp_import_name_from_36);
        if (tmp_assign_source_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_name_value_21;
        PyObject *tmp_globals_arg_value_21;
        PyObject *tmp_locals_arg_value_21;
        PyObject *tmp_fromlist_value_21;
        PyObject *tmp_level_value_21;
        tmp_name_value_21 = mod_consts[249];
        tmp_globals_arg_value_21 = (PyObject *)moduledict_pandas$core$base;
        tmp_locals_arg_value_21 = Py_None;
        tmp_fromlist_value_21 = mod_consts[250];
        tmp_level_value_21 = mod_consts[138];
        frame_9faabfa059097986d8ff3cc57e843bb7->m_frame.f_lineno = 66;
        tmp_assign_source_53 = IMPORT_MODULE5(tstate, tmp_name_value_21, tmp_globals_arg_value_21, tmp_locals_arg_value_21, tmp_fromlist_value_21, tmp_level_value_21);
        if (tmp_assign_source_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_8__module == NULL);
        tmp_import_from_8__module = tmp_assign_source_53;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_import_name_from_37;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_37 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_37)) {
            tmp_assign_source_54 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_37,
                (PyObject *)moduledict_pandas$core$base,
                mod_consts[170],
                mod_consts[138]
            );
        } else {
            tmp_assign_source_54 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_37, mod_consts[170]);
        }

        if (tmp_assign_source_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[170], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_import_name_from_38;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_38 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_38)) {
            tmp_assign_source_55 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_38,
                (PyObject *)moduledict_pandas$core$base,
                mod_consts[167],
                mod_consts[138]
            );
        } else {
            tmp_assign_source_55 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_38, mod_consts[167]);
        }

        if (tmp_assign_source_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[167], tmp_assign_source_55);
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_8__module);
    Py_DECREF(tmp_import_from_8__module);
    tmp_import_from_8__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_import_from_8__module);
    Py_DECREF(tmp_import_from_8__module);
    tmp_import_from_8__module = NULL;
    {
        PyObject *tmp_assign_source_56;
        tmp_assign_source_56 = MAKE_DICT_EMPTY();
        UPDATE_STRING_DICT1(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[251], tmp_assign_source_56);
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_ass_subvalue_1 = mod_consts[252];
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[193]);

        if (unlikely(tmp_ass_subscribed_1 == NULL)) {
            tmp_ass_subscribed_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[193]);
        }

        if (tmp_ass_subscribed_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[251];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_57;
        tmp_assign_source_57 = DICT_COPY(mod_consts[253]);
        UPDATE_STRING_DICT1(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[254], tmp_assign_source_57);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[243]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[243]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_9;
        }
        tmp_assign_source_58 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_58, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_58;
    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_59 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_59;
    }
    {
        PyObject *tmp_assign_source_60;
        tmp_assign_source_60 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_60;
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_9;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_1 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[138];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_9;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_9;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_61 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_61;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts[255]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_9;
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
        PyObject *tmp_assign_source_62;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[255]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_9;
        }
        tmp_tuple_element_2 = mod_consts[256];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_9faabfa059097986d8ff3cc57e843bb7->m_frame.f_lineno = 100;
        tmp_assign_source_62 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_62;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts[257]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_9;
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
        PyObject *tmp_expression_value_5;
        PyObject *tmp_name_value_22;
        PyObject *tmp_default_value_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[258];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_5 = tmp_class_creation_1__metaclass;
        tmp_name_value_22 = mod_consts[99];
        tmp_default_value_1 = mod_consts[259];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_22, tmp_default_value_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_9;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_6;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_6 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[99]);
            Py_DECREF(tmp_expression_value_6);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_9;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_9;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 100;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_9;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_63;
        tmp_assign_source_63 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_63;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_64;
        outline_0_var___class__ = Nuitka_Cell_Empty();
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_pandas$core$base$$$class__1_PandasObject_100 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[260];
        tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__1_PandasObject_100, mod_consts[261], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_11;
        }
        tmp_dictset_value = mod_consts[262];
        tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__1_PandasObject_100, mod_consts[186], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_11;
        }
        tmp_dictset_value = mod_consts[256];
        tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__1_PandasObject_100, mod_consts[263], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_11;
        }
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__1_PandasObject_100, mod_consts[193], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_11;
        }
        frame_25625bd619ef8bfa1d5292a18b5ccd04_2 = MAKE_CLASS_FRAME(tstate, codeobj_25625bd619ef8bfa1d5292a18b5ccd04, module_pandas$core$base, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_25625bd619ef8bfa1d5292a18b5ccd04_2);
        assert(Py_REFCNT(frame_25625bd619ef8bfa1d5292a18b5ccd04_2) == 2);

        // Framed code:
        {
            PyObject *tmp_ass_subvalue_2;
            PyObject *tmp_ass_subscribed_2;
            PyObject *tmp_ass_subscript_2;
            tmp_ass_subvalue_2 = mod_consts[264];
            tmp_ass_subscribed_2 = PyObject_GetItem(locals_pandas$core$base$$$class__1_PandasObject_100, mod_consts[193]);

            if (unlikely(tmp_ass_subscribed_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[193]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 106;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_2 = mod_consts[3];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
            Py_DECREF(tmp_ass_subscribed_2);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_2;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_pandas$core$base$$$class__1_PandasObject_100, mod_consts[265]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_4 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_2;
            } else {
                goto condexpr_false_2;
            }
            condexpr_true_2:;
            tmp_called_value_2 = PyObject_GetItem(locals_pandas$core$base$$$class__1_PandasObject_100, mod_consts[265]);

            if (unlikely(tmp_called_value_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[265]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 108;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_1 = MAKE_FUNCTION_pandas$core$base$$$function__1__constructor();

            frame_25625bd619ef8bfa1d5292a18b5ccd04_2->m_frame.f_lineno = 108;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_2;
            condexpr_false_2:;
            tmp_called_value_3 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_2 = MAKE_FUNCTION_pandas$core$base$$$function__1__constructor();

            frame_25625bd619ef8bfa1d5292a18b5ccd04_2->m_frame.f_lineno = 108;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_2:;
            tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__1_PandasObject_100, mod_consts[155], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_1;
            tmp_annotations_1 = DICT_COPY(mod_consts[267]);


            tmp_dictset_value = MAKE_FUNCTION_pandas$core$base$$$function__2___repr__(tmp_annotations_1);

            tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__1_PandasObject_100, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_annotations_2;
            tmp_defaults_1 = mod_consts[269];
            tmp_annotations_2 = DICT_COPY(mod_consts[270]);
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_pandas$core$base$$$function__3__reset_cache(tmp_defaults_1, tmp_annotations_2);

            tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__1_PandasObject_100, mod_consts[271], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_3;
            struct Nuitka_CellObject *tmp_closure_1[1];
            tmp_annotations_3 = DICT_COPY(mod_consts[273]);

            tmp_closure_1[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_1[0]);

            tmp_dictset_value = MAKE_FUNCTION_pandas$core$base$$$function__4___sizeof__(tmp_annotations_3, tmp_closure_1);

            tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__1_PandasObject_100, mod_consts[13], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_25625bd619ef8bfa1d5292a18b5ccd04_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_25625bd619ef8bfa1d5292a18b5ccd04_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_25625bd619ef8bfa1d5292a18b5ccd04_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_25625bd619ef8bfa1d5292a18b5ccd04_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_25625bd619ef8bfa1d5292a18b5ccd04_2);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_11;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_5 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;

                goto try_except_handler_11;
            }
            if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__1_PandasObject_100, mod_consts[275], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_11;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_65;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_4 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[256];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_pandas$core$base$$$class__1_PandasObject_100;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_9faabfa059097986d8ff3cc57e843bb7->m_frame.f_lineno = 100;
            tmp_assign_source_65 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_65 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;

                goto try_except_handler_11;
            }
            assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
            PyCell_SET(outline_0_var___class__, tmp_assign_source_65);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
        tmp_assign_source_64 = Nuitka_Cell_GET(outline_0_var___class__);
        Py_INCREF(tmp_assign_source_64);
        goto try_return_handler_11;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        Py_DECREF(locals_pandas$core$base$$$class__1_PandasObject_100);
        locals_pandas$core$base$$$class__1_PandasObject_100 = NULL;
        goto try_return_handler_10;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pandas$core$base$$$class__1_PandasObject_100);
        locals_pandas$core$base$$$class__1_PandasObject_100 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto try_except_handler_10;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 100;
        goto try_except_handler_9;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[256], tmp_assign_source_64);
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
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
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
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
    {
        PyObject *tmp_assign_source_66;
        tmp_assign_source_66 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_66;
    }
    {
        PyObject *tmp_assign_source_67;
        tmp_assign_source_67 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_67;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_68;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_pandas$core$base$$$class__2_NoNewAttributesMixin_147 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        tmp_dictset_value = mod_consts[260];
        tmp_res = PyDict_SetItem(locals_pandas$core$base$$$class__2_NoNewAttributesMixin_147, mod_consts[261], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[276];
        tmp_res = PyDict_SetItem(locals_pandas$core$base$$$class__2_NoNewAttributesMixin_147, mod_consts[186], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[277];
        tmp_res = PyDict_SetItem(locals_pandas$core$base$$$class__2_NoNewAttributesMixin_147, mod_consts[263], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_annotations_4;
            tmp_annotations_4 = DICT_COPY(mod_consts[278]);


            tmp_dictset_value = MAKE_FUNCTION_pandas$core$base$$$function__5__freeze(tmp_annotations_4);

            tmp_res = PyDict_SetItem(locals_pandas$core$base$$$class__2_NoNewAttributesMixin_147, mod_consts[279], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_5;
            tmp_annotations_5 = DICT_COPY(mod_consts[281]);


            tmp_dictset_value = MAKE_FUNCTION_pandas$core$base$$$function__6___setattr__(tmp_annotations_5);

            tmp_res = PyDict_SetItem(locals_pandas$core$base$$$class__2_NoNewAttributesMixin_147, mod_consts[15], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_69;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_value_3;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kwargs_value_3;
            tmp_called_value_5 = (PyObject *)&PyType_Type;
            tmp_tuple_element_5 = mod_consts[277];
            tmp_args_value_3 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_5);
            tmp_tuple_element_5 = mod_consts[283];
            PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_5);
            tmp_tuple_element_5 = locals_pandas$core$base$$$class__2_NoNewAttributesMixin_147;
            PyTuple_SET_ITEM0(tmp_args_value_3, 2, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
            frame_9faabfa059097986d8ff3cc57e843bb7->m_frame.f_lineno = 147;
            tmp_assign_source_69 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_3, tmp_kwargs_value_3);
            Py_DECREF(tmp_args_value_3);
            if (tmp_assign_source_69 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 147;

                goto try_except_handler_14;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_69;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_68 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_68);
        goto try_return_handler_14;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        Py_DECREF(locals_pandas$core$base$$$class__2_NoNewAttributesMixin_147);
        locals_pandas$core$base$$$class__2_NoNewAttributesMixin_147 = NULL;
        goto try_return_handler_13;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_12 = exception_type;
        exception_keeper_value_12 = exception_value;
        exception_keeper_tb_12 = exception_tb;
        exception_keeper_lineno_12 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pandas$core$base$$$class__2_NoNewAttributesMixin_147);
        locals_pandas$core$base$$$class__2_NoNewAttributesMixin_147 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto try_except_handler_13;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_13:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 147;
        goto try_except_handler_12;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[277], tmp_assign_source_68);
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_2;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto try_except_handler_15;
        }
        tmp_subscript_value_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[212]);

        if (unlikely(tmp_subscript_value_2 == NULL)) {
            tmp_subscript_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[212]);
        }

        if (tmp_subscript_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto try_except_handler_15;
        }
        tmp_tuple_element_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_2);
        if (tmp_tuple_element_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto try_except_handler_15;
        }
        tmp_assign_source_70 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_70, 0, tmp_tuple_element_6);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_70;
    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_71 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto try_except_handler_15;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_71;
    }
    {
        PyObject *tmp_assign_source_72;
        tmp_assign_source_72 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_72;
    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_6;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto try_except_handler_15;
        }
        tmp_condition_result_6 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_8 = tmp_class_creation_3__bases;
        tmp_subscript_value_3 = mod_consts[138];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_3, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto try_except_handler_15;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto try_except_handler_15;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_2 = tmp_class_creation_3__bases;
        tmp_assign_source_73 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto try_except_handler_15;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_73;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_9 = tmp_class_creation_3__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_9, mod_consts[255]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto try_except_handler_15;
        }
        tmp_condition_result_7 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_value_4;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_kwargs_value_4;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_10 = tmp_class_creation_3__metaclass;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[255]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto try_except_handler_15;
        }
        tmp_tuple_element_7 = mod_consts[284];
        tmp_args_value_4 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_7);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_7 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_7);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_4 = tmp_class_creation_3__class_decl_dict;
        frame_9faabfa059097986d8ff3cc57e843bb7->m_frame.f_lineno = 181;
        tmp_assign_source_74 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_4, tmp_kwargs_value_4);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_value_4);
        if (tmp_assign_source_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto try_except_handler_15;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_74;
    }
    {
        bool tmp_condition_result_8;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_11 = tmp_class_creation_3__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_11, mod_consts[257]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto try_except_handler_15;
        }
        tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_8 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_name_value_23;
        PyObject *tmp_default_value_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[258];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_12 = tmp_class_creation_3__metaclass;
        tmp_name_value_23 = mod_consts[99];
        tmp_default_value_2 = mod_consts[259];
        tmp_tuple_element_8 = BUILTIN_GETATTR(tstate, tmp_expression_value_12, tmp_name_value_23, tmp_default_value_2);
        if (tmp_tuple_element_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto try_except_handler_15;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_13;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_4 = tmp_class_creation_3__prepared;
            tmp_expression_value_13 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_13 == NULL));
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[99]);
            Py_DECREF(tmp_expression_value_13);
            if (tmp_tuple_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_8);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_15;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto try_except_handler_15;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 181;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_15;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_75;
        tmp_assign_source_75 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_75;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_76;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_pandas$core$base$$$class__3_SelectionMixin_181 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[260];
        tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__3_SelectionMixin_181, mod_consts[261], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto try_except_handler_17;
        }
        tmp_dictset_value = mod_consts[285];
        tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__3_SelectionMixin_181, mod_consts[186], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto try_except_handler_17;
        }
        tmp_dictset_value = mod_consts[284];
        tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__3_SelectionMixin_181, mod_consts[263], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto try_except_handler_17;
        }
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__3_SelectionMixin_181, mod_consts[193], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto try_except_handler_17;
        }
        frame_42ebc4f3f4b4588f97dc9444868e9757_3 = MAKE_CLASS_FRAME(tstate, codeobj_42ebc4f3f4b4588f97dc9444868e9757, module_pandas$core$base, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_42ebc4f3f4b4588f97dc9444868e9757_3);
        assert(Py_REFCNT(frame_42ebc4f3f4b4588f97dc9444868e9757_3) == 2);

        // Framed code:
        {
            PyObject *tmp_ass_subvalue_3;
            PyObject *tmp_ass_subscribed_3;
            PyObject *tmp_ass_subscript_3;
            tmp_ass_subvalue_3 = mod_consts[212];
            tmp_ass_subscribed_3 = PyObject_GetItem(locals_pandas$core$base$$$class__3_SelectionMixin_181, mod_consts[193]);

            if (unlikely(tmp_ass_subscribed_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[193]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 187;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_ass_subscribed_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 187;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_ass_subscript_3 = mod_consts[26];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
            Py_DECREF(tmp_ass_subscribed_3);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 187;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        tmp_dictset_value = Py_None;
        tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__3_SelectionMixin_181, mod_consts[21], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        {
            PyObject *tmp_ass_subvalue_4;
            PyObject *tmp_ass_subscribed_4;
            PyObject *tmp_ass_subscript_4;
            tmp_ass_subvalue_4 = mod_consts[286];
            tmp_ass_subscribed_4 = PyObject_GetItem(locals_pandas$core$base$$$class__3_SelectionMixin_181, mod_consts[193]);

            if (unlikely(tmp_ass_subscribed_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[193]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 188;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_ass_subscribed_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_ass_subscript_4 = mod_consts[21];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
            Py_DECREF(tmp_ass_subscribed_4);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_ass_subvalue_5;
            PyObject *tmp_ass_subscribed_5;
            PyObject *tmp_ass_subscript_5;
            tmp_ass_subvalue_5 = mod_consts[287];
            tmp_ass_subscribed_5 = PyObject_GetItem(locals_pandas$core$base$$$class__3_SelectionMixin_181, mod_consts[193]);

            if (unlikely(tmp_ass_subscribed_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[193]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 189;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_ass_subscribed_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_ass_subscript_5 = mod_consts[31];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
            Py_DECREF(tmp_ass_subscribed_5);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        tmp_dictset_value = MAKE_LIST2(mod_consts[3],mod_consts[288]);
        tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__3_SelectionMixin_181, mod_consts[289], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_set_arg_1;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_pandas$core$base$$$class__3_SelectionMixin_181, mod_consts[290]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_9 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_4;
            } else {
                goto condexpr_false_4;
            }
            condexpr_true_4:;
            tmp_called_value_7 = PyObject_GetItem(locals_pandas$core$base$$$class__3_SelectionMixin_181, mod_consts[290]);

            if (unlikely(tmp_called_value_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[290]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 191;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_args_element_value_3 = PyObject_GetItem(locals_pandas$core$base$$$class__3_SelectionMixin_181, mod_consts[289]);

            if (unlikely(tmp_args_element_value_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_called_value_7);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[289]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 191;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_args_element_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_7);

                exception_lineno = 191;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            frame_42ebc4f3f4b4588f97dc9444868e9757_3->m_frame.f_lineno = 191;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_3);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_4;
            condexpr_false_4:;
            tmp_set_arg_1 = PyObject_GetItem(locals_pandas$core$base$$$class__3_SelectionMixin_181, mod_consts[289]);

            if (unlikely(tmp_set_arg_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[289]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 191;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_set_arg_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_dictset_value = PySet_New(tmp_set_arg_1);
            Py_DECREF(tmp_set_arg_1);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            condexpr_end_4:;
            tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__3_SelectionMixin_181, mod_consts[291], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_element_value_4;
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_element_value_6;
            tmp_called_value_8 = PyObject_GetItem(locals_pandas$core$base$$$class__3_SelectionMixin_181, mod_consts[200]);

            if (tmp_called_value_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[200]);

                    if (unlikely(tmp_called_value_8 == NULL)) {
                        tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[200]);
                    }

                    if (tmp_called_value_8 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 193;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_value_8);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_res = MAPPING_HAS_ITEM(tstate, locals_pandas$core$base$$$class__3_SelectionMixin_181, mod_consts[265]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_8);

                exception_lineno = 194;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_10 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_5;
            } else {
                goto condexpr_false_5;
            }
            condexpr_true_5:;
            tmp_called_value_9 = PyObject_GetItem(locals_pandas$core$base$$$class__3_SelectionMixin_181, mod_consts[265]);

            if (unlikely(tmp_called_value_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_called_value_8);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[265]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 194;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_8);

                exception_lineno = 194;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }


            tmp_args_element_value_5 = MAKE_FUNCTION_pandas$core$base$$$function__7__selection_list();

            frame_42ebc4f3f4b4588f97dc9444868e9757_3->m_frame.f_lineno = 194;
            tmp_args_element_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_5);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_args_element_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_8);

                exception_lineno = 194;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_5;
            condexpr_false_5:;
            tmp_called_value_10 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_6 = MAKE_FUNCTION_pandas$core$base$$$function__7__selection_list();

            frame_42ebc4f3f4b4588f97dc9444868e9757_3->m_frame.f_lineno = 194;
            tmp_args_element_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_args_element_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_8);

                exception_lineno = 194;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            condexpr_end_5:;
            frame_42ebc4f3f4b4588f97dc9444868e9757_3->m_frame.f_lineno = 193;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_4);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__3_SelectionMixin_181, mod_consts[30], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 195;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_element_value_7;
            tmp_called_value_11 = PyObject_GetItem(locals_pandas$core$base$$$class__3_SelectionMixin_181, mod_consts[225]);

            if (tmp_called_value_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[225]);

                    if (unlikely(tmp_called_value_11 == NULL)) {
                        tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[225]);
                    }

                    if (tmp_called_value_11 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 202;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_value_11);
                } else {
                    goto frame_exception_exit_3;
                }
            }



            tmp_args_element_value_7 = MAKE_FUNCTION_pandas$core$base$$$function__8__selected_obj();

            frame_42ebc4f3f4b4588f97dc9444868e9757_3->m_frame.f_lineno = 202;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_7);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_args_element_value_7);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__3_SelectionMixin_181, mod_consts[27], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 203;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_element_value_8;
            PyObject *tmp_called_value_13;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_annotations_6;
            tmp_called_value_12 = PyObject_GetItem(locals_pandas$core$base$$$class__3_SelectionMixin_181, mod_consts[200]);

            if (tmp_called_value_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[200]);

                    if (unlikely(tmp_called_value_12 == NULL)) {
                        tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[200]);
                    }

                    if (tmp_called_value_12 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 209;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_value_12);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_called_value_13 = PyObject_GetItem(locals_pandas$core$base$$$class__3_SelectionMixin_181, mod_consts[225]);

            if (tmp_called_value_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[225]);

                    if (unlikely(tmp_called_value_13 == NULL)) {
                        tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[225]);
                    }

                    if (tmp_called_value_13 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_12);

                        exception_lineno = 210;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_value_13);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_6 = DICT_COPY(mod_consts[273]);


            tmp_args_element_value_9 = MAKE_FUNCTION_pandas$core$base$$$function__9_ndim(tmp_annotations_6);

            frame_42ebc4f3f4b4588f97dc9444868e9757_3->m_frame.f_lineno = 210;
            tmp_args_element_value_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_9);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_args_element_value_9);
            if (tmp_args_element_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_12);

                exception_lineno = 210;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            frame_42ebc4f3f4b4588f97dc9444868e9757_3->m_frame.f_lineno = 209;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_8);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_args_element_value_8);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__3_SelectionMixin_181, mod_consts[28], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_14;
            PyObject *tmp_args_element_value_10;
            PyObject *tmp_called_value_15;
            PyObject *tmp_args_element_value_11;
            tmp_called_value_14 = PyObject_GetItem(locals_pandas$core$base$$$class__3_SelectionMixin_181, mod_consts[200]);

            if (tmp_called_value_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[200]);

                    if (unlikely(tmp_called_value_14 == NULL)) {
                        tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[200]);
                    }

                    if (tmp_called_value_14 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 214;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_value_14);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_called_value_15 = PyObject_GetItem(locals_pandas$core$base$$$class__3_SelectionMixin_181, mod_consts[225]);

            if (tmp_called_value_15 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[225]);

                    if (unlikely(tmp_called_value_15 == NULL)) {
                        tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[225]);
                    }

                    if (tmp_called_value_15 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_14);

                        exception_lineno = 215;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_value_15);
                } else {
                    goto frame_exception_exit_3;
                }
            }



            tmp_args_element_value_11 = MAKE_FUNCTION_pandas$core$base$$$function__10__obj_with_exclusions();

            frame_42ebc4f3f4b4588f97dc9444868e9757_3->m_frame.f_lineno = 215;
            tmp_args_element_value_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_11);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_args_element_value_11);
            if (tmp_args_element_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_14);

                exception_lineno = 215;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            frame_42ebc4f3f4b4588f97dc9444868e9757_3->m_frame.f_lineno = 214;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_10);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_args_element_value_10);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__3_SelectionMixin_181, mod_consts[295], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 216;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_pandas$core$base$$$function__11___getitem__();

        tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__3_SelectionMixin_181, mod_consts[257], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        {
            PyObject *tmp_defaults_2;
            PyObject *tmp_annotations_7;
            tmp_defaults_2 = mod_consts[269];
            tmp_annotations_7 = DICT_COPY(mod_consts[298]);
            Py_INCREF(tmp_defaults_2);


            tmp_dictset_value = MAKE_FUNCTION_pandas$core$base$$$function__12__gotitem(tmp_defaults_2, tmp_annotations_7);

            tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__3_SelectionMixin_181, mod_consts[41], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_16;
            PyObject *tmp_args_element_value_12;
            PyObject *tmp_annotations_8;
            tmp_called_value_16 = PyObject_GetItem(locals_pandas$core$base$$$class__3_SelectionMixin_181, mod_consts[200]);

            if (tmp_called_value_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[200]);

                    if (unlikely(tmp_called_value_16 == NULL)) {
                        tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[200]);
                    }

                    if (tmp_called_value_16 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 263;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_value_16);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_8 = DICT_COPY(mod_consts[300]);


            tmp_args_element_value_12 = MAKE_FUNCTION_pandas$core$base$$$function__13__infer_selection(tmp_annotations_8);

            frame_42ebc4f3f4b4588f97dc9444868e9757_3->m_frame.f_lineno = 263;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_12);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_args_element_value_12);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__3_SelectionMixin_181, mod_consts[301], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_pandas$core$base$$$function__14_aggregate();

        tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__3_SelectionMixin_181, mod_consts[303], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = PyObject_GetItem(locals_pandas$core$base$$$class__3_SelectionMixin_181, mod_consts[303]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[303]);
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 281;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }

        if (tmp_dictset_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__3_SelectionMixin_181, mod_consts[305], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_42ebc4f3f4b4588f97dc9444868e9757_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_42ebc4f3f4b4588f97dc9444868e9757_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_42ebc4f3f4b4588f97dc9444868e9757_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_42ebc4f3f4b4588f97dc9444868e9757_3,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_42ebc4f3f4b4588f97dc9444868e9757_3);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_17;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_11;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_3__bases;
            CHECK_OBJECT(tmp_class_creation_3__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_3__bases_orig;
            tmp_condition_result_11 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_11 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;

                goto try_except_handler_17;
            }
            if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dictset_value = tmp_class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__3_SelectionMixin_181, mod_consts[275], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto try_except_handler_17;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_77;
            PyObject *tmp_called_value_17;
            PyObject *tmp_args_value_5;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_kwargs_value_5;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_17 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_9 = mod_consts[284];
            tmp_args_value_5 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_9 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_9);
            tmp_tuple_element_9 = locals_pandas$core$base$$$class__3_SelectionMixin_181;
            PyTuple_SET_ITEM0(tmp_args_value_5, 2, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
            frame_9faabfa059097986d8ff3cc57e843bb7->m_frame.f_lineno = 181;
            tmp_assign_source_77 = CALL_FUNCTION(tstate, tmp_called_value_17, tmp_args_value_5, tmp_kwargs_value_5);
            Py_DECREF(tmp_args_value_5);
            if (tmp_assign_source_77 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;

                goto try_except_handler_17;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_77;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_76 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_76);
        goto try_return_handler_17;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_17:;
        Py_DECREF(locals_pandas$core$base$$$class__3_SelectionMixin_181);
        locals_pandas$core$base$$$class__3_SelectionMixin_181 = NULL;
        goto try_return_handler_16;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_15 = exception_type;
        exception_keeper_value_15 = exception_value;
        exception_keeper_tb_15 = exception_tb;
        exception_keeper_lineno_15 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pandas$core$base$$$class__3_SelectionMixin_181);
        locals_pandas$core$base$$$class__3_SelectionMixin_181 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;
        exception_lineno = exception_keeper_lineno_15;

        goto try_except_handler_16;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_16:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_16:;
        exception_keeper_type_16 = exception_type;
        exception_keeper_value_16 = exception_value;
        exception_keeper_tb_16 = exception_tb;
        exception_keeper_lineno_16 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;
        exception_lineno = exception_keeper_lineno_16;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 181;
        goto try_except_handler_15;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[284], tmp_assign_source_76);
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    Py_XDECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    CHECK_OBJECT(tmp_class_creation_3__bases_orig);
    Py_DECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_3__bases);
    Py_DECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__metaclass);
    Py_DECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_tuple_element_10;
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[246]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[246]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto try_except_handler_18;
        }
        tmp_assign_source_78 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_78, 0, tmp_tuple_element_10);
        assert(tmp_class_creation_4__bases_orig == NULL);
        tmp_class_creation_4__bases_orig = tmp_assign_source_78;
    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_4__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_79 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto try_except_handler_18;
        }
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_79;
    }
    {
        PyObject *tmp_assign_source_80;
        tmp_assign_source_80 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_80;
    }
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_metaclass_value_3;
        nuitka_bool tmp_condition_result_12;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_bases_value_3;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_4__bases);
        if (tmp_truth_name_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto try_except_handler_18;
        }
        tmp_condition_result_12 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_6;
        } else {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_expression_value_14 = tmp_class_creation_4__bases;
        tmp_subscript_value_4 = mod_consts[138];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_14, tmp_subscript_value_4, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto try_except_handler_18;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto try_except_handler_18;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_6:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_value_3 = tmp_class_creation_4__bases;
        tmp_assign_source_81 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto try_except_handler_18;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_81;
    }
    {
        bool tmp_condition_result_13;
        PyObject *tmp_expression_value_15;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_15 = tmp_class_creation_4__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_15, mod_consts[255]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto try_except_handler_18;
        }
        tmp_condition_result_13 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_13 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_args_value_6;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_kwargs_value_6;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_16 = tmp_class_creation_4__metaclass;
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[255]);
        if (tmp_called_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto try_except_handler_18;
        }
        tmp_tuple_element_11 = mod_consts[306];
        tmp_args_value_6 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_11);
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_tuple_element_11 = tmp_class_creation_4__bases;
        PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_11);
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_value_6 = tmp_class_creation_4__class_decl_dict;
        frame_9faabfa059097986d8ff3cc57e843bb7->m_frame.f_lineno = 284;
        tmp_assign_source_82 = CALL_FUNCTION(tstate, tmp_called_value_18, tmp_args_value_6, tmp_kwargs_value_6);
        Py_DECREF(tmp_called_value_18);
        Py_DECREF(tmp_args_value_6);
        if (tmp_assign_source_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto try_except_handler_18;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_82;
    }
    {
        bool tmp_condition_result_14;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_17;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_value_17 = tmp_class_creation_4__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_17, mod_consts[257]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto try_except_handler_18;
        }
        tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_14 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_14 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_raise_value_3;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        PyObject *tmp_tuple_element_12;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_name_value_24;
        PyObject *tmp_default_value_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[258];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_18 = tmp_class_creation_4__metaclass;
        tmp_name_value_24 = mod_consts[99];
        tmp_default_value_3 = mod_consts[259];
        tmp_tuple_element_12 = BUILTIN_GETATTR(tstate, tmp_expression_value_18, tmp_name_value_24, tmp_default_value_3);
        if (tmp_tuple_element_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto try_except_handler_18;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_19;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_6 = tmp_class_creation_4__prepared;
            tmp_expression_value_19 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_19 == NULL));
            tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[99]);
            Py_DECREF(tmp_expression_value_19);
            if (tmp_tuple_element_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 284;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_12);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_18;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto try_except_handler_18;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 284;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_18;
    }
    branch_no_8:;
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_83;
        tmp_assign_source_83 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_83;
    }
    branch_end_7:;
    {
        PyObject *tmp_assign_source_84;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_pandas$core$base$$$class__4_IndexOpsMixin_284 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[260];
        tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[261], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto try_except_handler_20;
        }
        tmp_dictset_value = mod_consts[307];
        tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[186], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto try_except_handler_20;
        }
        tmp_dictset_value = mod_consts[306];
        tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[263], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto try_except_handler_20;
        }
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[193], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto try_except_handler_20;
        }
        frame_32384bfc83d95195e9f91f62b7d11be9_4 = MAKE_CLASS_FRAME(tstate, codeobj_32384bfc83d95195e9f91f62b7d11be9, module_pandas$core$base, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_32384bfc83d95195e9f91f62b7d11be9_4);
        assert(Py_REFCNT(frame_32384bfc83d95195e9f91f62b7d11be9_4) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[308];
        tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[309], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        {
            nuitka_bool tmp_condition_result_15;
            PyObject *tmp_called_value_19;
            PyObject *tmp_call_arg_element_1;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[310]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 291;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_15 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_7;
            } else {
                goto condexpr_false_7;
            }
            condexpr_true_7:;
            tmp_called_value_19 = PyObject_GetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[310]);

            if (unlikely(tmp_called_value_19 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[310]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 291;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 291;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_call_arg_element_1 = MAKE_LIST1(mod_consts[114]);
            frame_32384bfc83d95195e9f91f62b7d11be9_4->m_frame.f_lineno = 291;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_call_arg_element_1);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_call_arg_element_1);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 291;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_7;
            condexpr_false_7:;
            tmp_dictset_value = mod_consts[311];
            Py_INCREF(tmp_dictset_value);
            condexpr_end_7:;
            tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[312], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 291;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_ass_subvalue_6;
            PyObject *tmp_ass_subscribed_6;
            PyObject *tmp_ass_subscript_6;
            tmp_ass_subvalue_6 = mod_consts[313];
            tmp_ass_subscribed_6 = PyObject_GetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[193]);

            if (unlikely(tmp_ass_subscribed_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[193]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 291;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_ass_subscribed_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 291;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_ass_subscript_6 = mod_consts[312];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
            Py_DECREF(tmp_ass_subscribed_6);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 291;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_16;
            PyObject *tmp_called_value_20;
            PyObject *tmp_args_element_value_13;
            PyObject *tmp_annotations_9;
            PyObject *tmp_called_value_21;
            PyObject *tmp_args_element_value_14;
            PyObject *tmp_annotations_10;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[265]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 295;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_16 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_8;
            } else {
                goto condexpr_false_8;
            }
            condexpr_true_8:;
            tmp_called_value_20 = PyObject_GetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[265]);

            if (unlikely(tmp_called_value_20 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[265]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 295;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 295;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_9 = DICT_COPY(mod_consts[314]);


            tmp_args_element_value_13 = MAKE_FUNCTION_pandas$core$base$$$function__15_dtype(tmp_annotations_9);

            frame_32384bfc83d95195e9f91f62b7d11be9_4->m_frame.f_lineno = 295;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_20, tmp_args_element_value_13);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_args_element_value_13);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 295;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_8;
            condexpr_false_8:;
            tmp_called_value_21 = (PyObject *)&PyProperty_Type;
            tmp_annotations_10 = DICT_COPY(mod_consts[314]);


            tmp_args_element_value_14 = MAKE_FUNCTION_pandas$core$base$$$function__15_dtype(tmp_annotations_10);

            frame_32384bfc83d95195e9f91f62b7d11be9_4->m_frame.f_lineno = 295;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_21, tmp_args_element_value_14);
            Py_DECREF(tmp_args_element_value_14);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 295;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            condexpr_end_8:;
            tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[66], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 296;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_17;
            PyObject *tmp_called_value_22;
            PyObject *tmp_args_element_value_15;
            PyObject *tmp_annotations_11;
            PyObject *tmp_called_value_23;
            PyObject *tmp_args_element_value_16;
            PyObject *tmp_annotations_12;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[265]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 300;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_17 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_9;
            } else {
                goto condexpr_false_9;
            }
            condexpr_true_9:;
            tmp_called_value_22 = PyObject_GetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[265]);

            if (unlikely(tmp_called_value_22 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[265]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 300;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 300;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_11 = DICT_COPY(mod_consts[316]);


            tmp_args_element_value_15 = MAKE_FUNCTION_pandas$core$base$$$function__16__values(tmp_annotations_11);

            frame_32384bfc83d95195e9f91f62b7d11be9_4->m_frame.f_lineno = 300;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_22, tmp_args_element_value_15);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_args_element_value_15);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 300;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_9;
            condexpr_false_9:;
            tmp_called_value_23 = (PyObject *)&PyProperty_Type;
            tmp_annotations_12 = DICT_COPY(mod_consts[316]);


            tmp_args_element_value_16 = MAKE_FUNCTION_pandas$core$base$$$function__16__values(tmp_annotations_12);

            frame_32384bfc83d95195e9f91f62b7d11be9_4->m_frame.f_lineno = 300;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_23, tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_16);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 300;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            condexpr_end_9:;
            tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[57], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 301;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_24;
            PyObject *tmp_args_element_value_17;
            PyObject *tmp_annotations_13;
            tmp_called_value_24 = PyObject_GetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[200]);

            if (tmp_called_value_24 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[200]);

                    if (unlikely(tmp_called_value_24 == NULL)) {
                        tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[200]);
                    }

                    if (tmp_called_value_24 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 305;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_24);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_13 = DICT_COPY(mod_consts[318]);


            tmp_args_element_value_17 = MAKE_FUNCTION_pandas$core$base$$$function__17_transpose(tmp_annotations_13);

            frame_32384bfc83d95195e9f91f62b7d11be9_4->m_frame.f_lineno = 305;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_24, tmp_args_element_value_17);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_args_element_value_17);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 305;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[319], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 306;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_18;
            PyObject *tmp_called_value_25;
            PyObject *tmp_args_value_7;
            PyObject *tmp_tuple_element_13;
            PyObject *tmp_kwargs_value_7;
            PyObject *tmp_called_value_26;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_14;
            PyObject *tmp_kwargs_value_8;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[265]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 317;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_18 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_10;
            } else {
                goto condexpr_false_10;
            }
            condexpr_true_10:;
            tmp_called_value_25 = PyObject_GetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[265]);

            if (unlikely(tmp_called_value_25 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[265]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 317;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 317;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_tuple_element_13 = PyObject_GetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[319]);

            if (unlikely(tmp_tuple_element_13 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_called_value_25);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[319]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 318;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_tuple_element_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_25);

                exception_lineno = 318;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_args_value_7 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_args_value_7, 0, tmp_tuple_element_13);
            tmp_kwargs_value_7 = DICT_COPY(mod_consts[321]);
            frame_32384bfc83d95195e9f91f62b7d11be9_4->m_frame.f_lineno = 317;
            tmp_dictset_value = CALL_FUNCTION(tstate, tmp_called_value_25, tmp_args_value_7, tmp_kwargs_value_7);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_args_value_7);
            Py_DECREF(tmp_kwargs_value_7);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 317;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_10;
            condexpr_false_10:;
            tmp_called_value_26 = (PyObject *)&PyProperty_Type;
            tmp_tuple_element_14 = PyObject_GetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[319]);

            if (unlikely(tmp_tuple_element_14 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[319]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 318;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_tuple_element_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 318;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_args_value_8 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_args_value_8, 0, tmp_tuple_element_14);
            tmp_kwargs_value_8 = DICT_COPY(mod_consts[321]);
            frame_32384bfc83d95195e9f91f62b7d11be9_4->m_frame.f_lineno = 317;
            tmp_dictset_value = CALL_FUNCTION(tstate, tmp_called_value_26, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_args_value_8);
            Py_DECREF(tmp_kwargs_value_8);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 317;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            condexpr_end_10:;
            tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[322], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 317;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_19;
            PyObject *tmp_called_value_27;
            PyObject *tmp_args_element_value_18;
            PyObject *tmp_annotations_14;
            PyObject *tmp_called_value_28;
            PyObject *tmp_args_element_value_19;
            PyObject *tmp_annotations_15;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[265]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 346;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_19 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_11;
            } else {
                goto condexpr_false_11;
            }
            condexpr_true_11:;
            tmp_called_value_27 = PyObject_GetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[265]);

            if (unlikely(tmp_called_value_27 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[265]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 346;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 346;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_14 = DICT_COPY(mod_consts[323]);


            tmp_args_element_value_18 = MAKE_FUNCTION_pandas$core$base$$$function__18_shape(tmp_annotations_14);

            frame_32384bfc83d95195e9f91f62b7d11be9_4->m_frame.f_lineno = 346;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_27, tmp_args_element_value_18);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_args_element_value_18);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 346;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_11;
            condexpr_false_11:;
            tmp_called_value_28 = (PyObject *)&PyProperty_Type;
            tmp_annotations_15 = DICT_COPY(mod_consts[323]);


            tmp_args_element_value_19 = MAKE_FUNCTION_pandas$core$base$$$function__18_shape(tmp_annotations_15);

            frame_32384bfc83d95195e9f91f62b7d11be9_4->m_frame.f_lineno = 346;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_28, tmp_args_element_value_19);
            Py_DECREF(tmp_args_element_value_19);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 346;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            condexpr_end_11:;
            tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[58], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 347;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_annotations_16;
            tmp_annotations_16 = DICT_COPY(mod_consts[273]);


            tmp_dictset_value = MAKE_FUNCTION_pandas$core$base$$$function__19___len__(tmp_annotations_16);

            tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[325], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 359;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_20;
            PyObject *tmp_called_value_29;
            PyObject *tmp_args_element_value_20;
            PyObject *tmp_annotations_17;
            PyObject *tmp_called_value_30;
            PyObject *tmp_args_element_value_21;
            PyObject *tmp_annotations_18;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[265]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 363;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_20 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_12;
            } else {
                goto condexpr_false_12;
            }
            condexpr_true_12:;
            tmp_called_value_29 = PyObject_GetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[265]);

            if (unlikely(tmp_called_value_29 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[265]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 363;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 363;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_17 = DICT_COPY(mod_consts[327]);


            tmp_args_element_value_20 = MAKE_FUNCTION_pandas$core$base$$$function__20_ndim(tmp_annotations_17);

            frame_32384bfc83d95195e9f91f62b7d11be9_4->m_frame.f_lineno = 363;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_29, tmp_args_element_value_20);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_args_element_value_20);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 363;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_12;
            condexpr_false_12:;
            tmp_called_value_30 = (PyObject *)&PyProperty_Type;
            tmp_annotations_18 = DICT_COPY(mod_consts[327]);


            tmp_args_element_value_21 = MAKE_FUNCTION_pandas$core$base$$$function__20_ndim(tmp_annotations_18);

            frame_32384bfc83d95195e9f91f62b7d11be9_4->m_frame.f_lineno = 363;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_30, tmp_args_element_value_21);
            Py_DECREF(tmp_args_element_value_21);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 363;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            condexpr_end_12:;
            tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[28], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 364;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_31;
            PyObject *tmp_args_element_value_22;
            tmp_called_value_31 = PyObject_GetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[200]);

            if (tmp_called_value_31 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[200]);

                    if (unlikely(tmp_called_value_31 == NULL)) {
                        tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[200]);
                    }

                    if (tmp_called_value_31 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 389;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_31);
                } else {
                    goto frame_exception_exit_4;
                }
            }



            tmp_args_element_value_22 = MAKE_FUNCTION_pandas$core$base$$$function__21_item();

            frame_32384bfc83d95195e9f91f62b7d11be9_4->m_frame.f_lineno = 389;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_31, tmp_args_element_value_22);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_args_element_value_22);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 389;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[116], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 390;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_21;
            PyObject *tmp_called_value_32;
            PyObject *tmp_args_element_value_23;
            PyObject *tmp_annotations_19;
            PyObject *tmp_called_value_33;
            PyObject *tmp_args_element_value_24;
            PyObject *tmp_annotations_20;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[265]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 420;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_21 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_13;
            } else {
                goto condexpr_false_13;
            }
            condexpr_true_13:;
            tmp_called_value_32 = PyObject_GetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[265]);

            if (unlikely(tmp_called_value_32 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[265]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 420;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 420;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_19 = DICT_COPY(mod_consts[273]);


            tmp_args_element_value_23 = MAKE_FUNCTION_pandas$core$base$$$function__22_nbytes(tmp_annotations_19);

            frame_32384bfc83d95195e9f91f62b7d11be9_4->m_frame.f_lineno = 420;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_32, tmp_args_element_value_23);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_args_element_value_23);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 420;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_13;
            condexpr_false_13:;
            tmp_called_value_33 = (PyObject *)&PyProperty_Type;
            tmp_annotations_20 = DICT_COPY(mod_consts[273]);


            tmp_args_element_value_24 = MAKE_FUNCTION_pandas$core$base$$$function__22_nbytes(tmp_annotations_20);

            frame_32384bfc83d95195e9f91f62b7d11be9_4->m_frame.f_lineno = 420;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_33, tmp_args_element_value_24);
            Py_DECREF(tmp_args_element_value_24);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 420;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            condexpr_end_13:;
            tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[62], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 421;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_22;
            PyObject *tmp_called_value_34;
            PyObject *tmp_args_element_value_25;
            PyObject *tmp_annotations_21;
            PyObject *tmp_called_value_35;
            PyObject *tmp_args_element_value_26;
            PyObject *tmp_annotations_22;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[265]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 448;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_22 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_14;
            } else {
                goto condexpr_false_14;
            }
            condexpr_true_14:;
            tmp_called_value_34 = PyObject_GetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[265]);

            if (unlikely(tmp_called_value_34 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[265]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 448;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 448;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_21 = DICT_COPY(mod_consts[273]);


            tmp_args_element_value_25 = MAKE_FUNCTION_pandas$core$base$$$function__23_size(tmp_annotations_21);

            frame_32384bfc83d95195e9f91f62b7d11be9_4->m_frame.f_lineno = 448;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_34, tmp_args_element_value_25);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_args_element_value_25);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 448;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_14;
            condexpr_false_14:;
            tmp_called_value_35 = (PyObject *)&PyProperty_Type;
            tmp_annotations_22 = DICT_COPY(mod_consts[273]);


            tmp_args_element_value_26 = MAKE_FUNCTION_pandas$core$base$$$function__23_size(tmp_annotations_22);

            frame_32384bfc83d95195e9f91f62b7d11be9_4->m_frame.f_lineno = 448;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_35, tmp_args_element_value_26);
            Py_DECREF(tmp_args_element_value_26);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 448;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            condexpr_end_14:;
            tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[91], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 449;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_23;
            PyObject *tmp_called_value_36;
            PyObject *tmp_args_element_value_27;
            PyObject *tmp_annotations_23;
            PyObject *tmp_called_value_37;
            PyObject *tmp_args_element_value_28;
            PyObject *tmp_annotations_24;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[265]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 476;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_23 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_15;
            } else {
                goto condexpr_false_15;
            }
            condexpr_true_15:;
            tmp_called_value_36 = PyObject_GetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[265]);

            if (unlikely(tmp_called_value_36 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[265]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 476;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 476;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_23 = DICT_COPY(mod_consts[333]);


            tmp_args_element_value_27 = MAKE_FUNCTION_pandas$core$base$$$function__24_array(tmp_annotations_23);

            frame_32384bfc83d95195e9f91f62b7d11be9_4->m_frame.f_lineno = 476;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_36, tmp_args_element_value_27);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_args_element_value_27);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 476;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_15;
            condexpr_false_15:;
            tmp_called_value_37 = (PyObject *)&PyProperty_Type;
            tmp_annotations_24 = DICT_COPY(mod_consts[333]);


            tmp_args_element_value_28 = MAKE_FUNCTION_pandas$core$base$$$function__24_array(tmp_annotations_24);

            frame_32384bfc83d95195e9f91f62b7d11be9_4->m_frame.f_lineno = 476;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_37, tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_28);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 476;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            condexpr_end_15:;
            tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[68], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 477;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_38;
            PyObject *tmp_args_element_value_29;
            PyObject *tmp_defaults_3;
            PyObject *tmp_tuple_element_15;
            PyObject *tmp_annotations_25;
            tmp_called_value_38 = PyObject_GetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[200]);

            if (tmp_called_value_38 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[200]);

                    if (unlikely(tmp_called_value_38 == NULL)) {
                        tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[200]);
                    }

                    if (tmp_called_value_38 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 541;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_38);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_tuple_element_15 = Py_None;
            tmp_defaults_3 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_expression_value_20;
                PyTuple_SET_ITEM0(tmp_defaults_3, 0, tmp_tuple_element_15);
                tmp_tuple_element_15 = Py_False;
                PyTuple_SET_ITEM0(tmp_defaults_3, 1, tmp_tuple_element_15);
                tmp_expression_value_20 = PyObject_GetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[48]);

                if (tmp_expression_value_20 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[48]);

                        if (unlikely(tmp_expression_value_20 == NULL)) {
                            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
                        }

                        if (tmp_expression_value_20 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 546;
                            type_description_2 = "o";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_20);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[73]);
                Py_DECREF(tmp_expression_value_20);
                if (tmp_tuple_element_15 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 546;
                    type_description_2 = "o";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_defaults_3, 2, tmp_tuple_element_15);
            }
            goto tuple_build_noexception_4;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_4:;
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_defaults_3);
            goto frame_exception_exit_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_4:;
            tmp_annotations_25 = DICT_COPY(mod_consts[335]);


            tmp_args_element_value_29 = MAKE_FUNCTION_pandas$core$base$$$function__25_to_numpy(tmp_defaults_3, tmp_annotations_25);

            frame_32384bfc83d95195e9f91f62b7d11be9_4->m_frame.f_lineno = 541;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_38, tmp_args_element_value_29);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_args_element_value_29);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 541;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[69], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 542;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_39;
            PyObject *tmp_args_element_value_30;
            nuitka_bool tmp_condition_result_24;
            PyObject *tmp_called_value_40;
            PyObject *tmp_args_element_value_31;
            PyObject *tmp_annotations_26;
            PyObject *tmp_called_value_41;
            PyObject *tmp_args_element_value_32;
            PyObject *tmp_annotations_27;
            tmp_called_value_39 = PyObject_GetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[200]);

            if (tmp_called_value_39 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[200]);

                    if (unlikely(tmp_called_value_39 == NULL)) {
                        tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[200]);
                    }

                    if (tmp_called_value_39 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 675;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_39);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_res = MAPPING_HAS_ITEM(tstate, locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[265]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_39);

                exception_lineno = 676;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_24 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_16;
            } else {
                goto condexpr_false_16;
            }
            condexpr_true_16:;
            tmp_called_value_40 = PyObject_GetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[265]);

            if (unlikely(tmp_called_value_40 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_called_value_39);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[265]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 676;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_40 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_39);

                exception_lineno = 676;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_26 = DICT_COPY(mod_consts[337]);


            tmp_args_element_value_31 = MAKE_FUNCTION_pandas$core$base$$$function__26_empty(tmp_annotations_26);

            frame_32384bfc83d95195e9f91f62b7d11be9_4->m_frame.f_lineno = 676;
            tmp_args_element_value_30 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_40, tmp_args_element_value_31);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_args_element_value_31);
            if (tmp_args_element_value_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_39);

                exception_lineno = 676;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_16;
            condexpr_false_16:;
            tmp_called_value_41 = (PyObject *)&PyProperty_Type;
            tmp_annotations_27 = DICT_COPY(mod_consts[337]);


            tmp_args_element_value_32 = MAKE_FUNCTION_pandas$core$base$$$function__26_empty(tmp_annotations_27);

            frame_32384bfc83d95195e9f91f62b7d11be9_4->m_frame.f_lineno = 676;
            tmp_args_element_value_30 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_41, tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_32);
            if (tmp_args_element_value_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_39);

                exception_lineno = 676;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            condexpr_end_16:;
            frame_32384bfc83d95195e9f91f62b7d11be9_4->m_frame.f_lineno = 675;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_39, tmp_args_element_value_30);
            Py_DECREF(tmp_called_value_39);
            Py_DECREF(tmp_args_element_value_30);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 675;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[338], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 677;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_42;
            PyObject *tmp_called_value_43;
            PyObject *tmp_args_element_value_33;
            PyObject *tmp_defaults_4;
            PyObject *tmp_annotations_28;
            tmp_called_value_43 = PyObject_GetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[226]);

            if (tmp_called_value_43 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_43 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[226]);

                    if (unlikely(tmp_called_value_43 == NULL)) {
                        tmp_called_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[226]);
                    }

                    if (tmp_called_value_43 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 680;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_43);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_32384bfc83d95195e9f91f62b7d11be9_4->m_frame.f_lineno = 680;
            tmp_called_value_42 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_43, &PyTuple_GET_ITEM(mod_consts[340], 0), mod_consts[341]);
            Py_DECREF(tmp_called_value_43);
            if (tmp_called_value_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 680;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_defaults_4 = mod_consts[342];
            tmp_annotations_28 = DICT_COPY(mod_consts[343]);
            Py_INCREF(tmp_defaults_4);


            tmp_args_element_value_33 = MAKE_FUNCTION_pandas$core$base$$$function__27_argmax(tmp_defaults_4, tmp_annotations_28);

            frame_32384bfc83d95195e9f91f62b7d11be9_4->m_frame.f_lineno = 680;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_42, tmp_args_element_value_33);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_args_element_value_33);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 680;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[106], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 681;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_44;
            PyObject *tmp_called_value_45;
            PyObject *tmp_args_value_9;
            PyObject *tmp_tuple_element_16;
            PyObject *tmp_kwargs_value_9;
            PyObject *tmp_args_element_value_34;
            PyObject *tmp_defaults_5;
            PyObject *tmp_annotations_29;
            tmp_called_value_45 = PyObject_GetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[226]);

            if (tmp_called_value_45 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_45 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[226]);

                    if (unlikely(tmp_called_value_45 == NULL)) {
                        tmp_called_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[226]);
                    }

                    if (tmp_called_value_45 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 764;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_45);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_tuple_element_16 = PyObject_GetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[106]);

            if (unlikely(tmp_tuple_element_16 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_called_value_45);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[106]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 764;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_tuple_element_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_45);

                exception_lineno = 764;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_args_value_9 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_args_value_9, 0, tmp_tuple_element_16);
            tmp_kwargs_value_9 = DICT_COPY(mod_consts[345]);
            frame_32384bfc83d95195e9f91f62b7d11be9_4->m_frame.f_lineno = 764;
            tmp_called_value_44 = CALL_FUNCTION(tstate, tmp_called_value_45, tmp_args_value_9, tmp_kwargs_value_9);
            Py_DECREF(tmp_called_value_45);
            Py_DECREF(tmp_args_value_9);
            Py_DECREF(tmp_kwargs_value_9);
            if (tmp_called_value_44 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 764;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_defaults_5 = mod_consts[342];
            tmp_annotations_29 = DICT_COPY(mod_consts[343]);
            Py_INCREF(tmp_defaults_5);


            tmp_args_element_value_34 = MAKE_FUNCTION_pandas$core$base$$$function__28_argmin(tmp_defaults_5, tmp_annotations_29);

            frame_32384bfc83d95195e9f91f62b7d11be9_4->m_frame.f_lineno = 764;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_44, tmp_args_element_value_34);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_args_element_value_34);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 764;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[112], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 765;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_pandas$core$base$$$function__29_tolist();

        tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[114], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 798;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = PyObject_GetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[114]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[114]);
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 834;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }

        if (tmp_dictset_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 834;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[348], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 834;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        {
            PyObject *tmp_annotations_30;
            tmp_annotations_30 = DICT_COPY(mod_consts[349]);


            tmp_dictset_value = MAKE_FUNCTION_pandas$core$base$$$function__30___iter__(tmp_annotations_30);

            tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[350], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 836;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_46;
            PyObject *tmp_args_element_value_35;
            PyObject *tmp_annotations_31;
            tmp_called_value_46 = PyObject_GetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[225]);

            if (tmp_called_value_46 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_46 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[225]);

                    if (unlikely(tmp_called_value_46 == NULL)) {
                        tmp_called_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[225]);
                    }

                    if (tmp_called_value_46 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 864;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_46);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_31 = DICT_COPY(mod_consts[337]);


            tmp_args_element_value_35 = MAKE_FUNCTION_pandas$core$base$$$function__31_hasnans(tmp_annotations_31);

            frame_32384bfc83d95195e9f91f62b7d11be9_4->m_frame.f_lineno = 864;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_46, tmp_args_element_value_35);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_args_element_value_35);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 864;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[352], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 865;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_47;
            PyObject *tmp_args_element_value_36;
            PyObject *tmp_defaults_6;
            PyObject *tmp_annotations_32;
            tmp_called_value_47 = PyObject_GetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[200]);

            if (tmp_called_value_47 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_47 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[200]);

                    if (unlikely(tmp_called_value_47 == NULL)) {
                        tmp_called_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[200]);
                    }

                    if (tmp_called_value_47 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 891;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_47);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_defaults_6 = mod_consts[342];
            tmp_annotations_32 = DICT_COPY(mod_consts[354]);
            Py_INCREF(tmp_defaults_6);


            tmp_args_element_value_36 = MAKE_FUNCTION_pandas$core$base$$$function__32__map_values(tmp_defaults_6, tmp_annotations_32);

            frame_32384bfc83d95195e9f91f62b7d11be9_4->m_frame.f_lineno = 891;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_47, tmp_args_element_value_36);
            Py_DECREF(tmp_called_value_47);
            Py_DECREF(tmp_args_element_value_36);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 891;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[355], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 892;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_48;
            PyObject *tmp_args_element_value_37;
            PyObject *tmp_defaults_7;
            PyObject *tmp_annotations_33;
            tmp_called_value_48 = PyObject_GetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[200]);

            if (tmp_called_value_48 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_48 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[200]);

                    if (unlikely(tmp_called_value_48 == NULL)) {
                        tmp_called_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[200]);
                    }

                    if (tmp_called_value_48 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 923;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_48);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_defaults_7 = mod_consts[357];
            tmp_annotations_33 = DICT_COPY(mod_consts[358]);
            Py_INCREF(tmp_defaults_7);


            tmp_args_element_value_37 = MAKE_FUNCTION_pandas$core$base$$$function__33_value_counts(tmp_defaults_7, tmp_annotations_33);

            frame_32384bfc83d95195e9f91f62b7d11be9_4->m_frame.f_lineno = 923;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_48, tmp_args_element_value_37);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_args_element_value_37);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 923;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[359], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 924;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_pandas$core$base$$$function__34_unique();

        tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[128], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1019;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        {
            PyObject *tmp_called_value_49;
            PyObject *tmp_args_element_value_38;
            PyObject *tmp_defaults_8;
            PyObject *tmp_annotations_34;
            tmp_called_value_49 = PyObject_GetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[200]);

            if (tmp_called_value_49 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_49 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[200]);

                    if (unlikely(tmp_called_value_49 == NULL)) {
                        tmp_called_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[200]);
                    }

                    if (tmp_called_value_49 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 1028;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_49);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_defaults_8 = mod_consts[8];
            tmp_annotations_34 = DICT_COPY(mod_consts[362]);
            Py_INCREF(tmp_defaults_8);


            tmp_args_element_value_38 = MAKE_FUNCTION_pandas$core$base$$$function__35_nunique(tmp_defaults_8, tmp_annotations_34);

            frame_32384bfc83d95195e9f91f62b7d11be9_4->m_frame.f_lineno = 1028;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_49, tmp_args_element_value_38);
            Py_DECREF(tmp_called_value_49);
            Py_DECREF(tmp_args_element_value_38);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1028;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[132], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1029;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_25;
            PyObject *tmp_called_value_50;
            PyObject *tmp_args_element_value_39;
            PyObject *tmp_annotations_35;
            PyObject *tmp_called_value_51;
            PyObject *tmp_args_element_value_40;
            PyObject *tmp_annotations_36;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[265]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1068;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_25 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_17;
            } else {
                goto condexpr_false_17;
            }
            condexpr_true_17:;
            tmp_called_value_50 = PyObject_GetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[265]);

            if (unlikely(tmp_called_value_50 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[265]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 1068;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_50 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1068;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_35 = DICT_COPY(mod_consts[337]);


            tmp_args_element_value_39 = MAKE_FUNCTION_pandas$core$base$$$function__36_is_unique(tmp_annotations_35);

            frame_32384bfc83d95195e9f91f62b7d11be9_4->m_frame.f_lineno = 1068;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_50, tmp_args_element_value_39);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_args_element_value_39);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1068;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_17;
            condexpr_false_17:;
            tmp_called_value_51 = (PyObject *)&PyProperty_Type;
            tmp_annotations_36 = DICT_COPY(mod_consts[337]);


            tmp_args_element_value_40 = MAKE_FUNCTION_pandas$core$base$$$function__36_is_unique(tmp_annotations_36);

            frame_32384bfc83d95195e9f91f62b7d11be9_4->m_frame.f_lineno = 1068;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_51, tmp_args_element_value_40);
            Py_DECREF(tmp_args_element_value_40);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1068;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            condexpr_end_17:;
            tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[364], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1069;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_26;
            PyObject *tmp_called_value_52;
            PyObject *tmp_args_element_value_41;
            PyObject *tmp_annotations_37;
            PyObject *tmp_called_value_53;
            PyObject *tmp_args_element_value_42;
            PyObject *tmp_annotations_38;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[265]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1089;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_26 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_26 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_18;
            } else {
                goto condexpr_false_18;
            }
            condexpr_true_18:;
            tmp_called_value_52 = PyObject_GetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[265]);

            if (unlikely(tmp_called_value_52 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[265]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 1089;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_52 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1089;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_37 = DICT_COPY(mod_consts[337]);


            tmp_args_element_value_41 = MAKE_FUNCTION_pandas$core$base$$$function__37_is_monotonic_increasing(tmp_annotations_37);

            frame_32384bfc83d95195e9f91f62b7d11be9_4->m_frame.f_lineno = 1089;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_52, tmp_args_element_value_41);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_args_element_value_41);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1089;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_18;
            condexpr_false_18:;
            tmp_called_value_53 = (PyObject *)&PyProperty_Type;
            tmp_annotations_38 = DICT_COPY(mod_consts[337]);


            tmp_args_element_value_42 = MAKE_FUNCTION_pandas$core$base$$$function__37_is_monotonic_increasing(tmp_annotations_38);

            frame_32384bfc83d95195e9f91f62b7d11be9_4->m_frame.f_lineno = 1089;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_53, tmp_args_element_value_42);
            Py_DECREF(tmp_args_element_value_42);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1089;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            condexpr_end_18:;
            tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[140], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1090;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_27;
            PyObject *tmp_called_value_54;
            PyObject *tmp_args_element_value_43;
            PyObject *tmp_annotations_39;
            PyObject *tmp_called_value_55;
            PyObject *tmp_args_element_value_44;
            PyObject *tmp_annotations_40;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[265]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1112;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_27 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_27 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_19;
            } else {
                goto condexpr_false_19;
            }
            condexpr_true_19:;
            tmp_called_value_54 = PyObject_GetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[265]);

            if (unlikely(tmp_called_value_54 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[265]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 1112;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_54 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1112;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_39 = DICT_COPY(mod_consts[337]);


            tmp_args_element_value_43 = MAKE_FUNCTION_pandas$core$base$$$function__38_is_monotonic_decreasing(tmp_annotations_39);

            frame_32384bfc83d95195e9f91f62b7d11be9_4->m_frame.f_lineno = 1112;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_54, tmp_args_element_value_43);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_args_element_value_43);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1112;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_19;
            condexpr_false_19:;
            tmp_called_value_55 = (PyObject *)&PyProperty_Type;
            tmp_annotations_40 = DICT_COPY(mod_consts[337]);


            tmp_args_element_value_44 = MAKE_FUNCTION_pandas$core$base$$$function__38_is_monotonic_decreasing(tmp_annotations_40);

            frame_32384bfc83d95195e9f91f62b7d11be9_4->m_frame.f_lineno = 1112;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_55, tmp_args_element_value_44);
            Py_DECREF(tmp_args_element_value_44);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1112;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            condexpr_end_19:;
            tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[142], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1113;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_56;
            PyObject *tmp_args_element_value_45;
            PyObject *tmp_defaults_9;
            PyObject *tmp_annotations_41;
            tmp_called_value_56 = PyObject_GetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[200]);

            if (tmp_called_value_56 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_56 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[200]);

                    if (unlikely(tmp_called_value_56 == NULL)) {
                        tmp_called_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[200]);
                    }

                    if (tmp_called_value_56 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 1135;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_56);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_defaults_9 = mod_consts[133];
            tmp_annotations_41 = DICT_COPY(mod_consts[368]);
            Py_INCREF(tmp_defaults_9);


            tmp_args_element_value_45 = MAKE_FUNCTION_pandas$core$base$$$function__39__memory_usage(tmp_defaults_9, tmp_annotations_41);

            frame_32384bfc83d95195e9f91f62b7d11be9_4->m_frame.f_lineno = 1135;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_56, tmp_args_element_value_45);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_args_element_value_45);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1135;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[369], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1136;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_57;
            PyObject *tmp_called_value_58;
            PyObject *tmp_kw_call_arg_value_0_1;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_kw_call_dict_value_0_1;
            PyObject *tmp_kw_call_dict_value_1_1;
            PyObject *tmp_kw_call_dict_value_2_1;
            PyObject *tmp_kw_call_dict_value_3_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_value_46;
            PyObject *tmp_defaults_10;
            PyObject *tmp_annotations_42;
            tmp_called_value_58 = PyObject_GetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[226]);

            if (tmp_called_value_58 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_58 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[226]);

                    if (unlikely(tmp_called_value_58 == NULL)) {
                        tmp_called_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[226]);
                    }

                    if (tmp_called_value_58 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 1177;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_58);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_21 = PyObject_GetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[121]);

            if (tmp_expression_value_21 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[121]);

                    if (unlikely(tmp_expression_value_21 == NULL)) {
                        tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[121]);
                    }

                    if (tmp_expression_value_21 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_58);

                        exception_lineno = 1178;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_21);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_kw_call_arg_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[149]);
            Py_DECREF(tmp_expression_value_21);
            if (tmp_kw_call_arg_value_0_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_58);

                exception_lineno = 1178;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_kw_call_dict_value_0_1 = mod_consts[19];
            tmp_kw_call_dict_value_1_1 = mod_consts[19];
            tmp_kw_call_dict_value_2_1 = mod_consts[19];
            tmp_called_instance_1 = PyObject_GetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[195]);

            if (tmp_called_instance_1 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[195]);

                    if (unlikely(tmp_called_instance_1 == NULL)) {
                        tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[195]);
                    }

                    if (tmp_called_instance_1 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_58);
                        Py_DECREF(tmp_kw_call_arg_value_0_1);

                        exception_lineno = 1182;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_instance_1);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_32384bfc83d95195e9f91f62b7d11be9_4->m_frame.f_lineno = 1182;
            tmp_kw_call_dict_value_3_1 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_1,
                mod_consts[371],
                PyTuple_GET_ITEM(mod_consts[372], 0)
            );

            Py_DECREF(tmp_called_instance_1);
            if (tmp_kw_call_dict_value_3_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_58);
                Py_DECREF(tmp_kw_call_arg_value_0_1);

                exception_lineno = 1182;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_32384bfc83d95195e9f91f62b7d11be9_4->m_frame.f_lineno = 1177;
            {
                PyObject *args[] = {tmp_kw_call_arg_value_0_1};
                PyObject *kw_values[4] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1};
                tmp_called_value_57 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_58, args, kw_values, mod_consts[373]);
            }

            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_3_1);
            if (tmp_called_value_57 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1177;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_defaults_10 = mod_consts[374];
            tmp_annotations_42 = DICT_COPY(mod_consts[375]);
            Py_INCREF(tmp_defaults_10);


            tmp_args_element_value_46 = MAKE_FUNCTION_pandas$core$base$$$function__40_factorize(tmp_defaults_10, tmp_annotations_42);

            frame_32384bfc83d95195e9f91f62b7d11be9_4->m_frame.f_lineno = 1177;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_57, tmp_args_element_value_46);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_args_element_value_46);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1177;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[149], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1190;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_ass_subvalue_7;
            PyObject *tmp_ass_subscribed_7;
            PyObject *tmp_ass_subscript_7;
            tmp_ass_subvalue_7 = mod_consts[377];
            tmp_ass_subscribed_7 = PyObject_GetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[251]);

            if (tmp_ass_subscribed_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_ass_subscribed_7 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[251]);

                    if (unlikely(tmp_ass_subscribed_7 == NULL)) {
                        tmp_ass_subscribed_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[251]);
                    }

                    if (tmp_ass_subscribed_7 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 1210;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_ass_subscribed_7);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_ass_subscript_7 = mod_consts[160];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
            Py_DECREF(tmp_ass_subscribed_7);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1210;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_59;
            PyObject *tmp_args_element_value_47;
            PyObject *tmp_defaults_11;
            PyObject *tmp_annotations_43;
            tmp_called_value_59 = PyObject_GetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[201]);

            if (tmp_called_value_59 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_59 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[201]);

                    if (unlikely(tmp_called_value_59 == NULL)) {
                        tmp_called_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[201]);
                    }

                    if (tmp_called_value_59 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 1313;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_59);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_defaults_11 = mod_consts[378];
            tmp_annotations_43 = DICT_COPY(mod_consts[379]);
            Py_INCREF(tmp_defaults_11);


            tmp_args_element_value_47 = MAKE_FUNCTION_pandas$core$base$$$function__41_searchsorted(tmp_defaults_11, tmp_annotations_43);

            frame_32384bfc83d95195e9f91f62b7d11be9_4->m_frame.f_lineno = 1313;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_59, tmp_args_element_value_47);
            Py_DECREF(tmp_called_value_59);
            Py_DECREF(tmp_args_element_value_47);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1313;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[160], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1318;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_60;
            PyObject *tmp_args_element_value_48;
            PyObject *tmp_defaults_12;
            PyObject *tmp_annotations_44;
            tmp_called_value_60 = PyObject_GetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[201]);

            if (tmp_called_value_60 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_60 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[201]);

                    if (unlikely(tmp_called_value_60 == NULL)) {
                        tmp_called_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[201]);
                    }

                    if (tmp_called_value_60 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 1326;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_60);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_defaults_12 = mod_consts[378];
            tmp_annotations_44 = DICT_COPY(mod_consts[381]);
            Py_INCREF(tmp_defaults_12);


            tmp_args_element_value_48 = MAKE_FUNCTION_pandas$core$base$$$function__42_searchsorted(tmp_defaults_12, tmp_annotations_44);

            frame_32384bfc83d95195e9f91f62b7d11be9_4->m_frame.f_lineno = 1326;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_60, tmp_args_element_value_48);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_args_element_value_48);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1326;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[160], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1327;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_61;
            PyObject *tmp_called_value_62;
            PyObject *tmp_args_value_10;
            PyObject *tmp_tuple_element_17;
            PyObject *tmp_expression_value_22;
            PyObject *tmp_subscript_value_5;
            PyObject *tmp_kwargs_value_10;
            PyObject *tmp_args_element_value_49;
            PyObject *tmp_defaults_13;
            PyObject *tmp_annotations_45;
            tmp_called_value_62 = PyObject_GetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[226]);

            if (tmp_called_value_62 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_62 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[226]);

                    if (unlikely(tmp_called_value_62 == NULL)) {
                        tmp_called_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[226]);
                    }

                    if (tmp_called_value_62 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 1335;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_62);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_22 = PyObject_GetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[251]);

            if (tmp_expression_value_22 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[251]);

                    if (unlikely(tmp_expression_value_22 == NULL)) {
                        tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[251]);
                    }

                    if (tmp_expression_value_22 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_62);

                        exception_lineno = 1335;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_22);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_5 = mod_consts[160];
            tmp_tuple_element_17 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_22, tmp_subscript_value_5);
            Py_DECREF(tmp_expression_value_22);
            if (tmp_tuple_element_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_62);

                exception_lineno = 1335;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_args_value_10 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_args_value_10, 0, tmp_tuple_element_17);
            tmp_kwargs_value_10 = DICT_COPY(mod_consts[382]);
            frame_32384bfc83d95195e9f91f62b7d11be9_4->m_frame.f_lineno = 1335;
            tmp_called_value_61 = CALL_FUNCTION(tstate, tmp_called_value_62, tmp_args_value_10, tmp_kwargs_value_10);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_args_value_10);
            Py_DECREF(tmp_kwargs_value_10);
            if (tmp_called_value_61 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1335;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_defaults_13 = mod_consts[383];
            tmp_annotations_45 = DICT_COPY(mod_consts[384]);
            Py_INCREF(tmp_defaults_13);


            tmp_args_element_value_49 = MAKE_FUNCTION_pandas$core$base$$$function__43_searchsorted(tmp_defaults_13, tmp_annotations_45);

            frame_32384bfc83d95195e9f91f62b7d11be9_4->m_frame.f_lineno = 1335;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_61, tmp_args_element_value_49);
            Py_DECREF(tmp_called_value_61);
            Py_DECREF(tmp_args_element_value_49);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1335;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[160], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1336;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_kw_defaults_1;
            PyObject *tmp_annotations_46;
            tmp_kw_defaults_1 = DICT_COPY(mod_consts[385]);
            tmp_annotations_46 = DICT_COPY(mod_consts[386]);


            tmp_dictset_value = MAKE_FUNCTION_pandas$core$base$$$function__44_drop_duplicates(tmp_kw_defaults_1, tmp_annotations_46);

            tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[387], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1361;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_63;
            PyObject *tmp_args_element_value_50;
            PyObject *tmp_defaults_14;
            PyObject *tmp_annotations_47;
            tmp_called_value_63 = PyObject_GetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[200]);

            if (tmp_called_value_63 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_63 = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[200]);

                    if (unlikely(tmp_called_value_63 == NULL)) {
                        tmp_called_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[200]);
                    }

                    if (tmp_called_value_63 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 1366;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_63);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_defaults_14 = mod_consts[389];
            tmp_annotations_47 = DICT_COPY(mod_consts[390]);
            Py_INCREF(tmp_defaults_14);


            tmp_args_element_value_50 = MAKE_FUNCTION_pandas$core$base$$$function__45__duplicated(tmp_defaults_14, tmp_annotations_47);

            frame_32384bfc83d95195e9f91f62b7d11be9_4->m_frame.f_lineno = 1366;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_63, tmp_args_element_value_50);
            Py_DECREF(tmp_called_value_63);
            Py_DECREF(tmp_args_element_value_50);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1366;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[162], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1367;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_pandas$core$base$$$function__46__arith_method();

        tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[392], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1370;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_pandas$core$base$$$function__47__construct_result();

        tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[182], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1385;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_32384bfc83d95195e9f91f62b7d11be9_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_32384bfc83d95195e9f91f62b7d11be9_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_32384bfc83d95195e9f91f62b7d11be9_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_32384bfc83d95195e9f91f62b7d11be9_4,
            type_description_2,
            outline_3_var___class__
        );



        assertFrameObject(frame_32384bfc83d95195e9f91f62b7d11be9_4);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_20;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_28;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_cmp_expr_left_3 = tmp_class_creation_4__bases;
            CHECK_OBJECT(tmp_class_creation_4__bases_orig);
            tmp_cmp_expr_right_3 = tmp_class_creation_4__bases_orig;
            tmp_condition_result_28 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_28 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 284;

                goto try_except_handler_20;
            }
            if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
                goto branch_yes_9;
            } else {
                goto branch_no_9;
            }
        }
        branch_yes_9:;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dictset_value = tmp_class_creation_4__bases_orig;
        tmp_res = PyObject_SetItem(locals_pandas$core$base$$$class__4_IndexOpsMixin_284, mod_consts[275], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto try_except_handler_20;
        }
        branch_no_9:;
        {
            PyObject *tmp_assign_source_85;
            PyObject *tmp_called_value_64;
            PyObject *tmp_args_value_11;
            PyObject *tmp_tuple_element_18;
            PyObject *tmp_kwargs_value_11;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_value_64 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_18 = mod_consts[306];
            tmp_args_value_11 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_18);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_18 = tmp_class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_18);
            tmp_tuple_element_18 = locals_pandas$core$base$$$class__4_IndexOpsMixin_284;
            PyTuple_SET_ITEM0(tmp_args_value_11, 2, tmp_tuple_element_18);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_11 = tmp_class_creation_4__class_decl_dict;
            frame_9faabfa059097986d8ff3cc57e843bb7->m_frame.f_lineno = 284;
            tmp_assign_source_85 = CALL_FUNCTION(tstate, tmp_called_value_64, tmp_args_value_11, tmp_kwargs_value_11);
            Py_DECREF(tmp_args_value_11);
            if (tmp_assign_source_85 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 284;

                goto try_except_handler_20;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_85;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_84 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_84);
        goto try_return_handler_20;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_20:;
        Py_DECREF(locals_pandas$core$base$$$class__4_IndexOpsMixin_284);
        locals_pandas$core$base$$$class__4_IndexOpsMixin_284 = NULL;
        goto try_return_handler_19;
        // Exception handler code:
        try_except_handler_20:;
        exception_keeper_type_18 = exception_type;
        exception_keeper_value_18 = exception_value;
        exception_keeper_tb_18 = exception_tb;
        exception_keeper_lineno_18 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pandas$core$base$$$class__4_IndexOpsMixin_284);
        locals_pandas$core$base$$$class__4_IndexOpsMixin_284 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_18;
        exception_value = exception_keeper_value_18;
        exception_tb = exception_keeper_tb_18;
        exception_lineno = exception_keeper_lineno_18;

        goto try_except_handler_19;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_19:;
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_19:;
        exception_keeper_type_19 = exception_type;
        exception_keeper_value_19 = exception_value;
        exception_keeper_tb_19 = exception_tb;
        exception_keeper_lineno_19 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_19;
        exception_value = exception_keeper_value_19;
        exception_tb = exception_keeper_tb_19;
        exception_lineno = exception_keeper_lineno_19;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 284;
        goto try_except_handler_18;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_pandas$core$base, (Nuitka_StringObject *)mod_consts[306], tmp_assign_source_84);
    }
    goto try_end_12;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    Py_XDECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_4;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9faabfa059097986d8ff3cc57e843bb7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9faabfa059097986d8ff3cc57e843bb7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9faabfa059097986d8ff3cc57e843bb7, exception_lineno);
    }



    assertFrameObject(frame_9faabfa059097986d8ff3cc57e843bb7);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_4:;
    CHECK_OBJECT(tmp_class_creation_4__bases_orig);
    Py_DECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_4__bases);
    Py_DECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    Py_DECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_4__metaclass);
    Py_DECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pandas.core.base", false);

    Py_INCREF(module_pandas$core$base);
    return module_pandas$core$base;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$core$base, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pandas$core$base", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
