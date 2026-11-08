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

// Function: entry_00148bbc
// Address: 0x148bbc - 0x148bd0
void entry_00148bbc_0x148bbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148bbc_0x148bbc");
#endif

    ctx->pc = 0x148bbcu;

    // 0x148bbc: 0x0  nop
    ctx->pc = 0x148bbcu;
    // NOP
    // 0x148bc0: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x148BC0u;
    {
        const bool branch_taken_0x148bc0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x148BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148BC0u;
        // 0x148bc4: 0x26240290  addiu       $a0, $s1, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148bc0) {
            ctx->pc = 0x148BD0u;
            return;
        }
    }
    ctx->pc = 0x148BC8u;
    // 0x148bc8: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x148BC8u;
    SET_GPR_U32(ctx, 31, 0x148BD0u);
    ctx->pc = 0x148BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148BC8u;
    // 0x148bcc: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x148BC8u, 0x148BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148BD0u;
}
