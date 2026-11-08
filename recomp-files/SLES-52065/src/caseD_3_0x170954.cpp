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

// Function: caseD_3
// Address: 0x170954 - 0x170964
void caseD_3_0x170954(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x170954");
#endif

    ctx->pc = 0x170954u;

    // 0x170954: 0xae00024c  sw          $zero, 0x24C($s0)
    ctx->pc = 0x170954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 588), GPR_U32(ctx, 0));
    // 0x170958: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x170958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17095c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17095Cu;
    {
        const bool branch_taken_0x17095c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17095Cu;
        // 0x170960: 0xae0201d4  sw          $v0, 0x1D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17095c) {
            ctx->pc = 0x17097Cu;
            return;
        }
    }
    ctx->pc = 0x170964u;
}
