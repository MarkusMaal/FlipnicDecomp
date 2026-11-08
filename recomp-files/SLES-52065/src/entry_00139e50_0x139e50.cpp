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

// Function: entry_00139e50
// Address: 0x139e50 - 0x139e68
void entry_00139e50_0x139e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139e50_0x139e50");
#endif

    switch (ctx->pc) {
        case 0x139e58u: goto label_139e58;
        default: break;
    }

    ctx->pc = 0x139e50u;

    // 0x139e50: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x139E50u;
    SET_GPR_U32(ctx, 31, 0x139E58u);
    ctx->pc = 0x139E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139E50u;
    // 0x139e54: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x139E50u, 0x139E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139E58u;
label_139e58:
    // 0x139e58: 0xae220068  sw          $v0, 0x68($s1)
    ctx->pc = 0x139e58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
    // 0x139e5c: 0x8e230068  lw          $v1, 0x68($s1)
    ctx->pc = 0x139e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x139e60: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x139E60u;
    {
        const bool branch_taken_0x139e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139E60u;
        // 0x139e64: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139e60) {
            ctx->pc = 0x139F7Cu;
            return;
        }
    }
    ctx->pc = 0x139E68u;
}
