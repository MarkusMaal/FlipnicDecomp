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

// Function: entry_001fed6c
// Address: 0x1fed6c - 0x1fed80
void entry_001fed6c_0x1fed6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fed6c_0x1fed6c");
#endif

    ctx->pc = 0x1fed6cu;

    // 0x1fed6c: 0x8ec2dde0  lw          $v0, -0x2220($s6)
    ctx->pc = 0x1fed6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294958560)));
    // 0x1fed70: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FED70u;
    {
        const bool branch_taken_0x1fed70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1FED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED70u;
        // 0x1fed74: 0x2351023  subu        $v0, $s1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fed70) {
            ctx->pc = 0x1FED80u;
            return;
        }
    }
    ctx->pc = 0x1FED78u;
    // 0x1fed78: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FED78u;
    {
        const bool branch_taken_0x1fed78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FED7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED78u;
        // 0x1fed7c: 0xaed1dde0  sw          $s1, -0x2220($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4294958560), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fed78) {
            ctx->pc = 0x1FED88u;
            return;
        }
    }
    ctx->pc = 0x1FED80u;
}
