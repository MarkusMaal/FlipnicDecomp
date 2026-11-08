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

// Function: entry_0019f5a8
// Address: 0x19f5a8 - 0x19f5c8
void entry_0019f5a8_0x19f5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f5a8_0x19f5a8");
#endif

    switch (ctx->pc) {
        case 0x19f5c0u: goto label_19f5c0;
        default: break;
    }

    ctx->pc = 0x19f5a8u;

    // 0x19f5a8: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x19f5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x19f5ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f5acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f5b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19f5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f5b4: 0xa040002e  sb          $zero, 0x2E($v0)
    ctx->pc = 0x19f5b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 46), (uint8_t)GPR_U32(ctx, 0));
    // 0x19f5b8: 0xc063e08  jal         func_18F820
    ctx->pc = 0x19F5B8u;
    SET_GPR_U32(ctx, 31, 0x19F5C0u);
    ctx->pc = 0x19F5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F5B8u;
    // 0x19f5bc: 0xaf80831c  sw          $zero, -0x7CE4($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935324), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19F5B8u, 0x19F5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F5C0u;
label_19f5c0:
    // 0x19f5c0: 0x10000100  b           . + 4 + (0x100 << 2)
    ctx->pc = 0x19F5C0u;
    {
        const bool branch_taken_0x19f5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f5c0) {
            ctx->pc = 0x19F9C4u;
            return;
        }
    }
    ctx->pc = 0x19F5C8u;
}
