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

// Function: FUN_001ceac0
// Address: 0x1ceac0 - 0x1ceb18
void FUN_001ceac0_0x1ceac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ceac0_0x1ceac0");
#endif

    switch (ctx->pc) {
        case 0x1ceae0u: goto label_1ceae0;
        case 0x1ceaf4u: goto label_1ceaf4;
        case 0x1ceb08u: goto label_1ceb08;
        default: break;
    }

    ctx->pc = 0x1ceac0u;

    // 0x1ceac0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ceac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ceac4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ceac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ceac8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ceac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ceacc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ceaccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cead0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cead0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cead4: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x1cead4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1cead8: 0xc06e028  jal         func_1B80A0
    ctx->pc = 0x1CEAD8u;
    SET_GPR_U32(ctx, 31, 0x1CEAE0u);
    ctx->pc = 0x1CEADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEAD8u;
    // 0x1ceadc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B80A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B80A0u, 0x1CEAD8u, 0x1CEAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEAE0u;
label_1ceae0:
    // 0x1ceae0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ceae0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1ceae4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ceae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceae8: 0x24a59270  addiu       $a1, $a1, -0x6D90
    ctx->pc = 0x1ceae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939248));
    // 0x1ceaec: 0xc06de84  jal         func_1B7A10
    ctx->pc = 0x1CEAECu;
    SET_GPR_U32(ctx, 31, 0x1CEAF4u);
    ctx->pc = 0x1CEAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEAECu;
    // 0x1ceaf0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A10u, 0x1CEAECu, 0x1CEAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEAF4u;
label_1ceaf4:
    // 0x1ceaf4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ceaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1ceaf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ceaf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceafc: 0x24a593f0  addiu       $a1, $a1, -0x6C10
    ctx->pc = 0x1ceafcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939632));
    // 0x1ceb00: 0xc06de24  jal         func_1B7890
    ctx->pc = 0x1CEB00u;
    SET_GPR_U32(ctx, 31, 0x1CEB08u);
    ctx->pc = 0x1CEB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEB00u;
    // 0x1ceb04: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7890u, 0x1CEB00u, 0x1CEB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEB08u;
label_1ceb08:
    // 0x1ceb08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ceb08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ceb0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ceb0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ceb10: 0x3e00008  jr          $ra
    ctx->pc = 0x1CEB10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CEB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEB10u;
        // 0x1ceb14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEB10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CEB18u;
}
