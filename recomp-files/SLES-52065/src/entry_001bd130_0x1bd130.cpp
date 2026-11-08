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

// Function: entry_001bd130
// Address: 0x1bd130 - 0x1bd13c
void entry_001bd130_0x1bd130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd130_0x1bd130");
#endif

    switch (ctx->pc) {
        case 0x1bd138u: goto label_1bd138;
        default: break;
    }

    ctx->pc = 0x1bd130u;

    // 0x1bd130: 0xc048974  jal         func_1225D0
    ctx->pc = 0x1BD130u;
    SET_GPR_U32(ctx, 31, 0x1BD138u);
    ctx->pc = 0x1BD134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD130u;
    // 0x1bd134: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x1BD130u, 0x1BD138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD138u;
label_1bd138:
    // 0x1bd138: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1bd138u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x1bd13cu;
}
