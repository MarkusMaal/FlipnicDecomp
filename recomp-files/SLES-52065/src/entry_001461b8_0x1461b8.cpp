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

// Function: entry_001461b8
// Address: 0x1461b8 - 0x1461d4
void entry_001461b8_0x1461b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001461b8_0x1461b8");
#endif

    switch (ctx->pc) {
        case 0x1461c0u: goto label_1461c0;
        default: break;
    }

    ctx->pc = 0x1461b8u;

    // 0x1461b8: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x1461B8u;
    SET_GPR_U32(ctx, 31, 0x1461C0u);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x1461B8u, 0x1461C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1461C0u;
label_1461c0:
    // 0x1461c0: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1461C0u;
    {
        const bool branch_taken_0x1461c0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1461C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1461C0u;
        // 0x1461c4: 0x3043003f  andi        $v1, $v0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1461c0) {
            ctx->pc = 0x1461D4u;
            return;
        }
    }
    ctx->pc = 0x1461C8u;
    // 0x1461c8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1461C8u;
    {
        const bool branch_taken_0x1461c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1461c8) {
            ctx->pc = 0x1461D4u;
            return;
        }
    }
    ctx->pc = 0x1461D0u;
    // 0x1461d0: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x1461d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
    ctx->pc = 0x1461d4u;
}
