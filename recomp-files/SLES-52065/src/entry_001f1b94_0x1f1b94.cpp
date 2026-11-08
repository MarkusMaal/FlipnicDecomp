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

// Function: entry_001f1b94
// Address: 0x1f1b94 - 0x1f1bb0
void entry_001f1b94_0x1f1b94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f1b94_0x1f1b94");
#endif

    ctx->pc = 0x1f1b94u;

    // 0x1f1b94: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x1f1b94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1f1b98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f1b98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1b9c: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1f1b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1f1ba0: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1F1BA0u;
    {
        const bool branch_taken_0x1f1ba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1BA0u;
        // 0x1f1ba4: 0xa242040c  sb          $v0, 0x40C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1036), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1ba0) {
            ctx->pc = 0x1F1BD4u;
            return;
        }
    }
    ctx->pc = 0x1F1BA8u;
    // 0x1f1ba8: 0x2646040c  addiu       $a2, $s2, 0x40C
    ctx->pc = 0x1f1ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1036));
    // 0x1f1bac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1f1bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x1f1bb0u;
}
