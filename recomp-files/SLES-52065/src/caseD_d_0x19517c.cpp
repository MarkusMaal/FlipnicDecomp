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

// Function: caseD_d
// Address: 0x19517c - 0x195194
void caseD_d_0x19517c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_d_0x19517c");
#endif

    ctx->pc = 0x19517cu;

    // 0x19517c: 0x0  nop
    ctx->pc = 0x19517cu;
    // NOP
    // 0x195180: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x195180u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x195184: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x195184u;
    {
        const bool branch_taken_0x195184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x195188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195184u;
        // 0x195188: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195184) {
            ctx->pc = 0x195194u;
            return;
        }
    }
    ctx->pc = 0x19518Cu;
    // 0x19518c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19518Cu;
    {
        const bool branch_taken_0x19518c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19518c) {
            ctx->pc = 0x19519Cu;
            return;
        }
    }
    ctx->pc = 0x195194u;
}
