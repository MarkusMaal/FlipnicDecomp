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

// Function: entry_001f1b3c
// Address: 0x1f1b3c - 0x1f1b58
void entry_001f1b3c_0x1f1b3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f1b3c_0x1f1b3c");
#endif

    ctx->pc = 0x1f1b3cu;

    // 0x1f1b3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f1b3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1b40: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1f1b40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1f1b44: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1F1B44u;
    {
        const bool branch_taken_0x1f1b44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1B44u;
        // 0x1f1b48: 0xa242000c  sb          $v0, 0xC($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1b44) {
            ctx->pc = 0x1F1B84u;
            return;
        }
    }
    ctx->pc = 0x1F1B4Cu;
    // 0x1f1b4c: 0x2a270401  slti        $a3, $s1, 0x401
    ctx->pc = 0x1f1b4cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x1f1b50: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1f1b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1f1b54: 0x0  nop
    ctx->pc = 0x1f1b54u;
    // NOP
    ctx->pc = 0x1f1b58u;
}
