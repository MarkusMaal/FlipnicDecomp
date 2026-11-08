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

// Function: FUN_001c4720
// Address: 0x1c4720 - 0x1c4778
void FUN_001c4720_0x1c4720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c4720_0x1c4720");
#endif

    switch (ctx->pc) {
        case 0x1c4740u: goto label_1c4740;
        case 0x1c4754u: goto label_1c4754;
        case 0x1c4768u: goto label_1c4768;
        default: break;
    }

    ctx->pc = 0x1c4720u;

    // 0x1c4720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c4720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c4724: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c4724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c4728: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c4728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c472c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c472cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4730: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c4730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c4734: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x1c4734u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1c4738: 0xc06e028  jal         func_1B80A0
    ctx->pc = 0x1C4738u;
    SET_GPR_U32(ctx, 31, 0x1C4740u);
    ctx->pc = 0x1C473Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4738u;
    // 0x1c473c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B80A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B80A0u, 0x1C4738u, 0x1C4740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4740u;
label_1c4740:
    // 0x1c4740: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c4740u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c4744: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4748: 0x24a55320  addiu       $a1, $a1, 0x5320
    ctx->pc = 0x1c4748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21280));
    // 0x1c474c: 0xc06de84  jal         func_1B7A10
    ctx->pc = 0x1C474Cu;
    SET_GPR_U32(ctx, 31, 0x1C4754u);
    ctx->pc = 0x1C4750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C474Cu;
    // 0x1c4750: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A10u, 0x1C474Cu, 0x1C4754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4754u;
label_1c4754:
    // 0x1c4754: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c4754u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c4758: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c475c: 0x24a553e0  addiu       $a1, $a1, 0x53E0
    ctx->pc = 0x1c475cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21472));
    // 0x1c4760: 0xc06de24  jal         func_1B7890
    ctx->pc = 0x1C4760u;
    SET_GPR_U32(ctx, 31, 0x1C4768u);
    ctx->pc = 0x1C4764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4760u;
    // 0x1c4764: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7890u, 0x1C4760u, 0x1C4768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4768u;
label_1c4768:
    // 0x1c4768: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c4768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c476c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c476cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4770: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4770u;
        // 0x1c4774: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4778u;
}
