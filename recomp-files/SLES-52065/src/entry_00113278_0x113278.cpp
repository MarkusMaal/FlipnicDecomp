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

// Function: entry_00113278
// Address: 0x113278 - 0x113294
void entry_00113278_0x113278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113278_0x113278");
#endif

    ctx->pc = 0x113278u;

    // 0x113278: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x113278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x11327c: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x11327cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x113280: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x113280u;
    {
        const bool branch_taken_0x113280 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x113280) {
            ctx->pc = 0x113240u;
            return;
        }
    }
    ctx->pc = 0x113288u;
    // 0x113288: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x113288u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11328c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x11328Cu;
    {
        const bool branch_taken_0x11328c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11328Cu;
        // 0x113290: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11328c) {
            ctx->pc = 0x1132F0u;
            return;
        }
    }
    ctx->pc = 0x113294u;
}
