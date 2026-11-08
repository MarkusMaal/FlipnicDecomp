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

// Function: entry_00205fa0
// Address: 0x205fa0 - 0x205fb4
void entry_00205fa0_0x205fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205fa0_0x205fa0");
#endif

    switch (ctx->pc) {
        case 0x205fa8u: goto label_205fa8;
        default: break;
    }

    ctx->pc = 0x205fa0u;

    // 0x205fa0: 0xc07f4fc  jal         func_1FD3F0
    ctx->pc = 0x205FA0u;
    SET_GPR_U32(ctx, 31, 0x205FA8u);
    ctx->pc = 0x205FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205FA0u;
    // 0x205fa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD3F0u, 0x205FA0u, 0x205FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205FA8u;
label_205fa8:
    // 0x205fa8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x205fa8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205fac: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x205FACu;
    {
        const bool branch_taken_0x205fac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x205FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205FACu;
        // 0x205fb0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205fac) {
            ctx->pc = 0x205FB8u;
            return;
        }
    }
    ctx->pc = 0x205FB4u;
}
