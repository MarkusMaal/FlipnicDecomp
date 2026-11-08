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

// Function: entry_0014d5f0
// Address: 0x14d5f0 - 0x14d614
void entry_0014d5f0_0x14d5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d5f0_0x14d5f0");
#endif

    switch (ctx->pc) {
        case 0x14d5fcu: goto label_14d5fc;
        default: break;
    }

    ctx->pc = 0x14d5f0u;

label_14d5f0:
    // 0x14d5f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x14d5f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d5f4: 0xc0537c0  jal         func_14DF00
    ctx->pc = 0x14D5F4u;
    SET_GPR_U32(ctx, 31, 0x14D5FCu);
    ctx->pc = 0x14D5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D5F4u;
    // 0x14d5f8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DF00u, 0x14D5F4u, 0x14D5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D5FCu;
label_14d5fc:
    // 0x14d5fc: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x14d5fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x14d600: 0x2694000c  addiu       $s4, $s4, 0xC
    ctx->pc = 0x14d600u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
    // 0x14d604: 0x1660fffa  bnez        $s3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14D604u;
    {
        const bool branch_taken_0x14d604 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d604) {
            ctx->pc = 0x14D5F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14d5f0;
        }
    }
    ctx->pc = 0x14D60Cu;
    // 0x14d60c: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x14D60Cu;
    {
        const bool branch_taken_0x14d60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D60Cu;
        // 0x14d610: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d60c) {
            ctx->pc = 0x14D7E4u;
            return;
        }
    }
    ctx->pc = 0x14D614u;
}
