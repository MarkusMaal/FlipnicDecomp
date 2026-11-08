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

// Function: entry_001bb4b8
// Address: 0x1bb4b8 - 0x1bb4d8
void entry_001bb4b8_0x1bb4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb4b8_0x1bb4b8");
#endif

    switch (ctx->pc) {
        case 0x1bb4c4u: goto label_1bb4c4;
        default: break;
    }

    ctx->pc = 0x1bb4b8u;

    // 0x1bb4b8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1bb4b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb4bc: 0xc06f01c  jal         func_1BC070
    ctx->pc = 0x1BB4BCu;
    SET_GPR_U32(ctx, 31, 0x1BB4C4u);
    ctx->pc = 0x1BB4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB4BCu;
    // 0x1bb4c0: 0x120282d  daddu       $a1, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC070u, 0x1BB4BCu, 0x1BB4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB4C4u;
label_1bb4c4:
    // 0x1bb4c4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1bb4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1bb4c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bb4c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bb4cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bb4ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb4d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB4D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB4D0u;
        // 0x1bb4d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB4D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB4D8u;
}
