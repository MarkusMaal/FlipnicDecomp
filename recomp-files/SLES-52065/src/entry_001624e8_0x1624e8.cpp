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

// Function: entry_001624e8
// Address: 0x1624e8 - 0x162510
void entry_001624e8_0x1624e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001624e8_0x1624e8");
#endif

    ctx->pc = 0x1624e8u;

    // 0x1624e8: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x1624e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1624ec: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1624ECu;
    {
        const bool branch_taken_0x1624ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1624F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1624ECu;
        // 0x1624f0: 0x27a20170  addiu       $v0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1624ec) {
            ctx->pc = 0x1624B0u;
            return;
        }
    }
    ctx->pc = 0x1624F4u;
    // 0x1624f4: 0xae22033c  sw          $v0, 0x33C($s1)
    ctx->pc = 0x1624f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 828), GPR_U32(ctx, 2));
    // 0x1624f8: 0x8e220338  lw          $v0, 0x338($s1)
    ctx->pc = 0x1624f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    // 0x1624fc: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1624fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x162500: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x162500u;
    {
        const bool branch_taken_0x162500 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x162504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162500u;
        // 0x162504: 0x22843  sra         $a1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162500) {
            ctx->pc = 0x162510u;
            return;
        }
    }
    ctx->pc = 0x162508u;
    // 0x162508: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x162508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16250c: 0x22843  sra         $a1, $v0, 1
    ctx->pc = 0x16250cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
    ctx->pc = 0x162510u;
}
