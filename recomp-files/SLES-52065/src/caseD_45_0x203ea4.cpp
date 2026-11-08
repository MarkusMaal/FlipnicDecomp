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

// Function: caseD_45
// Address: 0x203ea4 - 0x203eb8
void caseD_45_0x203ea4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_45_0x203ea4");
#endif

    ctx->pc = 0x203ea4u;

    // 0x203ea4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x203ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x203ea8: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203EA8u;
    {
        const bool branch_taken_0x203ea8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x203EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203EA8u;
        // 0x203eac: 0x24020067  addiu       $v0, $zero, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ea8) {
            ctx->pc = 0x203EB8u;
            return;
        }
    }
    ctx->pc = 0x203EB0u;
    // 0x203eb0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x203EB0u;
    {
        const bool branch_taken_0x203eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203EB0u;
        // 0x203eb4: 0x24120006  addiu       $s2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203eb0) {
            ctx->pc = 0x203ED0u;
            return;
        }
    }
    ctx->pc = 0x203EB8u;
}
