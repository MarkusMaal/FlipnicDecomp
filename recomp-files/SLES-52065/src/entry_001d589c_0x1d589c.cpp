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

// Function: entry_001d589c
// Address: 0x1d589c - 0x1d58b0
void entry_001d589c_0x1d589c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d589c_0x1d589c");
#endif

    switch (ctx->pc) {
        case 0x1d58acu: goto label_1d58ac;
        default: break;
    }

    ctx->pc = 0x1d589cu;

    // 0x1d589c: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D589Cu;
    {
        const bool branch_taken_0x1d589c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D58A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D589Cu;
        // 0x1d58a0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d589c) {
            ctx->pc = 0x1D58B0u;
            return;
        }
    }
    ctx->pc = 0x1D58A4u;
    // 0x1d58a4: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1D58A4u;
    SET_GPR_U32(ctx, 31, 0x1D58ACu);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1D58A4u, 0x1D58ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D58ACu;
label_1d58ac:
    // 0x1d58ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d58acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1d58b0u;
}
