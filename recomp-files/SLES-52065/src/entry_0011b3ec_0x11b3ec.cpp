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

// Function: entry_0011b3ec
// Address: 0x11b3ec - 0x11b400
void entry_0011b3ec_0x11b3ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b3ec_0x11b3ec");
#endif

    ctx->pc = 0x11b3ecu;

    // 0x11b3ec: 0x0  nop
    ctx->pc = 0x11b3ecu;
    // NOP
    // 0x11b3f0: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x11b3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11b3f4: 0x160c0002  bne         $s0, $t4, . + 4 + (0x2 << 2)
    ctx->pc = 0x11B3F4u;
    {
        const bool branch_taken_0x11b3f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 12));
        ctx->pc = 0x11B3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B3F4u;
        // 0x11b3f8: 0x24180001  addiu       $t8, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b3f4) {
            ctx->pc = 0x11B400u;
            return;
        }
    }
    ctx->pc = 0x11B3FCu;
    // 0x11b3fc: 0x300c82d  daddu       $t9, $t8, $zero
    ctx->pc = 0x11b3fcu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11b400u;
}
