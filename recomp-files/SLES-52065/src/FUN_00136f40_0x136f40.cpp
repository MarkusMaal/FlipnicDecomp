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

// Function: FUN_00136f40
// Address: 0x136f40 - 0x137424
void FUN_00136f40_0x136f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00136f40_0x136f40");
#endif

    switch (ctx->pc) {
        case 0x136f94u: goto label_136f94;
        case 0x137138u: goto label_137138;
        case 0x1371d4u: goto label_1371d4;
        case 0x1373c4u: goto label_1373c4;
        case 0x1373ccu: goto label_1373cc;
        default: break;
    }

    ctx->pc = 0x136f40u;

    // 0x136f40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x136f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x136f44: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x136f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x136f48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x136f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x136f4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x136f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x136f50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x136f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x136f54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x136f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x136f58: 0x8f8385a0  lw          $v1, -0x7A60($gp)
    ctx->pc = 0x136f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935968)));
    // 0x136f5c: 0x1460012a  bnez        $v1, . + 4 + (0x12A << 2)
    ctx->pc = 0x136F5Cu;
    {
        const bool branch_taken_0x136f5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x136f5c) {
            ctx->pc = 0x137408u;
            goto label_137408;
        }
    }
    ctx->pc = 0x136F64u;
    // 0x136f64: 0x14600128  bnez        $v1, . + 4 + (0x128 << 2)
    ctx->pc = 0x136F64u;
    {
        const bool branch_taken_0x136f64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x136f64) {
            ctx->pc = 0x137408u;
            goto label_137408;
        }
    }
    ctx->pc = 0x136F6Cu;
    // 0x136f6c: 0x8f8385c0  lw          $v1, -0x7A40($gp)
    ctx->pc = 0x136f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936000)));
    // 0x136f70: 0x14600125  bnez        $v1, . + 4 + (0x125 << 2)
    ctx->pc = 0x136F70u;
    {
        const bool branch_taken_0x136f70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x136f70) {
            ctx->pc = 0x137408u;
            goto label_137408;
        }
    }
    ctx->pc = 0x136F78u;
    // 0x136f78: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x136f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x136f7c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x136f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136f80: 0x24426770  addiu       $v0, $v0, 0x6770
    ctx->pc = 0x136f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26480));
    // 0x136f84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x136f84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136f88: 0xaf8285a0  sw          $v0, -0x7A60($gp)
    ctx->pc = 0x136f88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935968), GPR_U32(ctx, 2));
    // 0x136f8c: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x136f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x136f90: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x136f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
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
            goto label_137178;
        }
    }
    ctx->pc = 0x137130u;
    // 0x137130: 0x3c064300  lui         $a2, 0x4300
    ctx->pc = 0x137130u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17152 << 16));
    // 0x137134: 0x3c054280  lui         $a1, 0x4280
    ctx->pc = 0x137134u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17024 << 16));
label_137138:
    // 0x137138: 0x8f8385a0  lw          $v1, -0x7A60($gp)
    ctx->pc = 0x137138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935968)));
    // 0x13713c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x13713cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x137140: 0x28820022  slti        $v0, $a0, 0x22
    ctx->pc = 0x137140u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)34) ? 1 : 0);
    // 0x137144: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x137144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x137148: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x137148u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x13714c: 0x8f8385a0  lw          $v1, -0x7A60($gp)
    ctx->pc = 0x13714cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935968)));
    // 0x137150: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x137150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x137154: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x137154u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x137158: 0x8f8385a0  lw          $v1, -0x7A60($gp)
    ctx->pc = 0x137158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935968)));
    // 0x13715c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x13715cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x137160: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x137160u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
    // 0x137164: 0x8f8385a0  lw          $v1, -0x7A60($gp)
    ctx->pc = 0x137164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935968)));
    // 0x137168: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x137168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x13716c: 0xac65000c  sw          $a1, 0xC($v1)
    ctx->pc = 0x13716cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
    // 0x137170: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x137170u;
    {
        const bool branch_taken_0x137170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x137174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137170u;
        // 0x137174: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137170) {
            ctx->pc = 0x137138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_137138;
        }
    }
    ctx->pc = 0x137178u;
label_137178:
    // 0x137178: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x137178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x13717c: 0x24426990  addiu       $v0, $v0, 0x6990
    ctx->pc = 0x13717cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27024));
    // 0x137180: 0x3c093e00  lui         $t1, 0x3E00
    ctx->pc = 0x137180u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)15872 << 16));
    // 0x137184: 0xaf8285b0  sw          $v0, -0x7A50($gp)
    ctx->pc = 0x137184u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935984), GPR_U32(ctx, 2));
    // 0x137188: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x137188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x13718c: 0x8f8285b0  lw          $v0, -0x7A50($gp)
    ctx->pc = 0x13718cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x137190: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x137190u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137194: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x137194u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137198: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x137198u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
    // 0x13719c: 0x8f8285b0  lw          $v0, -0x7A50($gp)
    ctx->pc = 0x13719cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x1371a0: 0xac490004  sw          $t1, 0x4($v0)
    ctx->pc = 0x1371a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 9));
    // 0x1371a4: 0x8f8285b0  lw          $v0, -0x7A50($gp)
    ctx->pc = 0x1371a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x1371a8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1371a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1371ac: 0x8f8285b0  lw          $v0, -0x7A50($gp)
    ctx->pc = 0x1371acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x1371b0: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1371b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1371b4: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x1371b4u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1371b8: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x1371b8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x1371bc: 0x3c073e80  lui         $a3, 0x3E80
    ctx->pc = 0x1371bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16000 << 16));
    // 0x1371c0: 0x3c063ec0  lui         $a2, 0x3EC0
    ctx->pc = 0x1371c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16064 << 16));
    // 0x1371c4: 0x3c053f00  lui         $a1, 0x3F00
    ctx->pc = 0x1371c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16128 << 16));
    // 0x1371c8: 0x3c043f20  lui         $a0, 0x3F20
    ctx->pc = 0x1371c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16160 << 16));
    // 0x1371cc: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x1371ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
    // 0x1371d0: 0x3c023f60  lui         $v0, 0x3F60
    ctx->pc = 0x1371d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16224 << 16));
label_1371d4:
    // 0x1371d4: 0x8f9085b0  lw          $s0, -0x7A50($gp)
    ctx->pc = 0x1371d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x1371d8: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x1371d8u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1371dc: 0x256c0001  addiu       $t4, $t3, 0x1
    ctx->pc = 0x1371dcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1371e0: 0x256d0002  addiu       $t5, $t3, 0x2
    ctx->pc = 0x1371e0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
    // 0x1371e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1371e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1371e8: 0xc6100  sll         $t4, $t4, 4
    ctx->pc = 0x1371e8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x1371ec: 0x256e0003  addiu       $t6, $t3, 0x3
    ctx->pc = 0x1371ecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 11), 3));
    // 0x1371f0: 0x256f0004  addiu       $t7, $t3, 0x4
    ctx->pc = 0x1371f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x1371f4: 0x25710005  addiu       $s1, $t3, 0x5
    ctx->pc = 0x1371f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 11), 5));
    // 0x1371f8: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1371f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1371fc: 0x11c100  sll         $t8, $s1, 4
    ctx->pc = 0x1371fcu;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x137200: 0xd6900  sll         $t5, $t5, 4
    ctx->pc = 0x137200u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
    // 0x137204: 0x20c8021  addu        $s0, $s0, $t4
    ctx->pc = 0x137204u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 12)));
    // 0x137208: 0x25710006  addiu       $s1, $t3, 0x6
    ctx->pc = 0x137208u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 11), 6));
    // 0x13720c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x13720cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x137210: 0x11c900  sll         $t9, $s1, 4
    ctx->pc = 0x137210u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x137214: 0x8f9385b0  lw          $s3, -0x7A50($gp)
    ctx->pc = 0x137214u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x137218: 0x25700007  addiu       $s0, $t3, 0x7
    ctx->pc = 0x137218u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 11), 7));
    // 0x13721c: 0x25710008  addiu       $s1, $t3, 0x8
    ctx->pc = 0x13721cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
    // 0x137220: 0xe7100  sll         $t6, $t6, 4
    ctx->pc = 0x137220u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
    // 0x137224: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x137224u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x137228: 0xf7900  sll         $t7, $t7, 4
    ctx->pc = 0x137228u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x13722c: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x13722cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x137230: 0x118900  sll         $s1, $s1, 4
    ctx->pc = 0x137230u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x137234: 0x29520008  slti        $s2, $t2, 0x8
    ctx->pc = 0x137234u;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x137238: 0x256b0008  addiu       $t3, $t3, 0x8
    ctx->pc = 0x137238u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
    // 0x13723c: 0x26c9821  addu        $s3, $s3, $t4
    ctx->pc = 0x13723cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 12)));
    // 0x137240: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x137240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x137244: 0x8f9385b0  lw          $s3, -0x7A50($gp)
    ctx->pc = 0x137244u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x137248: 0x26c9821  addu        $s3, $s3, $t4
    ctx->pc = 0x137248u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 12)));
    // 0x13724c: 0xae680008  sw          $t0, 0x8($s3)
    ctx->pc = 0x13724cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 8));
    // 0x137250: 0x8f9385b0  lw          $s3, -0x7A50($gp)
    ctx->pc = 0x137250u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x137254: 0x26c6021  addu        $t4, $s3, $t4
    ctx->pc = 0x137254u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 12)));
    // 0x137258: 0xad80000c  sw          $zero, 0xC($t4)
    ctx->pc = 0x137258u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 0));
    // 0x13725c: 0x8f8c85b0  lw          $t4, -0x7A50($gp)
    ctx->pc = 0x13725cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x137260: 0x18d6021  addu        $t4, $t4, $t5
    ctx->pc = 0x137260u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x137264: 0xad890000  sw          $t1, 0x0($t4)
    ctx->pc = 0x137264u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 9));
    // 0x137268: 0x8f8c85b0  lw          $t4, -0x7A50($gp)
    ctx->pc = 0x137268u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x13726c: 0x18d6021  addu        $t4, $t4, $t5
    ctx->pc = 0x13726cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x137270: 0xe5800004  swc1        $f0, 0x4($t4)
    ctx->pc = 0x137270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4), bits); }
    // 0x137274: 0x8f8c85b0  lw          $t4, -0x7A50($gp)
    ctx->pc = 0x137274u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x137278: 0x18d6021  addu        $t4, $t4, $t5
    ctx->pc = 0x137278u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x13727c: 0xad880008  sw          $t0, 0x8($t4)
    ctx->pc = 0x13727cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 8));
    // 0x137280: 0x8f8c85b0  lw          $t4, -0x7A50($gp)
    ctx->pc = 0x137280u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x137284: 0x18d6021  addu        $t4, $t4, $t5
    ctx->pc = 0x137284u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x137288: 0xad80000c  sw          $zero, 0xC($t4)
    ctx->pc = 0x137288u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 0));
    // 0x13728c: 0x8f8c85b0  lw          $t4, -0x7A50($gp)
    ctx->pc = 0x13728cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x137290: 0x18e6021  addu        $t4, $t4, $t6
    ctx->pc = 0x137290u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x137294: 0xad870000  sw          $a3, 0x0($t4)
    ctx->pc = 0x137294u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 7));
    // 0x137298: 0x8f8c85b0  lw          $t4, -0x7A50($gp)
    ctx->pc = 0x137298u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x13729c: 0x18e6021  addu        $t4, $t4, $t6
    ctx->pc = 0x13729cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x1372a0: 0xe5800004  swc1        $f0, 0x4($t4)
    ctx->pc = 0x1372a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4), bits); }
    // 0x1372a4: 0x8f8c85b0  lw          $t4, -0x7A50($gp)
    ctx->pc = 0x1372a4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x1372a8: 0x18e6021  addu        $t4, $t4, $t6
    ctx->pc = 0x1372a8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x1372ac: 0xad880008  sw          $t0, 0x8($t4)
    ctx->pc = 0x1372acu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 8));
    // 0x1372b0: 0x8f8c85b0  lw          $t4, -0x7A50($gp)
    ctx->pc = 0x1372b0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x1372b4: 0x18e6021  addu        $t4, $t4, $t6
    ctx->pc = 0x1372b4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x1372b8: 0xad80000c  sw          $zero, 0xC($t4)
    ctx->pc = 0x1372b8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 0));
    // 0x1372bc: 0x8f8c85b0  lw          $t4, -0x7A50($gp)
    ctx->pc = 0x1372bcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x1372c0: 0x18f6021  addu        $t4, $t4, $t7
    ctx->pc = 0x1372c0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
    // 0x1372c4: 0xad860000  sw          $a2, 0x0($t4)
    ctx->pc = 0x1372c4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 6));
    // 0x1372c8: 0x8f8c85b0  lw          $t4, -0x7A50($gp)
    ctx->pc = 0x1372c8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x1372cc: 0x18f6021  addu        $t4, $t4, $t7
    ctx->pc = 0x1372ccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
    // 0x1372d0: 0xe5800004  swc1        $f0, 0x4($t4)
    ctx->pc = 0x1372d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4), bits); }
    // 0x1372d4: 0x8f8c85b0  lw          $t4, -0x7A50($gp)
    ctx->pc = 0x1372d4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x1372d8: 0x18f6021  addu        $t4, $t4, $t7
    ctx->pc = 0x1372d8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
    // 0x1372dc: 0xad880008  sw          $t0, 0x8($t4)
    ctx->pc = 0x1372dcu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 8));
    // 0x1372e0: 0x8f8c85b0  lw          $t4, -0x7A50($gp)
    ctx->pc = 0x1372e0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x1372e4: 0x18f6021  addu        $t4, $t4, $t7
    ctx->pc = 0x1372e4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
    // 0x1372e8: 0xad80000c  sw          $zero, 0xC($t4)
    ctx->pc = 0x1372e8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 0));
    // 0x1372ec: 0x8f8c85b0  lw          $t4, -0x7A50($gp)
    ctx->pc = 0x1372ecu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x1372f0: 0x1986021  addu        $t4, $t4, $t8
    ctx->pc = 0x1372f0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 24)));
    // 0x1372f4: 0xad850000  sw          $a1, 0x0($t4)
    ctx->pc = 0x1372f4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
    // 0x1372f8: 0x8f8c85b0  lw          $t4, -0x7A50($gp)
    ctx->pc = 0x1372f8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x1372fc: 0x1986021  addu        $t4, $t4, $t8
    ctx->pc = 0x1372fcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 24)));
    // 0x137300: 0xe5800004  swc1        $f0, 0x4($t4)
    ctx->pc = 0x137300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4), bits); }
    // 0x137304: 0x8f8c85b0  lw          $t4, -0x7A50($gp)
    ctx->pc = 0x137304u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x137308: 0x1986021  addu        $t4, $t4, $t8
    ctx->pc = 0x137308u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 24)));
    // 0x13730c: 0xad880008  sw          $t0, 0x8($t4)
    ctx->pc = 0x13730cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 8));
    // 0x137310: 0x8f8c85b0  lw          $t4, -0x7A50($gp)
    ctx->pc = 0x137310u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x137314: 0x1986021  addu        $t4, $t4, $t8
    ctx->pc = 0x137314u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 24)));
    // 0x137318: 0xad80000c  sw          $zero, 0xC($t4)
    ctx->pc = 0x137318u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 0));
    // 0x13731c: 0x8f8c85b0  lw          $t4, -0x7A50($gp)
    ctx->pc = 0x13731cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x137320: 0x1996021  addu        $t4, $t4, $t9
    ctx->pc = 0x137320u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 25)));
    // 0x137324: 0xad840000  sw          $a0, 0x0($t4)
    ctx->pc = 0x137324u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 4));
    // 0x137328: 0x8f8c85b0  lw          $t4, -0x7A50($gp)
    ctx->pc = 0x137328u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x13732c: 0x1996021  addu        $t4, $t4, $t9
    ctx->pc = 0x13732cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 25)));
    // 0x137330: 0xe5800004  swc1        $f0, 0x4($t4)
    ctx->pc = 0x137330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4), bits); }
    // 0x137334: 0x8f8c85b0  lw          $t4, -0x7A50($gp)
    ctx->pc = 0x137334u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x137338: 0x1996021  addu        $t4, $t4, $t9
    ctx->pc = 0x137338u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 25)));
    // 0x13733c: 0xad880008  sw          $t0, 0x8($t4)
    ctx->pc = 0x13733cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 8));
    // 0x137340: 0x8f8c85b0  lw          $t4, -0x7A50($gp)
    ctx->pc = 0x137340u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x137344: 0x1996021  addu        $t4, $t4, $t9
    ctx->pc = 0x137344u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 25)));
    // 0x137348: 0xad80000c  sw          $zero, 0xC($t4)
    ctx->pc = 0x137348u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 0));
    // 0x13734c: 0x8f8c85b0  lw          $t4, -0x7A50($gp)
    ctx->pc = 0x13734cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x137350: 0x1906021  addu        $t4, $t4, $s0
    ctx->pc = 0x137350u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 16)));
    // 0x137354: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x137354u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x137358: 0x8f8c85b0  lw          $t4, -0x7A50($gp)
    ctx->pc = 0x137358u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x13735c: 0x1906021  addu        $t4, $t4, $s0
    ctx->pc = 0x13735cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 16)));
    // 0x137360: 0xe5800004  swc1        $f0, 0x4($t4)
    ctx->pc = 0x137360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4), bits); }
    // 0x137364: 0x8f8c85b0  lw          $t4, -0x7A50($gp)
    ctx->pc = 0x137364u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x137368: 0x1906021  addu        $t4, $t4, $s0
    ctx->pc = 0x137368u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 16)));
    // 0x13736c: 0xad880008  sw          $t0, 0x8($t4)
    ctx->pc = 0x13736cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 8));
    // 0x137370: 0x8f8c85b0  lw          $t4, -0x7A50($gp)
    ctx->pc = 0x137370u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x137374: 0x1906021  addu        $t4, $t4, $s0
    ctx->pc = 0x137374u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 16)));
    // 0x137378: 0xad80000c  sw          $zero, 0xC($t4)
    ctx->pc = 0x137378u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 0));
    // 0x13737c: 0x8f8c85b0  lw          $t4, -0x7A50($gp)
    ctx->pc = 0x13737cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x137380: 0x1916021  addu        $t4, $t4, $s1
    ctx->pc = 0x137380u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 17)));
    // 0x137384: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x137384u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x137388: 0x8f8c85b0  lw          $t4, -0x7A50($gp)
    ctx->pc = 0x137388u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x13738c: 0x1916021  addu        $t4, $t4, $s1
    ctx->pc = 0x13738cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 17)));
    // 0x137390: 0xe5800004  swc1        $f0, 0x4($t4)
    ctx->pc = 0x137390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4), bits); }
    // 0x137394: 0x8f8c85b0  lw          $t4, -0x7A50($gp)
    ctx->pc = 0x137394u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x137398: 0x1916021  addu        $t4, $t4, $s1
    ctx->pc = 0x137398u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 17)));
    // 0x13739c: 0xad880008  sw          $t0, 0x8($t4)
    ctx->pc = 0x13739cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 8));
    // 0x1373a0: 0x8f8c85b0  lw          $t4, -0x7A50($gp)
    ctx->pc = 0x1373a0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x1373a4: 0x1916021  addu        $t4, $t4, $s1
    ctx->pc = 0x1373a4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 17)));
    // 0x1373a8: 0x1640ff8a  bnez        $s2, . + 4 + (-0x76 << 2)
    ctx->pc = 0x1373A8u;
    {
        const bool branch_taken_0x1373a8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1373ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1373A8u;
        // 0x1373ac: 0xad80000c  sw          $zero, 0xC($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1373a8) {
            ctx->pc = 0x1371D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1371d4;
        }
    }
    ctx->pc = 0x1373B0u;
    // 0x1373b0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1373b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x1373b4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1373b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1373b8: 0x24426da0  addiu       $v0, $v0, 0x6DA0
    ctx->pc = 0x1373b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28064));
    // 0x1373bc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1373bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1373c0: 0xaf8285c0  sw          $v0, -0x7A40($gp)
    ctx->pc = 0x1373c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936000), GPR_U32(ctx, 2));
label_1373c4:
    // 0x1373c4: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x1373C4u;
    SET_GPR_U32(ctx, 31, 0x1373CCu);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x1373C4u, 0x1373CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1373CCu;
label_1373cc:
    // 0x1373cc: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1373CCu;
    {
        const bool branch_taken_0x1373cc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1373D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1373CCu;
        // 0x1373d0: 0x3045003f  andi        $a1, $v0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1373cc) {
            ctx->pc = 0x1373E0u;
            goto label_1373e0;
        }
    }
    ctx->pc = 0x1373D4u;
    // 0x1373d4: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1373D4u;
    {
        const bool branch_taken_0x1373d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1373d4) {
            ctx->pc = 0x1373E0u;
            goto label_1373e0;
        }
    }
    ctx->pc = 0x1373DCu;
    // 0x1373dc: 0x24a5ffc0  addiu       $a1, $a1, -0x40
    ctx->pc = 0x1373dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967232));
label_1373e0:
    // 0x1373e0: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x1373e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x1373e4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1373e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1373e8: 0x24636da0  addiu       $v1, $v1, 0x6DA0
    ctx->pc = 0x1373e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28064));
    // 0x1373ec: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x1373ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1373f0: 0x2a030022  slti        $v1, $s0, 0x22
    ctx->pc = 0x1373f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)34) ? 1 : 0);
    // 0x1373f4: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1373f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1373f8: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1373F8u;
    {
        const bool branch_taken_0x1373f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1373FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1373F8u;
        // 0x1373fc: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1373f8) {
            ctx->pc = 0x1373C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1373c4;
        }
    }
    ctx->pc = 0x137400u;
    // 0x137400: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x137400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x137404: 0xaf8385c4  sw          $v1, -0x7A3C($gp)
    ctx->pc = 0x137404u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936004), GPR_U32(ctx, 3));
label_137408:
    // 0x137408: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x137408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13740c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13740cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x137410: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x137410u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137414: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x137414u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137418: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x137418u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13741c: 0x3e00008  jr          $ra
    ctx->pc = 0x13741Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13741Cu;
        // 0x137420: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13741Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137424u;
}
