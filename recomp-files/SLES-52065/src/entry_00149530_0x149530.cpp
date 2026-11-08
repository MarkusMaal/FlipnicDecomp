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

// Function: entry_00149530
// Address: 0x149530 - 0x149550
void entry_00149530_0x149530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149530_0x149530");
#endif

    ctx->pc = 0x149530u;

    // 0x149530: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x149530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x149534: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x149534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x149538: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x149538u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x14953c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14953cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x149540: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x149540u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x149544: 0x82082b  sltu        $at, $a0, $v0
    ctx->pc = 0x149544u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x149548: 0x1020ffed  beqz        $at, . + 4 + (-0x13 << 2)
    ctx->pc = 0x149548u;
    {
        const bool branch_taken_0x149548 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x149548) {
            ctx->pc = 0x149500u;
            return;
        }
    }
    ctx->pc = 0x149550u;
}
