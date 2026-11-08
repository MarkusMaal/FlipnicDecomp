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

// Function: entry_0011b414
// Address: 0x11b414 - 0x11b430
void entry_0011b414_0x11b414(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b414_0x11b414");
#endif

    ctx->pc = 0x11b414u;

    // 0x11b414: 0x0  nop
    ctx->pc = 0x11b414u;
    // NOP
    // 0x11b418: 0x160a0005  bne         $s0, $t2, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B418u;
    {
        const bool branch_taken_0x11b418 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 10));
        if (branch_taken_0x11b418) {
            ctx->pc = 0x11B430u;
            return;
        }
    }
    ctx->pc = 0x11B420u;
    // 0x11b420: 0xc32021  addu        $a0, $a2, $v1
    ctx->pc = 0x11b420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x11b424: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x11b424u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b428: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x11B428u;
    {
        const bool branch_taken_0x11b428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B428u;
        // 0x11b42c: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b428) {
            ctx->pc = 0x11B498u;
            return;
        }
    }
    ctx->pc = 0x11B430u;
}
