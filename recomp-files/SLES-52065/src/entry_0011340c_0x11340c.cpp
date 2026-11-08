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

// Function: entry_0011340c
// Address: 0x11340c - 0x11342c
void entry_0011340c_0x11340c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011340c_0x11340c");
#endif

    ctx->pc = 0x11340cu;

    // 0x11340c: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x11340cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x113410: 0x1464001a  bne         $v1, $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x113410u;
    {
        const bool branch_taken_0x113410 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x113410) {
            ctx->pc = 0x11347Cu;
            return;
        }
    }
    ctx->pc = 0x113418u;
    // 0x113418: 0x8f8685f4  lw          $a2, -0x7A0C($gp)
    ctx->pc = 0x113418u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x11341c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11341cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113420: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x113420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x113424: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x113424u;
    {
        const bool branch_taken_0x113424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113424u;
        // 0x113428: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113424) {
            ctx->pc = 0x113470u;
            return;
        }
    }
    ctx->pc = 0x11342Cu;
}
