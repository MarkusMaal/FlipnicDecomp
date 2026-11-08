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

// Function: FUN_0015fb30
// Address: 0x15fb30 - 0x15fbb8
void FUN_0015fb30_0x15fb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015fb30_0x15fb30");
#endif

    switch (ctx->pc) {
        case 0x15fb5cu: goto label_15fb5c;
        case 0x15fb90u: goto label_15fb90;
        default: break;
    }

    ctx->pc = 0x15fb30u;

    // 0x15fb30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15fb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15fb34: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x15fb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x15fb38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15fb38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15fb3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15fb3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15fb40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15fb40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15fb44: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x15fb44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x15fb48: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x15fb48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x15fb4c: 0x14200014  bnez        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x15FB4Cu;
    {
        const bool branch_taken_0x15fb4c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x15FB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FB4Cu;
        // 0x15fb50: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fb4c) {
            ctx->pc = 0x15FBA0u;
            goto label_15fba0;
        }
    }
    ctx->pc = 0x15FB54u;
    // 0x15fb54: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15fb54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fb58: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15fb58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15fb5c:
    // 0x15fb5c: 0x2512021  addu        $a0, $s2, $s1
    ctx->pc = 0x15fb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x15fb60: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x15fb60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15fb64: 0x84840228  lh          $a0, 0x228($a0)
    ctx->pc = 0x15fb64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 552)));
    // 0x15fb68: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x15FB68u;
    {
        const bool branch_taken_0x15fb68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15FB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FB68u;
        // 0x15fb6c: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fb68) {
            ctx->pc = 0x15FB90u;
            goto label_15fb90;
        }
    }
    ctx->pc = 0x15FB70u;
    // 0x15fb70: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x15FB70u;
    {
        const bool branch_taken_0x15fb70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15fb70) {
            ctx->pc = 0x15FB90u;
            goto label_15fb90;
        }
    }
    ctx->pc = 0x15FB78u;
    // 0x15fb78: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x15fb78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15fb7c: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15FB7Cu;
    {
        const bool branch_taken_0x15fb7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15fb7c) {
            ctx->pc = 0x15FB90u;
            goto label_15fb90;
        }
    }
    ctx->pc = 0x15FB84u;
    // 0x15fb84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15fb84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fb88: 0xc05c01c  jal         func_170070
    ctx->pc = 0x15FB88u;
    SET_GPR_U32(ctx, 31, 0x15FB90u);
    ctx->pc = 0x15FB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FB88u;
    // 0x15fb8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170070u, 0x15FB88u, 0x15FB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FB90u;
label_15fb90:
    // 0x15fb90: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15fb90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x15fb94: 0x2a03000a  slti        $v1, $s0, 0xA
    ctx->pc = 0x15fb94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x15fb98: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x15FB98u;
    {
        const bool branch_taken_0x15fb98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15FB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FB98u;
        // 0x15fb9c: 0x263103d0  addiu       $s1, $s1, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fb98) {
            ctx->pc = 0x15FB5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15fb5c;
        }
    }
    ctx->pc = 0x15FBA0u;
label_15fba0:
    // 0x15fba0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x15fba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15fba4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15fba4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15fba8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15fba8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15fbac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15fbacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15fbb0: 0x3e00008  jr          $ra
    ctx->pc = 0x15FBB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15FBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FBB0u;
        // 0x15fbb4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FBB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15FBB8u;
}
