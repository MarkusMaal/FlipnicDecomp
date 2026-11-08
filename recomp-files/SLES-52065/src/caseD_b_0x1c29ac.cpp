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

// Function: caseD_b
// Address: 0x1c29ac - 0x1c29c0
void caseD_b_0x1c29ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_b_0x1c29ac");
#endif

    switch (ctx->pc) {
        case 0x1c29b4u: goto label_1c29b4;
        default: break;
    }

    ctx->pc = 0x1c29acu;

    // 0x1c29ac: 0xc0746b4  jal         func_1D1AD0
    ctx->pc = 0x1C29ACu;
    SET_GPR_U32(ctx, 31, 0x1C29B4u);
    ctx->pc = 0x1C29B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C29ACu;
    // 0x1c29b0: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1AD0u, 0x1C29ACu, 0x1C29B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C29B4u;
label_1c29b4:
    // 0x1c29b4: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1c29b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c29b8: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x1C29B8u;
    {
        const bool branch_taken_0x1c29b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C29BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C29B8u;
        // 0x1c29bc: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c29b8) {
            ctx->pc = 0x1C2C70u;
            return;
        }
    }
    ctx->pc = 0x1C29C0u;
}
