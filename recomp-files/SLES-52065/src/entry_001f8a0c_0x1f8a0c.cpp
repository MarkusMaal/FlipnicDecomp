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

// Function: entry_001f8a0c
// Address: 0x1f8a0c - 0x1f8a30
void entry_001f8a0c_0x1f8a0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f8a0c_0x1f8a0c");
#endif

    ctx->pc = 0x1f8a0cu;

    // 0x1f8a0c: 0x26621680  addiu       $v0, $s3, 0x1680
    ctx->pc = 0x1f8a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 5760));
    // 0x1f8a10: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1f8a10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8a14: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1f8a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1f8a18: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1F8A18u;
    {
        const bool branch_taken_0x1f8a18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8A18u;
        // 0x1f8a1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8a18) {
            ctx->pc = 0x1F8A58u;
            return;
        }
    }
    ctx->pc = 0x1F8A20u;
    // 0x1f8a20: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x1f8a20u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
    // 0x1f8a24: 0x2261021  addu        $v0, $s1, $a2
    ctx->pc = 0x1f8a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x1f8a28: 0x24e41680  addiu       $a0, $a3, 0x1680
    ctx->pc = 0x1f8a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 5760));
    // 0x1f8a2c: 0x0  nop
    ctx->pc = 0x1f8a2cu;
    // NOP
    ctx->pc = 0x1f8a30u;
}
