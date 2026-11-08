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

// Function: entry_002092dc
// Address: 0x2092dc - 0x2092e8
void entry_002092dc_0x2092dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002092dc_0x2092dc");
#endif

    switch (ctx->pc) {
        case 0x2092e4u: goto label_2092e4;
        default: break;
    }

    ctx->pc = 0x2092dcu;

    // 0x2092dc: 0xc082238  jal         func_2088E0
    ctx->pc = 0x2092DCu;
    SET_GPR_U32(ctx, 31, 0x2092E4u);
    ctx->pc = 0x2092E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2092DCu;
    // 0x2092e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2088E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2088E0u, 0x2092DCu, 0x2092E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2092E4u;
label_2092e4:
    // 0x2092e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2092e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x2092e8u;
}
