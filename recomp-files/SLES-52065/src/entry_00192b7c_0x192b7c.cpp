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

// Function: entry_00192b7c
// Address: 0x192b7c - 0x192b98
void entry_00192b7c_0x192b7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192b7c_0x192b7c");
#endif

    ctx->pc = 0x192b7cu;

    // 0x192b7c: 0x34880  sll         $t1, $v1, 2
    ctx->pc = 0x192b7cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x192b80: 0x10a5821  addu        $t3, $t0, $t2
    ctx->pc = 0x192b80u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x192b84: 0x1094821  addu        $t1, $t0, $t1
    ctx->pc = 0x192b84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x192b88: 0x8d2a0044  lw          $t2, 0x44($t1)
    ctx->pc = 0x192b88u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 68)));
    // 0x192b8c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x192b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192b90: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x192B90u;
    {
        const bool branch_taken_0x192b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192B90u;
        // 0x192b94: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192b90) {
            ctx->pc = 0x192BFCu;
            return;
        }
    }
    ctx->pc = 0x192B98u;
}
