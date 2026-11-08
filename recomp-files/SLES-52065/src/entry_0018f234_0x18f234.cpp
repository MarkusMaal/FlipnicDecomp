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

// Function: entry_0018f234
// Address: 0x18f234 - 0x18f248
void entry_0018f234_0x18f234(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f234_0x18f234");
#endif

    ctx->pc = 0x18f234u;

    // 0x18f234: 0x0  nop
    ctx->pc = 0x18f234u;
    // NOP
    // 0x18f238: 0x8e82045c  lw          $v0, 0x45C($s4)
    ctx->pc = 0x18f238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1116)));
    // 0x18f23c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18f23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18f240: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18F240u;
    {
        const bool branch_taken_0x18f240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F240u;
        // 0x18f244: 0xae82045c  sw          $v0, 0x45C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f240) {
            ctx->pc = 0x18F264u;
            return;
        }
    }
    ctx->pc = 0x18F248u;
}
