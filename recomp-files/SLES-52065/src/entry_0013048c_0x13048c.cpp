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

// Function: entry_0013048c
// Address: 0x13048c - 0x1304c8
void entry_0013048c_0x13048c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013048c_0x13048c");
#endif

    switch (ctx->pc) {
        case 0x1304a0u: goto label_1304a0;
        case 0x1304b4u: goto label_1304b4;
        case 0x1304c0u: goto label_1304c0;
        default: break;
    }

    ctx->pc = 0x13048cu;

    // 0x13048c: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x13048cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x130490: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x130490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130494: 0x24846280  addiu       $a0, $a0, 0x6280
    ctx->pc = 0x130494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25216));
    // 0x130498: 0xc04c1f0  jal         func_1307C0
    ctx->pc = 0x130498u;
    SET_GPR_U32(ctx, 31, 0x1304A0u);
    ctx->pc = 0x13049Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130498u;
    // 0x13049c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1307C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1307C0u, 0x130498u, 0x1304A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1304A0u;
label_1304a0:
    // 0x1304a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1304a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1304a4: 0x12000048  beqz        $s0, . + 4 + (0x48 << 2)
    ctx->pc = 0x1304A4u;
    {
        const bool branch_taken_0x1304a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1304a4) {
            ctx->pc = 0x1305C8u;
            return;
        }
    }
    ctx->pc = 0x1304ACu;
    // 0x1304ac: 0xc04d988  jal         func_136620
    ctx->pc = 0x1304ACu;
    SET_GPR_U32(ctx, 31, 0x1304B4u);
    ctx->pc = 0x136620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136620u, 0x1304ACu, 0x1304B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1304B4u;
label_1304b4:
    // 0x1304b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1304b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1304b8: 0xc04db40  jal         func_136D00
    ctx->pc = 0x1304B8u;
    SET_GPR_U32(ctx, 31, 0x1304C0u);
    ctx->pc = 0x1304BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1304B8u;
    // 0x1304bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136D00u, 0x1304B8u, 0x1304C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1304C0u;
label_1304c0:
    // 0x1304c0: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1304C0u;
    {
        const bool branch_taken_0x1304c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1304c0) {
            ctx->pc = 0x1305C8u;
            return;
        }
    }
    ctx->pc = 0x1304C8u;
}
