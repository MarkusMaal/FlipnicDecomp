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

// Function: entry_00203e8c
// Address: 0x203e8c - 0x203ea4
void entry_00203e8c_0x203e8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203e8c_0x203e8c");
#endif

    ctx->pc = 0x203e8cu;

    // 0x203e8c: 0x60100db  bgez        $s0, . + 4 + (0xDB << 2)
    ctx->pc = 0x203E8Cu;
    {
        const bool branch_taken_0x203e8c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x203E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203E8Cu;
        // 0x203e90: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203e8c) {
            ctx->pc = 0x2041FCu;
            return;
        }
    }
    ctx->pc = 0x203E94u;
    // 0x203e94: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x203e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x203e98: 0x10802f  dsubu       $s0, $zero, $s0
    ctx->pc = 0x203e98u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) - GPR_U64(ctx, 16));
    // 0x203e9c: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x203E9Cu;
    {
        const bool branch_taken_0x203e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203E9Cu;
        // 0x203ea0: 0xa3a201d1  sb          $v0, 0x1D1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203e9c) {
            ctx->pc = 0x2041FCu;
            return;
        }
    }
    ctx->pc = 0x203EA4u;
}
