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

// Function: FUN_001abea0
// Address: 0x1abea0 - 0x1abf10
void FUN_001abea0_0x1abea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001abea0_0x1abea0");
#endif

    switch (ctx->pc) {
        case 0x1abee0u: goto label_1abee0;
        case 0x1abef8u: goto label_1abef8;
        default: break;
    }

    ctx->pc = 0x1abea0u;

    // 0x1abea0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1abea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1abea4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1abea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1abea8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1abea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1abeac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1abeacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1abeb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1abeb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abeb4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1ABEB4u;
    {
        const bool branch_taken_0x1abeb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABEB4u;
        // 0x1abeb8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abeb4) {
            ctx->pc = 0x1ABEF8u;
            goto label_1abef8;
        }
    }
    ctx->pc = 0x1ABEBCu;
    // 0x1abebc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1abebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1abec0: 0x2442b690  addiu       $v0, $v0, -0x4970
    ctx->pc = 0x1abec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948496));
    // 0x1abec4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ABEC4u;
    {
        const bool branch_taken_0x1abec4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABEC4u;
        // 0x1abec8: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abec4) {
            ctx->pc = 0x1ABEE0u;
            goto label_1abee0;
        }
    }
    ctx->pc = 0x1ABECCu;
    // 0x1abecc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1abeccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1abed0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1abed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abed4: 0x24428650  addiu       $v0, $v0, -0x79B0
    ctx->pc = 0x1abed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936144));
    // 0x1abed8: 0xc045cb8  jal         func_1172E0
    ctx->pc = 0x1ABED8u;
    SET_GPR_U32(ctx, 31, 0x1ABEE0u);
    ctx->pc = 0x1ABEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABED8u;
    // 0x1abedc: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172E0u, 0x1ABED8u, 0x1ABEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABEE0u;
label_1abee0:
    // 0x1abee0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1abee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1abee4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1abee4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1abee8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ABEE8u;
    {
        const bool branch_taken_0x1abee8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1ABEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABEE8u;
        // 0x1abeec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abee8) {
            ctx->pc = 0x1ABEFCu;
            goto label_1abefc;
        }
    }
    ctx->pc = 0x1ABEF0u;
    // 0x1abef0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1ABEF0u;
    SET_GPR_U32(ctx, 31, 0x1ABEF8u);
    ctx->pc = 0x1ABEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABEF0u;
    // 0x1abef4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1ABEF0u, 0x1ABEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABEF8u;
label_1abef8:
    // 0x1abef8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1abef8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1abefc:
    // 0x1abefc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1abefcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1abf00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1abf00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1abf04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1abf04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1abf08: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABF08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABF08u;
        // 0x1abf0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABF08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ABF10u;
}
