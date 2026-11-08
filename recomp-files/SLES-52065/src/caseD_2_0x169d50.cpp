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

// Function: caseD_2
// Address: 0x169d50 - 0x169d68
void caseD_2_0x169d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x169d50");
#endif

    switch (ctx->pc) {
        case 0x169d64u: goto label_169d64;
        default: break;
    }

    ctx->pc = 0x169d50u;

    // 0x169d50: 0x8e020224  lw          $v0, 0x224($s0)
    ctx->pc = 0x169d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x169d54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x169D54u;
    {
        const bool branch_taken_0x169d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169D54u;
        // 0x169d58: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169d54) {
            ctx->pc = 0x169D68u;
            return;
        }
    }
    ctx->pc = 0x169D5Cu;
    // 0x169d5c: 0xc05a798  jal         func_169E60
    ctx->pc = 0x169D5Cu;
    SET_GPR_U32(ctx, 31, 0x169D64u);
    ctx->pc = 0x169D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169D5Cu;
    // 0x169d60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169E60u, 0x169D5Cu, 0x169D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169D64u;
label_169d64:
    // 0x169d64: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x169d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    ctx->pc = 0x169d68u;
}
