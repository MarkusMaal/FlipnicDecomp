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

// Function: entry_0016ea74
// Address: 0x16ea74 - 0x16eab0
void entry_0016ea74_0x16ea74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ea74_0x16ea74");
#endif

    switch (ctx->pc) {
        case 0x16ea84u: goto label_16ea84;
        default: break;
    }

    ctx->pc = 0x16ea74u;

    // 0x16ea74: 0x0  nop
    ctx->pc = 0x16ea74u;
    // NOP
    // 0x16ea78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16ea78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ea7c: 0xc042118  jal         func_108460
    ctx->pc = 0x16EA7Cu;
    SET_GPR_U32(ctx, 31, 0x16EA84u);
    ctx->pc = 0x16EA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EA7Cu;
    // 0x16ea80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x16EA7Cu, 0x16EA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EA84u;
label_16ea84:
    // 0x16ea84: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x16EA84u;
    {
        const bool branch_taken_0x16ea84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ea84) {
            ctx->pc = 0x16EAB0u;
            return;
        }
    }
    ctx->pc = 0x16EA8Cu;
    // 0x16ea8c: 0x8e0201fc  lw          $v0, 0x1FC($s0)
    ctx->pc = 0x16ea8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 508)));
    // 0x16ea90: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16ea90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16ea94: 0xae0201fc  sw          $v0, 0x1FC($s0)
    ctx->pc = 0x16ea94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 508), GPR_U32(ctx, 2));
    // 0x16ea98: 0x860201fa  lh          $v0, 0x1FA($s0)
    ctx->pc = 0x16ea98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 506)));
    // 0x16ea9c: 0x28410064  slti        $at, $v0, 0x64
    ctx->pc = 0x16ea9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x16eaa0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x16EAA0u;
    {
        const bool branch_taken_0x16eaa0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16eaa0) {
            ctx->pc = 0x16EAB0u;
            return;
        }
    }
    ctx->pc = 0x16EAA8u;
    // 0x16eaa8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16eaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16eaac: 0xa60201fa  sh          $v0, 0x1FA($s0)
    ctx->pc = 0x16eaacu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 506), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x16eab0u;
}
