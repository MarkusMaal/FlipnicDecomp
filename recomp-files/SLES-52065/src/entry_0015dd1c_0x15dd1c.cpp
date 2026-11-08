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

// Function: entry_0015dd1c
// Address: 0x15dd1c - 0x15dd38
void entry_0015dd1c_0x15dd1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015dd1c_0x15dd1c");
#endif

    switch (ctx->pc) {
        case 0x15dd28u: goto label_15dd28;
        case 0x15dd30u: goto label_15dd30;
        default: break;
    }

    ctx->pc = 0x15dd1cu;

    // 0x15dd1c: 0x0  nop
    ctx->pc = 0x15dd1cu;
    // NOP
    // 0x15dd20: 0xc04018c  jal         func_100630
    ctx->pc = 0x15DD20u;
    SET_GPR_U32(ctx, 31, 0x15DD28u);
    ctx->pc = 0x15DD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DD20u;
    // 0x15dd24: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x15DD20u, 0x15DD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DD28u;
label_15dd28:
    // 0x15dd28: 0xc04018c  jal         func_100630
    ctx->pc = 0x15DD28u;
    SET_GPR_U32(ctx, 31, 0x15DD30u);
    ctx->pc = 0x15DD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DD28u;
    // 0x15dd2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x15DD28u, 0x15DD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DD30u;
label_15dd30:
    // 0x15dd30: 0xc04018c  jal         func_100630
    ctx->pc = 0x15DD30u;
    SET_GPR_U32(ctx, 31, 0x15DD38u);
    ctx->pc = 0x15DD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DD30u;
    // 0x15dd34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x15DD30u, 0x15DD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DD38u;
}
