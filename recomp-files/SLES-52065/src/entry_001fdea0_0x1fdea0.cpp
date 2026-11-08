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

// Function: entry_001fdea0
// Address: 0x1fdea0 - 0x1fdeac
void entry_001fdea0_0x1fdea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fdea0_0x1fdea0");
#endif

    ctx->pc = 0x1fdea0u;

    // 0x1fdea0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1fdea0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdea4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FDEA4u;
    {
        const bool branch_taken_0x1fdea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDEA4u;
        // 0x1fdea8: 0x8e070010  lw          $a3, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdea4) {
            ctx->pc = 0x1FDEB8u;
            return;
        }
    }
    ctx->pc = 0x1FDEACu;
}
