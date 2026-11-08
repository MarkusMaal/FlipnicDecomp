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

// Function: entry_001a2468
// Address: 0x1a2468 - 0x1a2480
void entry_001a2468_0x1a2468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2468_0x1a2468");
#endif

    ctx->pc = 0x1a2468u;

    // 0x1a2468: 0x8e430670  lw          $v1, 0x670($s2)
    ctx->pc = 0x1a2468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
    // 0x1a246c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1a246cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1a2470: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x1a2470u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a2474: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A2474u;
    {
        const bool branch_taken_0x1a2474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2474) {
            ctx->pc = 0x1A2480u;
            return;
        }
    }
    ctx->pc = 0x1A247Cu;
    // 0x1a247c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a247cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a2480u;
}
