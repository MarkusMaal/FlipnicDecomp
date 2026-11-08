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

// Function: entry_001f8bd8
// Address: 0x1f8bd8 - 0x1f8bf4
void entry_001f8bd8_0x1f8bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f8bd8_0x1f8bd8");
#endif

    ctx->pc = 0x1f8bd8u;

    // 0x1f8bd8: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F8BD8u;
    {
        const bool branch_taken_0x1f8bd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8BD8u;
        // 0x1f8bdc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8bd8) {
            ctx->pc = 0x1F8C04u;
            return;
        }
    }
    ctx->pc = 0x1F8BE0u;
    // 0x1f8be0: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8BE0u;
    {
        const bool branch_taken_0x1f8be0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8BE0u;
        // 0x1f8be4: 0xae60d6b8  sw          $zero, -0x2948($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4294956728), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8be0) {
            ctx->pc = 0x1F8BF4u;
            return;
        }
    }
    ctx->pc = 0x1F8BE8u;
    // 0x1f8be8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f8be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f8bec: 0x8c432bc0  lw          $v1, 0x2BC0($v0)
    ctx->pc = 0x1f8becu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x392BC0u));
    // 0x1f8bf0: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x1f8bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1f8bf4u;
}
