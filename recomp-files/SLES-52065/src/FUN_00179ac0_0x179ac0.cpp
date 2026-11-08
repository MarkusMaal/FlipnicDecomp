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

// Function: FUN_00179ac0
// Address: 0x179ac0 - 0x179af4
void FUN_00179ac0_0x179ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00179ac0_0x179ac0");
#endif

    switch (ctx->pc) {
        case 0x179ad4u: goto label_179ad4;
        case 0x179adcu: goto label_179adc;
        case 0x179ae4u: goto label_179ae4;
        default: break;
    }

    ctx->pc = 0x179ac0u;

    // 0x179ac0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x179ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x179ac4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x179ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x179ac8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x179ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x179acc: 0xc05e6dc  jal         func_179B70
    ctx->pc = 0x179ACCu;
    SET_GPR_U32(ctx, 31, 0x179AD4u);
    ctx->pc = 0x179AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179ACCu;
    // 0x179ad0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179B70u, 0x179ACCu, 0x179AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179AD4u;
label_179ad4:
    // 0x179ad4: 0xc05e704  jal         func_179C10
    ctx->pc = 0x179AD4u;
    SET_GPR_U32(ctx, 31, 0x179ADCu);
    ctx->pc = 0x179AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179AD4u;
    // 0x179ad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179C10u, 0x179AD4u, 0x179ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179ADCu;
label_179adc:
    // 0x179adc: 0xc05e6c0  jal         func_179B00
    ctx->pc = 0x179ADCu;
    SET_GPR_U32(ctx, 31, 0x179AE4u);
    ctx->pc = 0x179AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179ADCu;
    // 0x179ae0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179B00u, 0x179ADCu, 0x179AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179AE4u;
label_179ae4:
    // 0x179ae4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x179ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179ae8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x179ae8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x179aec: 0x3e00008  jr          $ra
    ctx->pc = 0x179AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179AECu;
        // 0x179af0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179AECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179AF4u;
}
