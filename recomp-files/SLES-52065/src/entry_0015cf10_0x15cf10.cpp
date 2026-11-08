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

// Function: entry_0015cf10
// Address: 0x15cf10 - 0x15cf20
void entry_0015cf10_0x15cf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015cf10_0x15cf10");
#endif

    ctx->pc = 0x15cf10u;

    // 0x15cf10: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15cf10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x15cf14: 0x230182a  slt         $v1, $s1, $s0
    ctx->pc = 0x15cf14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x15cf18: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x15CF18u;
    {
        const bool branch_taken_0x15cf18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CF18u;
        // 0x15cf1c: 0x26d60050  addiu       $s6, $s6, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cf18) {
            ctx->pc = 0x15CEA8u;
            return;
        }
    }
    ctx->pc = 0x15CF20u;
}
