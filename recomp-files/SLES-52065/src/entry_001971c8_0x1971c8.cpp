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

// Function: entry_001971c8
// Address: 0x1971c8 - 0x1971e4
void entry_001971c8_0x1971c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001971c8_0x1971c8");
#endif

    ctx->pc = 0x1971c8u;

    // 0x1971c8: 0x8ea20670  lw          $v0, 0x670($s5)
    ctx->pc = 0x1971c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1648)));
    // 0x1971cc: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1971ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1971d0: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1971D0u;
    {
        const bool branch_taken_0x1971d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1971D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1971D0u;
        // 0x1971d4: 0x2b29821  addu        $s3, $s5, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1971d0) {
            ctx->pc = 0x197184u;
            return;
        }
    }
    ctx->pc = 0x1971D8u;
    // 0x1971d8: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1971D8u;
    {
        const bool branch_taken_0x1971d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1971d8) {
            ctx->pc = 0x197300u;
            return;
        }
    }
    ctx->pc = 0x1971E0u;
    // 0x1971e0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1971e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1971e4u;
}
