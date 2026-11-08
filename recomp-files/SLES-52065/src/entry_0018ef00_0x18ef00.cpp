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

// Function: entry_0018ef00
// Address: 0x18ef00 - 0x18ef10
void entry_0018ef00_0x18ef00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ef00_0x18ef00");
#endif

    ctx->pc = 0x18ef00u;

    // 0x18ef00: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x18ef00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18ef04: 0x1440ff82  bnez        $v0, . + 4 + (-0x7E << 2)
    ctx->pc = 0x18EF04u;
    {
        const bool branch_taken_0x18ef04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18EF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF04u;
        // 0x18ef08: 0x2a0f02d  daddu       $fp, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ef04) {
            ctx->pc = 0x18ED10u;
            return;
        }
    }
    ctx->pc = 0x18EF0Cu;
    // 0x18ef0c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x18ef0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x18ef10u;
}
