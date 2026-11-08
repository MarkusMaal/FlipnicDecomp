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

// Function: entry_0018faa8
// Address: 0x18faa8 - 0x18fad4
void entry_0018faa8_0x18faa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018faa8_0x18faa8");
#endif

    ctx->pc = 0x18faa8u;

    // 0x18faa8: 0x8d040254  lw          $a0, 0x254($t0)
    ctx->pc = 0x18faa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 596)));
    // 0x18faac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x18faacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18fab0: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x18FAB0u;
    {
        const bool branch_taken_0x18fab0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x18fab0) {
            ctx->pc = 0x18FB04u;
            return;
        }
    }
    ctx->pc = 0x18FAB8u;
    // 0x18fab8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x18fab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18fabc: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x18FABCu;
    {
        const bool branch_taken_0x18fabc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x18fabc) {
            ctx->pc = 0x18FAF0u;
            return;
        }
    }
    ctx->pc = 0x18FAC4u;
    // 0x18fac4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18FAC4u;
    {
        const bool branch_taken_0x18fac4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fac4) {
            ctx->pc = 0x18FAD4u;
            return;
        }
    }
    ctx->pc = 0x18FACCu;
    // 0x18facc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x18FACCu;
    {
        const bool branch_taken_0x18facc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18facc) {
            ctx->pc = 0x18FB04u;
            return;
        }
    }
    ctx->pc = 0x18FAD4u;
}
