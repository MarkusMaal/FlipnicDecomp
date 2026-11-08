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

// Function: entry_0013b044
// Address: 0x13b044 - 0x13b064
void entry_0013b044_0x13b044(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b044_0x13b044");
#endif

    switch (ctx->pc) {
        case 0x13b050u: goto label_13b050;
        default: break;
    }

    ctx->pc = 0x13b044u;

    // 0x13b044: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x13b044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b048: 0xc04ef64  jal         func_13BD90
    ctx->pc = 0x13B048u;
    SET_GPR_U32(ctx, 31, 0x13B050u);
    ctx->pc = 0x13B04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B048u;
    // 0x13b04c: 0x120282d  daddu       $a1, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BD90u, 0x13B048u, 0x13B050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B050u;
label_13b050:
    // 0x13b050: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x13b050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x13b054: 0x93838088  lbu         $v1, -0x7F78($gp)
    ctx->pc = 0x13b054u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934664)));
    // 0x13b058: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13b058u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b05c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13B05Cu;
    {
        const bool branch_taken_0x13b05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B05Cu;
        // 0x13b060: 0xa2030004  sb          $v1, 0x4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b05c) {
            ctx->pc = 0x13B074u;
            return;
        }
    }
    ctx->pc = 0x13B064u;
}
