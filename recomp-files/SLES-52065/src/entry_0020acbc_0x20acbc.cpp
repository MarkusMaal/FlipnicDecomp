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

// Function: entry_0020acbc
// Address: 0x20acbc - 0x20acf0
void entry_0020acbc_0x20acbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020acbc_0x20acbc");
#endif

    ctx->pc = 0x20acbcu;

    // 0x20acbc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x20acbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x20acc0: 0x3c041f00  lui         $a0, 0x1F00
    ctx->pc = 0x20acc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7936 << 16));
    // 0x20acc4: 0x34423c00  ori         $v0, $v0, 0x3C00
    ctx->pc = 0x20acc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15360);
    // 0x20acc8: 0x34840003  ori         $a0, $a0, 0x3
    ctx->pc = 0x20acc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    // 0x20accc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20acccu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10003C00u));
    // 0x20acd0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x20acd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x20acd4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x20ACD4u;
    {
        const bool branch_taken_0x20acd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ACD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ACD4u;
        // 0x20acd8: 0x3c031f00  lui         $v1, 0x1F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7936 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20acd4) {
            ctx->pc = 0x20AD0Cu;
            return;
        }
    }
    ctx->pc = 0x20ACDCu;
    // 0x20acdc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x20acdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x20ace0: 0x3c060100  lui         $a2, 0x100
    ctx->pc = 0x20ace0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)256 << 16));
    // 0x20ace4: 0x34843c00  ori         $a0, $a0, 0x3C00
    ctx->pc = 0x20ace4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)15360);
    // 0x20ace8: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x20ace8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x20acec: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x20acecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20acf0u;
}
