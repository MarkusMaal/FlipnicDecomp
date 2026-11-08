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

// Function: entry_0019f0c0
// Address: 0x19f0c0 - 0x19f0f0
void entry_0019f0c0_0x19f0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f0c0_0x19f0c0");
#endif

    switch (ctx->pc) {
        case 0x19f0e8u: goto label_19f0e8;
        default: break;
    }

    ctx->pc = 0x19f0c0u;

    // 0x19f0c0: 0x8e82068c  lw          $v0, 0x68C($s4)
    ctx->pc = 0x19f0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1676)));
    // 0x19f0c4: 0x1040023f  beqz        $v0, . + 4 + (0x23F << 2)
    ctx->pc = 0x19F0C4u;
    {
        const bool branch_taken_0x19f0c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f0c4) {
            ctx->pc = 0x19F9C4u;
            return;
        }
    }
    ctx->pc = 0x19F0CCu;
    // 0x19f0cc: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x19f0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x19f0d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19f0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f0d4: 0xaf83831c  sw          $v1, -0x7CE4($gp)
    ctx->pc = 0x19f0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935324), GPR_U32(ctx, 3));
    // 0x19f0d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f0d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f0dc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x19f0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19f0e0: 0xc063e08  jal         func_18F820
    ctx->pc = 0x19F0E0u;
    SET_GPR_U32(ctx, 31, 0x19F0E8u);
    ctx->pc = 0x19F0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F0E0u;
    // 0x19f0e4: 0xa043002e  sb          $v1, 0x2E($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 46), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19F0E0u, 0x19F0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F0E8u;
label_19f0e8:
    // 0x19f0e8: 0x10000236  b           . + 4 + (0x236 << 2)
    ctx->pc = 0x19F0E8u;
    {
        const bool branch_taken_0x19f0e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f0e8) {
            ctx->pc = 0x19F9C4u;
            return;
        }
    }
    ctx->pc = 0x19F0F0u;
}
