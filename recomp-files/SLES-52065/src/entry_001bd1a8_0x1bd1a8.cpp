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

// Function: entry_001bd1a8
// Address: 0x1bd1a8 - 0x1bd1d0
void entry_001bd1a8_0x1bd1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd1a8_0x1bd1a8");
#endif

    switch (ctx->pc) {
        case 0x1bd1c4u: goto label_1bd1c4;
        default: break;
    }

    ctx->pc = 0x1bd1a8u;

    // 0x1bd1a8: 0x8c710010  lw          $s1, 0x10($v1)
    ctx->pc = 0x1bd1a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1bd1ac: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1bd1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bd1b0: 0x90420020  lbu         $v0, 0x20($v0)
    ctx->pc = 0x1bd1b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1bd1b4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1BD1B4u;
    {
        const bool branch_taken_0x1bd1b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD1B4u;
        // 0x1bd1b8: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd1b4) {
            ctx->pc = 0x1BD20Cu;
            return;
        }
    }
    ctx->pc = 0x1BD1BCu;
    // 0x1bd1bc: 0xc06dd28  jal         func_1B74A0
    ctx->pc = 0x1BD1BCu;
    SET_GPR_U32(ctx, 31, 0x1BD1C4u);
    ctx->pc = 0x1B74A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B74A0u, 0x1BD1BCu, 0x1BD1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD1C4u;
label_1bd1c4:
    // 0x1bd1c4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bd1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bd1c8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1BD1C8u;
    {
        const bool branch_taken_0x1bd1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD1C8u;
        // 0x1bd1cc: 0xafa2003c  sw          $v0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd1c8) {
            ctx->pc = 0x1BD1F8u;
            return;
        }
    }
    ctx->pc = 0x1BD1D0u;
}
