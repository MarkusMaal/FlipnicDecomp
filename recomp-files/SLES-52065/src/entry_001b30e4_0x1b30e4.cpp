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

// Function: entry_001b30e4
// Address: 0x1b30e4 - 0x1b3104
void entry_001b30e4_0x1b30e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b30e4_0x1b30e4");
#endif

    switch (ctx->pc) {
        case 0x1b30f0u: goto label_1b30f0;
        default: break;
    }

    ctx->pc = 0x1b30e4u;

    // 0x1b30e4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1b30e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b30e8: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1B30E8u;
    SET_GPR_U32(ctx, 31, 0x1B30F0u);
    ctx->pc = 0x1B30ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B30E8u;
    // 0x1b30ec: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1B30E8u, 0x1B30F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B30F0u;
label_1b30f0:
    // 0x1b30f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b30f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b30f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b30f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b30f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b30f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b30fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B30FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B30FCu;
        // 0x1b3100: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B30FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3104u;
}
