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

// Function: entry_001e9394
// Address: 0x1e9394 - 0x1e93ac
void entry_001e9394_0x1e9394(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9394_0x1e9394");
#endif

    ctx->pc = 0x1e9394u;

    // 0x1e9394: 0x0  nop
    ctx->pc = 0x1e9394u;
    // NOP
    // 0x1e9398: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x1e9398u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e939c: 0x15090003  bne         $t0, $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E939Cu;
    {
        const bool branch_taken_0x1e939c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 9));
        if (branch_taken_0x1e939c) {
            ctx->pc = 0x1E93ACu;
            return;
        }
    }
    ctx->pc = 0x1E93A4u;
    // 0x1e93a4: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1E93A4u;
    {
        const bool branch_taken_0x1e93a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E93A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E93A4u;
        // 0x1e93a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e93a4) {
            ctx->pc = 0x1E943Cu;
            return;
        }
    }
    ctx->pc = 0x1E93ACu;
}
