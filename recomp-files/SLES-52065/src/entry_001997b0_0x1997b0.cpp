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

// Function: entry_001997b0
// Address: 0x1997b0 - 0x1997f4
void entry_001997b0_0x1997b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001997b0_0x1997b0");
#endif

    switch (ctx->pc) {
        case 0x1997c4u: goto label_1997c4;
        case 0x1997dcu: goto label_1997dc;
        case 0x1997e8u: goto label_1997e8;
        default: break;
    }

    ctx->pc = 0x1997b0u;

    // 0x1997b0: 0x8e860680  lw          $a2, 0x680($s4)
    ctx->pc = 0x1997b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1664)));
    // 0x1997b4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1997b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1997b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1997b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1997bc: 0xc064a88  jal         func_192A20
    ctx->pc = 0x1997BCu;
    SET_GPR_U32(ctx, 31, 0x1997C4u);
    ctx->pc = 0x1997C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1997BCu;
    // 0x1997c0: 0x24a50120  addiu       $a1, $a1, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192A20u, 0x1997BCu, 0x1997C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1997C4u;
label_1997c4:
    // 0x1997c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1997c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1997c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1997c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1997cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1997ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1997d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1997d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1997d4: 0xc064f00  jal         func_193C00
    ctx->pc = 0x1997D4u;
    SET_GPR_U32(ctx, 31, 0x1997DCu);
    ctx->pc = 0x1997D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1997D4u;
    // 0x1997d8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193C00u, 0x1997D4u, 0x1997DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1997DCu;
label_1997dc:
    // 0x1997dc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1997dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1997e0: 0xc063e08  jal         func_18F820
    ctx->pc = 0x1997E0u;
    SET_GPR_U32(ctx, 31, 0x1997E8u);
    ctx->pc = 0x1997E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1997E0u;
    // 0x1997e4: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1997E0u, 0x1997E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1997E8u;
label_1997e8:
    // 0x1997e8: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x1997E8u;
    {
        const bool branch_taken_0x1997e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1997e8) {
            ctx->pc = 0x19993Cu;
            return;
        }
    }
    ctx->pc = 0x1997F0u;
    // 0x1997f0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1997f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    ctx->pc = 0x1997f4u;
}
