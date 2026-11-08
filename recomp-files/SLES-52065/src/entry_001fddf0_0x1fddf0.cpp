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

// Function: entry_001fddf0
// Address: 0x1fddf0 - 0x1fde00
void entry_001fddf0_0x1fddf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fddf0_0x1fddf0");
#endif

    ctx->pc = 0x1fddf0u;

    // 0x1fddf0: 0x1282002b  beq         $s4, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1FDDF0u;
    {
        const bool branch_taken_0x1fddf0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FDDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDDF0u;
        // 0x1fddf4: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fddf0) {
            ctx->pc = 0x1FDEA0u;
            return;
        }
    }
    ctx->pc = 0x1FDDF8u;
    // 0x1fddf8: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1FDDF8u;
    {
        const bool branch_taken_0x1fddf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDDF8u;
        // 0x1fddfc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fddf8) {
            ctx->pc = 0x1FDEB0u;
            return;
        }
    }
    ctx->pc = 0x1FDE00u;
}
