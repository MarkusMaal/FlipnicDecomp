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

// Function: entry_0019021c
// Address: 0x19021c - 0x190248
void entry_0019021c_0x19021c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019021c_0x19021c");
#endif

    switch (ctx->pc) {
        case 0x190238u: goto label_190238;
        default: break;
    }

    ctx->pc = 0x19021cu;

    // 0x19021c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x19021cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x190220: 0xaf828704  sw          $v0, -0x78FC($gp)
    ctx->pc = 0x190220u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936324), GPR_U32(ctx, 2));
    // 0x190224: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x190224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190228: 0x24a5fdd8  addiu       $a1, $a1, -0x228
    ctx->pc = 0x190228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966744));
    // 0x19022c: 0xaf8086fc  sw          $zero, -0x7904($gp)
    ctx->pc = 0x19022cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 0));
    // 0x190230: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x190230u;
    SET_GPR_U32(ctx, 31, 0x190238u);
    ctx->pc = 0x190234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190230u;
    // 0x190234: 0xaf8086f8  sw          $zero, -0x7908($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936312), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x190230u, 0x190238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190238u;
label_190238:
    // 0x190238: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x190238u;
    {
        const bool branch_taken_0x190238 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x190238) {
            ctx->pc = 0x190248u;
            return;
        }
    }
    ctx->pc = 0x190240u;
    // 0x190240: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x190240u;
    {
        const bool branch_taken_0x190240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190240u;
        // 0x190244: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190240) {
            ctx->pc = 0x190478u;
            return;
        }
    }
    ctx->pc = 0x190248u;
}
