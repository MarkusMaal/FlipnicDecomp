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

// Function: entry_0010f260
// Address: 0x10f260 - 0x10f274
void entry_0010f260_0x10f260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f260_0x10f260");
#endif

    switch (ctx->pc) {
        case 0x10f26cu: goto label_10f26c;
        default: break;
    }

    ctx->pc = 0x10f260u;

    // 0x10f260: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10f260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f264: 0xc043ca8  jal         func_10F2A0
    ctx->pc = 0x10F264u;
    SET_GPR_U32(ctx, 31, 0x10F26Cu);
    ctx->pc = 0x10F268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F264u;
    // 0x10f268: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F2A0u, 0x10F264u, 0x10F26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F26Cu;
label_10f26c:
    // 0x10f26c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10F26Cu;
    {
        const bool branch_taken_0x10f26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f26c) {
            ctx->pc = 0x10F27Cu;
            return;
        }
    }
    ctx->pc = 0x10F274u;
}
