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

// Function: entry_0012f6fc
// Address: 0x12f6fc - 0x12f714
void entry_0012f6fc_0x12f6fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f6fc_0x12f6fc");
#endif

    ctx->pc = 0x12f6fcu;

    // 0x12f6fc: 0x0  nop
    ctx->pc = 0x12f6fcu;
    // NOP
    // 0x12f700: 0x12e00014  beqz        $s7, . + 4 + (0x14 << 2)
    ctx->pc = 0x12F700u;
    {
        const bool branch_taken_0x12f700 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F700u;
        // 0x12f704: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f700) {
            ctx->pc = 0x12F754u;
            return;
        }
    }
    ctx->pc = 0x12F708u;
    // 0x12f708: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12f708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f70c: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x12f70cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x12f710: 0x24633e70  addiu       $v1, $v1, 0x3E70
    ctx->pc = 0x12f710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15984));
    ctx->pc = 0x12f714u;
}
