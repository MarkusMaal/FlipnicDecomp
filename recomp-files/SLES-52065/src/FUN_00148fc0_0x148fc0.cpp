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

// Function: FUN_00148fc0
// Address: 0x148fc0 - 0x149768
void FUN_00148fc0_0x148fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00148fc0_0x148fc0");
#endif

    switch (ctx->pc) {
        case 0x1490f0u: goto label_1490f0;
        case 0x149114u: goto label_149114;
        case 0x14919cu: goto label_14919c;
        case 0x1491a4u: goto label_1491a4;
        case 0x1491b0u: goto label_1491b0;
        case 0x1491d8u: goto label_1491d8;
        case 0x1491fcu: goto label_1491fc;
        case 0x149220u: goto label_149220;
        case 0x149230u: goto label_149230;
        case 0x149258u: goto label_149258;
        case 0x149274u: goto label_149274;
        case 0x14928cu: goto label_14928c;
        case 0x149294u: goto label_149294;
        case 0x1492e8u: goto label_1492e8;
        case 0x1492fcu: goto label_1492fc;
        case 0x149378u: goto label_149378;
        case 0x1493d0u: goto label_1493d0;
        case 0x149434u: goto label_149434;
        case 0x149470u: goto label_149470;
        case 0x149494u: goto label_149494;
        case 0x1494c0u: goto label_1494c0;
        case 0x1494d0u: goto label_1494d0;
        case 0x1494f8u: goto label_1494f8;
        case 0x149500u: goto label_149500;
        case 0x149518u: goto label_149518;
        case 0x149520u: goto label_149520;
        case 0x149560u: goto label_149560;
        case 0x1495a4u: goto label_1495a4;
        case 0x149604u: goto label_149604;
        case 0x14964cu: goto label_14964c;
        case 0x14967cu: goto label_14967c;
        case 0x149688u: goto label_149688;
        case 0x1496f0u: goto label_1496f0;
        case 0x149728u: goto label_149728;
        default: break;
    }

    ctx->pc = 0x148fc0u;

    // 0x148fc0: 0x27bdfce0  addiu       $sp, $sp, -0x320
    ctx->pc = 0x148fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966496));
    // 0x148fc4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x148fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x148fc8: 0x27a900b0  addiu       $t1, $sp, 0xB0
    ctx->pc = 0x148fc8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x148fcc: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x148fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x148fd0: 0x27a800d0  addiu       $t0, $sp, 0xD0
    ctx->pc = 0x148fd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x148fd4: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x148fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x148fd8: 0x27a300bc  addiu       $v1, $sp, 0xBC
    ctx->pc = 0x148fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x148fdc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x148fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x148fe0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x148fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x148fe4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x148fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x148fe8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x148fe8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148fec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x148fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x148ff0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x148ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x148ff4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x148ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x148ff8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x148ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x148ffc: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x148ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x149000: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x149000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x149004: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x149004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x149008: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x149008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14900c: 0xe5230000  swc1        $f3, 0x0($t1)
    ctx->pc = 0x14900cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x149010: 0xe5220004  swc1        $f2, 0x4($t1)
    ctx->pc = 0x149010u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x149014: 0xe5210008  swc1        $f1, 0x8($t1)
    ctx->pc = 0x149014u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
    // 0x149018: 0xe520000c  swc1        $f0, 0xC($t1)
    ctx->pc = 0x149018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 12), bits); }
    // 0x14901c: 0xc4c10010  lwc1        $f1, 0x10($a2)
    ctx->pc = 0x14901cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x149020: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x149020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149024: 0xe5210010  swc1        $f1, 0x10($t1)
    ctx->pc = 0x149024u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 16), bits); }
    // 0x149028: 0xe5200014  swc1        $f0, 0x14($t1)
    ctx->pc = 0x149028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 20), bits); }
    // 0x14902c: 0xc4e30000  lwc1        $f3, 0x0($a3)
    ctx->pc = 0x14902cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x149030: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x149030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x149034: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x149034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x149038: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x149038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14903c: 0xe5030000  swc1        $f3, 0x0($t0)
    ctx->pc = 0x14903cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x149040: 0xe5020004  swc1        $f2, 0x4($t0)
    ctx->pc = 0x149040u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x149044: 0xe5010008  swc1        $f1, 0x8($t0)
    ctx->pc = 0x149044u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x149048: 0xe500000c  swc1        $f0, 0xC($t0)
    ctx->pc = 0x149048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x14904c: 0xc4e10010  lwc1        $f1, 0x10($a3)
    ctx->pc = 0x14904cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x149050: 0xc4e00014  lwc1        $f0, 0x14($a3)
    ctx->pc = 0x149050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149054: 0xe5010010  swc1        $f1, 0x10($t0)
    ctx->pc = 0x149054u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
    // 0x149058: 0xe5000014  swc1        $f0, 0x14($t0)
    ctx->pc = 0x149058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 20), bits); }
    // 0x14905c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x14905cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x149060: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x149060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x149064: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x149064u;
    {
        const bool branch_taken_0x149064 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x149068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149064u;
        // 0x149068: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149064) {
            ctx->pc = 0x1490A4u;
            goto label_1490a4;
        }
    }
    ctx->pc = 0x14906Cu;
    // 0x14906c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x14906cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x149070: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x149070u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x149074: 0x8fa300b4  lw          $v1, 0xB4($sp)
    ctx->pc = 0x149074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x149078: 0xaea30004  sw          $v1, 0x4($s5)
    ctx->pc = 0x149078u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
    // 0x14907c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x14907cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x149080: 0xaea30008  sw          $v1, 0x8($s5)
    ctx->pc = 0x149080u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 3));
    // 0x149084: 0x27a300bc  addiu       $v1, $sp, 0xBC
    ctx->pc = 0x149084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x149088: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x149088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14908c: 0xaea3000c  sw          $v1, 0xC($s5)
    ctx->pc = 0x14908cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 3));
    // 0x149090: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x149090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x149094: 0xaea30010  sw          $v1, 0x10($s5)
    ctx->pc = 0x149094u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 3));
    // 0x149098: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x149098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x14909c: 0x100001a6  b           . + 4 + (0x1A6 << 2)
    ctx->pc = 0x14909Cu;
    {
        const bool branch_taken_0x14909c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1490A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14909Cu;
        // 0x1490a0: 0xaea30014  sw          $v1, 0x14($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14909c) {
            ctx->pc = 0x149738u;
            goto label_149738;
        }
    }
    ctx->pc = 0x1490A4u;
label_1490a4:
    // 0x1490a4: 0x27a200c4  addiu       $v0, $sp, 0xC4
    ctx->pc = 0x1490a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x1490a8: 0x8e860014  lw          $a2, 0x14($s4)
    ctx->pc = 0x1490a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1490ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1490acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1490b0: 0x8e870018  lw          $a3, 0x18($s4)
    ctx->pc = 0x1490b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x1490b4: 0x8fa400e4  lw          $a0, 0xE4($sp)
    ctx->pc = 0x1490b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x1490b8: 0x661023  subu        $v0, $v1, $a2
    ctx->pc = 0x1490b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1490bc: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x1490bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x1490c0: 0x861023  subu        $v0, $a0, $a2
    ctx->pc = 0x1490c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1490c4: 0xe2f023  subu        $fp, $a3, $v0
    ctx->pc = 0x1490c4u;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1490c8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1490c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1490cc: 0x5e082b  sltu        $at, $v0, $fp
    ctx->pc = 0x1490ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x1490d0: 0x1020007f  beqz        $at, . + 4 + (0x7F << 2)
    ctx->pc = 0x1490D0u;
    {
        const bool branch_taken_0x1490d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1490D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1490D0u;
        // 0x1490d4: 0x838023  subu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1490d0) {
            ctx->pc = 0x1492D0u;
            goto label_1492d0;
        }
    }
    ctx->pc = 0x1490D8u;
    // 0x1490d8: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1490D8u;
    {
        const bool branch_taken_0x1490d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1490DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1490D8u;
        // 0x1490dc: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1490d8) {
            ctx->pc = 0x14910Cu;
            goto label_14910c;
        }
    }
    ctx->pc = 0x1490E0u;
    // 0x1490e0: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x1490e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1490e4: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x1490e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1490e8: 0xc052dbc  jal         func_14B6F0
    ctx->pc = 0x1490E8u;
    SET_GPR_U32(ctx, 31, 0x1490F0u);
    ctx->pc = 0x1490ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1490E8u;
    // 0x1490ec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F0u, 0x1490E8u, 0x1490F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1490F0u;
label_1490f0:
    // 0x1490f0: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x1490f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1490f4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1490f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1490f8: 0xae820014  sw          $v0, 0x14($s4)
    ctx->pc = 0x1490f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
    // 0x1490fc: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x1490fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x149100: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x149100u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x149104: 0x10000138  b           . + 4 + (0x138 << 2)
    ctx->pc = 0x149104u;
    {
        const bool branch_taken_0x149104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149104u;
        // 0x149108: 0xae820018  sw          $v0, 0x18($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149104) {
            ctx->pc = 0x1495E8u;
            goto label_1495e8;
        }
    }
    ctx->pc = 0x14910Cu;
label_14910c:
    // 0x14910c: 0xc052340  jal         func_148D00
    ctx->pc = 0x14910Cu;
    SET_GPR_U32(ctx, 31, 0x149114u);
    ctx->pc = 0x148D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148D00u, 0x14910Cu, 0x149114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149114u;
label_149114:
    // 0x149114: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x149114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x149118: 0x27b600fc  addiu       $s6, $sp, 0xFC
    ctx->pc = 0x149118u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x14911c: 0x8faa0134  lw          $t2, 0x134($sp)
    ctx->pc = 0x14911cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x149120: 0x27b20100  addiu       $s2, $sp, 0x100
    ctx->pc = 0x149120u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x149124: 0x8fa90138  lw          $t1, 0x138($sp)
    ctx->pc = 0x149124u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x149128: 0x27b30104  addiu       $s3, $sp, 0x104
    ctx->pc = 0x149128u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x14912c: 0x8fa7013c  lw          $a3, 0x13C($sp)
    ctx->pc = 0x14912cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x149130: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x149130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x149134: 0x27a80230  addiu       $t0, $sp, 0x230
    ctx->pc = 0x149134u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x149138: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x149138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x14913c: 0x27a60210  addiu       $a2, $sp, 0x210
    ctx->pc = 0x14913cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x149140: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x149140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x149144: 0xafa400f0  sw          $a0, 0xF0($sp)
    ctx->pc = 0x149144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 4));
    // 0x149148: 0xafaa00f4  sw          $t2, 0xF4($sp)
    ctx->pc = 0x149148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 10));
    // 0x14914c: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x14914cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x149150: 0xafa900f8  sw          $t1, 0xF8($sp)
    ctx->pc = 0x149150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 9));
    // 0x149154: 0xaec70000  sw          $a3, 0x0($s6)
    ctx->pc = 0x149154u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 7));
    // 0x149158: 0x8fa70140  lw          $a3, 0x140($sp)
    ctx->pc = 0x149158u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x14915c: 0xae470000  sw          $a3, 0x0($s2)
    ctx->pc = 0x14915cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 7));
    // 0x149160: 0x8fa70144  lw          $a3, 0x144($sp)
    ctx->pc = 0x149160u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x149164: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x149164u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x149168: 0x78a70000  lq          $a3, 0x0($a1)
    ctx->pc = 0x149168u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14916c: 0xdca50010  ld          $a1, 0x10($a1)
    ctx->pc = 0x14916cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x149170: 0x7d070000  sq          $a3, 0x0($t0)
    ctx->pc = 0x149170u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 7));
    // 0x149174: 0xfd050010  sd          $a1, 0x10($t0)
    ctx->pc = 0x149174u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 5));
    // 0x149178: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x149178u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14917c: 0xdc630010  ld          $v1, 0x10($v1)
    ctx->pc = 0x14917cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x149180: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x149180u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x149184: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x149184u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x149188: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x149188u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14918c: 0xdc420010  ld          $v0, 0x10($v0)
    ctx->pc = 0x14918cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x149190: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x149190u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x149194: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x149194u;
    {
        const bool branch_taken_0x149194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149194u;
        // 0x149198: 0xfc820010  sd          $v0, 0x10($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149194) {
            ctx->pc = 0x1491BCu;
            goto label_1491bc;
        }
    }
    ctx->pc = 0x14919Cu;
label_14919c:
    // 0x14919c: 0xc0525e8  jal         func_1497A0
    ctx->pc = 0x14919Cu;
    SET_GPR_U32(ctx, 31, 0x1491A4u);
    ctx->pc = 0x1491A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14919Cu;
    // 0x1491a0: 0x27a40210  addiu       $a0, $sp, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1497A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1497A0u, 0x14919Cu, 0x1491A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1491A4u;
label_1491a4:
    // 0x1491a4: 0x8c51000c  lw          $s1, 0xC($v0)
    ctx->pc = 0x1491a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1491a8: 0xc0525e8  jal         func_1497A0
    ctx->pc = 0x1491A8u;
    SET_GPR_U32(ctx, 31, 0x1491B0u);
    ctx->pc = 0x1491ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1491A8u;
    // 0x1491ac: 0x27a401f0  addiu       $a0, $sp, 0x1F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1497A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1497A0u, 0x1491A8u, 0x1491B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1491B0u;
label_1491b0:
    // 0x1491b0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1491b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1491b4: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1491b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1491b8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1491b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1491bc:
    // 0x1491bc: 0x0  nop
    ctx->pc = 0x1491bcu;
    // NOP
    // 0x1491c0: 0x8fa3021c  lw          $v1, 0x21C($sp)
    ctx->pc = 0x1491c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
    // 0x1491c4: 0x8fa2023c  lw          $v0, 0x23C($sp)
    ctx->pc = 0x1491c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
    // 0x1491c8: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1491C8u;
    {
        const bool branch_taken_0x1491c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1491CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1491C8u;
        // 0x1491cc: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1491c8) {
            ctx->pc = 0x14919Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14919c;
        }
    }
    ctx->pc = 0x1491D0u;
    // 0x1491d0: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x1491D0u;
    SET_GPR_U32(ctx, 31, 0x1491D8u);
    ctx->pc = 0x1491D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1491D0u;
    // 0x1491d4: 0x27a501f0  addiu       $a1, $sp, 0x1F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x1491D0u, 0x1491D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1491D8u;
label_1491d8:
    // 0x1491d8: 0x8fa601fc  lw          $a2, 0x1FC($sp)
    ctx->pc = 0x1491d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x1491dc: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x1491dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x1491e0: 0x8fa30200  lw          $v1, 0x200($sp)
    ctx->pc = 0x1491e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1491e4: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x1491e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1491e8: 0x8fa20204  lw          $v0, 0x204($sp)
    ctx->pc = 0x1491e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x1491ec: 0xafa6015c  sw          $a2, 0x15C($sp)
    ctx->pc = 0x1491ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 6));
    // 0x1491f0: 0xafa30160  sw          $v1, 0x160($sp)
    ctx->pc = 0x1491f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 3));
    // 0x1491f4: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x1491F4u;
    SET_GPR_U32(ctx, 31, 0x1491FCu);
    ctx->pc = 0x1491F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1491F4u;
    // 0x1491f8: 0xafa20164  sw          $v0, 0x164($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x1491F4u, 0x1491FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1491FCu;
label_1491fc:
    // 0x1491fc: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x1491fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x149200: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x149200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x149204: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x149204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149208: 0xafa2025c  sw          $v0, 0x25C($sp)
    ctx->pc = 0x149208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 2));
    // 0x14920c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x14920cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x149210: 0xafa20260  sw          $v0, 0x260($sp)
    ctx->pc = 0x149210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 2));
    // 0x149214: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x149214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x149218: 0xc051898  jal         func_146260
    ctx->pc = 0x149218u;
    SET_GPR_U32(ctx, 31, 0x149220u);
    ctx->pc = 0x14921Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149218u;
    // 0x14921c: 0xafa20264  sw          $v0, 0x264($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146260u, 0x149218u, 0x149220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149220u;
label_149220:
    // 0x149220: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x149220u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149224: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x149224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x149228: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x149228u;
    SET_GPR_U32(ctx, 31, 0x149230u);
    ctx->pc = 0x14922Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149228u;
    // 0x14922c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x149228u, 0x149230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149230u;
label_149230:
    // 0x149230: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x149230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x149234: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x149234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149238: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x149238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x14923c: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x14923cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x149240: 0xafa2017c  sw          $v0, 0x17C($sp)
    ctx->pc = 0x149240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 2));
    // 0x149244: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x149244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x149248: 0xafa20180  sw          $v0, 0x180($sp)
    ctx->pc = 0x149248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
    // 0x14924c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x14924cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x149250: 0xc052dbc  jal         func_14B6F0
    ctx->pc = 0x149250u;
    SET_GPR_U32(ctx, 31, 0x149258u);
    ctx->pc = 0x149254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149250u;
    // 0x149254: 0xafa20184  sw          $v0, 0x184($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F0u, 0x149250u, 0x149258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149258u;
label_149258:
    // 0x149258: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x149258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x14925c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x14925cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x149260: 0xae820014  sw          $v0, 0x14($s4)
    ctx->pc = 0x149260u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
    // 0x149264: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x149264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x149268: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x149268u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x14926c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x14926Cu;
    {
        const bool branch_taken_0x14926c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14926Cu;
        // 0x149270: 0xae820018  sw          $v0, 0x18($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14926c) {
            ctx->pc = 0x1492A4u;
            goto label_1492a4;
        }
    }
    ctx->pc = 0x149274u;
label_149274:
    // 0x149274: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x149274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x149278: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x149278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x14927c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14927cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x149280: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x149280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x149284: 0xc0401a4  jal         func_100690
    ctx->pc = 0x149284u;
    SET_GPR_U32(ctx, 31, 0x14928Cu);
    ctx->pc = 0x149288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149284u;
    // 0x149288: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x149284u, 0x14928Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14928Cu;
label_14928c:
    // 0x14928c: 0xc04fe2c  jal         func_13F8B0
    ctx->pc = 0x14928Cu;
    SET_GPR_U32(ctx, 31, 0x149294u);
    ctx->pc = 0x149290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14928Cu;
    // 0x149290: 0x26840004  addiu       $a0, $s4, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F8B0u, 0x14928Cu, 0x149294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149294u;
label_149294:
    // 0x149294: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x149294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x149298: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x149298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x14929c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x14929cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1492a0: 0xae820014  sw          $v0, 0x14($s4)
    ctx->pc = 0x1492a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
label_1492a4:
    // 0x1492a4: 0x0  nop
    ctx->pc = 0x1492a4u;
    // NOP
    // 0x1492a8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1492a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1492ac: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x1492acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1492b0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1492b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1492b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1492b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1492b8: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x1492b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1492bc: 0x82082b  sltu        $at, $a0, $v0
    ctx->pc = 0x1492bcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1492c0: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1492C0u;
    {
        const bool branch_taken_0x1492c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1492c0) {
            ctx->pc = 0x149274u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_149274;
        }
    }
    ctx->pc = 0x1492C8u;
    // 0x1492c8: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x1492C8u;
    {
        const bool branch_taken_0x1492c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1492c8) {
            ctx->pc = 0x1495E8u;
            goto label_1495e8;
        }
    }
    ctx->pc = 0x1492D0u;
label_1492d0:
    // 0x1492d0: 0x17c00007  bnez        $fp, . + 4 + (0x7 << 2)
    ctx->pc = 0x1492D0u;
    {
        const bool branch_taken_0x1492d0 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x1492d0) {
            ctx->pc = 0x1492F0u;
            goto label_1492f0;
        }
    }
    ctx->pc = 0x1492D8u;
    // 0x1492d8: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x1492d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1492dc: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x1492dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1492e0: 0xc052dbc  jal         func_14B6F0
    ctx->pc = 0x1492E0u;
    SET_GPR_U32(ctx, 31, 0x1492E8u);
    ctx->pc = 0x1492E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1492E0u;
    // 0x1492e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F0u, 0x1492E0u, 0x1492E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1492E8u;
label_1492e8:
    // 0x1492e8: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x1492E8u;
    {
        const bool branch_taken_0x1492e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1492e8) {
            ctx->pc = 0x149550u;
            goto label_149550;
        }
    }
    ctx->pc = 0x1492F0u;
label_1492f0:
    // 0x1492f0: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1492f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1492f4: 0xc052340  jal         func_148D00
    ctx->pc = 0x1492F4u;
    SET_GPR_U32(ctx, 31, 0x1492FCu);
    ctx->pc = 0x1492F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1492F4u;
    // 0x1492f8: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148D00u, 0x1492F4u, 0x1492FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1492FCu;
label_1492fc:
    // 0x1492fc: 0x8fad0190  lw          $t5, 0x190($sp)
    ctx->pc = 0x1492fcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x149300: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x149300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x149304: 0x8fac0194  lw          $t4, 0x194($sp)
    ctx->pc = 0x149304u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x149308: 0x27a802b0  addiu       $t0, $sp, 0x2B0
    ctx->pc = 0x149308u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x14930c: 0x8fab0198  lw          $t3, 0x198($sp)
    ctx->pc = 0x14930cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x149310: 0x27a30110  addiu       $v1, $sp, 0x110
    ctx->pc = 0x149310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x149314: 0x8faa019c  lw          $t2, 0x19C($sp)
    ctx->pc = 0x149314u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x149318: 0x27a60290  addiu       $a2, $sp, 0x290
    ctx->pc = 0x149318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x14931c: 0x8fa901a0  lw          $t1, 0x1A0($sp)
    ctx->pc = 0x14931cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x149320: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x149320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x149324: 0x8fa701a4  lw          $a3, 0x1A4($sp)
    ctx->pc = 0x149324u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
    // 0x149328: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x149328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x14932c: 0xafad0110  sw          $t5, 0x110($sp)
    ctx->pc = 0x14932cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 13));
    // 0x149330: 0xafac0114  sw          $t4, 0x114($sp)
    ctx->pc = 0x149330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 12));
    // 0x149334: 0xafab0118  sw          $t3, 0x118($sp)
    ctx->pc = 0x149334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 11));
    // 0x149338: 0xafaa011c  sw          $t2, 0x11C($sp)
    ctx->pc = 0x149338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 10));
    // 0x14933c: 0xafa90120  sw          $t1, 0x120($sp)
    ctx->pc = 0x14933cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 9));
    // 0x149340: 0xafa70124  sw          $a3, 0x124($sp)
    ctx->pc = 0x149340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 7));
    // 0x149344: 0x78a70000  lq          $a3, 0x0($a1)
    ctx->pc = 0x149344u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x149348: 0xdca50010  ld          $a1, 0x10($a1)
    ctx->pc = 0x149348u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x14934c: 0x7d070000  sq          $a3, 0x0($t0)
    ctx->pc = 0x14934cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 7));
    // 0x149350: 0xfd050010  sd          $a1, 0x10($t0)
    ctx->pc = 0x149350u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 5));
    // 0x149354: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x149354u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x149358: 0xdc630010  ld          $v1, 0x10($v1)
    ctx->pc = 0x149358u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x14935c: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x14935cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x149360: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x149360u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x149364: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x149364u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149368: 0xdc420010  ld          $v0, 0x10($v0)
    ctx->pc = 0x149368u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x14936c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x14936cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x149370: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x149370u;
    {
        const bool branch_taken_0x149370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149370u;
        // 0x149374: 0xfc820010  sd          $v0, 0x10($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149370) {
            ctx->pc = 0x14944Cu;
            goto label_14944c;
        }
    }
    ctx->pc = 0x149378u;
label_149378:
    // 0x149378: 0x27b702c0  addiu       $s7, $sp, 0x2C0
    ctx->pc = 0x149378u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
    // 0x14937c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x14937cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149380: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x149380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x149384: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x149384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x149388: 0x8fa202c4  lw          $v0, 0x2C4($sp)
    ctx->pc = 0x149388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
    // 0x14938c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14938cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x149390: 0xafa202c4  sw          $v0, 0x2C4($sp)
    ctx->pc = 0x149390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 708), GPR_U32(ctx, 2));
    // 0x149394: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x149394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x149398: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x149398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x14939c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x14939cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1493a0: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x1493a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1493a4: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1493A4u;
    {
        const bool branch_taken_0x1493a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1493A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1493A4u;
        // 0x1493a8: 0x27b602b8  addiu       $s6, $sp, 0x2B8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 696));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1493a4) {
            ctx->pc = 0x1493E8u;
            goto label_1493e8;
        }
    }
    ctx->pc = 0x1493ACu;
    // 0x1493ac: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x1493acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1493b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1493b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1493b4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1493b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1493b8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1493B8u;
    {
        const bool branch_taken_0x1493b8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1493BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1493B8u;
        // 0x1493bc: 0x28883  sra         $s1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1493b8) {
            ctx->pc = 0x1493C8u;
            goto label_1493c8;
        }
    }
    ctx->pc = 0x1493C0u;
    // 0x1493c0: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1493c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x1493c4: 0x28883  sra         $s1, $v0, 2
    ctx->pc = 0x1493c4u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 2));
label_1493c8:
    // 0x1493c8: 0xc050224  jal         func_140890
    ctx->pc = 0x1493C8u;
    SET_GPR_U32(ctx, 31, 0x1493D0u);
    ctx->pc = 0x1493CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1493C8u;
    // 0x1493cc: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140890u, 0x1493C8u, 0x1493D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1493D0u;
label_1493d0:
    // 0x1493d0: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x1493d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1493d4: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1493d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1493d8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1493d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1493dc: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1493dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x1493e0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1493e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1493e4: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x1493e4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
label_1493e8:
    // 0x1493e8: 0x8fa20284  lw          $v0, 0x284($sp)
    ctx->pc = 0x1493e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 644)));
    // 0x1493ec: 0x27b60280  addiu       $s6, $sp, 0x280
    ctx->pc = 0x1493ecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x1493f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1493f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1493f4: 0xafa20284  sw          $v0, 0x284($sp)
    ctx->pc = 0x1493f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 644), GPR_U32(ctx, 2));
    // 0x1493f8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1493f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1493fc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1493fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x149400: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x149400u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x149404: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x149404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x149408: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x149408u;
    {
        const bool branch_taken_0x149408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x14940Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149408u;
        // 0x14940c: 0x27b30278  addiu       $s3, $sp, 0x278 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149408) {
            ctx->pc = 0x14944Cu;
            goto label_14944c;
        }
    }
    ctx->pc = 0x149410u;
    // 0x149410: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x149410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x149414: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x149414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149418: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x149418u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14941c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14941Cu;
    {
        const bool branch_taken_0x14941c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x149420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14941Cu;
        // 0x149420: 0x28883  sra         $s1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14941c) {
            ctx->pc = 0x14942Cu;
            goto label_14942c;
        }
    }
    ctx->pc = 0x149424u;
    // 0x149424: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x149424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x149428: 0x28883  sra         $s1, $v0, 2
    ctx->pc = 0x149428u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 2));
label_14942c:
    // 0x14942c: 0xc050224  jal         func_140890
    ctx->pc = 0x14942Cu;
    SET_GPR_U32(ctx, 31, 0x149434u);
    ctx->pc = 0x149430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14942Cu;
    // 0x149430: 0x27a40270  addiu       $a0, $sp, 0x270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140890u, 0x14942Cu, 0x149434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149434u;
label_149434:
    // 0x149434: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x149434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x149438: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x149438u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x14943c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14943cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x149440: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x149440u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x149444: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x149444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x149448: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x149448u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_14944c:
    // 0x14944c: 0x0  nop
    ctx->pc = 0x14944cu;
    // NOP
    // 0x149450: 0x27b302bc  addiu       $s3, $sp, 0x2BC
    ctx->pc = 0x149450u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 700));
    // 0x149454: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x149454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x149458: 0x8fa2029c  lw          $v0, 0x29C($sp)
    ctx->pc = 0x149458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 668)));
    // 0x14945c: 0x1462ffc6  bne         $v1, $v0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x14945Cu;
    {
        const bool branch_taken_0x14945c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x149460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14945Cu;
        // 0x149460: 0x27b2027c  addiu       $s2, $sp, 0x27C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 636));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14945c) {
            ctx->pc = 0x149378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_149378;
        }
    }
    ctx->pc = 0x149464u;
    // 0x149464: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x149464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x149468: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x149468u;
    SET_GPR_U32(ctx, 31, 0x149470u);
    ctx->pc = 0x14946Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149468u;
    // 0x14946c: 0x27a50270  addiu       $a1, $sp, 0x270 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x149468u, 0x149470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149470u;
label_149470:
    // 0x149470: 0x8fa6027c  lw          $a2, 0x27C($sp)
    ctx->pc = 0x149470u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 636)));
    // 0x149474: 0x27a402d0  addiu       $a0, $sp, 0x2D0
    ctx->pc = 0x149474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
    // 0x149478: 0x8fa30280  lw          $v1, 0x280($sp)
    ctx->pc = 0x149478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x14947c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x14947cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x149480: 0x8fa20284  lw          $v0, 0x284($sp)
    ctx->pc = 0x149480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 644)));
    // 0x149484: 0xafa601bc  sw          $a2, 0x1BC($sp)
    ctx->pc = 0x149484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 6));
    // 0x149488: 0xafa301c0  sw          $v1, 0x1C0($sp)
    ctx->pc = 0x149488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 3));
    // 0x14948c: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x14948Cu;
    SET_GPR_U32(ctx, 31, 0x149494u);
    ctx->pc = 0x149490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14948Cu;
    // 0x149490: 0xafa201c4  sw          $v0, 0x1C4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x14948Cu, 0x149494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149494u;
label_149494:
    // 0x149494: 0x27a200bc  addiu       $v0, $sp, 0xBC
    ctx->pc = 0x149494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x149498: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x149498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14949c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14949cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1494a0: 0x27a402d0  addiu       $a0, $sp, 0x2D0
    ctx->pc = 0x1494a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
    // 0x1494a4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1494a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1494a8: 0xafa302dc  sw          $v1, 0x2DC($sp)
    ctx->pc = 0x1494a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 732), GPR_U32(ctx, 3));
    // 0x1494ac: 0xafa202e0  sw          $v0, 0x2E0($sp)
    ctx->pc = 0x1494acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 736), GPR_U32(ctx, 2));
    // 0x1494b0: 0x27a200c4  addiu       $v0, $sp, 0xC4
    ctx->pc = 0x1494b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x1494b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1494b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1494b8: 0xc051898  jal         func_146260
    ctx->pc = 0x1494B8u;
    SET_GPR_U32(ctx, 31, 0x1494C0u);
    ctx->pc = 0x1494BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1494B8u;
    // 0x1494bc: 0xafa202e4  sw          $v0, 0x2E4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146260u, 0x1494B8u, 0x1494C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1494C0u;
label_1494c0:
    // 0x1494c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1494c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1494c4: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x1494c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1494c8: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x1494C8u;
    SET_GPR_U32(ctx, 31, 0x1494D0u);
    ctx->pc = 0x1494CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1494C8u;
    // 0x1494cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x1494C8u, 0x1494D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1494D0u;
label_1494d0:
    // 0x1494d0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1494d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1494d4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1494d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1494d8: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x1494d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1494dc: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x1494dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1494e0: 0xafa201dc  sw          $v0, 0x1DC($sp)
    ctx->pc = 0x1494e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 2));
    // 0x1494e4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1494e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1494e8: 0xafa201e0  sw          $v0, 0x1E0($sp)
    ctx->pc = 0x1494e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 2));
    // 0x1494ec: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1494ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1494f0: 0xc052dbc  jal         func_14B6F0
    ctx->pc = 0x1494F0u;
    SET_GPR_U32(ctx, 31, 0x1494F8u);
    ctx->pc = 0x1494F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1494F0u;
    // 0x1494f4: 0xafa201e4  sw          $v0, 0x1E4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F0u, 0x1494F0u, 0x1494F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1494F8u;
label_1494f8:
    // 0x1494f8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1494F8u;
    {
        const bool branch_taken_0x1494f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1494f8) {
            ctx->pc = 0x149530u;
            goto label_149530;
        }
    }
    ctx->pc = 0x149500u;
label_149500:
    // 0x149500: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x149500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x149504: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x149504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x149508: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x149508u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14950c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14950cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x149510: 0xc0401a4  jal         func_100690
    ctx->pc = 0x149510u;
    SET_GPR_U32(ctx, 31, 0x149518u);
    ctx->pc = 0x149514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149510u;
    // 0x149514: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x149510u, 0x149518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149518u;
label_149518:
    // 0x149518: 0xc04fe2c  jal         func_13F8B0
    ctx->pc = 0x149518u;
    SET_GPR_U32(ctx, 31, 0x149520u);
    ctx->pc = 0x14951Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149518u;
    // 0x14951c: 0x26840004  addiu       $a0, $s4, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F8B0u, 0x149518u, 0x149520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149520u;
label_149520:
    // 0x149520: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x149520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x149524: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x149524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x149528: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x149528u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14952c: 0xae820014  sw          $v0, 0x14($s4)
    ctx->pc = 0x14952cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
label_149530:
    // 0x149530: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x149530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x149534: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x149534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x149538: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x149538u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x14953c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14953cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x149540: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x149540u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x149544: 0x82082b  sltu        $at, $a0, $v0
    ctx->pc = 0x149544u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x149548: 0x1020ffed  beqz        $at, . + 4 + (-0x13 << 2)
    ctx->pc = 0x149548u;
    {
        const bool branch_taken_0x149548 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x149548) {
            ctx->pc = 0x149500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_149500;
        }
    }
    ctx->pc = 0x149550u;
label_149550:
    // 0x149550: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x149550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x149554: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x149554u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x149558: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x149558u;
    {
        const bool branch_taken_0x149558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14955Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149558u;
        // 0x14955c: 0xae820018  sw          $v0, 0x18($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149558) {
            ctx->pc = 0x1495A8u;
            goto label_1495a8;
        }
    }
    ctx->pc = 0x149560u;
label_149560:
    // 0x149560: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x149560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x149564: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x149564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x149568: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x149568u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
    // 0x14956c: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x14956cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x149570: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x149570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x149574: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x149574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x149578: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x149578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x14957c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14957cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x149580: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x149580u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x149584: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x149584u;
    {
        const bool branch_taken_0x149584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x149584) {
            ctx->pc = 0x149590u;
            goto label_149590;
        }
    }
    ctx->pc = 0x14958Cu;
    // 0x14958c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x14958cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_149590:
    // 0x149590: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x149590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x149594: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x149594u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x149598: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x149598u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14959c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x14959Cu;
    SET_GPR_U32(ctx, 31, 0x1495A4u);
    ctx->pc = 0x1495A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14959Cu;
    // 0x1495a0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x14959Cu, 0x1495A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1495A4u;
label_1495a4:
    // 0x1495a4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1495a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1495a8:
    // 0x1495a8: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x1495a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1495ac: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x1495acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1495b0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1495b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1495b4: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x1495b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1495b8: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x1495b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x1495bc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1495bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1495c0: 0xe52818  mult        $a1, $a3, $a1
    ctx->pc = 0x1495c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1495c4: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x1495c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1495c8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1495c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1495cc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1495ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1495d0: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x1495d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1495d4: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x1495d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1495d8: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1495d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1495dc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1495dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1495e0: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1495E0u;
    {
        const bool branch_taken_0x1495e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1495e0) {
            ctx->pc = 0x149560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_149560;
        }
    }
    ctx->pc = 0x1495E8u;
label_1495e8:
    // 0x1495e8: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x1495e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x1495ec: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1495ECu;
    {
        const bool branch_taken_0x1495ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1495ec) {
            ctx->pc = 0x149664u;
            goto label_149664;
        }
    }
    ctx->pc = 0x1495F4u;
    // 0x1495f4: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x1495f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1495f8: 0x2450fffe  addiu       $s0, $v0, -0x2
    ctx->pc = 0x1495f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x1495fc: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1495FCu;
    {
        const bool branch_taken_0x1495fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1495fc) {
            ctx->pc = 0x149658u;
            goto label_149658;
        }
    }
    ctx->pc = 0x149604u;
label_149604:
    // 0x149604: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x149604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x149608: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x149608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14960c: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x14960cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
    // 0x149610: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x149610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x149614: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x149614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x149618: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x149618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x14961c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x14961cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x149620: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x149620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x149624: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x149624u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x149628: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x149628u;
    {
        const bool branch_taken_0x149628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x149628) {
            ctx->pc = 0x149634u;
            goto label_149634;
        }
    }
    ctx->pc = 0x149630u;
    // 0x149630: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x149630u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_149634:
    // 0x149634: 0x0  nop
    ctx->pc = 0x149634u;
    // NOP
    // 0x149638: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x149638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x14963c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14963cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x149640: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x149640u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x149644: 0xc0401a4  jal         func_100690
    ctx->pc = 0x149644u;
    SET_GPR_U32(ctx, 31, 0x14964Cu);
    ctx->pc = 0x149648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149644u;
    // 0x149648: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x149644u, 0x14964Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14964Cu;
label_14964c:
    // 0x14964c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x14964cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x149650: 0x1600ffec  bnez        $s0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x149650u;
    {
        const bool branch_taken_0x149650 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x149654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149650u;
        // 0x149654: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149650) {
            ctx->pc = 0x149604u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_149604;
        }
    }
    ctx->pc = 0x149658u;
label_149658:
    // 0x149658: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x149658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x14965c: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x14965cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x149660: 0xae820014  sw          $v0, 0x14($s4)
    ctx->pc = 0x149660u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
label_149664:
    // 0x149664: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x149664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x149668: 0x27a40310  addiu       $a0, $sp, 0x310
    ctx->pc = 0x149668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    // 0x14966c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x14966cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x149670: 0x26850004  addiu       $a1, $s4, 0x4
    ctx->pc = 0x149670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x149674: 0xc0525dc  jal         func_149770
    ctx->pc = 0x149674u;
    SET_GPR_U32(ctx, 31, 0x14967Cu);
    ctx->pc = 0x149678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149674u;
    // 0x149678: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149770u, 0x149674u, 0x14967Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14967Cu;
label_14967c:
    // 0x14967c: 0x27a402f0  addiu       $a0, $sp, 0x2F0
    ctx->pc = 0x14967cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
    // 0x149680: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x149680u;
    SET_GPR_U32(ctx, 31, 0x149688u);
    ctx->pc = 0x149684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149680u;
    // 0x149684: 0x27a50310  addiu       $a1, $sp, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x149680u, 0x149688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149688u;
label_149688:
    // 0x149688: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x149688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x14968c: 0x27b10308  addiu       $s1, $sp, 0x308
    ctx->pc = 0x14968cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 776));
    // 0x149690: 0x8fa302f4  lw          $v1, 0x2F4($sp)
    ctx->pc = 0x149690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 756)));
    // 0x149694: 0x8fa202f8  lw          $v0, 0x2F8($sp)
    ctx->pc = 0x149694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 760)));
    // 0x149698: 0xafa40300  sw          $a0, 0x300($sp)
    ctx->pc = 0x149698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 768), GPR_U32(ctx, 4));
    // 0x14969c: 0xafa30304  sw          $v1, 0x304($sp)
    ctx->pc = 0x14969cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 772), GPR_U32(ctx, 3));
    // 0x1496a0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1496a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1496a4: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1496a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1496a8: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x1496a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1496ac: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1496ACu;
    {
        const bool branch_taken_0x1496ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1496ac) {
            ctx->pc = 0x1496D8u;
            goto label_1496d8;
        }
    }
    ctx->pc = 0x1496B4u;
    // 0x1496b4: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x1496b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1496b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1496B8u;
    {
        const bool branch_taken_0x1496b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1496BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1496B8u;
        // 0x1496bc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1496b8) {
            ctx->pc = 0x1496CCu;
            goto label_1496cc;
        }
    }
    ctx->pc = 0x1496C0u;
    // 0x1496c0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1496c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1496c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1496c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1496c8: 0x0  nop
    ctx->pc = 0x1496c8u;
    // NOP
label_1496cc:
    // 0x1496cc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1496ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1496d0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1496D0u;
    {
        const bool branch_taken_0x1496d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1496D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1496D0u;
        // 0x1496d4: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1496d0) {
            ctx->pc = 0x149710u;
            goto label_149710;
        }
    }
    ctx->pc = 0x1496D8u;
label_1496d8:
    // 0x1496d8: 0x202001b  divu        $zero, $s0, $v0
    ctx->pc = 0x1496d8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x1496dc: 0x0  nop
    ctx->pc = 0x1496dcu;
    // NOP
    // 0x1496e0: 0x0  nop
    ctx->pc = 0x1496e0u;
    // NOP
    // 0x1496e4: 0x2812  mflo        $a1
    ctx->pc = 0x1496e4u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1496e8: 0xc050184  jal         func_140610
    ctx->pc = 0x1496E8u;
    SET_GPR_U32(ctx, 31, 0x1496F0u);
    ctx->pc = 0x1496ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1496E8u;
    // 0x1496ec: 0x27a40300  addiu       $a0, $sp, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140610u, 0x1496E8u, 0x1496F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1496F0u;
label_1496f0:
    // 0x1496f0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1496f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1496f4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1496f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1496f8: 0x202001b  divu        $zero, $s0, $v0
    ctx->pc = 0x1496f8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x1496fc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1496fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x149700: 0x0  nop
    ctx->pc = 0x149700u;
    // NOP
    // 0x149704: 0x1010  mfhi        $v0
    ctx->pc = 0x149704u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x149708: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x149708u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14970c: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x14970cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_149710:
    // 0x149710: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x149710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x149714: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x149714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149718: 0x27a50300  addiu       $a1, $sp, 0x300
    ctx->pc = 0x149718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x14971c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14971cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x149720: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x149720u;
    SET_GPR_U32(ctx, 31, 0x149728u);
    ctx->pc = 0x149724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149720u;
    // 0x149724: 0x629021  addu        $s2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x149720u, 0x149728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149728u;
label_149728:
    // 0x149728: 0xaeb1000c  sw          $s1, 0xC($s5)
    ctx->pc = 0x149728u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 17));
    // 0x14972c: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x14972cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149730: 0xaeb20010  sw          $s2, 0x10($s5)
    ctx->pc = 0x149730u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 18));
    // 0x149734: 0xaeb00014  sw          $s0, 0x14($s5)
    ctx->pc = 0x149734u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 16));
label_149738:
    // 0x149738: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x149738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x14973c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x14973cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x149740: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x149740u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x149744: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x149744u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x149748: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x149748u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14974c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14974cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x149750: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x149750u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x149754: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x149754u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149758: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x149758u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14975c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14975cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149760: 0x3e00008  jr          $ra
    ctx->pc = 0x149760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149760u;
        // 0x149764: 0x27bd0320  addiu       $sp, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149768u;
}
