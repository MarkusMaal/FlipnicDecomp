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

// Function: FUN_001e0f40
// Address: 0x1e0f40 - 0x1e0fd8
void FUN_001e0f40_0x1e0f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e0f40_0x1e0f40");
#endif

    switch (ctx->pc) {
        case 0x1e0f7cu: goto label_1e0f7c;
        default: break;
    }

    ctx->pc = 0x1e0f40u;

    // 0x1e0f40: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1e0f40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0f44: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e0f44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e0f48: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1e0f48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1e0f4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e0f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e0f50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e0f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e0f54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e0f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e0f58: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e0f58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e0f5c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e0f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e0f60: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1e0f60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e0f64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e0f64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e0f68: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x1e0f68u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
    // 0x1e0f6c: 0x2610b340  addiu       $s0, $s0, -0x4CC0
    ctx->pc = 0x1e0f6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294947648));
    // 0x1e0f70: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1e0f70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1e0f74: 0xc07837a  jal         func_1E0DE8
    ctx->pc = 0x1E0F74u;
    SET_GPR_U32(ctx, 31, 0x1E0F7Cu);
    ctx->pc = 0x1E0F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0F74u;
    // 0x1e0f78: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0DE8u, 0x1E0F74u, 0x1E0F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0F7Cu;
label_1e0f7c:
    // 0x1e0f7c: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1E0F7Cu;
    {
        const bool branch_taken_0x1e0f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0f7c) {
            ctx->pc = 0x1E0F80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0F7Cu;
            // 0x1e0f80: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E0FC8u;
            goto label_1e0fc8;
        }
    }
    ctx->pc = 0x1E0F84u;
    // 0x1e0f84: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1e0f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1e0f88: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1E0F88u;
    {
        const bool branch_taken_0x1e0f88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0F88u;
        // 0x1e0f8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0f88) {
            ctx->pc = 0x1E0FC4u;
            goto label_1e0fc4;
        }
    }
    ctx->pc = 0x1E0F90u;
    // 0x1e0f90: 0x8c640044  lw          $a0, 0x44($v1)
    ctx->pc = 0x1e0f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x1e0f94: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E0F94u;
    {
        const bool branch_taken_0x1e0f94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0F94u;
        // 0x1e0f98: 0x30830001  andi        $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0f94) {
            ctx->pc = 0x1E0FC4u;
            goto label_1e0fc4;
        }
    }
    ctx->pc = 0x1E0F9Cu;
    // 0x1e0f9c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1E0F9Cu;
    {
        const bool branch_taken_0x1e0f9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0F9Cu;
        // 0x1e0fa0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0f9c) {
            ctx->pc = 0x1E0FC8u;
            goto label_1e0fc8;
        }
    }
    ctx->pc = 0x1E0FA4u;
    // 0x1e0fa4: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x1e0fa4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e0fa8: 0x71182b  sltu        $v1, $v1, $s1
    ctx->pc = 0x1e0fa8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1e0fac: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E0FACu;
    {
        const bool branch_taken_0x1e0fac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0fac) {
            ctx->pc = 0x1E0FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0FACu;
            // 0x1e0fb0: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E0FCCu;
            goto label_1e0fcc;
        }
    }
    ctx->pc = 0x1E0FB4u;
    // 0x1e0fb4: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x1e0fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e0fb8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e0fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e0fbc: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x1e0fbcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1e0fc0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1e0fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1e0fc4:
    // 0x1e0fc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e0fc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e0fc8:
    // 0x1e0fc8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e0fc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1e0fcc:
    // 0x1e0fcc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e0fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e0fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0FD0u;
        // 0x1e0fd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0FD8u;
}
