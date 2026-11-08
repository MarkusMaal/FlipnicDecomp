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

// Function: entry_00175acc
// Address: 0x175acc - 0x175ad8
void entry_00175acc_0x175acc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175acc_0x175acc");
#endif

    ctx->pc = 0x175accu;

    // 0x175acc: 0x0  nop
    ctx->pc = 0x175accu;
    // NOP
    // 0x175ad0: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x175AD0u;
    SET_GPR_U32(ctx, 31, 0x175AD8u);
    ctx->pc = 0x175AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175AD0u;
    // 0x175ad4: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x175AD0u, 0x175AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175AD8u;
}
