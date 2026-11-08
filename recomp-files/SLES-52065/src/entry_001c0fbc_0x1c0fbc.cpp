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

// Function: entry_001c0fbc
// Address: 0x1c0fbc - 0x1c0fe8
void entry_001c0fbc_0x1c0fbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0fbc_0x1c0fbc");
#endif

    switch (ctx->pc) {
        case 0x1c0fc8u: goto label_1c0fc8;
        case 0x1c0fe0u: goto label_1c0fe0;
        default: break;
    }

    ctx->pc = 0x1c0fbcu;

    // 0x1c0fbc: 0x0  nop
    ctx->pc = 0x1c0fbcu;
    // NOP
    // 0x1c0fc0: 0xc073098  jal         func_1CC260
    ctx->pc = 0x1C0FC0u;
    SET_GPR_U32(ctx, 31, 0x1C0FC8u);
    ctx->pc = 0x1CC260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC260u, 0x1C0FC0u, 0x1C0FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0FC8u;
label_1c0fc8:
    // 0x1c0fc8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C0FC8u;
    {
        const bool branch_taken_0x1c0fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0FC8u;
        // 0x1c0fcc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0fc8) {
            ctx->pc = 0x1C0FE8u;
            return;
        }
    }
    ctx->pc = 0x1C0FD0u;
    // 0x1c0fd0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1c0fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0fd4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c0fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0fd8: 0xc072ef4  jal         func_1CBBD0
    ctx->pc = 0x1C0FD8u;
    SET_GPR_U32(ctx, 31, 0x1C0FE0u);
    ctx->pc = 0x1C0FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0FD8u;
    // 0x1c0fdc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBBD0u, 0x1C0FD8u, 0x1C0FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0FE0u;
label_1c0fe0:
    // 0x1c0fe0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C0FE0u;
    {
        const bool branch_taken_0x1c0fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0FE0u;
        // 0x1c0fe4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0fe0) {
            ctx->pc = 0x1C0FF8u;
            return;
        }
    }
    ctx->pc = 0x1C0FE8u;
}
