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

// Function: entry_00190df8
// Address: 0x190df8 - 0x190e10
void entry_00190df8_0x190df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190df8_0x190df8");
#endif

    ctx->pc = 0x190df8u;

    // 0x190df8: 0x8e030320  lw          $v1, 0x320($s0)
    ctx->pc = 0x190df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x190dfc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x190dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x190e00: 0x10620226  beq         $v1, $v0, . + 4 + (0x226 << 2)
    ctx->pc = 0x190E00u;
    {
        const bool branch_taken_0x190e00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x190E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E00u;
        // 0x190e04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190e00) {
            ctx->pc = 0x19169Cu;
            return;
        }
    }
    ctx->pc = 0x190E08u;
    // 0x190e08: 0x10000224  b           . + 4 + (0x224 << 2)
    ctx->pc = 0x190E08u;
    {
        const bool branch_taken_0x190e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E08u;
        // 0x190e0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190e08) {
            ctx->pc = 0x19169Cu;
            return;
        }
    }
    ctx->pc = 0x190E10u;
}
