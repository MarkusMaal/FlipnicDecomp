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

// Function: FUN_001a96e0
// Address: 0x1a96e0 - 0x1a9750
void FUN_001a96e0_0x1a96e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a96e0_0x1a96e0");
#endif

    switch (ctx->pc) {
        case 0x1a9720u: goto label_1a9720;
        case 0x1a9738u: goto label_1a9738;
        default: break;
    }

    ctx->pc = 0x1a96e0u;

    // 0x1a96e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a96e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a96e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a96e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a96e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a96e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a96ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a96ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a96f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a96f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a96f4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A96F4u;
    {
        const bool branch_taken_0x1a96f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A96F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A96F4u;
        // 0x1a96f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a96f4) {
            ctx->pc = 0x1A9738u;
            goto label_1a9738;
        }
    }
    ctx->pc = 0x1A96FCu;
    // 0x1a96fc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1a96fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1a9700: 0x2442b590  addiu       $v0, $v0, -0x4A70
    ctx->pc = 0x1a9700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948240));
    // 0x1a9704: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A9704u;
    {
        const bool branch_taken_0x1a9704 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9704u;
        // 0x1a9708: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9704) {
            ctx->pc = 0x1A9720u;
            goto label_1a9720;
        }
    }
    ctx->pc = 0x1A970Cu;
    // 0x1a970c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1a970cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1a9710: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a9710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9714: 0x24428650  addiu       $v0, $v0, -0x79B0
    ctx->pc = 0x1a9714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936144));
    // 0x1a9718: 0xc045cb8  jal         func_1172E0
    ctx->pc = 0x1A9718u;
    SET_GPR_U32(ctx, 31, 0x1A9720u);
    ctx->pc = 0x1A971Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9718u;
    // 0x1a971c: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172E0u, 0x1A9718u, 0x1A9720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9720u;
label_1a9720:
    // 0x1a9720: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1a9720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1a9724: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1a9724u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1a9728: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A9728u;
    {
        const bool branch_taken_0x1a9728 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1A972Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9728u;
        // 0x1a972c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9728) {
            ctx->pc = 0x1A973Cu;
            goto label_1a973c;
        }
    }
    ctx->pc = 0x1A9730u;
    // 0x1a9730: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1A9730u;
    SET_GPR_U32(ctx, 31, 0x1A9738u);
    ctx->pc = 0x1A9734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9730u;
    // 0x1a9734: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1A9730u, 0x1A9738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9738u;
label_1a9738:
    // 0x1a9738: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a9738u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a973c:
    // 0x1a973c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a973cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a9740: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a9740u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a9744: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a9744u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9748: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A974Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9748u;
        // 0x1a974c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9750u;
}
