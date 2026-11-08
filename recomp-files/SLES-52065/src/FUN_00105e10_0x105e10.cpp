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

// Function: FUN_00105e10
// Address: 0x105e10 - 0x105ea0
void FUN_00105e10_0x105e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00105e10_0x105e10");
#endif

    switch (ctx->pc) {
        case 0x105e70u: goto label_105e70;
        case 0x105e88u: goto label_105e88;
        default: break;
    }

    ctx->pc = 0x105e10u;

    // 0x105e10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x105e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x105e14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x105e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x105e18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x105e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x105e1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x105e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x105e20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x105e20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105e24: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x105E24u;
    {
        const bool branch_taken_0x105e24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x105E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105E24u;
        // 0x105e28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105e24) {
            ctx->pc = 0x105E88u;
            goto label_105e88;
        }
    }
    ctx->pc = 0x105E2Cu;
    // 0x105e2c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x105e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x105e30: 0x24429710  addiu       $v0, $v0, -0x68F0
    ctx->pc = 0x105e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940432));
    // 0x105e34: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x105E34u;
    {
        const bool branch_taken_0x105e34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x105E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105E34u;
        // 0x105e38: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105e34) {
            ctx->pc = 0x105E70u;
            goto label_105e70;
        }
    }
    ctx->pc = 0x105E3Cu;
    // 0x105e3c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x105e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x105e40: 0x244296b0  addiu       $v0, $v0, -0x6950
    ctx->pc = 0x105e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940336));
    // 0x105e44: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x105E44u;
    {
        const bool branch_taken_0x105e44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x105E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105E44u;
        // 0x105e48: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105e44) {
            ctx->pc = 0x105E70u;
            goto label_105e70;
        }
    }
    ctx->pc = 0x105E4Cu;
    // 0x105e4c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x105e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x105e50: 0x24429770  addiu       $v0, $v0, -0x6890
    ctx->pc = 0x105e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940528));
    // 0x105e54: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x105E54u;
    {
        const bool branch_taken_0x105e54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x105E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105E54u;
        // 0x105e58: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105e54) {
            ctx->pc = 0x105E70u;
            goto label_105e70;
        }
    }
    ctx->pc = 0x105E5Cu;
    // 0x105e5c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x105e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x105e60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x105e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105e64: 0x24427f90  addiu       $v0, $v0, 0x7F90
    ctx->pc = 0x105e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32656));
    // 0x105e68: 0xc0418c0  jal         func_106300
    ctx->pc = 0x105E68u;
    SET_GPR_U32(ctx, 31, 0x105E70u);
    ctx->pc = 0x105E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105E68u;
    // 0x105e6c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106300u, 0x105E68u, 0x105E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105E70u;
label_105e70:
    // 0x105e70: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x105e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x105e74: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x105e74u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x105e78: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x105E78u;
    {
        const bool branch_taken_0x105e78 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x105E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105E78u;
        // 0x105e7c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105e78) {
            ctx->pc = 0x105E8Cu;
            goto label_105e8c;
        }
    }
    ctx->pc = 0x105E80u;
    // 0x105e80: 0xc0401a4  jal         func_100690
    ctx->pc = 0x105E80u;
    SET_GPR_U32(ctx, 31, 0x105E88u);
    ctx->pc = 0x105E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105E80u;
    // 0x105e84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x105E80u, 0x105E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105E88u;
label_105e88:
    // 0x105e88: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x105e88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_105e8c:
    // 0x105e8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x105e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x105e90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x105e90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105e94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x105e94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105e98: 0x3e00008  jr          $ra
    ctx->pc = 0x105E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105E98u;
        // 0x105e9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105E98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105EA0u;
}
