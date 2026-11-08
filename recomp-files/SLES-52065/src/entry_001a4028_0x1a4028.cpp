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

// Function: entry_001a4028
// Address: 0x1a4028 - 0x1a4048
void entry_001a4028_0x1a4028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4028_0x1a4028");
#endif

    ctx->pc = 0x1a4028u;

    // 0x1a4028: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x1a4028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1a402c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a402cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a4030: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A4030u;
    {
        const bool branch_taken_0x1a4030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a4030) {
            ctx->pc = 0x1A4058u;
            return;
        }
    }
    ctx->pc = 0x1A4038u;
    // 0x1a4038: 0x14c20003  bne         $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4038u;
    {
        const bool branch_taken_0x1a4038 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a4038) {
            ctx->pc = 0x1A4048u;
            return;
        }
    }
    ctx->pc = 0x1A4040u;
    // 0x1a4040: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A4040u;
    {
        const bool branch_taken_0x1a4040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4040u;
        // 0x1a4044: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4040) {
            ctx->pc = 0x1A4058u;
            return;
        }
    }
    ctx->pc = 0x1A4048u;
}
