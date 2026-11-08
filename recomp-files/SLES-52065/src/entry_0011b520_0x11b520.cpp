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

// Function: entry_0011b520
// Address: 0x11b520 - 0x11b548
void entry_0011b520_0x11b520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b520_0x11b520");
#endif

    ctx->pc = 0x11b520u;

    // 0x11b520: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x11b520u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11b524: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x11B524u;
    {
        const bool branch_taken_0x11b524 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11b524) {
            ctx->pc = 0x11B548u;
            return;
        }
    }
    ctx->pc = 0x11B52Cu;
    // 0x11b52c: 0x15c00018  bnez        $t6, . + 4 + (0x18 << 2)
    ctx->pc = 0x11B52Cu;
    {
        const bool branch_taken_0x11b52c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B52Cu;
        // 0x11b530: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b52c) {
            ctx->pc = 0x11B590u;
            return;
        }
    }
    ctx->pc = 0x11B534u;
    // 0x11b534: 0x14e30016  bne         $a3, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x11B534u;
    {
        const bool branch_taken_0x11b534 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x11b534) {
            ctx->pc = 0x11B590u;
            return;
        }
    }
    ctx->pc = 0x11B53Cu;
    // 0x11b53c: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x11b53cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x11b540: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x11B540u;
    {
        const bool branch_taken_0x11b540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B540u;
        // 0x11b544: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b540) {
            ctx->pc = 0x11B590u;
            return;
        }
    }
    ctx->pc = 0x11B548u;
}
