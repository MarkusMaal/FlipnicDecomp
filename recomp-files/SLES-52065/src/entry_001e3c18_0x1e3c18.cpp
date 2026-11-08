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

// Function: entry_001e3c18
// Address: 0x1e3c18 - 0x1e3c28
void entry_001e3c18_0x1e3c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3c18_0x1e3c18");
#endif

    ctx->pc = 0x1e3c18u;

    // 0x1e3c18: 0x10a0004b  beqz        $a1, . + 4 + (0x4B << 2)
    ctx->pc = 0x1E3C18u;
    {
        const bool branch_taken_0x1e3c18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3C18u;
        // 0x1e3c1c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3c18) {
            ctx->pc = 0x1E3D48u;
            return;
        }
    }
    ctx->pc = 0x1E3C20u;
    // 0x1e3c20: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x1E3C20u;
    {
        const bool branch_taken_0x1e3c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3C20u;
        // 0x1e3c24: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3c20) {
            ctx->pc = 0x1E3D58u;
            return;
        }
    }
    ctx->pc = 0x1E3C28u;
}
