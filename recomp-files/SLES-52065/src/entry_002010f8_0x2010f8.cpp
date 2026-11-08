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

// Function: entry_002010f8
// Address: 0x2010f8 - 0x20110c
void entry_002010f8_0x2010f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002010f8_0x2010f8");
#endif

    switch (ctx->pc) {
        case 0x201108u: goto label_201108;
        default: break;
    }

    ctx->pc = 0x2010f8u;

    // 0x2010f8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2010F8u;
    {
        const bool branch_taken_0x2010f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2010f8) {
            ctx->pc = 0x2010FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2010F8u;
            // 0x2010fc: 0x9603000c  lhu         $v1, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20110Cu;
            return;
        }
    }
    ctx->pc = 0x201100u;
    // 0x201100: 0xc07f5b0  jal         func_1FD6C0
    ctx->pc = 0x201100u;
    SET_GPR_U32(ctx, 31, 0x201108u);
    ctx->pc = 0x201104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201100u;
    // 0x201104: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD6C0u, 0x201100u, 0x201108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201108u;
label_201108:
    // 0x201108: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x201108u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->pc = 0x20110cu;
}
