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

// Function: entry_001bc2bc
// Address: 0x1bc2bc - 0x1bc2e0
void entry_001bc2bc_0x1bc2bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc2bc_0x1bc2bc");
#endif

    switch (ctx->pc) {
        case 0x1bc2d4u: goto label_1bc2d4;
        default: break;
    }

    ctx->pc = 0x1bc2bcu;

    // 0x1bc2bc: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x1bc2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1bc2c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bc2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bc2c4: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x1bc2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x1bc2c8: 0x8ec50004  lw          $a1, 0x4($s6)
    ctx->pc = 0x1bc2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x1bc2cc: 0xc048dec  jal         func_1237B0
    ctx->pc = 0x1BC2CCu;
    SET_GPR_U32(ctx, 31, 0x1BC2D4u);
    ctx->pc = 0x1BC2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC2CCu;
    // 0x1bc2d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1237B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1237B0u, 0x1BC2CCu, 0x1BC2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC2D4u;
label_1bc2d4:
    // 0x1bc2d4: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BC2D4u;
    {
        const bool branch_taken_0x1bc2d4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC2D4u;
        // 0x1bc2d8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc2d4) {
            ctx->pc = 0x1BC2E0u;
            return;
        }
    }
    ctx->pc = 0x1BC2DCu;
    // 0x1bc2dc: 0xaed0000c  sw          $s0, 0xC($s6)
    ctx->pc = 0x1bc2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 16));
    ctx->pc = 0x1bc2e0u;
}
