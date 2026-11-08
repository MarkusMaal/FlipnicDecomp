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

// Function: entry_001fbbb0
// Address: 0x1fbbb0 - 0x1fbbcc
void entry_001fbbb0_0x1fbbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fbbb0_0x1fbbb0");
#endif

    ctx->pc = 0x1fbbb0u;

    // 0x1fbbb0: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x1fbbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x1fbbb4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1fbbb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1fbbb8: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x1fbbb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1fbbbc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FBBBCu;
    {
        const bool branch_taken_0x1fbbbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fbbbc) {
            ctx->pc = 0x1FBBCCu;
            return;
        }
    }
    ctx->pc = 0x1FBBC4u;
    // 0x1fbbc4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1FBBC4u;
    {
        const bool branch_taken_0x1fbbc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBBC4u;
        // 0x1fbbc8: 0x460c6001  sub.s       $f0, $f12, $f12 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbbc4) {
            ctx->pc = 0x1FBBF4u;
            return;
        }
    }
    ctx->pc = 0x1FBBCCu;
}
