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

// Function: entry_00205380
// Address: 0x205380 - 0x2053a0
void entry_00205380_0x205380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205380_0x205380");
#endif

    switch (ctx->pc) {
        case 0x205394u: goto label_205394;
        default: break;
    }

    ctx->pc = 0x205380u;

    // 0x205380: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x205380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x205384: 0x5c400006  bgtzl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x205384u;
    {
        const bool branch_taken_0x205384 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x205384) {
            ctx->pc = 0x205388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205384u;
            // 0x205388: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2053A0u;
            return;
        }
    }
    ctx->pc = 0x20538Cu;
    // 0x20538c: 0xc080432  jal         func_2010C8
    ctx->pc = 0x20538Cu;
    SET_GPR_U32(ctx, 31, 0x205394u);
    ctx->pc = 0x205390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20538Cu;
    // 0x205390: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2010C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2010C8u, 0x20538Cu, 0x205394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205394u;
label_205394:
    // 0x205394: 0x14400261  bnez        $v0, . + 4 + (0x261 << 2)
    ctx->pc = 0x205394u;
    {
        const bool branch_taken_0x205394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205394u;
        // 0x205398: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205394) {
            ctx->pc = 0x205D1Cu;
            return;
        }
    }
    ctx->pc = 0x20539Cu;
    // 0x20539c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x20539cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->pc = 0x2053a0u;
}
