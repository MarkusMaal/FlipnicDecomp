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

// Function: FUN_0013ef30
// Address: 0x13ef30 - 0x13ef7c
void FUN_0013ef30_0x13ef30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013ef30_0x13ef30");
#endif

    switch (ctx->pc) {
        case 0x13ef4cu: goto label_13ef4c;
        case 0x13ef6cu: goto label_13ef6c;
        default: break;
    }

    ctx->pc = 0x13ef30u;

    // 0x13ef30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13ef30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13ef34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13ef34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13ef38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13ef38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13ef3c: 0xafa4002c  sw          $a0, 0x2C($sp)
    ctx->pc = 0x13ef3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
    // 0x13ef40: 0x8f8485c8  lw          $a0, -0x7A38($gp)
    ctx->pc = 0x13ef40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936008)));
    // 0x13ef44: 0xc049ed0  jal         func_127B40
    ctx->pc = 0x13EF44u;
    SET_GPR_U32(ctx, 31, 0x13EF4Cu);
    ctx->pc = 0x13EF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EF44u;
    // 0x13ef48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B40u, 0x13EF44u, 0x13EF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EF4Cu;
label_13ef4c:
    // 0x13ef4c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x13ef4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x13ef50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ef50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ef54: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13ef54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13ef58: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x13ef58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13ef5c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x13ef5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x13ef60: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13ef60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13ef64: 0xc0484ec  jal         func_1213B0
    ctx->pc = 0x13EF64u;
    SET_GPR_U32(ctx, 31, 0x13EF6Cu);
    ctx->pc = 0x13EF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EF64u;
    // 0x13ef68: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1213B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1213B0u, 0x13EF64u, 0x13EF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EF6Cu;
label_13ef6c:
    // 0x13ef6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13ef6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13ef70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13ef70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13ef74: 0x3e00008  jr          $ra
    ctx->pc = 0x13EF74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EF74u;
        // 0x13ef78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13EF74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13EF7Cu;
}
