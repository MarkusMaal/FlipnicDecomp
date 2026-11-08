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

// Function: FUN_0013ecf0
// Address: 0x13ecf0 - 0x13ed3c
void FUN_0013ecf0_0x13ecf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013ecf0_0x13ecf0");
#endif

    switch (ctx->pc) {
        case 0x13ed0cu: goto label_13ed0c;
        case 0x13ed2cu: goto label_13ed2c;
        default: break;
    }

    ctx->pc = 0x13ecf0u;

    // 0x13ecf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13ecf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13ecf4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13ecf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13ecf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13ecf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13ecfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13ecfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ed00: 0xafa5002c  sw          $a1, 0x2C($sp)
    ctx->pc = 0x13ed00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 5));
    // 0x13ed04: 0xc049ed0  jal         func_127B40
    ctx->pc = 0x13ED04u;
    SET_GPR_U32(ctx, 31, 0x13ED0Cu);
    ctx->pc = 0x13ED08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13ED04u;
    // 0x13ed08: 0x260401c8  addiu       $a0, $s0, 0x1C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B40u, 0x13ED04u, 0x13ED0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ED0Cu;
label_13ed0c:
    // 0x13ed0c: 0x8e0301cc  lw          $v1, 0x1CC($s0)
    ctx->pc = 0x13ed0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 460)));
    // 0x13ed10: 0x260401c8  addiu       $a0, $s0, 0x1C8
    ctx->pc = 0x13ed10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 456));
    // 0x13ed14: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13ed14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13ed18: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x13ed18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13ed1c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x13ed1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x13ed20: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13ed20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13ed24: 0xc0484ec  jal         func_1213B0
    ctx->pc = 0x13ED24u;
    SET_GPR_U32(ctx, 31, 0x13ED2Cu);
    ctx->pc = 0x13ED28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13ED24u;
    // 0x13ed28: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1213B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1213B0u, 0x13ED24u, 0x13ED2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ED2Cu;
label_13ed2c:
    // 0x13ed2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13ed2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13ed30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13ed30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13ed34: 0x3e00008  jr          $ra
    ctx->pc = 0x13ED34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13ED38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ED34u;
        // 0x13ed38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13ED34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13ED3Cu;
}
