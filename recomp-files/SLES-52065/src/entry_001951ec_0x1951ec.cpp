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

// Function: entry_001951ec
// Address: 0x1951ec - 0x1951f8
void entry_001951ec_0x1951ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001951ec_0x1951ec");
#endif

    ctx->pc = 0x1951ecu;

    // 0x1951ec: 0x0  nop
    ctx->pc = 0x1951ecu;
    // NOP
    // 0x1951f0: 0x100002e0  b           . + 4 + (0x2E0 << 2)
    ctx->pc = 0x1951F0u;
    {
        const bool branch_taken_0x1951f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1951F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1951F0u;
        // 0x1951f4: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1951f0) {
            ctx->pc = 0x195D74u;
            return;
        }
    }
    ctx->pc = 0x1951F8u;
}
