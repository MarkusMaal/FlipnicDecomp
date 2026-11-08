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

// Function: FUN_001b4a90
// Address: 0x1b4a90 - 0x1b4ae4
void FUN_001b4a90_0x1b4a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b4a90_0x1b4a90");
#endif

    switch (ctx->pc) {
        case 0x1b4aa8u: goto label_1b4aa8;
        case 0x1b4ab4u: goto label_1b4ab4;
        case 0x1b4ac0u: goto label_1b4ac0;
        case 0x1b4ad8u: goto label_1b4ad8;
        default: break;
    }

    ctx->pc = 0x1b4a90u;

    // 0x1b4a90: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1b4a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1b4a94: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1b4a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1b4a98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4a9c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b4a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b4aa0: 0xc06d4e0  jal         func_1B5380
    ctx->pc = 0x1B4AA0u;
    SET_GPR_U32(ctx, 31, 0x1B4AA8u);
    ctx->pc = 0x1B4AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4AA0u;
    // 0x1b4aa4: 0xa020c7f8  sb          $zero, -0x3808($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294952952), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5380u, 0x1B4AA0u, 0x1B4AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4AA8u;
label_1b4aa8:
    // 0x1b4aa8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b4aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b4aac: 0xc06d554  jal         func_1B5550
    ctx->pc = 0x1B4AACu;
    SET_GPR_U32(ctx, 31, 0x1B4AB4u);
    ctx->pc = 0x1B4AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4AACu;
    // 0x1b4ab0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5550u, 0x1B4AACu, 0x1B4AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4AB4u;
label_1b4ab4:
    // 0x1b4ab4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b4ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b4ab8: 0xc054660  jal         func_151980
    ctx->pc = 0x1B4AB8u;
    SET_GPR_U32(ctx, 31, 0x1B4AC0u);
    ctx->pc = 0x1B4ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4AB8u;
    // 0x1b4abc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151980u, 0x1B4AB8u, 0x1B4AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4AC0u;
label_1b4ac0:
    // 0x1b4ac0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b4ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4ac4: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1b4ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1b4ac8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b4ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b4acc: 0xa022c7f8  sb          $v0, -0x3808($at)
    ctx->pc = 0x1b4accu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x22C7F8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x22C7F8u, _value); } while (0);
    // 0x1b4ad0: 0xc06d508  jal         func_1B5420
    ctx->pc = 0x1B4AD0u;
    SET_GPR_U32(ctx, 31, 0x1B4AD8u);
    ctx->pc = 0x1B4AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4AD0u;
    // 0x1b4ad4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5420u, 0x1B4AD0u, 0x1B4AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4AD8u;
label_1b4ad8:
    // 0x1b4ad8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4adc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4ADCu;
        // 0x1b4ae0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4ADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4AE4u;
}
