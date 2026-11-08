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

// Function: entry_00175634
// Address: 0x175634 - 0x175640
void entry_00175634_0x175634(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175634_0x175634");
#endif

    ctx->pc = 0x175634u;

    // 0x175634: 0x0  nop
    ctx->pc = 0x175634u;
    // NOP
    // 0x175638: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x175638u;
    SET_GPR_U32(ctx, 31, 0x175640u);
    ctx->pc = 0x17563Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175638u;
    // 0x17563c: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x175638u, 0x175640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175640u;
}
