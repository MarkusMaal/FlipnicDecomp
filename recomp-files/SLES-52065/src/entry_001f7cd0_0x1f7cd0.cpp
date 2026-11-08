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

// Function: entry_001f7cd0
// Address: 0x1f7cd0 - 0x1f7d00
void entry_001f7cd0_0x1f7cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f7cd0_0x1f7cd0");
#endif

    ctx->pc = 0x1f7cd0u;

    // 0x1f7cd0: 0xac80bb24  sw          $zero, -0x44DC($a0)
    ctx->pc = 0x1f7cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294949668), GPR_U32(ctx, 0));
    // 0x1f7cd4: 0x6600015  bltz        $s3, . + 4 + (0x15 << 2)
    ctx->pc = 0x1F7CD4u;
    {
        const bool branch_taken_0x1f7cd4 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x1F7CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7CD4u;
        // 0x1f7cd8: 0x2a620002  slti        $v0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7cd4) {
            ctx->pc = 0x1F7D2Cu;
            return;
        }
    }
    ctx->pc = 0x1F7CDCu;
    // 0x1f7cdc: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F7CDCu;
    {
        const bool branch_taken_0x1f7cdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7CDCu;
        // 0x1f7ce0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7cdc) {
            ctx->pc = 0x1F7D2Cu;
            return;
        }
    }
    ctx->pc = 0x1F7CE4u;
    // 0x1f7ce4: 0x16620011  bne         $s3, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F7CE4u;
    {
        const bool branch_taken_0x1f7ce4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F7CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7CE4u;
        // 0x1f7ce8: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7ce4) {
            ctx->pc = 0x1F7D2Cu;
            return;
        }
    }
    ctx->pc = 0x1F7CECu;
    // 0x1f7cec: 0x8c43bb10  lw          $v1, -0x44F0($v0)
    ctx->pc = 0x1f7cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949648)));
    // 0x1f7cf0: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F7CF0u;
    {
        const bool branch_taken_0x1f7cf0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1F7CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7CF0u;
        // 0x1f7cf4: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7cf0) {
            ctx->pc = 0x1F7D00u;
            return;
        }
    }
    ctx->pc = 0x1F7CF8u;
    // 0x1f7cf8: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x1F7CF8u;
    SET_GPR_U32(ctx, 31, 0x1F7D00u);
    ctx->pc = 0x1F7CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7CF8u;
    // 0x1f7cfc: 0x248447b8  addiu       $a0, $a0, 0x47B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x1F7CF8u, 0x1F7D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7D00u;
}
