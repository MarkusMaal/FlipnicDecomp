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

// Function: entry_001c11ac
// Address: 0x1c11ac - 0x1c11dc
void entry_001c11ac_0x1c11ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c11ac_0x1c11ac");
#endif

    switch (ctx->pc) {
        case 0x1c11b8u: goto label_1c11b8;
        case 0x1c11c0u: goto label_1c11c0;
        case 0x1c11d0u: goto label_1c11d0;
        case 0x1c11d8u: goto label_1c11d8;
        default: break;
    }

    ctx->pc = 0x1c11acu;

    // 0x1c11ac: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1c11acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1c11b0: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C11B0u;
    SET_GPR_U32(ctx, 31, 0x1C11B8u);
    ctx->pc = 0x1C11B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C11B0u;
    // 0x1c11b4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C11B0u, 0x1C11B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C11B8u;
label_1c11b8:
    // 0x1c11b8: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1C11B8u;
    SET_GPR_U32(ctx, 31, 0x1C11C0u);
    ctx->pc = 0x1C11BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C11B8u;
    // 0x1c11bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1C11B8u, 0x1C11C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C11C0u;
label_1c11c0:
    // 0x1c11c0: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x1c11c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1c11c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c11c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11c8: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C11C8u;
    SET_GPR_U32(ctx, 31, 0x1C11D0u);
    ctx->pc = 0x1C11CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C11C8u;
    // 0x1c11cc: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C11C8u, 0x1C11D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C11D0u;
label_1c11d0:
    // 0x1c11d0: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1C11D0u;
    SET_GPR_U32(ctx, 31, 0x1C11D8u);
    ctx->pc = 0x1C11D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C11D0u;
    // 0x1c11d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1C11D0u, 0x1C11D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C11D8u;
label_1c11d8:
    // 0x1c11d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c11d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1c11dcu;
}
