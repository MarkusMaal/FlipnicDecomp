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

// Function: entry_0014cb7c
// Address: 0x14cb7c - 0x14cb98
void entry_0014cb7c_0x14cb7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014cb7c_0x14cb7c");
#endif

    switch (ctx->pc) {
        case 0x14cb8cu: goto label_14cb8c;
        default: break;
    }

    ctx->pc = 0x14cb7cu;

    // 0x14cb7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14cb7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cb80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14cb80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cb84: 0xc0485b4  jal         func_1216D0
    ctx->pc = 0x14CB84u;
    SET_GPR_U32(ctx, 31, 0x14CB8Cu);
    ctx->pc = 0x14CB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CB84u;
    // 0x14cb88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1216D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1216D0u, 0x14CB84u, 0x14CB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CB8Cu;
label_14cb8c:
    // 0x14cb8c: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x14cb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x14cb90: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14CB90u;
    {
        const bool branch_taken_0x14cb90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CB90u;
        // 0x14cb94: 0xac6202c0  sw          $v0, 0x2C0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cb90) {
            ctx->pc = 0x14CBA0u;
            return;
        }
    }
    ctx->pc = 0x14CB98u;
}
