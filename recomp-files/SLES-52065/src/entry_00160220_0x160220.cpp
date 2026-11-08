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

// Function: entry_00160220
// Address: 0x160220 - 0x160244
void entry_00160220_0x160220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160220_0x160220");
#endif

    ctx->pc = 0x160220u;

    // 0x160220: 0x2122821  addu        $a1, $s0, $s2
    ctx->pc = 0x160220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x160224: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x160224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x160228: 0x84a40228  lh          $a0, 0x228($a1)
    ctx->pc = 0x160228u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 552)));
    // 0x16022c: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16022Cu;
    {
        const bool branch_taken_0x16022c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x160230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16022Cu;
        // 0x160230: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16022c) {
            ctx->pc = 0x160244u;
            return;
        }
    }
    ctx->pc = 0x160234u;
    // 0x160234: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x160234u;
    {
        const bool branch_taken_0x160234 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x160234) {
            ctx->pc = 0x160244u;
            return;
        }
    }
    ctx->pc = 0x16023Cu;
    // 0x16023c: 0xc055c40  jal         func_157100
    ctx->pc = 0x16023Cu;
    SET_GPR_U32(ctx, 31, 0x160244u);
    ctx->pc = 0x160240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16023Cu;
    // 0x160240: 0x24a40040  addiu       $a0, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x16023Cu, 0x160244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160244u;
}
