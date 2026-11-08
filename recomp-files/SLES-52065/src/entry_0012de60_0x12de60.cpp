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

// Function: entry_0012de60
// Address: 0x12de60 - 0x12de74
void entry_0012de60_0x12de60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012de60_0x12de60");
#endif

    switch (ctx->pc) {
        case 0x12de6cu: goto label_12de6c;
        default: break;
    }

    ctx->pc = 0x12de60u;

    // 0x12de60: 0x27a40108  addiu       $a0, $sp, 0x108
    ctx->pc = 0x12de60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x12de64: 0xc04619c  jal         func_118670
    ctx->pc = 0x12DE64u;
    SET_GPR_U32(ctx, 31, 0x12DE6Cu);
    ctx->pc = 0x12DE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DE64u;
    // 0x12de68: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x12DE64u, 0x12DE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DE6Cu;
label_12de6c:
    // 0x12de6c: 0x26940020  addiu       $s4, $s4, 0x20
    ctx->pc = 0x12de6cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x12de70: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x12de70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x12de74u;
}
