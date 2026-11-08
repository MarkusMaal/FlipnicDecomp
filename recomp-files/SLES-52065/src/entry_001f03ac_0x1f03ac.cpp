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

// Function: entry_001f03ac
// Address: 0x1f03ac - 0x1f03d4
void entry_001f03ac_0x1f03ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f03ac_0x1f03ac");
#endif

    ctx->pc = 0x1f03acu;

    // 0x1f03ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f03acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f03b0: 0x12220029  beq         $s1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1F03B0u;
    {
        const bool branch_taken_0x1f03b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F03B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F03B0u;
        // 0x1f03b4: 0xae600418  sw          $zero, 0x418($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1048), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f03b0) {
            ctx->pc = 0x1F0458u;
            return;
        }
    }
    ctx->pc = 0x1F03B8u;
    // 0x1f03b8: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x1f03b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1f03bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F03BCu;
    {
        const bool branch_taken_0x1f03bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F03C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F03BCu;
        // 0x1f03c0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f03bc) {
            ctx->pc = 0x1F03D4u;
            return;
        }
    }
    ctx->pc = 0x1F03C4u;
    // 0x1f03c4: 0x52350007  beql        $s1, $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F03C4u;
    {
        const bool branch_taken_0x1f03c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 21));
        if (branch_taken_0x1f03c4) {
            ctx->pc = 0x1F03C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F03C4u;
            // 0x1f03c8: 0x3c100022  lui         $s0, 0x22 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F03E4u;
            return;
        }
    }
    ctx->pc = 0x1F03CCu;
    // 0x1f03cc: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1F03CCu;
    {
        const bool branch_taken_0x1f03cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F03D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F03CCu;
        // 0x1f03d0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f03cc) {
            ctx->pc = 0x1F04C0u;
            return;
        }
    }
    ctx->pc = 0x1F03D4u;
}
