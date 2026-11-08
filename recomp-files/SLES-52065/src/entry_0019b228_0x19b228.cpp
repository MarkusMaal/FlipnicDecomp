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

// Function: entry_0019b228
// Address: 0x19b228 - 0x19b248
void entry_0019b228_0x19b228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b228_0x19b228");
#endif

    ctx->pc = 0x19b228u;

    // 0x19b228: 0x8e22067c  lw          $v0, 0x67C($s1)
    ctx->pc = 0x19b228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1660)));
    // 0x19b22c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x19b22cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19b230: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x19B230u;
    {
        const bool branch_taken_0x19b230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B230u;
        // 0x19b234: 0x2332021  addu        $a0, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b230) {
            ctx->pc = 0x19B1C4u;
            return;
        }
    }
    ctx->pc = 0x19B238u;
    // 0x19b238: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x19b238u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b23c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x19B23Cu;
    {
        const bool branch_taken_0x19b23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B23Cu;
        // 0x19b240: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b23c) {
            ctx->pc = 0x19B2B0u;
            return;
        }
    }
    ctx->pc = 0x19B244u;
    // 0x19b244: 0x2322021  addu        $a0, $s1, $s2
    ctx->pc = 0x19b244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    ctx->pc = 0x19b248u;
}
