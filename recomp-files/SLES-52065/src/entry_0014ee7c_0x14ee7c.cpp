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

// Function: entry_0014ee7c
// Address: 0x14ee7c - 0x14ee98
void entry_0014ee7c_0x14ee7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ee7c_0x14ee7c");
#endif

    ctx->pc = 0x14ee7cu;

    // 0x14ee7c: 0x0  nop
    ctx->pc = 0x14ee7cu;
    // NOP
    // 0x14ee80: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x14ee80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x14ee84: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x14ee84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x14ee88: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x14ee88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x14ee8c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14ee8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14ee90: 0x1651fff6  bne         $s2, $s1, . + 4 + (-0xA << 2)
    ctx->pc = 0x14EE90u;
    {
        const bool branch_taken_0x14ee90 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        ctx->pc = 0x14EE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EE90u;
        // 0x14ee94: 0xae630004  sw          $v1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ee90) {
            ctx->pc = 0x14EE6Cu;
            return;
        }
    }
    ctx->pc = 0x14EE98u;
}
