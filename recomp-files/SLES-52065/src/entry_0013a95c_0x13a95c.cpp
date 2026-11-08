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

// Function: entry_0013a95c
// Address: 0x13a95c - 0x13a988
void entry_0013a95c_0x13a95c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a95c_0x13a95c");
#endif

    ctx->pc = 0x13a95cu;

    // 0x13a95c: 0x0  nop
    ctx->pc = 0x13a95cu;
    // NOP
    // 0x13a960: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x13a960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x13a964: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x13a964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13a968: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x13a968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x13a96c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x13a96cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x13a970: 0x8c630090  lw          $v1, 0x90($v1)
    ctx->pc = 0x13a970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x13a974: 0x8c630050  lw          $v1, 0x50($v1)
    ctx->pc = 0x13a974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x13a978: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13A978u;
    {
        const bool branch_taken_0x13a978 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x13A97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A978u;
        // 0x13a97c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a978) {
            ctx->pc = 0x13A988u;
            return;
        }
    }
    ctx->pc = 0x13A980u;
    // 0x13a980: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13A980u;
    {
        const bool branch_taken_0x13a980 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13a980) {
            ctx->pc = 0x13A9A4u;
            return;
        }
    }
    ctx->pc = 0x13A988u;
}
