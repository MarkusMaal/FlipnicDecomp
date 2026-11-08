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

// Function: FUN_0017ec00
// Address: 0x17ec00 - 0x17eca8
void FUN_0017ec00_0x17ec00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017ec00_0x17ec00");
#endif

    switch (ctx->pc) {
        case 0x17ec34u: goto label_17ec34;
        case 0x17ec44u: goto label_17ec44;
        case 0x17ec58u: goto label_17ec58;
        case 0x17ec78u: goto label_17ec78;
        default: break;
    }

    ctx->pc = 0x17ec00u;

    // 0x17ec00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17ec00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17ec04: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x17ec04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x17ec08: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17ec08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17ec0c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x17ec0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x17ec10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17ec10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17ec14: 0x27a60038  addiu       $a2, $sp, 0x38
    ctx->pc = 0x17ec14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x17ec18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17ec18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17ec1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17ec1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ec20: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x17ec20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ec24: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x17ec24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x17ec28: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x17ec28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x17ec2c: 0xc05fcac  jal         func_17F2B0
    ctx->pc = 0x17EC2Cu;
    SET_GPR_U32(ctx, 31, 0x17EC34u);
    ctx->pc = 0x17EC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EC2Cu;
    // 0x17ec30: 0x2625000c  addiu       $a1, $s1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F2B0u, 0x17EC2Cu, 0x17EC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EC34u;
label_17ec34:
    // 0x17ec34: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x17ec34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x17ec38: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x17ec38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x17ec3c: 0xc05faf0  jal         func_17EBC0
    ctx->pc = 0x17EC3Cu;
    SET_GPR_U32(ctx, 31, 0x17EC44u);
    ctx->pc = 0x17EC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EC3Cu;
    // 0x17ec40: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EBC0u, 0x17EC3Cu, 0x17EC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EC44u;
label_17ec44:
    // 0x17ec44: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x17ec44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x17ec48: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x17EC48u;
    {
        const bool branch_taken_0x17ec48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17ec48) {
            ctx->pc = 0x17EC8Cu;
            goto label_17ec8c;
        }
    }
    ctx->pc = 0x17EC50u;
    // 0x17ec50: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x17EC50u;
    {
        const bool branch_taken_0x17ec50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ec50) {
            ctx->pc = 0x17EC78u;
            goto label_17ec78;
        }
    }
    ctx->pc = 0x17EC58u;
label_17ec58:
    // 0x17ec58: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x17ec58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x17ec5c: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x17ec5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x17ec60: 0x14700003  bne         $v1, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17EC60u;
    {
        const bool branch_taken_0x17ec60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x17ec60) {
            ctx->pc = 0x17EC70u;
            goto label_17ec70;
        }
    }
    ctx->pc = 0x17EC68u;
    // 0x17ec68: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x17EC68u;
    {
        const bool branch_taken_0x17ec68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EC68u;
        // 0x17ec6c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ec68) {
            ctx->pc = 0x17EC98u;
            goto label_17ec98;
        }
    }
    ctx->pc = 0x17EC70u;
label_17ec70:
    // 0x17ec70: 0xc048974  jal         func_1225D0
    ctx->pc = 0x17EC70u;
    SET_GPR_U32(ctx, 31, 0x17EC78u);
    ctx->pc = 0x17EC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EC70u;
    // 0x17ec74: 0x27a40034  addiu       $a0, $sp, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x17EC70u, 0x17EC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EC78u;
label_17ec78:
    // 0x17ec78: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x17ec78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x17ec7c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x17ec7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17ec80: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x17ec80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x17ec84: 0x1062fff4  beq         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x17EC84u;
    {
        const bool branch_taken_0x17ec84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17ec84) {
            ctx->pc = 0x17EC58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17ec58;
        }
    }
    ctx->pc = 0x17EC8Cu;
label_17ec8c:
    // 0x17ec8c: 0x0  nop
    ctx->pc = 0x17ec8cu;
    // NOP
    // 0x17ec90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17ec90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ec94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17ec94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17ec98:
    // 0x17ec98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17ec98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ec9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17ec9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17eca0: 0x3e00008  jr          $ra
    ctx->pc = 0x17ECA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17ECA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ECA0u;
        // 0x17eca4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17ECA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17ECA8u;
}
