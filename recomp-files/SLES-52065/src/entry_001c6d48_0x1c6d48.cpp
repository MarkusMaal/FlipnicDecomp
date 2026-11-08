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

// Function: entry_001c6d48
// Address: 0x1c6d48 - 0x1c6d54
void entry_001c6d48_0x1c6d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6d48_0x1c6d48");
#endif

    ctx->pc = 0x1c6d48u;

    // 0x1c6d48: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c6d48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c6d4c: 0x1000028d  b           . + 4 + (0x28D << 2)
    ctx->pc = 0x1C6D4Cu;
    {
        const bool branch_taken_0x1c6d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6D4Cu;
        // 0x1c6d50: 0xa020f8a0  sb          $zero, -0x760($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294965408), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6d4c) {
            ctx->pc = 0x1C7784u;
            return;
        }
    }
    ctx->pc = 0x1C6D54u;
}
