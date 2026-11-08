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

// Function: entry_00111c68
// Address: 0x111c68 - 0x111c84
void entry_00111c68_0x111c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111c68_0x111c68");
#endif

    ctx->pc = 0x111c68u;

    // 0x111c68: 0x8e620038  lw          $v0, 0x38($s3)
    ctx->pc = 0x111c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x111c6c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x111c6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x111c70: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x111C70u;
    {
        const bool branch_taken_0x111c70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x111C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111C70u;
        // 0x111c74: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111c70) {
            ctx->pc = 0x111C5Cu;
            return;
        }
    }
    ctx->pc = 0x111C78u;
    // 0x111c78: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x111c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x111c7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x111c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x111c80: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x111c80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x111c84u;
}
