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

// Function: entry_0011d710
// Address: 0x11d710 - 0x11d71c
void entry_0011d710_0x11d710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d710_0x11d710");
#endif

    switch (ctx->pc) {
        case 0x11d718u: goto label_11d718;
        default: break;
    }

    ctx->pc = 0x11d710u;

    // 0x11d710: 0xc080702  jal         func_201C08
    ctx->pc = 0x11D710u;
    SET_GPR_U32(ctx, 31, 0x11D718u);
    ctx->pc = 0x11D714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D710u;
    // 0x11d714: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11D710u, 0x11D718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D718u;
label_11d718:
    // 0x11d718: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x11d718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    ctx->pc = 0x11d71cu;
}
