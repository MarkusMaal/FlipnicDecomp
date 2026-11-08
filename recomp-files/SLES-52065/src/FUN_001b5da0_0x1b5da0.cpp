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

// Function: FUN_001b5da0
// Address: 0x1b5da0 - 0x1b5dec
void FUN_001b5da0_0x1b5da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b5da0_0x1b5da0");
#endif

    switch (ctx->pc) {
        case 0x1b5dbcu: goto label_1b5dbc;
        case 0x1b5dc8u: goto label_1b5dc8;
        case 0x1b5dd8u: goto label_1b5dd8;
        default: break;
    }

    ctx->pc = 0x1b5da0u;

    // 0x1b5da0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b5da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b5da4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b5da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b5da8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b5da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b5dac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b5dacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5db0: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x1b5db0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
    // 0x1b5db4: 0xc060778  jal         func_181DE0
    ctx->pc = 0x1B5DB4u;
    SET_GPR_U32(ctx, 31, 0x1B5DBCu);
    ctx->pc = 0x1B5DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5DB4u;
    // 0x1b5db8: 0x2484c6a4  addiu       $a0, $a0, -0x395C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952612));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181DE0u, 0x1B5DB4u, 0x1B5DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5DBCu;
label_1b5dbc:
    // 0x1b5dbc: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x1b5dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
    // 0x1b5dc0: 0xc060dd0  jal         func_183740
    ctx->pc = 0x1B5DC0u;
    SET_GPR_U32(ctx, 31, 0x1B5DC8u);
    ctx->pc = 0x1B5DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5DC0u;
    // 0x1b5dc4: 0x2484c6a4  addiu       $a0, $a0, -0x395C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952612));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183740u, 0x1B5DC0u, 0x1B5DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5DC8u;
label_1b5dc8:
    // 0x1b5dc8: 0x3c050023  lui         $a1, 0x23
    ctx->pc = 0x1b5dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35 << 16));
    // 0x1b5dcc: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1b5dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x1b5dd0: 0xc06f904  jal         func_1BE410
    ctx->pc = 0x1B5DD0u;
    SET_GPR_U32(ctx, 31, 0x1B5DD8u);
    ctx->pc = 0x1B5DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5DD0u;
    // 0x1b5dd4: 0x24a5c6a4  addiu       $a1, $a1, -0x395C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952612));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE410u, 0x1B5DD0u, 0x1B5DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5DD8u;
label_1b5dd8:
    // 0x1b5dd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b5dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5ddc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b5ddcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5de0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b5de0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5de4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5DE4u;
        // 0x1b5de8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5DE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5DECu;
}
