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

// Function: entry_001fabc8
// Address: 0x1fabc8 - 0x1fabec
void entry_001fabc8_0x1fabc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fabc8_0x1fabc8");
#endif

    ctx->pc = 0x1fabc8u;

label_1fabc8:
    // 0x1fabc8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1fabc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1fabcc: 0x2652fff8  addiu       $s2, $s2, -0x8
    ctx->pc = 0x1fabccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
    // 0x1fabd0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1fabd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1fabd4: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1fabd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1fabd8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1fabd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fabdc: 0x1080fffa  beqz        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FABDCu;
    {
        const bool branch_taken_0x1fabdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fabdc) {
            ctx->pc = 0x1FABC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fabc8;
        }
    }
    ctx->pc = 0x1FABE4u;
    // 0x1fabe4: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1FABE4u;
    {
        const bool branch_taken_0x1fabe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fabe4) {
            ctx->pc = 0x1FAC74u;
            return;
        }
    }
    ctx->pc = 0x1FABECu;
}
