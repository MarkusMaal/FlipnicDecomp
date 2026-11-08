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

// Function: entry_00158eb4
// Address: 0x158eb4 - 0x158ed4
void entry_00158eb4_0x158eb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158eb4_0x158eb4");
#endif

    switch (ctx->pc) {
        case 0x158ec0u: goto label_158ec0;
        default: break;
    }

    ctx->pc = 0x158eb4u;

    // 0x158eb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x158eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158eb8: 0xc05bd00  jal         func_16F400
    ctx->pc = 0x158EB8u;
    SET_GPR_U32(ctx, 31, 0x158EC0u);
    ctx->pc = 0x158EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158EB8u;
    // 0x158ebc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F400u, 0x158EB8u, 0x158EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158EC0u;
label_158ec0:
    // 0x158ec0: 0xa24201f6  sb          $v0, 0x1F6($s2)
    ctx->pc = 0x158ec0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 502), (uint8_t)GPR_U32(ctx, 2));
    // 0x158ec4: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x158EC4u;
    {
        const bool branch_taken_0x158ec4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x158EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158EC4u;
        // 0x158ec8: 0xa24001f7  sb          $zero, 0x1F7($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 503), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158ec4) {
            ctx->pc = 0x158ED4u;
            return;
        }
    }
    ctx->pc = 0x158ECCu;
    // 0x158ecc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x158ECCu;
    {
        const bool branch_taken_0x158ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158ECCu;
        // 0x158ed0: 0xa24001f8  sb          $zero, 0x1F8($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 504), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158ecc) {
            ctx->pc = 0x158EE4u;
            return;
        }
    }
    ctx->pc = 0x158ED4u;
}
