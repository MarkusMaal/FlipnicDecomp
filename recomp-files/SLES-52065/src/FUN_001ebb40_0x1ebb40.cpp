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

// Function: FUN_001ebb40
// Address: 0x1ebb40 - 0x1ebbe4
void FUN_001ebb40_0x1ebb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ebb40_0x1ebb40");
#endif

    switch (ctx->pc) {
        case 0x1ebb58u: goto label_1ebb58;
        case 0x1ebb60u: goto label_1ebb60;
        case 0x1ebb84u: goto label_1ebb84;
        case 0x1ebb90u: goto label_1ebb90;
        case 0x1ebbb4u: goto label_1ebbb4;
        case 0x1ebbd4u: goto label_1ebbd4;
        default: break;
    }

    ctx->pc = 0x1ebb40u;

    // 0x1ebb40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ebb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ebb44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ebb44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ebb48: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ebb48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebb4c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ebb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1ebb50: 0xc07ae64  jal         func_1EB990
    ctx->pc = 0x1EBB50u;
    SET_GPR_U32(ctx, 31, 0x1EBB58u);
    ctx->pc = 0x1EBB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBB50u;
    // 0x1ebb54: 0x37a50008  ori         $a1, $sp, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB990u, 0x1EBB50u, 0x1EBB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBB58u;
label_1ebb58:
    // 0x1ebb58: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1EBB58u;
    SET_GPR_U32(ctx, 31, 0x1EBB60u);
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1EBB58u, 0x1EBB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBB60u;
label_1ebb60:
    // 0x1ebb60: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1ebb60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1ebb64: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1ebb64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ebb68: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x1ebb68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x1ebb6c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1ebb6cu;
    runtime->Store32(rdram, ctx, 0x1000F000u, GPR_U32(ctx, 4));
    // 0x1ebb70: 0xf  sync
    ctx->pc = 0x1ebb70u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1ebb74: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EBB74u;
    {
        const bool branch_taken_0x1ebb74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBB74u;
        // 0x1ebb78: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebb74) {
            ctx->pc = 0x1EBB88u;
            goto label_1ebb88;
        }
    }
    ctx->pc = 0x1EBB7Cu;
    // 0x1ebb7c: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1EBB7Cu;
    SET_GPR_U32(ctx, 31, 0x1EBB84u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1EBB7Cu, 0x1EBB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBB84u;
label_1ebb84:
    // 0x1ebb84: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1ebb84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1ebb88:
    // 0x1ebb88: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x1ebb88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x1ebb8c: 0x0  nop
    ctx->pc = 0x1ebb8cu;
    // NOP
label_1ebb90:
    // 0x1ebb90: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ebb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ebb94: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1ebb94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1ebb98: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EBB98u;
    {
        const bool branch_taken_0x1ebb98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ebb98) {
            ctx->pc = 0x1EBBACu;
            goto label_1ebbac;
        }
    }
    ctx->pc = 0x1EBBA0u;
    // 0x1ebba0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1ebba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ebba4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1EBBA4u;
    {
        const bool branch_taken_0x1ebba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebba4) {
            ctx->pc = 0x1EBB90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ebb90;
        }
    }
    ctx->pc = 0x1EBBACu;
label_1ebbac:
    // 0x1ebbac: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1EBBACu;
    SET_GPR_U32(ctx, 31, 0x1EBBB4u);
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1EBBACu, 0x1EBBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBBB4u;
label_1ebbb4:
    // 0x1ebbb4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1ebbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ebbb8: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x1ebbb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x1ebbbc: 0xac23f000  sw          $v1, -0x1000($at)
    ctx->pc = 0x1ebbbcu;
    runtime->Store32(rdram, ctx, 0x1000F000u, GPR_U32(ctx, 3));
    // 0x1ebbc0: 0xf  sync
    ctx->pc = 0x1ebbc0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1ebbc4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EBBC4u;
    {
        const bool branch_taken_0x1ebbc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebbc4) {
            ctx->pc = 0x1EBBD4u;
            goto label_1ebbd4;
        }
    }
    ctx->pc = 0x1EBBCCu;
    // 0x1ebbcc: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1EBBCCu;
    SET_GPR_U32(ctx, 31, 0x1EBBD4u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1EBBCCu, 0x1EBBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBBD4u;
label_1ebbd4:
    // 0x1ebbd4: 0xdfa20008  ld          $v0, 0x8($sp)
    ctx->pc = 0x1ebbd4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ebbd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ebbd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ebbdc: 0x3e00008  jr          $ra
    ctx->pc = 0x1EBBDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBBDCu;
        // 0x1ebbe0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBBDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EBBE4u;
}
