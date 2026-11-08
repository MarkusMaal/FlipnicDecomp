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

// Function: caseD_a
// Address: 0x1eaa14 - 0x1eaa2c
void caseD_a_0x1eaa14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_a_0x1eaa14");
#endif

    switch (ctx->pc) {
        case 0x1eaa20u: goto label_1eaa20;
        default: break;
    }

    ctx->pc = 0x1eaa14u;

    // 0x1eaa14: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x1eaa14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1eaa18: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1EAA18u;
    SET_GPR_U32(ctx, 31, 0x1EAA20u);
    ctx->pc = 0x1EAA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAA18u;
    // 0x1eaa1c: 0x27a50084  addiu       $a1, $sp, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EAA18u, 0x1EAA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAA20u;
label_1eaa20:
    // 0x1eaa20: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1eaa20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1eaa24: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1EAA24u;
    {
        const bool branch_taken_0x1eaa24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAA24u;
        // 0x1eaa28: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaa24) {
            ctx->pc = 0x1EAB14u;
            return;
        }
    }
    ctx->pc = 0x1EAA2Cu;
}
