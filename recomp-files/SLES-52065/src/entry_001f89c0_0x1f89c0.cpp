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

// Function: entry_001f89c0
// Address: 0x1f89c0 - 0x1f89e0
void entry_001f89c0_0x1f89c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f89c0_0x1f89c0");
#endif

    ctx->pc = 0x1f89c0u;

    // 0x1f89c0: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x1f89c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1f89c4: 0x26661680  addiu       $a2, $s3, 0x1680
    ctx->pc = 0x1f89c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 5760));
    // 0x1f89c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F89C8u;
    {
        const bool branch_taken_0x1f89c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F89CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F89C8u;
        // 0x1f89cc: 0xae721680  sw          $s2, 0x1680($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 5760), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f89c8) {
            ctx->pc = 0x1F89E0u;
            return;
        }
    }
    ctx->pc = 0x1F89D0u;
    // 0x1f89d0: 0xacd00014  sw          $s0, 0x14($a2)
    ctx->pc = 0x1f89d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 16));
    // 0x1f89d4: 0xacc00018  sw          $zero, 0x18($a2)
    ctx->pc = 0x1f89d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
    // 0x1f89d8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1F89D8u;
    {
        const bool branch_taken_0x1f89d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F89DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F89D8u;
        // 0x1f89dc: 0xacc0000c  sw          $zero, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f89d8) {
            ctx->pc = 0x1F8A0Cu;
            return;
        }
    }
    ctx->pc = 0x1F89E0u;
}
