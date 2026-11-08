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

// Function: entry_001c2b74
// Address: 0x1c2b74 - 0x1c2b80
void entry_001c2b74_0x1c2b74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2b74_0x1c2b74");
#endif

    ctx->pc = 0x1c2b74u;

    // 0x1c2b74: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1c2b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c2b78: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1C2B78u;
    {
        const bool branch_taken_0x1c2b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2B78u;
        // 0x1c2b7c: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2b78) {
            ctx->pc = 0x1C2C70u;
            return;
        }
    }
    ctx->pc = 0x1C2B80u;
}
