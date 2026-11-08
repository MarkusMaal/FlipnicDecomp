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

// Function: entry_001e5158
// Address: 0x1e5158 - 0x1e5168
void entry_001e5158_0x1e5158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5158_0x1e5158");
#endif

    ctx->pc = 0x1e5158u;

    // 0x1e5158: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E5158u;
    {
        const bool branch_taken_0x1e5158 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E515Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5158u;
        // 0x1e515c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5158) {
            ctx->pc = 0x1E5168u;
            return;
        }
    }
    ctx->pc = 0x1E5160u;
    // 0x1e5160: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x1E5160u;
    {
        const bool branch_taken_0x1e5160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5160u;
        // 0x1e5164: 0x3c0e821  addu        $sp, $fp, $zero (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5160) {
            ctx->pc = 0x1E52C8u;
            return;
        }
    }
    ctx->pc = 0x1E5168u;
}
