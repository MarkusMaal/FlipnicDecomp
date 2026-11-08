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

// Function: entry_001f7484
// Address: 0x1f7484 - 0x1f749c
void entry_001f7484_0x1f7484(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f7484_0x1f7484");
#endif

    ctx->pc = 0x1f7484u;

    // 0x1f7484: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F7484u;
    {
        const bool branch_taken_0x1f7484 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1F7488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7484u;
        // 0x1f7488: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7484) {
            ctx->pc = 0x1F749Cu;
            return;
        }
    }
    ctx->pc = 0x1F748Cu;
    // 0x1f748c: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x1f748cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x1f7490: 0x248446a8  addiu       $a0, $a0, 0x46A8
    ctx->pc = 0x1f7490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18088));
    // 0x1f7494: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x1F7494u;
    SET_GPR_U32(ctx, 31, 0x1F749Cu);
    ctx->pc = 0x1F7498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7494u;
    // 0x1f7498: 0x24a513e4  addiu       $a1, $a1, 0x13E4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5092));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x1F7494u, 0x1F749Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F749Cu;
}
