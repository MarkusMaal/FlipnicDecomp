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

// Function: entry_0019d518
// Address: 0x19d518 - 0x19d534
void entry_0019d518_0x19d518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d518_0x19d518");
#endif

    ctx->pc = 0x19d518u;

    // 0x19d518: 0x8ea30670  lw          $v1, 0x670($s5)
    ctx->pc = 0x19d518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1648)));
    // 0x19d51c: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x19d51cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x19d520: 0x1460ffc3  bnez        $v1, . + 4 + (-0x3D << 2)
    ctx->pc = 0x19D520u;
    {
        const bool branch_taken_0x19d520 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D520u;
        // 0x19d524: 0x2b11821  addu        $v1, $s5, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d520) {
            ctx->pc = 0x19D430u;
            return;
        }
    }
    ctx->pc = 0x19D528u;
    // 0x19d528: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x19D528u;
    {
        const bool branch_taken_0x19d528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D528u;
        // 0x19d52c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d528) {
            ctx->pc = 0x19D73Cu;
            return;
        }
    }
    ctx->pc = 0x19D530u;
    // 0x19d530: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x19d530u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    ctx->pc = 0x19d534u;
}
