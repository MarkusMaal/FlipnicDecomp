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

// Function: entry_0013a25c
// Address: 0x13a25c - 0x13a274
void entry_0013a25c_0x13a25c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a25c_0x13a25c");
#endif

    switch (ctx->pc) {
        case 0x13a26cu: goto label_13a26c;
        default: break;
    }

    ctx->pc = 0x13a25cu;

    // 0x13a25c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x13a25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x13a260: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13a260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a264: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x13A264u;
    SET_GPR_U32(ctx, 31, 0x13A26Cu);
    ctx->pc = 0x13A268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A264u;
    // 0x13a268: 0x532821  addu        $a1, $v0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x13A264u, 0x13A26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A26Cu;
label_13a26c:
    // 0x13a26c: 0x26730030  addiu       $s3, $s3, 0x30
    ctx->pc = 0x13a26cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x13a270: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x13a270u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x13a274u;
}
