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

// Function: entry_001906c8
// Address: 0x1906c8 - 0x1906e8
void entry_001906c8_0x1906c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001906c8_0x1906c8");
#endif

    switch (ctx->pc) {
        case 0x1906d8u: goto label_1906d8;
        default: break;
    }

    ctx->pc = 0x1906c8u;

    // 0x1906c8: 0x8f848380  lw          $a0, -0x7C80($gp)
    ctx->pc = 0x1906c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935424)));
    // 0x1906cc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1906ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1906d0: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x1906D0u;
    SET_GPR_U32(ctx, 31, 0x1906D8u);
    ctx->pc = 0x1906D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1906D0u;
    // 0x1906d4: 0x24a5fdf8  addiu       $a1, $a1, -0x208 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x1906D0u, 0x1906D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1906D8u;
label_1906d8:
    // 0x1906d8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1906D8u;
    {
        const bool branch_taken_0x1906d8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1906DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1906D8u;
        // 0x1906dc: 0x8f858380  lw          $a1, -0x7C80($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1906d8) {
            ctx->pc = 0x1906E8u;
            return;
        }
    }
    ctx->pc = 0x1906E0u;
    // 0x1906e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1906E0u;
    {
        const bool branch_taken_0x1906e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1906E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1906E0u;
        // 0x1906e4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1906e0) {
            ctx->pc = 0x190700u;
            return;
        }
    }
    ctx->pc = 0x1906E8u;
}
