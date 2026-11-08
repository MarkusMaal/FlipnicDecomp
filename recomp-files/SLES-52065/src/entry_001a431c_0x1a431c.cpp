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

// Function: entry_001a431c
// Address: 0x1a431c - 0x1a4328
void entry_001a431c_0x1a431c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a431c_0x1a431c");
#endif

    ctx->pc = 0x1a431cu;

    // 0x1a431c: 0x0  nop
    ctx->pc = 0x1a431cu;
    // NOP
    // 0x1a4320: 0x1000ff82  b           . + 4 + (-0x7E << 2)
    ctx->pc = 0x1A4320u;
    {
        const bool branch_taken_0x1a4320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4320u;
        // 0x1a4324: 0x26940040  addiu       $s4, $s4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4320) {
            ctx->pc = 0x1A412Cu;
            return;
        }
    }
    ctx->pc = 0x1A4328u;
}
