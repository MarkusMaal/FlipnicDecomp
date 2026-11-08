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

// Function: entry_0019f81c
// Address: 0x19f81c - 0x19f844
void entry_0019f81c_0x19f81c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f81c_0x19f81c");
#endif

    switch (ctx->pc) {
        case 0x19f838u: goto label_19f838;
        default: break;
    }

    ctx->pc = 0x19f81cu;

    // 0x19f81c: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x19f81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19f820: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f824: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x19f824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x19f828: 0x8c6228f0  lw          $v0, 0x28F0($v1)
    ctx->pc = 0x19f828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10480)));
    // 0x19f82c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19f82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x19f830: 0xc063e08  jal         func_18F820
    ctx->pc = 0x19F830u;
    SET_GPR_U32(ctx, 31, 0x19F838u);
    ctx->pc = 0x19F834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F830u;
    // 0x19f834: 0xac6228f0  sw          $v0, 0x28F0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 10480), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19F830u, 0x19F838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F838u;
label_19f838:
    // 0x19f838: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x19F838u;
    {
        const bool branch_taken_0x19f838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F838u;
        // 0x19f83c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f838) {
            ctx->pc = 0x19F850u;
            return;
        }
    }
    ctx->pc = 0x19F840u;
    // 0x19f840: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19f844u;
}
