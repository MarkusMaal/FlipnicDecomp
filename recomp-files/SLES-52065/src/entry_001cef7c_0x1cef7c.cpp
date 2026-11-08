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

// Function: entry_001cef7c
// Address: 0x1cef7c - 0x1cf024
void entry_001cef7c_0x1cef7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cef7c_0x1cef7c");
#endif

    switch (ctx->pc) {
        case 0x1cefd0u: goto label_1cefd0;
        case 0x1cefe0u: goto label_1cefe0;
        case 0x1ceff4u: goto label_1ceff4;
        case 0x1cf008u: goto label_1cf008;
        default: break;
    }

    ctx->pc = 0x1cef7cu;

    // 0x1cef7c: 0x0  nop
    ctx->pc = 0x1cef7cu;
    // NOP
    // 0x1cef80: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1cef80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1cef84: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1cef84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1cef88: 0x24632fd0  addiu       $v1, $v1, 0x2FD0
    ctx->pc = 0x1cef88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12240));
    // 0x1cef8c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1cef8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1cef90: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cef90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cef94: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1cef94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1cef98: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1cef98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cef9c: 0x14c2fff2  bne         $a2, $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1CEF9Cu;
    {
        const bool branch_taken_0x1cef9c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CEFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEF9Cu;
        // 0x1cefa0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cef9c) {
            ctx->pc = 0x1CEF68u;
            return;
        }
    }
    ctx->pc = 0x1CEFA4u;
    // 0x1cefa4: 0xae400078  sw          $zero, 0x78($s2)
    ctx->pc = 0x1cefa4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 0));
    // 0x1cefa8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cefa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cefac: 0xae42007c  sw          $v0, 0x7C($s2)
    ctx->pc = 0x1cefacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 2));
    // 0x1cefb0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cefb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cefb4: 0x9022fb48  lbu         $v0, -0x4B8($at)
    ctx->pc = 0x1cefb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x36FB48u));
    // 0x1cefb8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cefb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cefbc: 0xa2420080  sb          $v0, 0x80($s2)
    ctx->pc = 0x1cefbcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 128), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cefc0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cefc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cefc4: 0x9030fb48  lbu         $s0, -0x4B8($at)
    ctx->pc = 0x1cefc4u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)FAST_READ8(0x36FB48u));
    // 0x1cefc8: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CEFC8u;
    SET_GPR_U32(ctx, 31, 0x1CEFD0u);
    ctx->pc = 0x1CEFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEFC8u;
    // 0x1cefcc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CEFC8u, 0x1CEFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEFD0u;
label_1cefd0:
    // 0x1cefd0: 0xa0500008  sb          $s0, 0x8($v0)
    ctx->pc = 0x1cefd0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 16));
    // 0x1cefd4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cefd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cefd8: 0xc06e040  jal         func_1B8100
    ctx->pc = 0x1CEFD8u;
    SET_GPR_U32(ctx, 31, 0x1CEFE0u);
    ctx->pc = 0x1CEFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEFD8u;
    // 0x1cefdc: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8100u, 0x1CEFD8u, 0x1CEFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEFE0u;
label_1cefe0:
    // 0x1cefe0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cefe0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cefe4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cefe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cefe8: 0x24a594c0  addiu       $a1, $a1, -0x6B40
    ctx->pc = 0x1cefe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939840));
    // 0x1cefec: 0xc06de84  jal         func_1B7A10
    ctx->pc = 0x1CEFECu;
    SET_GPR_U32(ctx, 31, 0x1CEFF4u);
    ctx->pc = 0x1CEFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEFECu;
    // 0x1ceff0: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A10u, 0x1CEFECu, 0x1CEFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEFF4u;
label_1ceff4:
    // 0x1ceff4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ceff4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1ceff8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ceff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceffc: 0x24a59630  addiu       $a1, $a1, -0x69D0
    ctx->pc = 0x1ceffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940208));
    // 0x1cf000: 0xc06de24  jal         func_1B7890
    ctx->pc = 0x1CF000u;
    SET_GPR_U32(ctx, 31, 0x1CF008u);
    ctx->pc = 0x1CF004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF000u;
    // 0x1cf004: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7890u, 0x1CF000u, 0x1CF008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF008u;
label_1cf008:
    // 0x1cf008: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1cf008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cf00c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1cf00cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cf010: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1cf010u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cf014: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cf014u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf018: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cf018u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf01c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF01Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF01Cu;
        // 0x1cf020: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF01Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF024u;
}
