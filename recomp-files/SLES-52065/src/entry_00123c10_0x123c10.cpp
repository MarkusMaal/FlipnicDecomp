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

// Function: entry_00123c10
// Address: 0x123c10 - 0x123c34
void entry_00123c10_0x123c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123c10_0x123c10");
#endif

    switch (ctx->pc) {
        case 0x123c1cu: goto label_123c1c;
        default: break;
    }

    ctx->pc = 0x123c10u;

    // 0x123c10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x123c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123c14: 0xc04925c  jal         func_124970
    ctx->pc = 0x123C14u;
    SET_GPR_U32(ctx, 31, 0x123C1Cu);
    ctx->pc = 0x123C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123C14u;
    // 0x123c18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124970u, 0x123C14u, 0x123C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123C1Cu;
label_123c1c:
    // 0x123c1c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x123c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x123c20: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x123c20u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x123c24: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x123C24u;
    {
        const bool branch_taken_0x123c24 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x123C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123C24u;
        // 0x123c28: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123c24) {
            ctx->pc = 0x123C38u;
            return;
        }
    }
    ctx->pc = 0x123C2Cu;
    // 0x123c2c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x123C2Cu;
    SET_GPR_U32(ctx, 31, 0x123C34u);
    ctx->pc = 0x123C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123C2Cu;
    // 0x123c30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x123C2Cu, 0x123C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123C34u;
}
