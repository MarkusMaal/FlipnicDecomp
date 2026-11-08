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

// Function: entry_00102f00
// Address: 0x102f00 - 0x102f14
void entry_00102f00_0x102f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102f00_0x102f00");
#endif

    ctx->pc = 0x102f00u;

    // 0x102f00: 0x8f888388  lw          $t0, -0x7C78($gp)
    ctx->pc = 0x102f00u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x102f04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x102f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x102f08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x102f08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102f0c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x102F0Cu;
    {
        const bool branch_taken_0x102f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F0Cu;
        // 0x102f10: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102f0c) {
            ctx->pc = 0x102F4Cu;
            return;
        }
    }
    ctx->pc = 0x102F14u;
}
