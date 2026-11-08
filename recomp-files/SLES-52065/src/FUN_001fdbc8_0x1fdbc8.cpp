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

// Function: FUN_001fdbc8
// Address: 0x1fdbc8 - 0x1fdd34
void FUN_001fdbc8_0x1fdbc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fdbc8_0x1fdbc8");
#endif

    switch (ctx->pc) {
        case 0x1fdbf0u: goto label_1fdbf0;
        case 0x1fdc2cu: goto label_1fdc2c;
        case 0x1fdc38u: goto label_1fdc38;
        case 0x1fdc50u: goto label_1fdc50;
        case 0x1fdc78u: goto label_1fdc78;
        case 0x1fdc94u: goto label_1fdc94;
        case 0x1fdcd8u: goto label_1fdcd8;
        case 0x1fdd10u: goto label_1fdd10;
        default: break;
    }

    ctx->pc = 0x1fdbc8u;

    // 0x1fdbc8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1fdbc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1fdbcc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1fdbccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1fdbd0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fdbd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fdbd4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1fdbd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdbd8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1fdbd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1fdbdc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1fdbdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdbe0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1fdbe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1fdbe4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1fdbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1fdbe8: 0xc07fe9c  jal         func_1FFA70
    ctx->pc = 0x1FDBE8u;
    SET_GPR_U32(ctx, 31, 0x1FDBF0u);
    ctx->pc = 0x1FDBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDBE8u;
    // 0x1fdbec: 0xffb30030  sd          $s3, 0x30($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFA70u, 0x1FDBE8u, 0x1FDBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDBF0u;
label_1fdbf0:
    // 0x1fdbf0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1fdbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1fdbf4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1fdbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1fdbf8: 0x2454d9c8  addiu       $s4, $v0, -0x2638
    ctx->pc = 0x1fdbf8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957512));
    // 0x1fdbfc: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x1fdbfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x1fdc00: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x1fdc00u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x21D9D0u));
    // 0x1fdc04: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x1fdc04u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1fdc08: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x1fdc08u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x1fdc0c: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x1fdc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1fdc10: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1fdc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1fdc14: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1fdc14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1fdc18: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1fdc18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1fdc1c: 0x2883e  dsrl32      $s1, $v0, 0
    ctx->pc = 0x1fdc1cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1fdc20: 0x230802f  dsubu       $s0, $s1, $s0
    ctx->pc = 0x1fdc20u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) - GPR_U64(ctx, 16));
    // 0x1fdc24: 0xc081c38  jal         func_2070E0
    ctx->pc = 0x1FDC24u;
    SET_GPR_U32(ctx, 31, 0x1FDC2Cu);
    ctx->pc = 0x1FDC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDC24u;
    // 0x1fdc28: 0x66040fef  daddiu      $a0, $s0, 0xFEF (Delay Slot)
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)4079);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2070E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2070E0u, 0x1FDC24u, 0x1FDC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDC2Cu;
label_1fdc2c:
    // 0x1fdc2c: 0x6444ffff  daddiu      $a0, $v0, -0x1
    ctx->pc = 0x1fdc2cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967295);
    // 0x1fdc30: 0xc081c20  jal         func_207080
    ctx->pc = 0x1FDC30u;
    SET_GPR_U32(ctx, 31, 0x1FDC38u);
    ctx->pc = 0x1FDC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDC30u;
    // 0x1fdc34: 0x24051000  addiu       $a1, $zero, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207080u, 0x1FDC30u, 0x1FDC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDC38u;
label_1fdc38:
    // 0x1fdc38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fdc38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdc3c: 0x2a021000  slti        $v0, $s0, 0x1000
    ctx->pc = 0x1fdc3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4096) ? 1 : 0);
    // 0x1fdc40: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1FDC40u;
    {
        const bool branch_taken_0x1fdc40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FDC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDC40u;
        // 0x1fdc44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdc40) {
            ctx->pc = 0x1FDCD0u;
            goto label_1fdcd0;
        }
    }
    ctx->pc = 0x1FDC48u;
    // 0x1fdc48: 0xc0804a2  jal         func_201288
    ctx->pc = 0x1FDC48u;
    SET_GPR_U32(ctx, 31, 0x1FDC50u);
    ctx->pc = 0x1FDC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDC48u;
    // 0x1fdc4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201288u, 0x1FDC48u, 0x1FDC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDC50u;
label_1fdc50:
    // 0x1fdc50: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x1fdc50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1fdc54: 0x11203c  dsll32      $a0, $s1, 0
    ctx->pc = 0x1fdc54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1fdc58: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1fdc58u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1fdc5c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fdc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fdc60: 0x1443001b  bne         $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1FDC60u;
    {
        const bool branch_taken_0x1fdc60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1FDC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDC60u;
        // 0x1fdc64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdc60) {
            ctx->pc = 0x1FDCD0u;
            goto label_1fdcd0;
        }
    }
    ctx->pc = 0x1FDC68u;
    // 0x1fdc68: 0x10983c  dsll32      $s3, $s0, 0
    ctx->pc = 0x1fdc68u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1fdc6c: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x1fdc6cu;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x1fdc70: 0xc0804a2  jal         func_201288
    ctx->pc = 0x1FDC70u;
    SET_GPR_U32(ctx, 31, 0x1FDC78u);
    ctx->pc = 0x1FDC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDC70u;
    // 0x1fdc74: 0x132823  negu        $a1, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201288u, 0x1FDC70u, 0x1FDC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDC78u;
label_1fdc78:
    // 0x1fdc78: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1fdc78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1fdc7c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1fdc7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1fdc80: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1FDC80u;
    {
        const bool branch_taken_0x1fdc80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1FDC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDC80u;
        // 0x1fdc84: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdc80) {
            ctx->pc = 0x1FDCE0u;
            goto label_1fdce0;
        }
    }
    ctx->pc = 0x1FDC88u;
    // 0x1fdc88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fdc88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdc8c: 0xc0804a2  jal         func_201288
    ctx->pc = 0x1FDC8Cu;
    SET_GPR_U32(ctx, 31, 0x1FDC94u);
    ctx->pc = 0x1FDC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDC8Cu;
    // 0x1fdc90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201288u, 0x1FDC8Cu, 0x1FDC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDC94u;
label_1fdc94:
    // 0x1fdc94: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x1fdc94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1fdc98: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fdc98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdc9c: 0xa68823  subu        $s1, $a1, $a2
    ctx->pc = 0x1fdc9cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1fdca0: 0x2a220010  slti        $v0, $s1, 0x10
    ctx->pc = 0x1fdca0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1fdca4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1FDCA4u;
    {
        const bool branch_taken_0x1fdca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FDCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDCA4u;
        // 0x1fdca8: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdca4) {
            ctx->pc = 0x1FDCD0u;
            goto label_1fdcd0;
        }
    }
    ctx->pc = 0x1FDCACu;
    // 0x1fdcac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fdcacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fdcb0: 0x8c83dde0  lw          $v1, -0x2220($a0)
    ctx->pc = 0x1fdcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294958560)));
    // 0x1fdcb4: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x1fdcb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x1fdcb8: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1fdcb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1fdcbc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1fdcbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1fdcc0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1fdcc0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1fdcc4: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x1fdcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1fdcc8: 0xac83ddf8  sw          $v1, -0x2208($a0)
    ctx->pc = 0x1fdcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294958584), GPR_U32(ctx, 3));
    // 0x1fdccc: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x1fdcccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_1fdcd0:
    // 0x1fdcd0: 0xc07fe9e  jal         func_1FFA78
    ctx->pc = 0x1FDCD0u;
    SET_GPR_U32(ctx, 31, 0x1FDCD8u);
    ctx->pc = 0x1FDCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDCD0u;
    // 0x1fdcd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFA78u, 0x1FDCD0u, 0x1FDCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDCD8u;
label_1fdcd8:
    // 0x1fdcd8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1FDCD8u;
    {
        const bool branch_taken_0x1fdcd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDCD8u;
        // 0x1fdcdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdcd8) {
            ctx->pc = 0x1FDD14u;
            goto label_1fdd14;
        }
    }
    ctx->pc = 0x1FDCE0u;
label_1fdce0:
    // 0x1fdce0: 0x230102f  dsubu       $v0, $s1, $s0
    ctx->pc = 0x1fdce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) - GPR_U64(ctx, 16));
    // 0x1fdce4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1fdce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1fdce8: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x1fdce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1fdcec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1fdcecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1fdcf0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1fdcf0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1fdcf4: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1fdcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1fdcf8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1fdcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1fdcfc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fdcfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdd00: 0x8c62ddf8  lw          $v0, -0x2208($v1)
    ctx->pc = 0x1fdd00u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21DDF8u));
    // 0x1fdd04: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1fdd04u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1fdd08: 0xc07fe9e  jal         func_1FFA78
    ctx->pc = 0x1FDD08u;
    SET_GPR_U32(ctx, 31, 0x1FDD10u);
    ctx->pc = 0x1FDD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDD08u;
    // 0x1fdd0c: 0xac62ddf8  sw          $v0, -0x2208($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294958584), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFA78u, 0x1FDD08u, 0x1FDD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDD10u;
label_1fdd10:
    // 0x1fdd10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fdd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fdd14:
    // 0x1fdd14: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1fdd14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fdd18: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1fdd18u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fdd1c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1fdd1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fdd20: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1fdd20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fdd24: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1fdd24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fdd28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fdd28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fdd2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FDD2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FDD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDD2Cu;
        // 0x1fdd30: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDD2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FDD34u;
}
