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

// Function: entry_001a94b4
// Address: 0x1a94b4 - 0x1a94d4
void entry_001a94b4_0x1a94b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a94b4_0x1a94b4");
#endif

    switch (ctx->pc) {
        case 0x1a94bcu: goto label_1a94bc;
        default: break;
    }

    ctx->pc = 0x1a94b4u;

    // 0x1a94b4: 0xc069bb0  jal         func_1A6EC0
    ctx->pc = 0x1A94B4u;
    SET_GPR_U32(ctx, 31, 0x1A94BCu);
    ctx->pc = 0x1A6EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6EC0u, 0x1A94B4u, 0x1A94BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A94BCu;
label_1a94bc:
    // 0x1a94bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a94bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a94c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a94c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a94c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a94c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a94c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a94c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a94cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A94CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A94D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A94CCu;
        // 0x1a94d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A94CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A94D4u;
}
