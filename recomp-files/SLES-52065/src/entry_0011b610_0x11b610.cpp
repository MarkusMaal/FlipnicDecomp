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

// Function: entry_0011b610
// Address: 0x11b610 - 0x11b620
void entry_0011b610_0x11b610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b610_0x11b610");
#endif

    ctx->pc = 0x11b610u;

    // 0x11b610: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x11b610u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x11b614: 0x14640002  bne         $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x11B614u;
    {
        const bool branch_taken_0x11b614 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x11B618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B614u;
        // 0x11b618: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b614) {
            ctx->pc = 0x11B620u;
            return;
        }
    }
    ctx->pc = 0x11B61Cu;
    // 0x11b61c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11b61cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11b620u;
}
