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

// Function: entry_0013eed0
// Address: 0x13eed0 - 0x13eee4
void entry_0013eed0_0x13eed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013eed0_0x13eed0");
#endif

    ctx->pc = 0x13eed0u;

    // 0x13eed0: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x13eed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x13eed4: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13EED4u;
    {
        const bool branch_taken_0x13eed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x13EED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EED4u;
        // 0x13eed8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eed4) {
            ctx->pc = 0x13EEE4u;
            return;
        }
    }
    ctx->pc = 0x13EEDCu;
    // 0x13eedc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x13EEDCu;
    {
        const bool branch_taken_0x13eedc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13eedc) {
            ctx->pc = 0x13EF24u;
            return;
        }
    }
    ctx->pc = 0x13EEE4u;
}
