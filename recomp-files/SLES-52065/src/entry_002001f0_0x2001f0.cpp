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

// Function: entry_002001f0
// Address: 0x2001f0 - 0x200214
void entry_002001f0_0x2001f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002001f0_0x2001f0");
#endif

    switch (ctx->pc) {
        case 0x200208u: goto label_200208;
        default: break;
    }

    ctx->pc = 0x2001f0u;

    // 0x2001f0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2001F0u;
    {
        const bool branch_taken_0x2001f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2001f0) {
            ctx->pc = 0x2001F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2001F0u;
            // 0x2001f4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200214u;
            return;
        }
    }
    ctx->pc = 0x2001F8u;
    // 0x2001f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2001f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2001fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2001fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200200: 0xc07ffce  jal         func_1FFF38
    ctx->pc = 0x200200u;
    SET_GPR_U32(ctx, 31, 0x200208u);
    ctx->pc = 0x200204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200200u;
    // 0x200204: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFF38u, 0x200200u, 0x200208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200208u;
label_200208:
    // 0x200208: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x200208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x20020c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x20020cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x200210: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x200210u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x200214u;
}
