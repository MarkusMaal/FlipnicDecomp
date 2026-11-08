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

// Function: entry_0013ae94
// Address: 0x13ae94 - 0x13aeb4
void entry_0013ae94_0x13ae94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ae94_0x13ae94");
#endif

    switch (ctx->pc) {
        case 0x13aea0u: goto label_13aea0;
        default: break;
    }

    ctx->pc = 0x13ae94u;

    // 0x13ae94: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x13ae94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ae98: 0xc04eee0  jal         func_13BB80
    ctx->pc = 0x13AE98u;
    SET_GPR_U32(ctx, 31, 0x13AEA0u);
    ctx->pc = 0x13AE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AE98u;
    // 0x13ae9c: 0x120282d  daddu       $a1, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BB80u, 0x13AE98u, 0x13AEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AEA0u;
label_13aea0:
    // 0x13aea0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x13aea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x13aea4: 0x93838090  lbu         $v1, -0x7F70($gp)
    ctx->pc = 0x13aea4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934672)));
    // 0x13aea8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13aea8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aeac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13AEACu;
    {
        const bool branch_taken_0x13aeac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AEACu;
        // 0x13aeb0: 0xa2030004  sb          $v1, 0x4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13aeac) {
            ctx->pc = 0x13AEC4u;
            return;
        }
    }
    ctx->pc = 0x13AEB4u;
}
