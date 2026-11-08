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

// Function: entry_001b5b14
// Address: 0x1b5b14 - 0x1b5b30
void entry_001b5b14_0x1b5b14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5b14_0x1b5b14");
#endif

    switch (ctx->pc) {
        case 0x1b5b1cu: goto label_1b5b1c;
        case 0x1b5b24u: goto label_1b5b24;
        default: break;
    }

    ctx->pc = 0x1b5b14u;

    // 0x1b5b14: 0xc073088  jal         func_1CC220
    ctx->pc = 0x1B5B14u;
    SET_GPR_U32(ctx, 31, 0x1B5B1Cu);
    ctx->pc = 0x1CC220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC220u, 0x1B5B14u, 0x1B5B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5B1Cu;
label_1b5b1c:
    // 0x1b5b1c: 0xc06d458  jal         func_1B5160
    ctx->pc = 0x1B5B1Cu;
    SET_GPR_U32(ctx, 31, 0x1B5B24u);
    ctx->pc = 0x1B5160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5160u, 0x1B5B1Cu, 0x1B5B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5B24u;
label_1b5b24:
    // 0x1b5b24: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b5b24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5b28: 0xc0485a4  jal         func_121690
    ctx->pc = 0x1B5B28u;
    SET_GPR_U32(ctx, 31, 0x1B5B30u);
    ctx->pc = 0x1B5B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5B28u;
    // 0x1b5b2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121690u, 0x1B5B28u, 0x1B5B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5B30u;
}
