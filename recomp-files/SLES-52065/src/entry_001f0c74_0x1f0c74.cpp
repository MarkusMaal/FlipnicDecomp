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

// Function: entry_001f0c74
// Address: 0x1f0c74 - 0x1f0c90
void entry_001f0c74_0x1f0c74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0c74_0x1f0c74");
#endif

    ctx->pc = 0x1f0c74u;

    // 0x1f0c74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f0c74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0c78: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1f0c78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1f0c7c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1F0C7Cu;
    {
        const bool branch_taken_0x1f0c7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0C7Cu;
        // 0x1f0c80: 0xa262000c  sb          $v0, 0xC($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0c7c) {
            ctx->pc = 0x1F0CBCu;
            return;
        }
    }
    ctx->pc = 0x1F0C84u;
    // 0x1f0c84: 0x2a270401  slti        $a3, $s1, 0x401
    ctx->pc = 0x1f0c84u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x1f0c88: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1f0c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1f0c8c: 0x0  nop
    ctx->pc = 0x1f0c8cu;
    // NOP
    ctx->pc = 0x1f0c90u;
}
