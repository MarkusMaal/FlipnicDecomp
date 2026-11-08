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

// Function: entry_00110400
// Address: 0x110400 - 0x110418
void entry_00110400_0x110400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110400_0x110400");
#endif

    ctx->pc = 0x110400u;

    // 0x110400: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x110400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x110404: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x110404u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x110408: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x110408u;
    {
        const bool branch_taken_0x110408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11040Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110408u;
        // 0x11040c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110408) {
            ctx->pc = 0x1103D0u;
            return;
        }
    }
    ctx->pc = 0x110410u;
    // 0x110410: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x110410u;
    {
        const bool branch_taken_0x110410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110410u;
        // 0x110414: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110410) {
            ctx->pc = 0x110470u;
            return;
        }
    }
    ctx->pc = 0x110418u;
}
