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

// Function: entry_00175944
// Address: 0x175944 - 0x175950
void entry_00175944_0x175944(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175944_0x175944");
#endif

    ctx->pc = 0x175944u;

    // 0x175944: 0x0  nop
    ctx->pc = 0x175944u;
    // NOP
    // 0x175948: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x175948u;
    SET_GPR_U32(ctx, 31, 0x175950u);
    ctx->pc = 0x17594Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175948u;
    // 0x17594c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x175948u, 0x175950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175950u;
}
