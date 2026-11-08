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

// Function: entry_001eac4c
// Address: 0x1eac4c - 0x1eac6c
void entry_001eac4c_0x1eac4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eac4c_0x1eac4c");
#endif

    ctx->pc = 0x1eac4cu;

    // 0x1eac4c: 0x10a00029  beqz        $a1, . + 4 + (0x29 << 2)
    ctx->pc = 0x1EAC4Cu;
    {
        const bool branch_taken_0x1eac4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eac4c) {
            ctx->pc = 0x1EACF4u;
            return;
        }
    }
    ctx->pc = 0x1EAC54u;
    // 0x1eac54: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1eac54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1eac58: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1eac58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1eac5c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EAC5Cu;
    {
        const bool branch_taken_0x1eac5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAC5Cu;
        // 0x1eac60: 0x24a20008  addiu       $v0, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eac5c) {
            ctx->pc = 0x1EAC6Cu;
            return;
        }
    }
    ctx->pc = 0x1EAC64u;
    // 0x1eac64: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1EAC64u;
    {
        const bool branch_taken_0x1eac64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAC64u;
        // 0x1eac68: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eac64) {
            ctx->pc = 0x1EAC74u;
            return;
        }
    }
    ctx->pc = 0x1EAC6Cu;
}
