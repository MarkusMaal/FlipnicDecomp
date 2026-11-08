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

// Function: entry_0011e020
// Address: 0x11e020 - 0x11e040
void entry_0011e020_0x11e020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e020_0x11e020");
#endif

    switch (ctx->pc) {
        case 0x11e030u: goto label_11e030;
        default: break;
    }

    ctx->pc = 0x11e020u;

    // 0x11e020: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x11e020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e024: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x11e024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e028: 0xc046d90  jal         func_11B640
    ctx->pc = 0x11E028u;
    SET_GPR_U32(ctx, 31, 0x11E030u);
    ctx->pc = 0x11E02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E028u;
    // 0x11e02c: 0x24c6e918  addiu       $a2, $a2, -0x16E8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B640u, 0x11E028u, 0x11E030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E030u;
label_11e030:
    // 0x11e030: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E030u;
    {
        const bool branch_taken_0x11e030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e030) {
            ctx->pc = 0x11E040u;
            return;
        }
    }
    ctx->pc = 0x11E038u;
    // 0x11e038: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x11e038u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e03c: 0xae120420  sw          $s2, 0x420($s0)
    ctx->pc = 0x11e03cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1056), GPR_U32(ctx, 18));
    ctx->pc = 0x11e040u;
}
