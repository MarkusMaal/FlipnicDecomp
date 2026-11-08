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

// Function: entry_00168040
// Address: 0x168040 - 0x168060
void entry_00168040_0x168040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168040_0x168040");
#endif

    ctx->pc = 0x168040u;

    // 0x168040: 0x84820226  lh          $v0, 0x226($a0)
    ctx->pc = 0x168040u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 550)));
    // 0x168044: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x168044u;
    {
        const bool branch_taken_0x168044 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x168048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168044u;
        // 0x168048: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168044) {
            ctx->pc = 0x168064u;
            return;
        }
    }
    ctx->pc = 0x16804Cu;
    // 0x16804c: 0x84820224  lh          $v0, 0x224($a0)
    ctx->pc = 0x16804cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x168050: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x168050u;
    {
        const bool branch_taken_0x168050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x168054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168050u;
        // 0x168054: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168050) {
            ctx->pc = 0x168060u;
            return;
        }
    }
    ctx->pc = 0x168058u;
    // 0x168058: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x168058u;
    {
        const bool branch_taken_0x168058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168058) {
            ctx->pc = 0x168064u;
            return;
        }
    }
    ctx->pc = 0x168060u;
}
