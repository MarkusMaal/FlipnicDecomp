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

// Function: entry_002092b8
// Address: 0x2092b8 - 0x2092dc
void entry_002092b8_0x2092b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002092b8_0x2092b8");
#endif

    ctx->pc = 0x2092b8u;

label_2092b8:
    // 0x2092b8: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x2092b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2092bc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2092bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2092c0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2092c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2092c4: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x2092c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2092c8: 0x0  nop
    ctx->pc = 0x2092c8u;
    // NOP
    // 0x2092cc: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2092CCu;
    {
        const bool branch_taken_0x2092cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2092cc) {
            ctx->pc = 0x2092B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2092b8;
        }
    }
    ctx->pc = 0x2092D4u;
    // 0x2092d4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2092d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2092d8: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x2092d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    ctx->pc = 0x2092dcu;
}
