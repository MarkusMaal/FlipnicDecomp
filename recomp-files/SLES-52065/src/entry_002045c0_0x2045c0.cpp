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

// Function: entry_002045c0
// Address: 0x2045c0 - 0x2045d0
void entry_002045c0_0x2045c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002045c0_0x2045c0");
#endif

    ctx->pc = 0x2045c0u;

    // 0x2045c0: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x2045c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x2045c4: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x2045c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x2045c8: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2045C8u;
    {
        const bool branch_taken_0x2045c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2045CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2045C8u;
        // 0x2045cc: 0x26320008  addiu       $s2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2045c8) {
            ctx->pc = 0x204578u;
            return;
        }
    }
    ctx->pc = 0x2045D0u;
}
