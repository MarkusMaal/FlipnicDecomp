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

// Function: entry_00130594
// Address: 0x130594 - 0x1305c8
void entry_00130594_0x130594(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130594_0x130594");
#endif

    switch (ctx->pc) {
        case 0x1305a8u: goto label_1305a8;
        case 0x1305bcu: goto label_1305bc;
        default: break;
    }

    ctx->pc = 0x130594u;

    // 0x130594: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x130594u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x130598: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x130598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13059c: 0x24846280  addiu       $a0, $a0, 0x6280
    ctx->pc = 0x13059cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25216));
    // 0x1305a0: 0xc04c1f0  jal         func_1307C0
    ctx->pc = 0x1305A0u;
    SET_GPR_U32(ctx, 31, 0x1305A8u);
    ctx->pc = 0x1305A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1305A0u;
    // 0x1305a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1307C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1307C0u, 0x1305A0u, 0x1305A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1305A8u;
label_1305a8:
    // 0x1305a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1305a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1305ac: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1305ACu;
    {
        const bool branch_taken_0x1305ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1305ac) {
            ctx->pc = 0x1305C8u;
            return;
        }
    }
    ctx->pc = 0x1305B4u;
    // 0x1305b4: 0xc04d988  jal         func_136620
    ctx->pc = 0x1305B4u;
    SET_GPR_U32(ctx, 31, 0x1305BCu);
    ctx->pc = 0x136620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136620u, 0x1305B4u, 0x1305BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1305BCu;
label_1305bc:
    // 0x1305bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1305bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1305c0: 0xc04c558  jal         func_131560
    ctx->pc = 0x1305C0u;
    SET_GPR_U32(ctx, 31, 0x1305C8u);
    ctx->pc = 0x1305C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1305C0u;
    // 0x1305c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131560u, 0x1305C0u, 0x1305C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1305C8u;
}
