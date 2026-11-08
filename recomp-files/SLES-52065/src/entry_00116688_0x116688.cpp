#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_00116688
// Address: 0x116688 - 0x116808
void entry_00116688_0x116688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116688_0x116688");
#endif

    ctx->pc = 0x116688u;

label_116688:
    // 0x116688: 0x1275018  mult        $t2, $t1, $a3
    ctx->pc = 0x116688u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x11668c: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x11668cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x116690: 0x1254024  and         $t0, $t1, $a1
    ctx->pc = 0x116690u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & GPR_U64(ctx, 5));
    // 0x116694: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x116694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x116698: 0xacc80000  sw          $t0, 0x0($a2)
    ctx->pc = 0x116698u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
    // 0x11669c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x11669cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1166a0: 0x28680270  slti        $t0, $v1, 0x270
    ctx->pc = 0x1166a0u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)624) ? 1 : 0);
    // 0x1166a4: 0x8cc90000  lw          $t1, 0x0($a2)
    ctx->pc = 0x1166a4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1166a8: 0x254b0001  addiu       $t3, $t2, 0x1
    ctx->pc = 0x1166a8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1166ac: 0x1655024  and         $t2, $t3, $a1
    ctx->pc = 0x1166acu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 5));
    // 0x1166b0: 0xa5402  srl         $t2, $t2, 16
    ctx->pc = 0x1166b0u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x1166b4: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x1166b4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x1166b8: 0xacc90000  sw          $t1, 0x0($a2)
    ctx->pc = 0x1166b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
    // 0x1166bc: 0x1674818  mult        $t1, $t3, $a3
    ctx->pc = 0x1166bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x1166c0: 0x252a0001  addiu       $t2, $t1, 0x1
    ctx->pc = 0x1166c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1166c4: 0x1454824  and         $t1, $t2, $a1
    ctx->pc = 0x1166c4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) & GPR_U64(ctx, 5));
    // 0x1166c8: 0xacc90004  sw          $t1, 0x4($a2)
    ctx->pc = 0x1166c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 9));
    // 0x1166cc: 0x1475018  mult        $t2, $t2, $a3
    ctx->pc = 0x1166ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x1166d0: 0x8cc90004  lw          $t1, 0x4($a2)
    ctx->pc = 0x1166d0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1166d4: 0x254b0001  addiu       $t3, $t2, 0x1
    ctx->pc = 0x1166d4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1166d8: 0x1655024  and         $t2, $t3, $a1
    ctx->pc = 0x1166d8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 5));
    // 0x1166dc: 0xa5402  srl         $t2, $t2, 16
    ctx->pc = 0x1166dcu;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x1166e0: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x1166e0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x1166e4: 0xacc90004  sw          $t1, 0x4($a2)
    ctx->pc = 0x1166e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 9));
    // 0x1166e8: 0x1674818  mult        $t1, $t3, $a3
    ctx->pc = 0x1166e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x1166ec: 0x252a0001  addiu       $t2, $t1, 0x1
    ctx->pc = 0x1166ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1166f0: 0x1454824  and         $t1, $t2, $a1
    ctx->pc = 0x1166f0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) & GPR_U64(ctx, 5));
    // 0x1166f4: 0xacc90008  sw          $t1, 0x8($a2)
    ctx->pc = 0x1166f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 9));
    // 0x1166f8: 0x1475018  mult        $t2, $t2, $a3
    ctx->pc = 0x1166f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x1166fc: 0x8cc90008  lw          $t1, 0x8($a2)
    ctx->pc = 0x1166fcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x116700: 0x254b0001  addiu       $t3, $t2, 0x1
    ctx->pc = 0x116700u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x116704: 0x1655024  and         $t2, $t3, $a1
    ctx->pc = 0x116704u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 5));
    // 0x116708: 0xa5402  srl         $t2, $t2, 16
    ctx->pc = 0x116708u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x11670c: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x11670cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x116710: 0xacc90008  sw          $t1, 0x8($a2)
    ctx->pc = 0x116710u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 9));
    // 0x116714: 0x1674818  mult        $t1, $t3, $a3
    ctx->pc = 0x116714u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x116718: 0x252a0001  addiu       $t2, $t1, 0x1
    ctx->pc = 0x116718u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x11671c: 0x1454824  and         $t1, $t2, $a1
    ctx->pc = 0x11671cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) & GPR_U64(ctx, 5));
    // 0x116720: 0xacc9000c  sw          $t1, 0xC($a2)
    ctx->pc = 0x116720u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 9));
    // 0x116724: 0x1475018  mult        $t2, $t2, $a3
    ctx->pc = 0x116724u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x116728: 0x8cc9000c  lw          $t1, 0xC($a2)
    ctx->pc = 0x116728u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x11672c: 0x254b0001  addiu       $t3, $t2, 0x1
    ctx->pc = 0x11672cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x116730: 0x1655024  and         $t2, $t3, $a1
    ctx->pc = 0x116730u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 5));
    // 0x116734: 0xa5402  srl         $t2, $t2, 16
    ctx->pc = 0x116734u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x116738: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x116738u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x11673c: 0xacc9000c  sw          $t1, 0xC($a2)
    ctx->pc = 0x11673cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 9));
    // 0x116740: 0x1674818  mult        $t1, $t3, $a3
    ctx->pc = 0x116740u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x116744: 0x252a0001  addiu       $t2, $t1, 0x1
    ctx->pc = 0x116744u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x116748: 0x1454824  and         $t1, $t2, $a1
    ctx->pc = 0x116748u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) & GPR_U64(ctx, 5));
    // 0x11674c: 0xacc90010  sw          $t1, 0x10($a2)
    ctx->pc = 0x11674cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 9));
    // 0x116750: 0x1475018  mult        $t2, $t2, $a3
    ctx->pc = 0x116750u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x116754: 0x8cc90010  lw          $t1, 0x10($a2)
    ctx->pc = 0x116754u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x116758: 0x254b0001  addiu       $t3, $t2, 0x1
    ctx->pc = 0x116758u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x11675c: 0x1655024  and         $t2, $t3, $a1
    ctx->pc = 0x11675cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 5));
    // 0x116760: 0xa5402  srl         $t2, $t2, 16
    ctx->pc = 0x116760u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x116764: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x116764u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x116768: 0xacc90010  sw          $t1, 0x10($a2)
    ctx->pc = 0x116768u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 9));
    // 0x11676c: 0x1674818  mult        $t1, $t3, $a3
    ctx->pc = 0x11676cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x116770: 0x252a0001  addiu       $t2, $t1, 0x1
    ctx->pc = 0x116770u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x116774: 0x1454824  and         $t1, $t2, $a1
    ctx->pc = 0x116774u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) & GPR_U64(ctx, 5));
    // 0x116778: 0xacc90014  sw          $t1, 0x14($a2)
    ctx->pc = 0x116778u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 9));
    // 0x11677c: 0x1475018  mult        $t2, $t2, $a3
    ctx->pc = 0x11677cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x116780: 0x8cc90014  lw          $t1, 0x14($a2)
    ctx->pc = 0x116780u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x116784: 0x254b0001  addiu       $t3, $t2, 0x1
    ctx->pc = 0x116784u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x116788: 0x1655024  and         $t2, $t3, $a1
    ctx->pc = 0x116788u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 5));
    // 0x11678c: 0xa5402  srl         $t2, $t2, 16
    ctx->pc = 0x11678cu;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x116790: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x116790u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x116794: 0xacc90014  sw          $t1, 0x14($a2)
    ctx->pc = 0x116794u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 9));
    // 0x116798: 0x1674818  mult        $t1, $t3, $a3
    ctx->pc = 0x116798u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x11679c: 0x252a0001  addiu       $t2, $t1, 0x1
    ctx->pc = 0x11679cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1167a0: 0x1454824  and         $t1, $t2, $a1
    ctx->pc = 0x1167a0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) & GPR_U64(ctx, 5));
    // 0x1167a4: 0xacc90018  sw          $t1, 0x18($a2)
    ctx->pc = 0x1167a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 9));
    // 0x1167a8: 0x1475018  mult        $t2, $t2, $a3
    ctx->pc = 0x1167a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x1167ac: 0x8cc90018  lw          $t1, 0x18($a2)
    ctx->pc = 0x1167acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x1167b0: 0x254b0001  addiu       $t3, $t2, 0x1
    ctx->pc = 0x1167b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1167b4: 0x1655024  and         $t2, $t3, $a1
    ctx->pc = 0x1167b4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 5));
    // 0x1167b8: 0xa5402  srl         $t2, $t2, 16
    ctx->pc = 0x1167b8u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x1167bc: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x1167bcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x1167c0: 0xacc90018  sw          $t1, 0x18($a2)
    ctx->pc = 0x1167c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 9));
    // 0x1167c4: 0x1674818  mult        $t1, $t3, $a3
    ctx->pc = 0x1167c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x1167c8: 0x252a0001  addiu       $t2, $t1, 0x1
    ctx->pc = 0x1167c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1167cc: 0x1454824  and         $t1, $t2, $a1
    ctx->pc = 0x1167ccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) & GPR_U64(ctx, 5));
    // 0x1167d0: 0xacc9001c  sw          $t1, 0x1C($a2)
    ctx->pc = 0x1167d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 9));
    // 0x1167d4: 0x1475018  mult        $t2, $t2, $a3
    ctx->pc = 0x1167d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x1167d8: 0x8cc9001c  lw          $t1, 0x1C($a2)
    ctx->pc = 0x1167d8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x1167dc: 0x254b0001  addiu       $t3, $t2, 0x1
    ctx->pc = 0x1167dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1167e0: 0x1655024  and         $t2, $t3, $a1
    ctx->pc = 0x1167e0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 5));
    // 0x1167e4: 0xa5402  srl         $t2, $t2, 16
    ctx->pc = 0x1167e4u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x1167e8: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x1167e8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x1167ec: 0xacc9001c  sw          $t1, 0x1C($a2)
    ctx->pc = 0x1167ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 9));
    // 0x1167f0: 0x1673018  mult        $a2, $t3, $a3
    ctx->pc = 0x1167f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1167f4: 0x1500ffa4  bnez        $t0, . + 4 + (-0x5C << 2)
    ctx->pc = 0x1167F4u;
    {
        const bool branch_taken_0x1167f4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1167F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1167F4u;
        // 0x1167f8: 0x24c90001  addiu       $t1, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1167f4) {
            ctx->pc = 0x116688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116688;
        }
    }
    ctx->pc = 0x1167FCu;
    // 0x1167fc: 0x24020270  addiu       $v0, $zero, 0x270
    ctx->pc = 0x1167fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 624));
    // 0x116800: 0xaf828010  sw          $v0, -0x7FF0($gp)
    ctx->pc = 0x116800u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934544), GPR_U32(ctx, 2));
    // 0x116804: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x116804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x116808u;
}
