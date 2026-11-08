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

// Function: caseD_2a
// Address: 0x203cd0 - 0x203ce8
void caseD_2a_0x203cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2a_0x203cd0");
#endif

    ctx->pc = 0x203cd0u;

    // 0x203cd0: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x203cd0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x203cd4: 0x8e82fff8  lw          $v0, -0x8($s4)
    ctx->pc = 0x203cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x203cd8: 0x441ffe2  bgez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x203CD8u;
    {
        const bool branch_taken_0x203cd8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x203CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203CD8u;
        // 0x203cdc: 0xafa201f4  sw          $v0, 0x1F4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203cd8) {
            ctx->pc = 0x203C64u;
            return;
        }
    }
    ctx->pc = 0x203CE0u;
    // 0x203ce0: 0x21023  negu        $v0, $v0
    ctx->pc = 0x203ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x203ce4: 0xafa201f4  sw          $v0, 0x1F4($sp)
    ctx->pc = 0x203ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 2));
    ctx->pc = 0x203ce8u;
}
