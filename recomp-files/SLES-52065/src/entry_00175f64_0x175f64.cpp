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

// Function: entry_00175f64
// Address: 0x175f64 - 0x175f70
void entry_00175f64_0x175f64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175f64_0x175f64");
#endif

    ctx->pc = 0x175f64u;

    // 0x175f64: 0x0  nop
    ctx->pc = 0x175f64u;
    // NOP
    // 0x175f68: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x175F68u;
    SET_GPR_U32(ctx, 31, 0x175F70u);
    ctx->pc = 0x175F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175F68u;
    // 0x175f6c: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x175F68u, 0x175F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175F70u;
}
