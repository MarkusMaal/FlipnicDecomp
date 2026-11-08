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

// Function: entry_001f8ef0
// Address: 0x1f8ef0 - 0x1f8f00
void entry_001f8ef0_0x1f8ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f8ef0_0x1f8ef0");
#endif

    switch (ctx->pc) {
        case 0x1f8ef8u: goto label_1f8ef8;
        default: break;
    }

    ctx->pc = 0x1f8ef0u;

    // 0x1f8ef0: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F8EF0u;
    SET_GPR_U32(ctx, 31, 0x1F8EF8u);
    ctx->pc = 0x1F8EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8EF0u;
    // 0x1f8ef4: 0x8ea4d6bc  lw          $a0, -0x2944($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F8EF0u, 0x1F8EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8EF8u;
label_1f8ef8:
    // 0x1f8ef8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1F8EF8u;
    {
        const bool branch_taken_0x1f8ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8EF8u;
        // 0x1f8efc: 0x2402ff2e  addiu       $v0, $zero, -0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8ef8) {
            ctx->pc = 0x1F8F8Cu;
            return;
        }
    }
    ctx->pc = 0x1F8F00u;
}
