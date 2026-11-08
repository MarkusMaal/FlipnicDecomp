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

// Function: caseD_73
// Address: 0x204114 - 0x204128
void caseD_73_0x204114(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_73_0x204114");
#endif

    ctx->pc = 0x204114u;

    // 0x204114: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x204114u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x204118: 0x8e93fff8  lw          $s3, -0x8($s4)
    ctx->pc = 0x204118u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x20411c: 0x16600002  bnez        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x20411Cu;
    {
        const bool branch_taken_0x20411c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x204120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20411Cu;
        // 0x204120: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20411c) {
            ctx->pc = 0x204128u;
            return;
        }
    }
    ctx->pc = 0x204124u;
    // 0x204124: 0x245351c8  addiu       $s3, $v0, 0x51C8
    ctx->pc = 0x204124u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 20936));
    ctx->pc = 0x204128u;
}
