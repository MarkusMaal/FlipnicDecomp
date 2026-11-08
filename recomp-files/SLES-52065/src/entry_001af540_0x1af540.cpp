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

// Function: entry_001af540
// Address: 0x1af540 - 0x1af554
void entry_001af540_0x1af540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001af540_0x1af540");
#endif

    ctx->pc = 0x1af540u;

    // 0x1af540: 0x8e092848  lw          $t1, 0x2848($s0)
    ctx->pc = 0x1af540u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10312)));
    // 0x1af544: 0x292103e8  slti        $at, $t1, 0x3E8
    ctx->pc = 0x1af544u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x1af548: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AF548u;
    {
        const bool branch_taken_0x1af548 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF548u;
        // 0x1af54c: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af548) {
            ctx->pc = 0x1AF554u;
            return;
        }
    }
    ctx->pc = 0x1AF550u;
    // 0x1af550: 0x240903e7  addiu       $t1, $zero, 0x3E7
    ctx->pc = 0x1af550u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    ctx->pc = 0x1af554u;
}
