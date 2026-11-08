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

// Function: entry_001cd788
// Address: 0x1cd788 - 0x1cd7c8
void entry_001cd788_0x1cd788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd788_0x1cd788");
#endif

    switch (ctx->pc) {
        case 0x1cd794u: goto label_1cd794;
        case 0x1cd7a8u: goto label_1cd7a8;
        case 0x1cd7b8u: goto label_1cd7b8;
        case 0x1cd7c0u: goto label_1cd7c0;
        default: break;
    }

    ctx->pc = 0x1cd788u;

    // 0x1cd788: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1cd788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cd78c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CD78Cu;
    SET_GPR_U32(ctx, 31, 0x1CD794u);
    ctx->pc = 0x1CD790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD78Cu;
    // 0x1cd790: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CD78Cu, 0x1CD794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD794u;
label_1cd794:
    // 0x1cd794: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cd794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd798: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1cd798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1cd79c: 0x24428a60  addiu       $v0, $v0, -0x75A0
    ctx->pc = 0x1cd79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937184));
    // 0x1cd7a0: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1CD7A0u;
    SET_GPR_U32(ctx, 31, 0x1CD7A8u);
    ctx->pc = 0x1CD7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD7A0u;
    // 0x1cd7a4: 0x502821  addu        $a1, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1CD7A0u, 0x1CD7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD7A8u;
label_1cd7a8:
    // 0x1cd7a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cd7a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd7ac: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1cd7acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cd7b0: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CD7B0u;
    SET_GPR_U32(ctx, 31, 0x1CD7B8u);
    ctx->pc = 0x1CD7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD7B0u;
    // 0x1cd7b4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CD7B0u, 0x1CD7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD7B8u;
label_1cd7b8:
    // 0x1cd7b8: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1CD7B8u;
    SET_GPR_U32(ctx, 31, 0x1CD7C0u);
    ctx->pc = 0x1CD7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD7B8u;
    // 0x1cd7bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1CD7B8u, 0x1CD7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD7C0u;
label_1cd7c0:
    // 0x1cd7c0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1cd7c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1cd7c4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1cd7c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x1cd7c8u;
}
