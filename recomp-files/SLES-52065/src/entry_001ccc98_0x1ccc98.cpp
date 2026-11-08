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

// Function: entry_001ccc98
// Address: 0x1ccc98 - 0x1cccb0
void entry_001ccc98_0x1ccc98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ccc98_0x1ccc98");
#endif

    ctx->pc = 0x1ccc98u;

    // 0x1ccc98: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x1ccc98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1ccc9c: 0x9063006b  lbu         $v1, 0x6B($v1)
    ctx->pc = 0x1ccc9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 107)));
    // 0x1ccca0: 0x1064001c  beq         $v1, $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1CCCA0u;
    {
        const bool branch_taken_0x1ccca0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1CCCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCCA0u;
        // 0x1ccca4: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccca0) {
            ctx->pc = 0x1CCD14u;
            return;
        }
    }
    ctx->pc = 0x1CCCA8u;
    // 0x1ccca8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1CCCA8u;
    {
        const bool branch_taken_0x1ccca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCCA8u;
        // 0x1cccac: 0x24060017  addiu       $a2, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccca8) {
            ctx->pc = 0x1CCCCCu;
            return;
        }
    }
    ctx->pc = 0x1CCCB0u;
}
