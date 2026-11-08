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

// Function: entry_001f8cf0
// Address: 0x1f8cf0 - 0x1f8d18
void entry_001f8cf0_0x1f8cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f8cf0_0x1f8cf0");
#endif

    ctx->pc = 0x1f8cf0u;

    // 0x1f8cf0: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1f8cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1f8cf4: 0x26231680  addiu       $v1, $s1, 0x1680
    ctx->pc = 0x1f8cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 5760));
    // 0x1f8cf8: 0x24821b00  addiu       $v0, $a0, 0x1B00
    ctx->pc = 0x1f8cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 6912));
    // 0x1f8cfc: 0xac720004  sw          $s2, 0x4($v1)
    ctx->pc = 0x1f8cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 18));
    // 0x1f8d00: 0xac700008  sw          $s0, 0x8($v1)
    ctx->pc = 0x1f8d00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
    // 0x1f8d04: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8D04u;
    {
        const bool branch_taken_0x1f8d04 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8D04u;
        // 0x1f8d08: 0xac62001c  sw          $v0, 0x1C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8d04) {
            ctx->pc = 0x1F8D18u;
            return;
        }
    }
    ctx->pc = 0x1F8D0Cu;
    // 0x1f8d0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f8d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8d10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F8D10u;
    {
        const bool branch_taken_0x1f8d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8D10u;
        // 0x1f8d14: 0xac620014  sw          $v0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8d10) {
            ctx->pc = 0x1F8D1Cu;
            return;
        }
    }
    ctx->pc = 0x1F8D18u;
}
