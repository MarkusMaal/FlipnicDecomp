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

// Function: caseD_2
// Address: 0x1c2668 - 0x1c2680
void caseD_2_0x1c2668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x1c2668");
#endif

    ctx->pc = 0x1c2668u;

    // 0x1c2668: 0x8e220094  lw          $v0, 0x94($s1)
    ctx->pc = 0x1c2668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x1c266c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c266cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c2670: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C2670u;
    {
        const bool branch_taken_0x1c2670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1C2674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2670u;
        // 0x1c2674: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2670) {
            ctx->pc = 0x1C2680u;
            return;
        }
    }
    ctx->pc = 0x1C2678u;
    // 0x1c2678: 0x1000017d  b           . + 4 + (0x17D << 2)
    ctx->pc = 0x1C2678u;
    {
        const bool branch_taken_0x1c2678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C267Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2678u;
        // 0x1c267c: 0xae250248  sw          $a1, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2678) {
            ctx->pc = 0x1C2C70u;
            return;
        }
    }
    ctx->pc = 0x1C2680u;
}
