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

// Function: FUN_00208d10
// Address: 0x208d10 - 0x208d74
void FUN_00208d10_0x208d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00208d10_0x208d10");
#endif

    switch (ctx->pc) {
        case 0x208d30u: goto label_208d30;
        case 0x208d40u: goto label_208d40;
        case 0x208d5cu: goto label_208d5c;
        case 0x208d64u: goto label_208d64;
        default: break;
    }

    ctx->pc = 0x208d10u;

    // 0x208d10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x208d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x208d14: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x208d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x208d18: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x208d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x208d1c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x208d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x208d20: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x208d20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208d24: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x208d24u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x208d28: 0xc08227c  jal         func_2089F0
    ctx->pc = 0x208D28u;
    SET_GPR_U32(ctx, 31, 0x208D30u);
    ctx->pc = 0x208D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208D28u;
    // 0x208d2c: 0xe7ad0034  swc1        $f13, 0x34($sp) (Delay Slot)
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2089F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2089F0u, 0x208D28u, 0x208D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208D30u;
label_208d30:
    // 0x208d30: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x208d30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x208d34: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x208d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x208d38: 0xc08227c  jal         func_2089F0
    ctx->pc = 0x208D38u;
    SET_GPR_U32(ctx, 31, 0x208D40u);
    ctx->pc = 0x208D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208D38u;
    // 0x208d3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2089F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2089F0u, 0x208D38u, 0x208D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208D40u;
label_208d40:
    // 0x208d40: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x208d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x208d44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x208d44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208d48: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x208d48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x208d4c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x208d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208d50: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x208d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x208d54: 0xc0822a0  jal         func_208A80
    ctx->pc = 0x208D54u;
    SET_GPR_U32(ctx, 31, 0x208D5Cu);
    ctx->pc = 0x208D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208D54u;
    // 0x208d58: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208A80u, 0x208D54u, 0x208D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208D5Cu;
label_208d5c:
    // 0x208d5c: 0xc082238  jal         func_2088E0
    ctx->pc = 0x208D5Cu;
    SET_GPR_U32(ctx, 31, 0x208D64u);
    ctx->pc = 0x208D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208D5Cu;
    // 0x208d60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2088E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2088E0u, 0x208D5Cu, 0x208D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208D64u;
label_208d64:
    // 0x208d64: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x208d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x208d68: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x208d68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x208d6c: 0x3e00008  jr          $ra
    ctx->pc = 0x208D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208D6Cu;
        // 0x208d70: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208D6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208D74u;
}
