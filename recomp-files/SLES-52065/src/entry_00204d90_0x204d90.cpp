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

// Function: entry_00204d90
// Address: 0x204d90 - 0x204db8
void entry_00204d90_0x204d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204d90_0x204d90");
#endif

    ctx->pc = 0x204d90u;

    // 0x204d90: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x204d90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x204d94: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x204d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x204d98: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x204d98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x204d9c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x204d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x204da0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x204da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x204da4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x204da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x204da8: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x204da8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x204dac: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x204dacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x204db0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x204DB0u;
    {
        const bool branch_taken_0x204db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204DB0u;
        // 0x204db4: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204db0) {
            ctx->pc = 0x204DE0u;
            return;
        }
    }
    ctx->pc = 0x204DB8u;
}
