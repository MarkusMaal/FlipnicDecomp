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

// Function: entry_001413f8
// Address: 0x1413f8 - 0x14140c
void entry_001413f8_0x1413f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001413f8_0x1413f8");
#endif

    ctx->pc = 0x1413f8u;

    // 0x1413f8: 0x8f8280a0  lw          $v0, -0x7F60($gp)
    ctx->pc = 0x1413f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934688)));
    // 0x1413fc: 0xe2082b  sltu        $at, $a3, $v0
    ctx->pc = 0x1413fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x141400: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x141400u;
    {
        const bool branch_taken_0x141400 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x141404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141400u;
        // 0x141404: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141400) {
            ctx->pc = 0x14140Cu;
            return;
        }
    }
    ctx->pc = 0x141408u;
    // 0x141408: 0x278280a0  addiu       $v0, $gp, -0x7F60
    ctx->pc = 0x141408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934688));
    ctx->pc = 0x14140cu;
}
