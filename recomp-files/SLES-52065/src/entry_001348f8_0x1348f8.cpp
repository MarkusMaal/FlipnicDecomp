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

// Function: entry_001348f8
// Address: 0x1348f8 - 0x134920
void entry_001348f8_0x1348f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001348f8_0x1348f8");
#endif

    switch (ctx->pc) {
        case 0x13490cu: goto label_13490c;
        case 0x134918u: goto label_134918;
        default: break;
    }

    ctx->pc = 0x1348f8u;

    // 0x1348f8: 0x8e4200a0  lw          $v0, 0xA0($s2)
    ctx->pc = 0x1348f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x1348fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1348fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134900: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x134900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134904: 0xc04c558  jal         func_131560
    ctx->pc = 0x134904u;
    SET_GPR_U32(ctx, 31, 0x13490Cu);
    ctx->pc = 0x134908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134904u;
    // 0x134908: 0xaea200a0  sw          $v0, 0xA0($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 160), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131560u, 0x134904u, 0x13490Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13490Cu;
label_13490c:
    // 0x13490c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x13490cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134910: 0xc04d130  jal         func_1344C0
    ctx->pc = 0x134910u;
    SET_GPR_U32(ctx, 31, 0x134918u);
    ctx->pc = 0x134914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134910u;
    // 0x134914: 0x2332821  addu        $a1, $s1, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1344C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1344C0u, 0x134910u, 0x134918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134918u;
label_134918:
    // 0x134918: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x134918u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x13491c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x13491cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->pc = 0x134920u;
}
