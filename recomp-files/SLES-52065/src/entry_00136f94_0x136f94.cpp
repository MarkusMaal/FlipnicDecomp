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

// Function: entry_00136f94
// Address: 0x136f94 - 0x137138
void entry_00136f94_0x136f94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136f94_0x136f94");
#endif

    ctx->pc = 0x136f94u;

label_136f94:
    // 0x136f94: 0x8f8785a0  lw          $a3, -0x7A60($gp)
    ctx->pc = 0x136f94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935968)));
    // 0x136f98: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x136f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x136f9c: 0x2886001a  slti        $a2, $a0, 0x1A
    ctx->pc = 0x136f9cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x136fa0: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x136fa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x136fa4: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x136fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x136fa8: 0x8f8785a0  lw          $a3, -0x7A60($gp)
    ctx->pc = 0x136fa8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935968)));
    // 0x136fac: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x136facu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x136fb0: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x136fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x136fb4: 0x8f8785a0  lw          $a3, -0x7A60($gp)
    ctx->pc = 0x136fb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935968)));
    // 0x136fb8: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x136fb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x136fbc: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x136fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x136fc0: 0x8f8785a0  lw          $a3, -0x7A60($gp)
    ctx->pc = 0x136fc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935968)));
    // 0x136fc4: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x136fc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x136fc8: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x136fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
    // 0x136fcc: 0x8f8785a0  lw          $a3, -0x7A60($gp)
    ctx->pc = 0x136fccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935968)));
    // 0x136fd0: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x136fd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x136fd4: 0xace30010  sw          $v1, 0x10($a3)
    ctx->pc = 0x136fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 3));
    // 0x136fd8: 0x8f8785a0  lw          $a3, -0x7A60($gp)
    ctx->pc = 0x136fd8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935968)));
    // 0x136fdc: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x136fdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x136fe0: 0xace30014  sw          $v1, 0x14($a3)
    ctx->pc = 0x136fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 3));
    // 0x136fe4: 0x8f8785a0  lw          $a3, -0x7A60($gp)
    ctx->pc = 0x136fe4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935968)));
    // 0x136fe8: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x136fe8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x136fec: 0xace30018  sw          $v1, 0x18($a3)
    ctx->pc = 0x136fecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
    // 0x136ff0: 0x8f8785a0  lw          $a3, -0x7A60($gp)
    ctx->pc = 0x136ff0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935968)));
    // 0x136ff4: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x136ff4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x136ff8: 0xace2001c  sw          $v0, 0x1C($a3)
    ctx->pc = 0x136ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 2));
    // 0x136ffc: 0x8f8785a0  lw          $a3, -0x7A60($gp)
    ctx->pc = 0x136ffcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935968)));
    // 0x137000: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x137000u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x137004: 0xace30020  sw          $v1, 0x20($a3)
    ctx->pc = 0x137004u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 3));
    // 0x137008: 0x8f8785a0  lw          $a3, -0x7A60($gp)
    ctx->pc = 0x137008u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935968)));
    // 0x13700c: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x13700cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x137010: 0xace30024  sw          $v1, 0x24($a3)
    ctx->pc = 0x137010u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 3));
    // 0x137014: 0x8f8785a0  lw          $a3, -0x7A60($gp)
    ctx->pc = 0x137014u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935968)));
    // 0x137018: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x137018u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x13701c: 0xace30028  sw          $v1, 0x28($a3)
    ctx->pc = 0x13701cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 3));
    // 0x137020: 0x8f8785a0  lw          $a3, -0x7A60($gp)
    ctx->pc = 0x137020u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935968)));
    // 0x137024: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x137024u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x137028: 0xace2002c  sw          $v0, 0x2C($a3)
    ctx->pc = 0x137028u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 2));
    // 0x13702c: 0x8f8785a0  lw          $a3, -0x7A60($gp)
    ctx->pc = 0x13702cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935968)));
    // 0x137030: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x137030u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x137034: 0xace30030  sw          $v1, 0x30($a3)
    ctx->pc = 0x137034u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 3));
    // 0x137038: 0x8f8785a0  lw          $a3, -0x7A60($gp)
    ctx->pc = 0x137038u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935968)));
    // 0x13703c: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x13703cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x137040: 0xace30034  sw          $v1, 0x34($a3)
    ctx->pc = 0x137040u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 52), GPR_U32(ctx, 3));
    // 0x137044: 0x8f8785a0  lw          $a3, -0x7A60($gp)
    ctx->pc = 0x137044u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935968)));
    // 0x137048: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x137048u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x13704c: 0xace30038  sw          $v1, 0x38($a3)
    ctx->pc = 0x13704cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 56), GPR_U32(ctx, 3));
    // 0x137050: 0x8f8785a0  lw          $a3, -0x7A60($gp)
    ctx->pc = 0x137050u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935968)));
    // 0x137054: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x137054u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x137058: 0xace2003c  sw          $v0, 0x3C($a3)
    ctx->pc = 0x137058u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 60), GPR_U32(ctx, 2));
    // 0x13705c: 0x8f8785a0  lw          $a3, -0x7A60($gp)
    ctx->pc = 0x13705cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935968)));
    // 0x137060: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x137060u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x137064: 0xace30040  sw          $v1, 0x40($a3)
    ctx->pc = 0x137064u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 64), GPR_U32(ctx, 3));
    // 0x137068: 0x8f8785a0  lw          $a3, -0x7A60($gp)
    ctx->pc = 0x137068u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935968)));
    // 0x13706c: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x13706cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x137070: 0xace30044  sw          $v1, 0x44($a3)
    ctx->pc = 0x137070u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 68), GPR_U32(ctx, 3));
    // 0x137074: 0x8f8785a0  lw          $a3, -0x7A60($gp)
    ctx->pc = 0x137074u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935968)));
    // 0x137078: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x137078u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x13707c: 0xace30048  sw          $v1, 0x48($a3)
    ctx->pc = 0x13707cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 72), GPR_U32(ctx, 3));
    // 0x137080: 0x8f8785a0  lw          $a3, -0x7A60($gp)
    ctx->pc = 0x137080u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935968)));
    // 0x137084: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x137084u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x137088: 0xace2004c  sw          $v0, 0x4C($a3)
    ctx->pc = 0x137088u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 76), GPR_U32(ctx, 2));
    // 0x13708c: 0x8f8785a0  lw          $a3, -0x7A60($gp)
    ctx->pc = 0x13708cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935968)));
    // 0x137090: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x137090u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x137094: 0xace30050  sw          $v1, 0x50($a3)
    ctx->pc = 0x137094u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 80), GPR_U32(ctx, 3));
    // 0x137098: 0x8f8785a0  lw          $a3, -0x7A60($gp)
    ctx->pc = 0x137098u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935968)));
    // 0x13709c: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x13709cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1370a0: 0xace30054  sw          $v1, 0x54($a3)
    ctx->pc = 0x1370a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 84), GPR_U32(ctx, 3));
    // 0x1370a4: 0x8f8785a0  lw          $a3, -0x7A60($gp)
    ctx->pc = 0x1370a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935968)));
    // 0x1370a8: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x1370a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1370ac: 0xace30058  sw          $v1, 0x58($a3)
    ctx->pc = 0x1370acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 88), GPR_U32(ctx, 3));
    // 0x1370b0: 0x8f8785a0  lw          $a3, -0x7A60($gp)
    ctx->pc = 0x1370b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935968)));
    // 0x1370b4: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x1370b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1370b8: 0xace2005c  sw          $v0, 0x5C($a3)
    ctx->pc = 0x1370b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 92), GPR_U32(ctx, 2));
    // 0x1370bc: 0x8f8785a0  lw          $a3, -0x7A60($gp)
    ctx->pc = 0x1370bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935968)));
    // 0x1370c0: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x1370c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1370c4: 0xace30060  sw          $v1, 0x60($a3)
    ctx->pc = 0x1370c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 96), GPR_U32(ctx, 3));
    // 0x1370c8: 0x8f8785a0  lw          $a3, -0x7A60($gp)
    ctx->pc = 0x1370c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935968)));
    // 0x1370cc: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x1370ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1370d0: 0xace30064  sw          $v1, 0x64($a3)
    ctx->pc = 0x1370d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 100), GPR_U32(ctx, 3));
    // 0x1370d4: 0x8f8785a0  lw          $a3, -0x7A60($gp)
    ctx->pc = 0x1370d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935968)));
    // 0x1370d8: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x1370d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1370dc: 0xace30068  sw          $v1, 0x68($a3)
    ctx->pc = 0x1370dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 104), GPR_U32(ctx, 3));
    // 0x1370e0: 0x8f8785a0  lw          $a3, -0x7A60($gp)
    ctx->pc = 0x1370e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935968)));
    // 0x1370e4: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x1370e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1370e8: 0xace2006c  sw          $v0, 0x6C($a3)
    ctx->pc = 0x1370e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 108), GPR_U32(ctx, 2));
    // 0x1370ec: 0x8f8785a0  lw          $a3, -0x7A60($gp)
    ctx->pc = 0x1370ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935968)));
    // 0x1370f0: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x1370f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1370f4: 0xace30070  sw          $v1, 0x70($a3)
    ctx->pc = 0x1370f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 112), GPR_U32(ctx, 3));
    // 0x1370f8: 0x8f8785a0  lw          $a3, -0x7A60($gp)
    ctx->pc = 0x1370f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935968)));
    // 0x1370fc: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x1370fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x137100: 0xace30074  sw          $v1, 0x74($a3)
    ctx->pc = 0x137100u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 116), GPR_U32(ctx, 3));
    // 0x137104: 0x8f8785a0  lw          $a3, -0x7A60($gp)
    ctx->pc = 0x137104u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935968)));
    // 0x137108: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x137108u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x13710c: 0xace30078  sw          $v1, 0x78($a3)
    ctx->pc = 0x13710cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 120), GPR_U32(ctx, 3));
    // 0x137110: 0x8f8785a0  lw          $a3, -0x7A60($gp)
    ctx->pc = 0x137110u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935968)));
    // 0x137114: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x137114u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x137118: 0xace2007c  sw          $v0, 0x7C($a3)
    ctx->pc = 0x137118u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 124), GPR_U32(ctx, 2));
    // 0x13711c: 0x14c0ff9d  bnez        $a2, . + 4 + (-0x63 << 2)
    ctx->pc = 0x13711Cu;
    {
        const bool branch_taken_0x13711c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x137120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13711Cu;
        // 0x137120: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13711c) {
            ctx->pc = 0x136F94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_136f94;
        }
    }
    ctx->pc = 0x137124u;
    // 0x137124: 0x28810022  slti        $at, $a0, 0x22
    ctx->pc = 0x137124u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)34) ? 1 : 0);
    // 0x137128: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x137128u;
    {
        const bool branch_taken_0x137128 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13712Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137128u;
        // 0x13712c: 0x43900  sll         $a3, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137128) {
            ctx->pc = 0x137178u;
            return;
        }
    }
    ctx->pc = 0x137130u;
    // 0x137130: 0x3c064300  lui         $a2, 0x4300
    ctx->pc = 0x137130u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17152 << 16));
    // 0x137134: 0x3c054280  lui         $a1, 0x4280
    ctx->pc = 0x137134u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17024 << 16));
    ctx->pc = 0x137138u;
}
