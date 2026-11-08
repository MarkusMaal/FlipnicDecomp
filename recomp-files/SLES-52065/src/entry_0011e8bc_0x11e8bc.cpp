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

// Function: entry_0011e8bc
// Address: 0x11e8bc - 0x11e8c8
void entry_0011e8bc_0x11e8bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e8bc_0x11e8bc");
#endif

    ctx->pc = 0x11e8bcu;

    // 0x11e8bc: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x11e8bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x11e8c0: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x11E8C0u;
    {
        const bool branch_taken_0x11e8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E8C0u;
        // 0x11e8c4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e8c0) {
            ctx->pc = 0x11E854u;
            return;
        }
    }
    ctx->pc = 0x11E8C8u;
}
