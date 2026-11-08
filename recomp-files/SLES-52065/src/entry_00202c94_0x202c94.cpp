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

// Function: entry_00202c94
// Address: 0x202c94 - 0x202ca0
void entry_00202c94_0x202c94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202c94_0x202c94");
#endif

    switch (ctx->pc) {
        case 0x202c9cu: goto label_202c9c;
        default: break;
    }

    ctx->pc = 0x202c94u;

    // 0x202c94: 0xc082014  jal         func_208050
    ctx->pc = 0x202C94u;
    SET_GPR_U32(ctx, 31, 0x202C9Cu);
    ctx->pc = 0x202C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202C94u;
    // 0x202c98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208050u, 0x202C94u, 0x202C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202C9Cu;
label_202c9c:
    // 0x202c9c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x202c9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x202ca0u;
}
