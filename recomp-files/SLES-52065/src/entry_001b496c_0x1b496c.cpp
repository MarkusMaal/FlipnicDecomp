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

// Function: entry_001b496c
// Address: 0x1b496c - 0x1b4990
void entry_001b496c_0x1b496c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b496c_0x1b496c");
#endif

    ctx->pc = 0x1b496cu;

    // 0x1b496c: 0x0  nop
    ctx->pc = 0x1b496cu;
    // NOP
    // 0x1b4970: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B4970u;
    {
        const bool branch_taken_0x1b4970 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4970u;
        // 0x1b4974: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4970) {
            ctx->pc = 0x1B4990u;
            return;
        }
    }
    ctx->pc = 0x1B4978u;
    // 0x1b4978: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x1b4978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1b497c: 0x4217c  dsll32      $a0, $a0, 5
    ctx->pc = 0x1b497cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 5));
    // 0x1b4980: 0x4217e  dsrl32      $a0, $a0, 5
    ctx->pc = 0x1b4980u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 5));
    // 0x1b4984: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x1b4984u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
    // 0x1b4988: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1b4988u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b498c: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x1b498cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    ctx->pc = 0x1b4990u;
}
