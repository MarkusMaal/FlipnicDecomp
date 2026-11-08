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

// Function: entry_001eee10
// Address: 0x1eee10 - 0x1eee38
void entry_001eee10_0x1eee10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eee10_0x1eee10");
#endif

    ctx->pc = 0x1eee10u;

label_1eee10:
    // 0x1eee10: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1eee10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1eee14: 0x0  nop
    ctx->pc = 0x1eee14u;
    // NOP
    // 0x1eee18: 0x0  nop
    ctx->pc = 0x1eee18u;
    // NOP
    // 0x1eee1c: 0x0  nop
    ctx->pc = 0x1eee1cu;
    // NOP
    // 0x1eee20: 0x0  nop
    ctx->pc = 0x1eee20u;
    // NOP
    // 0x1eee24: 0x1464fffa  bne         $v1, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1EEE24u;
    {
        const bool branch_taken_0x1eee24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1eee24) {
            ctx->pc = 0x1EEE10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eee10;
        }
    }
    ctx->pc = 0x1EEE2Cu;
    // 0x1eee2c: 0x5040fff2  beql        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x1EEE2Cu;
    {
        const bool branch_taken_0x1eee2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eee2c) {
            ctx->pc = 0x1EEE30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EEE2Cu;
            // 0x1eee30: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EEDF8u;
            return;
        }
    }
    ctx->pc = 0x1EEE34u;
    // 0x1eee34: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1eee34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    ctx->pc = 0x1eee38u;
}
