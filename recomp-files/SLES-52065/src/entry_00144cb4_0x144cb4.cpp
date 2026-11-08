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

// Function: entry_00144cb4
// Address: 0x144cb4 - 0x144cd0
void entry_00144cb4_0x144cb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144cb4_0x144cb4");
#endif

    switch (ctx->pc) {
        case 0x144cc0u: goto label_144cc0;
        default: break;
    }

    ctx->pc = 0x144cb4u;

    // 0x144cb4: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x144cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x144cb8: 0xc04d030  jal         func_1340C0
    ctx->pc = 0x144CB8u;
    SET_GPR_U32(ctx, 31, 0x144CC0u);
    ctx->pc = 0x144CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144CB8u;
    // 0x144cbc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1340C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1340C0u, 0x144CB8u, 0x144CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144CC0u;
label_144cc0:
    // 0x144cc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x144cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144cc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x144cc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144cc8: 0x3e00008  jr          $ra
    ctx->pc = 0x144CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144CC8u;
        // 0x144ccc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144CC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144CD0u;
}
