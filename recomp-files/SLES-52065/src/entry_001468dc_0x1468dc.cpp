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

// Function: entry_001468dc
// Address: 0x1468dc - 0x146c58
void entry_001468dc_0x1468dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001468dc_0x1468dc");
#endif

    switch (ctx->pc) {
        case 0x146ac4u: goto label_146ac4;
        case 0x146becu: goto label_146bec;
        case 0x146bfcu: goto label_146bfc;
        case 0x146c08u: goto label_146c08;
        case 0x146c14u: goto label_146c14;
        default: break;
    }

    ctx->pc = 0x1468dcu;

label_1468dc:
    // 0x1468dc: 0x0  nop
    ctx->pc = 0x1468dcu;
    // NOP
    // 0x1468e0: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x1468e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1468e4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1468e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1468e8: 0x28651388  slti        $a1, $v1, 0x1388
    ctx->pc = 0x1468e8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5000) ? 1 : 0);
    // 0x1468ec: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x1468ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1468f0: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1468f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x1468f4: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x1468f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1468f8: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x1468f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1468fc: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x1468fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x146900: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x146900u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x146904: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x146904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x146908: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x146908u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x14690c: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x14690cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x146910: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x146910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x146914: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x146914u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x146918: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x146918u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14691c: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x14691cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x146920: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x146920u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
    // 0x146924: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x146924u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x146928: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x146928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x14692c: 0xacc00014  sw          $zero, 0x14($a2)
    ctx->pc = 0x14692cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
    // 0x146930: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x146930u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x146934: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x146934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x146938: 0xacc00018  sw          $zero, 0x18($a2)
    ctx->pc = 0x146938u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
    // 0x14693c: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x14693cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x146940: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x146940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x146944: 0xacc2001c  sw          $v0, 0x1C($a2)
    ctx->pc = 0x146944u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 2));
    // 0x146948: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x146948u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14694c: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x14694cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x146950: 0xacc00020  sw          $zero, 0x20($a2)
    ctx->pc = 0x146950u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 0));
    // 0x146954: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x146954u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x146958: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x146958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x14695c: 0xacc00024  sw          $zero, 0x24($a2)
    ctx->pc = 0x14695cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 0));
    // 0x146960: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x146960u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x146964: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x146964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x146968: 0xacc00028  sw          $zero, 0x28($a2)
    ctx->pc = 0x146968u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 0));
    // 0x14696c: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x14696cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x146970: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x146970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x146974: 0xacc2002c  sw          $v0, 0x2C($a2)
    ctx->pc = 0x146974u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 2));
    // 0x146978: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x146978u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14697c: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x14697cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x146980: 0xacc00030  sw          $zero, 0x30($a2)
    ctx->pc = 0x146980u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 0));
    // 0x146984: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x146984u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x146988: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x146988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x14698c: 0xacc00034  sw          $zero, 0x34($a2)
    ctx->pc = 0x14698cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 0));
    // 0x146990: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x146990u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x146994: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x146994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x146998: 0xacc00038  sw          $zero, 0x38($a2)
    ctx->pc = 0x146998u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 0));
    // 0x14699c: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x14699cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1469a0: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x1469a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1469a4: 0xacc2003c  sw          $v0, 0x3C($a2)
    ctx->pc = 0x1469a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 2));
    // 0x1469a8: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x1469a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1469ac: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x1469acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1469b0: 0xacc00040  sw          $zero, 0x40($a2)
    ctx->pc = 0x1469b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 0));
    // 0x1469b4: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x1469b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1469b8: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x1469b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1469bc: 0xacc00044  sw          $zero, 0x44($a2)
    ctx->pc = 0x1469bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 68), GPR_U32(ctx, 0));
    // 0x1469c0: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x1469c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1469c4: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x1469c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1469c8: 0xacc00048  sw          $zero, 0x48($a2)
    ctx->pc = 0x1469c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 72), GPR_U32(ctx, 0));
    // 0x1469cc: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x1469ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1469d0: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x1469d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1469d4: 0xacc2004c  sw          $v0, 0x4C($a2)
    ctx->pc = 0x1469d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 76), GPR_U32(ctx, 2));
    // 0x1469d8: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x1469d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1469dc: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x1469dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1469e0: 0xacc00050  sw          $zero, 0x50($a2)
    ctx->pc = 0x1469e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 80), GPR_U32(ctx, 0));
    // 0x1469e4: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x1469e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1469e8: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x1469e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1469ec: 0xacc00054  sw          $zero, 0x54($a2)
    ctx->pc = 0x1469ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 84), GPR_U32(ctx, 0));
    // 0x1469f0: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x1469f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1469f4: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x1469f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1469f8: 0xacc00058  sw          $zero, 0x58($a2)
    ctx->pc = 0x1469f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 88), GPR_U32(ctx, 0));
    // 0x1469fc: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x1469fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x146a00: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x146a00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x146a04: 0xacc2005c  sw          $v0, 0x5C($a2)
    ctx->pc = 0x146a04u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 92), GPR_U32(ctx, 2));
    // 0x146a08: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x146a08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x146a0c: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x146a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x146a10: 0xacc00060  sw          $zero, 0x60($a2)
    ctx->pc = 0x146a10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 96), GPR_U32(ctx, 0));
    // 0x146a14: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x146a14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x146a18: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x146a18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x146a1c: 0xacc00064  sw          $zero, 0x64($a2)
    ctx->pc = 0x146a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 100), GPR_U32(ctx, 0));
    // 0x146a20: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x146a20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x146a24: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x146a24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x146a28: 0xacc00068  sw          $zero, 0x68($a2)
    ctx->pc = 0x146a28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 104), GPR_U32(ctx, 0));
    // 0x146a2c: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x146a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x146a30: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x146a30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x146a34: 0xacc2006c  sw          $v0, 0x6C($a2)
    ctx->pc = 0x146a34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 108), GPR_U32(ctx, 2));
    // 0x146a38: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x146a38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x146a3c: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x146a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x146a40: 0xacc00070  sw          $zero, 0x70($a2)
    ctx->pc = 0x146a40u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 112), GPR_U32(ctx, 0));
    // 0x146a44: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x146a44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x146a48: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x146a48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x146a4c: 0xacc00074  sw          $zero, 0x74($a2)
    ctx->pc = 0x146a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 116), GPR_U32(ctx, 0));
    // 0x146a50: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x146a50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x146a54: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x146a54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x146a58: 0xacc00078  sw          $zero, 0x78($a2)
    ctx->pc = 0x146a58u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 120), GPR_U32(ctx, 0));
    // 0x146a5c: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x146a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x146a60: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x146a60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x146a64: 0xacc2007c  sw          $v0, 0x7C($a2)
    ctx->pc = 0x146a64u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 124), GPR_U32(ctx, 2));
    // 0x146a68: 0x14a0ff9c  bnez        $a1, . + 4 + (-0x64 << 2)
    ctx->pc = 0x146A68u;
    {
        const bool branch_taken_0x146a68 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x146A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146A68u;
        // 0x146a6c: 0x24840080  addiu       $a0, $a0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146a68) {
            ctx->pc = 0x1468DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1468dc;
        }
    }
    ctx->pc = 0x146A70u;
    // 0x146a70: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x146a70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x146a74: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x146a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x146a78: 0x34453333  ori         $a1, $v0, 0x3333
    ctx->pc = 0x146a78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x146a7c: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x146a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x146a80: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x146a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x146a84: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x146a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x146a88: 0xafa50100  sw          $a1, 0x100($sp)
    ctx->pc = 0x146a88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 5));
    // 0x146a8c: 0xafa50104  sw          $a1, 0x104($sp)
    ctx->pc = 0x146a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 5));
    // 0x146a90: 0xafa50108  sw          $a1, 0x108($sp)
    ctx->pc = 0x146a90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 5));
    // 0x146a94: 0x78850000  lq          $a1, 0x0($a0)
    ctx->pc = 0x146a94u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x146a98: 0x2828021  addu        $s0, $s4, $v0
    ctx->pc = 0x146a98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x146a9c: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x146a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x146aa0: 0x7e050130  sq          $a1, 0x130($s0)
    ctx->pc = 0x146aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 304), GPR_VEC(ctx, 5));
    // 0x146aa4: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x146aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x146aa8: 0xafa30110  sw          $v1, 0x110($sp)
    ctx->pc = 0x146aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
    // 0x146aac: 0xe7a10118  swc1        $f1, 0x118($sp)
    ctx->pc = 0x146aacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x146ab0: 0xafa30114  sw          $v1, 0x114($sp)
    ctx->pc = 0x146ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 3));
    // 0x146ab4: 0xe7a1011c  swc1        $f1, 0x11C($sp)
    ctx->pc = 0x146ab4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x146ab8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x146ab8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x146abc: 0xc040168  jal         func_1005A0
    ctx->pc = 0x146ABCu;
    SET_GPR_U32(ctx, 31, 0x146AC4u);
    ctx->pc = 0x146AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146ABCu;
    // 0x146ac0: 0x7e020140  sq          $v0, 0x140($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 320), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x146ABCu, 0x146AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146AC4u;
label_146ac4:
    // 0x146ac4: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x146ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
    // 0x146ac8: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x146ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x146acc: 0x8e050120  lw          $a1, 0x120($s0)
    ctx->pc = 0x146accu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x146ad0: 0x348e0404  ori         $t6, $a0, 0x404
    ctx->pc = 0x146ad0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1028);
    // 0x146ad4: 0x3c046c01  lui         $a0, 0x6C01
    ctx->pc = 0x146ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27649 << 16));
    // 0x146ad8: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x146ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x146adc: 0x260f0130  addiu       $t7, $s0, 0x130
    ctx->pc = 0x146adcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x146ae0: 0x260c0140  addiu       $t4, $s0, 0x140
    ctx->pc = 0x146ae0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    // 0x146ae4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x146ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x146ae8: 0x348d8019  ori         $t5, $a0, 0x8019
    ctx->pc = 0x146ae8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32793);
    // 0x146aec: 0x348b801b  ori         $t3, $a0, 0x801B
    ctx->pc = 0x146aecu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32795);
    // 0x146af0: 0x3c0a1400  lui         $t2, 0x1400
    ctx->pc = 0x146af0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)5120 << 16));
    // 0x146af4: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x146af4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x146af8: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x146af8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x146afc: 0xafa5012c  sw          $a1, 0x12C($sp)
    ctx->pc = 0x146afcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 5));
    // 0x146b00: 0x261000a0  addiu       $s0, $s0, 0xA0
    ctx->pc = 0x146b00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x146b04: 0x8fb1012c  lw          $s1, 0x12C($sp)
    ctx->pc = 0x146b04u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x146b08: 0x34860008  ori         $a2, $a0, 0x8
    ctx->pc = 0x146b08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x146b0c: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x146b0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x146b10: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x146b10u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x146b14: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x146b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x146b18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x146b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146b1c: 0xa2230003  sb          $v1, 0x3($s1)
    ctx->pc = 0x146b1cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x146b20: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x146b20u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x146b24: 0xae2f0004  sw          $t7, 0x4($s1)
    ctx->pc = 0x146b24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 15));
    // 0x146b28: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x146b28u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x146b2c: 0xae2e0008  sw          $t6, 0x8($s1)
    ctx->pc = 0x146b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 14));
    // 0x146b30: 0xae2d000c  sw          $t5, 0xC($s1)
    ctx->pc = 0x146b30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 13));
    // 0x146b34: 0x8fad012c  lw          $t5, 0x12C($sp)
    ctx->pc = 0x146b34u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x146b38: 0x25ad0010  addiu       $t5, $t5, 0x10
    ctx->pc = 0x146b38u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x146b3c: 0xafad012c  sw          $t5, 0x12C($sp)
    ctx->pc = 0x146b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 13));
    // 0x146b40: 0x8fad012c  lw          $t5, 0x12C($sp)
    ctx->pc = 0x146b40u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x146b44: 0xa1a30003  sb          $v1, 0x3($t5)
    ctx->pc = 0x146b44u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x146b48: 0xa1a00002  sb          $zero, 0x2($t5)
    ctx->pc = 0x146b48u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x146b4c: 0xadac0004  sw          $t4, 0x4($t5)
    ctx->pc = 0x146b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 12));
    // 0x146b50: 0xa5a20000  sh          $v0, 0x0($t5)
    ctx->pc = 0x146b50u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x146b54: 0xadae0008  sw          $t6, 0x8($t5)
    ctx->pc = 0x146b54u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 14));
    // 0x146b58: 0xadab000c  sw          $t3, 0xC($t5)
    ctx->pc = 0x146b58u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 11));
    // 0x146b5c: 0x8fab012c  lw          $t3, 0x12C($sp)
    ctx->pc = 0x146b5cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x146b60: 0x8f8284e0  lw          $v0, -0x7B20($gp)
    ctx->pc = 0x146b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
    // 0x146b64: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x146b64u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x146b68: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x146b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x146b6c: 0xafab012c  sw          $t3, 0x12C($sp)
    ctx->pc = 0x146b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 11));
    // 0x146b70: 0x8faa012c  lw          $t2, 0x12C($sp)
    ctx->pc = 0x146b70u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x146b74: 0xa1490003  sb          $t1, 0x3($t2)
    ctx->pc = 0x146b74u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x146b78: 0xa1400002  sb          $zero, 0x2($t2)
    ctx->pc = 0x146b78u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x146b7c: 0xad400004  sw          $zero, 0x4($t2)
    ctx->pc = 0x146b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 0));
    // 0x146b80: 0xa5400000  sh          $zero, 0x0($t2)
    ctx->pc = 0x146b80u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x146b84: 0xad400008  sw          $zero, 0x8($t2)
    ctx->pc = 0x146b84u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 0));
    // 0x146b88: 0xad42000c  sw          $v0, 0xC($t2)
    ctx->pc = 0x146b88u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 2));
    // 0x146b8c: 0x8fa2012c  lw          $v0, 0x12C($sp)
    ctx->pc = 0x146b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x146b90: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x146b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x146b94: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x146b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
    // 0x146b98: 0x8fa2012c  lw          $v0, 0x12C($sp)
    ctx->pc = 0x146b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x146b9c: 0xa0430003  sb          $v1, 0x3($v0)
    ctx->pc = 0x146b9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x146ba0: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x146ba0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x146ba4: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x146ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x146ba8: 0xa4480000  sh          $t0, 0x0($v0)
    ctx->pc = 0x146ba8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x146bac: 0xac470008  sw          $a3, 0x8($v0)
    ctx->pc = 0x146bacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
    // 0x146bb0: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x146bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x146bb4: 0x8fa2012c  lw          $v0, 0x12C($sp)
    ctx->pc = 0x146bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x146bb8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x146bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x146bbc: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x146bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
    // 0x146bc0: 0x8fa2012c  lw          $v0, 0x12C($sp)
    ctx->pc = 0x146bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x146bc4: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x146bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x146bc8: 0xa0450003  sb          $a1, 0x3($v0)
    ctx->pc = 0x146bc8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x146bcc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x146bccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x146bd0: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x146bd0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x146bd4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x146bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x146bd8: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x146bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x146bdc: 0x8fa2012c  lw          $v0, 0x12C($sp)
    ctx->pc = 0x146bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x146be0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x146be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x146be4: 0xc051ea8  jal         func_147AA0
    ctx->pc = 0x146BE4u;
    SET_GPR_U32(ctx, 31, 0x146BECu);
    ctx->pc = 0x146BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146BE4u;
    // 0x146be8: 0xafa2012c  sw          $v0, 0x12C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147AA0u, 0x146BE4u, 0x146BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146BECu;
label_146bec:
    // 0x146bec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x146becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146bf0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x146bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x146bf4: 0xc051f50  jal         func_147D40
    ctx->pc = 0x146BF4u;
    SET_GPR_U32(ctx, 31, 0x146BFCu);
    ctx->pc = 0x146BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146BF4u;
    // 0x146bf8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147D40u, 0x146BF4u, 0x146BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146BFCu;
label_146bfc:
    // 0x146bfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x146bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146c00: 0xc051f40  jal         func_147D00
    ctx->pc = 0x146C00u;
    SET_GPR_U32(ctx, 31, 0x146C08u);
    ctx->pc = 0x146C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146C00u;
    // 0x146c04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147D00u, 0x146C00u, 0x146C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146C08u;
label_146c08:
    // 0x146c08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x146c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146c0c: 0xc051ec8  jal         func_147B20
    ctx->pc = 0x146C0Cu;
    SET_GPR_U32(ctx, 31, 0x146C14u);
    ctx->pc = 0x146C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146C0Cu;
    // 0x146c10: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147B20u, 0x146C0Cu, 0x146C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146C14u;
label_146c14:
    // 0x146c14: 0x3c02502b  lui         $v0, 0x502B
    ctx->pc = 0x146c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20523 << 16));
    // 0x146c18: 0x34038024  ori         $v1, $zero, 0x8024
    ctx->pc = 0x146c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32804);
    // 0x146c1c: 0x34444000  ori         $a0, $v0, 0x4000
    ctx->pc = 0x146c1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x146c20: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x146c20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146c24: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x146c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x146c28: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x146c28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146c2c: 0x282a821  addu        $s5, $s4, $v0
    ctx->pc = 0x146c2cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x146c30: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x146c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x146c34: 0x26b70040  addiu       $s7, $s5, 0x40
    ctx->pc = 0x146c34u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x146c38: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x146c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x146c3c: 0x26b60050  addiu       $s6, $s5, 0x50
    ctx->pc = 0x146c3cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
    // 0x146c40: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x146c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x146c44: 0xfea30040  sd          $v1, 0x40($s5)
    ctx->pc = 0x146c44u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 64), GPR_U64(ctx, 3));
    // 0x146c48: 0x34422521  ori         $v0, $v0, 0x2521
    ctx->pc = 0x146c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9505);
    // 0x146c4c: 0xfea20048  sd          $v0, 0x48($s5)
    ctx->pc = 0x146c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 72), GPR_U64(ctx, 2));
    // 0x146c50: 0xfea30050  sd          $v1, 0x50($s5)
    ctx->pc = 0x146c50u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 80), GPR_U64(ctx, 3));
    // 0x146c54: 0xfea20058  sd          $v0, 0x58($s5)
    ctx->pc = 0x146c54u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 88), GPR_U64(ctx, 2));
    ctx->pc = 0x146c58u;
}
