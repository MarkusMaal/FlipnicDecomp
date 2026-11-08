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

// Function: entry_00198468
// Address: 0x198468 - 0x19847c
void entry_00198468_0x198468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198468_0x198468");
#endif

    ctx->pc = 0x198468u;

    // 0x198468: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x198468u;
    {
        const bool branch_taken_0x198468 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x198468) {
            ctx->pc = 0x19847Cu;
            return;
        }
    }
    ctx->pc = 0x198470u;
    // 0x198470: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x198470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198474: 0xc063e08  jal         func_18F820
    ctx->pc = 0x198474u;
    SET_GPR_U32(ctx, 31, 0x19847Cu);
    ctx->pc = 0x198478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198474u;
    // 0x198478: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x198474u, 0x19847Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19847Cu;
}
