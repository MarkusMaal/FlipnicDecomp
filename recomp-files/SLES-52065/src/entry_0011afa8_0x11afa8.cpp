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

// Function: entry_0011afa8
// Address: 0x11afa8 - 0x11afb4
void entry_0011afa8_0x11afa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011afa8_0x11afa8");
#endif

    ctx->pc = 0x11afa8u;

    // 0x11afa8: 0xac510034  sw          $s1, 0x34($v0)
    ctx->pc = 0x11afa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 17));
    // 0x11afac: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x11AFACu;
    {
        const bool branch_taken_0x11afac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AFACu;
        // 0x11afb0: 0x24420040  addiu       $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11afac) {
            ctx->pc = 0x11B02Cu;
            return;
        }
    }
    ctx->pc = 0x11AFB4u;
}
