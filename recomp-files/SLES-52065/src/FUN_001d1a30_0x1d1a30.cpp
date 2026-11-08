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

// Function: FUN_001d1a30
// Address: 0x1d1a30 - 0x1d1acc
void FUN_001d1a30_0x1d1a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d1a30_0x1d1a30");
#endif

    switch (ctx->pc) {
        case 0x1d1a4cu: goto label_1d1a4c;
        default: break;
    }

    ctx->pc = 0x1d1a30u;

    // 0x1d1a30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d1a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d1a34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1a34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1a38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d1a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d1a3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d1a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d1a40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d1a40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1a44: 0xc07e460  jal         func_1F9180
    ctx->pc = 0x1D1A44u;
    SET_GPR_U32(ctx, 31, 0x1D1A4Cu);
    ctx->pc = 0x1D1A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1A44u;
    // 0x1d1a48: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9180u, 0x1D1A44u, 0x1D1A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1A4Cu;
label_1d1a4c:
    // 0x1d1a4c: 0x2403ff2e  addiu       $v1, $zero, -0xD2
    ctx->pc = 0x1d1a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
    // 0x1d1a50: 0x10430014  beq         $v0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1D1A50u;
    {
        const bool branch_taken_0x1d1a50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D1A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1A50u;
        // 0x1d1a54: 0xa20001e0  sb          $zero, 0x1E0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 480), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1a50) {
            ctx->pc = 0x1D1AA4u;
            goto label_1d1aa4;
        }
    }
    ctx->pc = 0x1D1A58u;
    // 0x1d1a58: 0x2403ff38  addiu       $v1, $zero, -0xC8
    ctx->pc = 0x1d1a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
    // 0x1d1a5c: 0x10430011  beq         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D1A5Cu;
    {
        const bool branch_taken_0x1d1a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D1A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1A5Cu;
        // 0x1d1a60: 0x2403ff9c  addiu       $v1, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1a5c) {
            ctx->pc = 0x1D1AA4u;
            goto label_1d1aa4;
        }
    }
    ctx->pc = 0x1D1A64u;
    // 0x1d1a64: 0x1043000f  beq         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1D1A64u;
    {
        const bool branch_taken_0x1d1a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d1a64) {
            ctx->pc = 0x1D1AA4u;
            goto label_1d1aa4;
        }
    }
    ctx->pc = 0x1D1A6Cu;
    // 0x1d1a6c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1A6Cu;
    {
        const bool branch_taken_0x1d1a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1A6Cu;
        // 0x1d1a70: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1a6c) {
            ctx->pc = 0x1D1A7Cu;
            goto label_1d1a7c;
        }
    }
    ctx->pc = 0x1D1A74u;
    // 0x1d1a74: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1D1A74u;
    {
        const bool branch_taken_0x1d1a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1A74u;
        // 0x1d1a78: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1a74) {
            ctx->pc = 0x1D1AA8u;
            goto label_1d1aa8;
        }
    }
    ctx->pc = 0x1D1A7Cu;
label_1d1a7c:
    // 0x1d1a7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d1a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1a80: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1d1a80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1d1a84: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1d1a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d1a88: 0xa20201e0  sb          $v0, 0x1E0($s0)
    ctx->pc = 0x1d1a88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 480), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d1a8c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1d1a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d1a90: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x1d1a90u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x1d1a94: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d1a94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d1a98: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1d1a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d1a9c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D1A9Cu;
    {
        const bool branch_taken_0x1d1a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1A9Cu;
        // 0x1d1aa0: 0xac640020  sw          $a0, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1a9c) {
            ctx->pc = 0x1D1ABCu;
            goto label_1d1abc;
        }
    }
    ctx->pc = 0x1D1AA4u;
label_1d1aa4:
    // 0x1d1aa4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1d1aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1d1aa8:
    // 0x1d1aa8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d1aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1aac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d1aacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1ab0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d1ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d1ab4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1d1ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d1ab8: 0xac640020  sw          $a0, 0x20($v1)
    ctx->pc = 0x1d1ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
label_1d1abc:
    // 0x1d1abc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d1abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d1ac0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d1ac0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1AC4u;
        // 0x1d1ac8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1ACCu;
}
