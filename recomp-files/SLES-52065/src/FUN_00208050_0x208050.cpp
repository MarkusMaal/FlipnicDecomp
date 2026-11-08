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

// Function: FUN_00208050
// Address: 0x208050 - 0x2080b4
void FUN_00208050_0x208050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00208050_0x208050");
#endif

    switch (ctx->pc) {
        case 0x208070u: goto label_208070;
        case 0x208080u: goto label_208080;
        case 0x20809cu: goto label_20809c;
        case 0x2080a4u: goto label_2080a4;
        default: break;
    }

    ctx->pc = 0x208050u;

    // 0x208050: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x208050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x208054: 0xffa40060  sd          $a0, 0x60($sp)
    ctx->pc = 0x208054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x208058: 0xffa50068  sd          $a1, 0x68($sp)
    ctx->pc = 0x208058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x20805c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x20805cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x208060: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x208060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x208064: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x208064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x208068: 0xc081f46  jal         func_207D18
    ctx->pc = 0x208068u;
    SET_GPR_U32(ctx, 31, 0x208070u);
    ctx->pc = 0x20806Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208068u;
    // 0x20806c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207D18u, 0x208068u, 0x208070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208070u;
label_208070:
    // 0x208070: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x208070u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x208074: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x208074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x208078: 0xc081f46  jal         func_207D18
    ctx->pc = 0x208078u;
    SET_GPR_U32(ctx, 31, 0x208080u);
    ctx->pc = 0x20807Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208078u;
    // 0x20807c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207D18u, 0x208078u, 0x208080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208080u;
label_208080:
    // 0x208080: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x208080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x208084: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x208084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208088: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x208088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x20808c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20808cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208090: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x208090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x208094: 0xc081f6e  jal         func_207DB8
    ctx->pc = 0x208094u;
    SET_GPR_U32(ctx, 31, 0x20809Cu);
    ctx->pc = 0x208098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208094u;
    // 0x208098: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207DB8u, 0x208094u, 0x20809Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20809Cu;
label_20809c:
    // 0x20809c: 0xc081efa  jal         func_207BE8
    ctx->pc = 0x20809Cu;
    SET_GPR_U32(ctx, 31, 0x2080A4u);
    ctx->pc = 0x2080A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20809Cu;
    // 0x2080a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207BE8u, 0x20809Cu, 0x2080A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2080A4u;
label_2080a4:
    // 0x2080a4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2080a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2080a8: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x2080a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2080ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2080ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2080B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2080ACu;
        // 0x2080b0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2080ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2080B4u;
}
