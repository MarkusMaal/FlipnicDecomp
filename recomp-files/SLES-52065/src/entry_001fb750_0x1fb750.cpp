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

// Function: entry_001fb750
// Address: 0x1fb750 - 0x1fb76c
void entry_001fb750_0x1fb750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb750_0x1fb750");
#endif

    ctx->pc = 0x1fb750u;

    // 0x1fb750: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x1fb750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x1fb754: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1fb754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1fb758: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x1fb758u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1fb75c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FB75Cu;
    {
        const bool branch_taken_0x1fb75c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb75c) {
            ctx->pc = 0x1FB76Cu;
            return;
        }
    }
    ctx->pc = 0x1FB764u;
    // 0x1fb764: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1FB764u;
    {
        const bool branch_taken_0x1fb764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB764u;
        // 0x1fb768: 0x460c6001  sub.s       $f0, $f12, $f12 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb764) {
            ctx->pc = 0x1FB7ECu;
            return;
        }
    }
    ctx->pc = 0x1FB76Cu;
}
