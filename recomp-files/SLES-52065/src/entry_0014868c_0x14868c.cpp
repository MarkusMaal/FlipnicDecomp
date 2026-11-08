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

// Function: entry_0014868c
// Address: 0x14868c - 0x1486a8
void entry_0014868c_0x14868c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014868c_0x14868c");
#endif

    ctx->pc = 0x14868cu;

    // 0x14868c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x14868cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x148690: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x148690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x148694: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x148694u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x148698: 0x201880a  movz        $s1, $s0, $at
    ctx->pc = 0x148698u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 16));
    // 0x14869c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14869Cu;
    {
        const bool branch_taken_0x14869c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1486A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14869Cu;
        // 0x1486a0: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14869c) {
            ctx->pc = 0x1486A8u;
            return;
        }
    }
    ctx->pc = 0x1486A4u;
    // 0x1486a4: 0x24021388  addiu       $v0, $zero, 0x1388
    ctx->pc = 0x1486a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5000));
    ctx->pc = 0x1486a8u;
}
