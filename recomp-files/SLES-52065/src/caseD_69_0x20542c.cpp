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

// Function: caseD_69
// Address: 0x20542c - 0x205444
void caseD_69_0x20542c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_69_0x20542c");
#endif

    ctx->pc = 0x20542cu;

    // 0x20542c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x20542cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x205430: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x205430u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x205434: 0x244233d0  addiu       $v0, $v0, 0x33D0
    ctx->pc = 0x205434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13264));
    // 0x205438: 0xafa00260  sw          $zero, 0x260($sp)
    ctx->pc = 0x205438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 0));
    // 0x20543c: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x20543Cu;
    {
        const bool branch_taken_0x20543c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20543Cu;
        // 0x205440: 0xafa20264  sw          $v0, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20543c) {
            ctx->pc = 0x205584u;
            return;
        }
    }
    ctx->pc = 0x205444u;
}
