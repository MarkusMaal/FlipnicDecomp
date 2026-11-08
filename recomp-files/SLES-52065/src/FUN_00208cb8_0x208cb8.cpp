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

// Function: FUN_00208cb8
// Address: 0x208cb8 - 0x208d10
void FUN_00208cb8_0x208cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00208cb8_0x208cb8");
#endif

    switch (ctx->pc) {
        case 0x208cd8u: goto label_208cd8;
        case 0x208ce8u: goto label_208ce8;
        case 0x208cf8u: goto label_208cf8;
        case 0x208d00u: goto label_208d00;
        default: break;
    }

    ctx->pc = 0x208cb8u;

    // 0x208cb8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x208cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x208cbc: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x208cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x208cc0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x208cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x208cc4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x208cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x208cc8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x208cc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208ccc: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x208cccu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x208cd0: 0xc08227c  jal         func_2089F0
    ctx->pc = 0x208CD0u;
    SET_GPR_U32(ctx, 31, 0x208CD8u);
    ctx->pc = 0x208CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208CD0u;
    // 0x208cd4: 0xe7ad0034  swc1        $f13, 0x34($sp) (Delay Slot)
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2089F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2089F0u, 0x208CD0u, 0x208CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208CD8u;
label_208cd8:
    // 0x208cd8: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x208cd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x208cdc: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x208cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x208ce0: 0xc08227c  jal         func_2089F0
    ctx->pc = 0x208CE0u;
    SET_GPR_U32(ctx, 31, 0x208CE8u);
    ctx->pc = 0x208CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208CE0u;
    // 0x208ce4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2089F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2089F0u, 0x208CE0u, 0x208CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208CE8u;
label_208ce8:
    // 0x208ce8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x208ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208cec: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x208cecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x208cf0: 0xc0822a0  jal         func_208A80
    ctx->pc = 0x208CF0u;
    SET_GPR_U32(ctx, 31, 0x208CF8u);
    ctx->pc = 0x208CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208CF0u;
    // 0x208cf4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208A80u, 0x208CF0u, 0x208CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208CF8u;
label_208cf8:
    // 0x208cf8: 0xc082238  jal         func_2088E0
    ctx->pc = 0x208CF8u;
    SET_GPR_U32(ctx, 31, 0x208D00u);
    ctx->pc = 0x208CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208CF8u;
    // 0x208cfc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2088E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2088E0u, 0x208CF8u, 0x208D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208D00u;
label_208d00:
    // 0x208d00: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x208d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x208d04: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x208d04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x208d08: 0x3e00008  jr          $ra
    ctx->pc = 0x208D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208D08u;
        // 0x208d0c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208D08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208D10u;
}
