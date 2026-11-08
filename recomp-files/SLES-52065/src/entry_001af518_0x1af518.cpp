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

// Function: entry_001af518
// Address: 0x1af518 - 0x1af52c
void entry_001af518_0x1af518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001af518_0x1af518");
#endif

    ctx->pc = 0x1af518u;

    // 0x1af518: 0x8e072840  lw          $a3, 0x2840($s0)
    ctx->pc = 0x1af518u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10304)));
    // 0x1af51c: 0x28e103e8  slti        $at, $a3, 0x3E8
    ctx->pc = 0x1af51cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x1af520: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AF520u;
    {
        const bool branch_taken_0x1af520 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af520) {
            ctx->pc = 0x1AF52Cu;
            return;
        }
    }
    ctx->pc = 0x1AF528u;
    // 0x1af528: 0x240703e7  addiu       $a3, $zero, 0x3E7
    ctx->pc = 0x1af528u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    ctx->pc = 0x1af52cu;
}
