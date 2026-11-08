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

// Function: entry_0016db50
// Address: 0x16db50 - 0x16db64
void entry_0016db50_0x16db50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016db50_0x16db50");
#endif

    switch (ctx->pc) {
        case 0x16db5cu: goto label_16db5c;
        default: break;
    }

    ctx->pc = 0x16db50u;

    // 0x16db50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16db50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16db54: 0xc06cdfc  jal         func_1B37F0
    ctx->pc = 0x16DB54u;
    SET_GPR_U32(ctx, 31, 0x16DB5Cu);
    ctx->pc = 0x16DB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DB54u;
    // 0x16db58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B37F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B37F0u, 0x16DB54u, 0x16DB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DB5Cu;
label_16db5c:
    // 0x16db5c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x16DB5Cu;
    {
        const bool branch_taken_0x16db5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16db5c) {
            ctx->pc = 0x16DB98u;
            return;
        }
    }
    ctx->pc = 0x16DB64u;
}
