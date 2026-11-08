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

// Function: FUN_0013cd10
// Address: 0x13cd10 - 0x13cd5c
void FUN_0013cd10_0x13cd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013cd10_0x13cd10");
#endif

    switch (ctx->pc) {
        case 0x13cd2cu: goto label_13cd2c;
        case 0x13cd4cu: goto label_13cd4c;
        default: break;
    }

    ctx->pc = 0x13cd10u;

    // 0x13cd10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13cd10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13cd14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13cd14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13cd18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13cd18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13cd1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13cd1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cd20: 0xafa5002c  sw          $a1, 0x2C($sp)
    ctx->pc = 0x13cd20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 5));
    // 0x13cd24: 0xc049ed0  jal         func_127B40
    ctx->pc = 0x13CD24u;
    SET_GPR_U32(ctx, 31, 0x13CD2Cu);
    ctx->pc = 0x13CD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CD24u;
    // 0x13cd28: 0x26040104  addiu       $a0, $s0, 0x104 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 260));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B40u, 0x13CD24u, 0x13CD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CD2Cu;
label_13cd2c:
    // 0x13cd2c: 0x8e030108  lw          $v1, 0x108($s0)
    ctx->pc = 0x13cd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x13cd30: 0x26040104  addiu       $a0, $s0, 0x104
    ctx->pc = 0x13cd30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 260));
    // 0x13cd34: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13cd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13cd38: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x13cd38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13cd3c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x13cd3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x13cd40: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13cd40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13cd44: 0xc0484ec  jal         func_1213B0
    ctx->pc = 0x13CD44u;
    SET_GPR_U32(ctx, 31, 0x13CD4Cu);
    ctx->pc = 0x13CD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CD44u;
    // 0x13cd48: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1213B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1213B0u, 0x13CD44u, 0x13CD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CD4Cu;
label_13cd4c:
    // 0x13cd4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13cd4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13cd50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13cd50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13cd54: 0x3e00008  jr          $ra
    ctx->pc = 0x13CD54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13CD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CD54u;
        // 0x13cd58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CD54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13CD5Cu;
}
