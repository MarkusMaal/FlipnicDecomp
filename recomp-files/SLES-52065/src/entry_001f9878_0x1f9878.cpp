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

// Function: entry_001f9878
// Address: 0x1f9878 - 0x1f9888
void entry_001f9878_0x1f9878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f9878_0x1f9878");
#endif

    switch (ctx->pc) {
        case 0x1f9880u: goto label_1f9880;
        default: break;
    }

    ctx->pc = 0x1f9878u;

    // 0x1f9878: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F9878u;
    SET_GPR_U32(ctx, 31, 0x1F9880u);
    ctx->pc = 0x1F987Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9878u;
    // 0x1f987c: 0x8e24d6bc  lw          $a0, -0x2944($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F9878u, 0x1F9880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9880u;
label_1f9880:
    // 0x1f9880: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1F9880u;
    {
        const bool branch_taken_0x1f9880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9880u;
        // 0x1f9884: 0x2402ff2e  addiu       $v0, $zero, -0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9880) {
            ctx->pc = 0x1F98F8u;
            return;
        }
    }
    ctx->pc = 0x1F9888u;
}
