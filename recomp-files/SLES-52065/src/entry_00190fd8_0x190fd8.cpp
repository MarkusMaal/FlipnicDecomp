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

// Function: entry_00190fd8
// Address: 0x190fd8 - 0x190ff0
void entry_00190fd8_0x190fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190fd8_0x190fd8");
#endif

    ctx->pc = 0x190fd8u;

    // 0x190fd8: 0x8e03032c  lw          $v1, 0x32C($s0)
    ctx->pc = 0x190fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 812)));
    // 0x190fdc: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x190fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x190fe0: 0x106201ad  beq         $v1, $v0, . + 4 + (0x1AD << 2)
    ctx->pc = 0x190FE0u;
    {
        const bool branch_taken_0x190fe0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x190fe0) {
            ctx->pc = 0x191698u;
            return;
        }
    }
    ctx->pc = 0x190FE8u;
    // 0x190fe8: 0x100001ac  b           . + 4 + (0x1AC << 2)
    ctx->pc = 0x190FE8u;
    {
        const bool branch_taken_0x190fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190FE8u;
        // 0x190fec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190fe8) {
            ctx->pc = 0x19169Cu;
            return;
        }
    }
    ctx->pc = 0x190FF0u;
}
