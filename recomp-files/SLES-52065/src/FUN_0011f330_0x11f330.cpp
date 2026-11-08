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

// Function: FUN_0011f330
// Address: 0x11f330 - 0x11f35c
void FUN_0011f330_0x11f330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011f330_0x11f330");
#endif

    switch (ctx->pc) {
        case 0x11f348u: goto label_11f348;
        default: break;
    }

    ctx->pc = 0x11f330u;

    // 0x11f330: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11f330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11f334: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11f334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11f338: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11f338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11f33c: 0xac80201c  sw          $zero, 0x201C($a0)
    ctx->pc = 0x11f33cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8220), GPR_U32(ctx, 0));
    // 0x11f340: 0xc047cf0  jal         func_11F3C0
    ctx->pc = 0x11F340u;
    SET_GPR_U32(ctx, 31, 0x11F348u);
    ctx->pc = 0x11F344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F340u;
    // 0x11f344: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F3C0u, 0x11F340u, 0x11F348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F348u;
label_11f348:
    // 0x11f348: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11f348u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f34c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11f34cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11f350: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11f350u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11f354: 0x3e00008  jr          $ra
    ctx->pc = 0x11F354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F354u;
        // 0x11f358: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F35Cu;
}
