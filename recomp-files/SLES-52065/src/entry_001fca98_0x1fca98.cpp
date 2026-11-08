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

// Function: entry_001fca98
// Address: 0x1fca98 - 0x1fcabc
void entry_001fca98_0x1fca98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fca98_0x1fca98");
#endif

    ctx->pc = 0x1fca98u;

label_1fca98:
    // 0x1fca98: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x1fca98u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x1fca9c: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x1fca9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1fcaa0: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x1fcaa0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1fcaa4: 0x0  nop
    ctx->pc = 0x1fcaa4u;
    // NOP
    // 0x1fcaa8: 0x0  nop
    ctx->pc = 0x1fcaa8u;
    // NOP
    // 0x1fcaac: 0x1043fffa  beq         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FCAACu;
    {
        const bool branch_taken_0x1fcaac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1fcaac) {
            ctx->pc = 0x1FCA98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fca98;
        }
    }
    ctx->pc = 0x1FCAB4u;
    // 0x1fcab4: 0x10000233  b           . + 4 + (0x233 << 2)
    ctx->pc = 0x1FCAB4u;
    {
        const bool branch_taken_0x1fcab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCAB4u;
        // 0x1fcab8: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcab4) {
            ctx->pc = 0x1FD384u;
            return;
        }
    }
    ctx->pc = 0x1FCABCu;
}
