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

// Function: entry_001c3d6c
// Address: 0x1c3d6c - 0x1c3d84
void entry_001c3d6c_0x1c3d6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3d6c_0x1c3d6c");
#endif

    switch (ctx->pc) {
        case 0x1c3d78u: goto label_1c3d78;
        default: break;
    }

    ctx->pc = 0x1c3d6cu;

    // 0x1c3d6c: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x1c3d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1c3d70: 0xc0747ec  jal         func_1D1FB0
    ctx->pc = 0x1C3D70u;
    SET_GPR_U32(ctx, 31, 0x1C3D78u);
    ctx->pc = 0x1C3D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3D70u;
    // 0x1c3d74: 0x24a51c28  addiu       $a1, $a1, 0x1C28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1FB0u, 0x1C3D70u, 0x1C3D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3D78u;
label_1c3d78:
    // 0x1c3d78: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x1c3d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1c3d7c: 0x100001a2  b           . + 4 + (0x1A2 << 2)
    ctx->pc = 0x1C3D7Cu;
    {
        const bool branch_taken_0x1c3d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3D7Cu;
        // 0x1c3d80: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3d7c) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C3D84u;
}
