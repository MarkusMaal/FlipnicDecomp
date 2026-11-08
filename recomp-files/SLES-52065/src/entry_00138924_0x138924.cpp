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

// Function: entry_00138924
// Address: 0x138924 - 0x13893c
void entry_00138924_0x138924(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138924_0x138924");
#endif

    ctx->pc = 0x138924u;

    // 0x138924: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x138924u;
    {
        const bool branch_taken_0x138924 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x138928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138924u;
        // 0x138928: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138924) {
            ctx->pc = 0x13893Cu;
            return;
        }
    }
    ctx->pc = 0x13892Cu;
    // 0x13892c: 0x8f8284f8  lw          $v0, -0x7B08($gp)
    ctx->pc = 0x13892cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935800)));
    // 0x138930: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x138930u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x138934: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x138934u;
    {
        const bool branch_taken_0x138934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138934u;
        // 0x138938: 0xae820020  sw          $v0, 0x20($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138934) {
            ctx->pc = 0x138950u;
            return;
        }
    }
    ctx->pc = 0x13893Cu;
}
