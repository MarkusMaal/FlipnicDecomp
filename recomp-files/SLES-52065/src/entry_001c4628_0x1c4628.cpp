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

// Function: entry_001c4628
// Address: 0x1c4628 - 0x1c4638
void entry_001c4628_0x1c4628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4628_0x1c4628");
#endif

    switch (ctx->pc) {
        case 0x1c4634u: goto label_1c4634;
        default: break;
    }

    ctx->pc = 0x1c4628u;

    // 0x1c4628: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1c4628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c462c: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x1C462Cu;
    SET_GPR_U32(ctx, 31, 0x1C4634u);
    ctx->pc = 0x1C4630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C462Cu;
    // 0x1c4630: 0x24a55140  addiu       $a1, $a1, 0x5140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x1C462Cu, 0x1C4634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4634u;
label_1c4634:
    // 0x1c4634: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c4634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1c4638u;
}
