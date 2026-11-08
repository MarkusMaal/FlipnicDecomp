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

// Function: entry_00133e68
// Address: 0x133e68 - 0x133e88
void entry_00133e68_0x133e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133e68_0x133e68");
#endif

    switch (ctx->pc) {
        case 0x133e80u: goto label_133e80;
        default: break;
    }

    ctx->pc = 0x133e68u;

    // 0x133e68: 0x8e820084  lw          $v0, 0x84($s4)
    ctx->pc = 0x133e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
    // 0x133e6c: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x133E6Cu;
    {
        const bool branch_taken_0x133e6c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x133E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133E6Cu;
        // 0x133e70: 0xaea20084  sw          $v0, 0x84($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133e6c) {
            ctx->pc = 0x133E88u;
            return;
        }
    }
    ctx->pc = 0x133E74u;
    // 0x133e74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x133e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133e78: 0xc04c558  jal         func_131560
    ctx->pc = 0x133E78u;
    SET_GPR_U32(ctx, 31, 0x133E80u);
    ctx->pc = 0x133E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133E78u;
    // 0x133e7c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131560u, 0x133E78u, 0x133E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133E80u;
label_133e80:
    // 0x133e80: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x133E80u;
    {
        const bool branch_taken_0x133e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133e80) {
            ctx->pc = 0x133E94u;
            return;
        }
    }
    ctx->pc = 0x133E88u;
}
