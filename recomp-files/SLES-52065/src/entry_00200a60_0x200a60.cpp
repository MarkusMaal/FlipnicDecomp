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

// Function: entry_00200a60
// Address: 0x200a60 - 0x200a68
void entry_00200a60_0x200a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200a60_0x200a60");
#endif

    ctx->pc = 0x200a60u;

    // 0x200a60: 0x1a000008  blez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x200A60u;
    {
        const bool branch_taken_0x200a60 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x200A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200A60u;
        // 0x200a64: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200a60) {
            ctx->pc = 0x200A84u;
            return;
        }
    }
    ctx->pc = 0x200A68u;
}
