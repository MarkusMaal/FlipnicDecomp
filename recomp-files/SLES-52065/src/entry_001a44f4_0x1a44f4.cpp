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

// Function: entry_001a44f4
// Address: 0x1a44f4 - 0x1a4504
void entry_001a44f4_0x1a44f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a44f4_0x1a44f4");
#endif

    switch (ctx->pc) {
        case 0x1a44fcu: goto label_1a44fc;
        default: break;
    }

    ctx->pc = 0x1a44f4u;

    // 0x1a44f4: 0xc04ae40  jal         func_12B900
    ctx->pc = 0x1A44F4u;
    SET_GPR_U32(ctx, 31, 0x1A44FCu);
    ctx->pc = 0x1A44F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A44F4u;
    // 0x1a44f8: 0x8e240690  lw          $a0, 0x690($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B900u, 0x1A44F4u, 0x1A44FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A44FCu;
label_1a44fc:
    // 0x1a44fc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a44fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4500: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1a4500u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a4504u;
}
