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

// Function: entry_001218e8
// Address: 0x1218e8 - 0x121900
void entry_001218e8_0x1218e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001218e8_0x1218e8");
#endif

    ctx->pc = 0x1218e8u;

    // 0x1218e8: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1218E8u;
    {
        const bool branch_taken_0x1218e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1218e8) {
            ctx->pc = 0x121900u;
            return;
        }
    }
    ctx->pc = 0x1218F0u;
    // 0x1218f0: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1218f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1218f4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1218f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1218f8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1218F8u;
    {
        const bool branch_taken_0x1218f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1218FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1218F8u;
        // 0x1218fc: 0x24500050  addiu       $s0, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1218f8) {
            ctx->pc = 0x121918u;
            return;
        }
    }
    ctx->pc = 0x121900u;
}
