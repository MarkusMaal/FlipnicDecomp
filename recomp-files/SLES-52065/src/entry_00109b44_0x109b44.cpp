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

// Function: entry_00109b44
// Address: 0x109b44 - 0x109b60
void entry_00109b44_0x109b44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109b44_0x109b44");
#endif

    switch (ctx->pc) {
        case 0x109b50u: goto label_109b50;
        default: break;
    }

    ctx->pc = 0x109b44u;

label_109b44:
    // 0x109b44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x109b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109b48: 0xc0426e0  jal         func_109B80
    ctx->pc = 0x109B48u;
    SET_GPR_U32(ctx, 31, 0x109B50u);
    ctx->pc = 0x109B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109B48u;
    // 0x109b4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109B80u, 0x109B48u, 0x109B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109B50u;
label_109b50:
    // 0x109b50: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x109B50u;
    {
        const bool branch_taken_0x109b50 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x109b50) {
            ctx->pc = 0x109B60u;
            return;
        }
    }
    ctx->pc = 0x109B58u;
    // 0x109b58: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x109B58u;
    {
        const bool branch_taken_0x109b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109B58u;
        // 0x109b5c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109b58) {
            ctx->pc = 0x109B44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109b44;
        }
    }
    ctx->pc = 0x109B60u;
}
