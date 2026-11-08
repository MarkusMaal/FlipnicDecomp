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

// Function: FUN_001ebd20
// Address: 0x1ebd20 - 0x1ebdcc
void FUN_001ebd20_0x1ebd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ebd20_0x1ebd20");
#endif

    switch (ctx->pc) {
        case 0x1ebd48u: goto label_1ebd48;
        case 0x1ebd78u: goto label_1ebd78;
        case 0x1ebd8cu: goto label_1ebd8c;
        default: break;
    }

    ctx->pc = 0x1ebd20u;

    // 0x1ebd20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ebd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ebd24: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ebd24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ebd28: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ebd28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1ebd2c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1ebd2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1ebd30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ebd30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ebd34: 0x40116000  mfc0        $s1, Status
    ctx->pc = 0x1ebd34u;
    SET_GPR_S32(ctx, 17, (int32_t)ctx->cop0_status);
    // 0x1ebd38: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1ebd38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1ebd3c: 0x2228824  and         $s1, $s1, $v0
    ctx->pc = 0x1ebd3cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x1ebd40: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1EBD40u;
    {
        const bool branch_taken_0x1ebd40 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBD40u;
        // 0x1ebd44: 0x3c120022  lui         $s2, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebd40) {
            ctx->pc = 0x1EBD6Cu;
            goto label_1ebd6c;
        }
    }
    ctx->pc = 0x1EBD48u;
label_1ebd48:
    // 0x1ebd48: 0x42000039  di
    ctx->pc = 0x1ebd48u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x1ebd4c: 0x40f  sync.p
    ctx->pc = 0x1ebd4cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1ebd50: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x1ebd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x1ebd54: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1ebd54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1ebd58: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1ebd58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1ebd5c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1EBD5Cu;
    {
        const bool branch_taken_0x1ebd5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ebd5c) {
            ctx->pc = 0x1EBD48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ebd48;
        }
    }
    ctx->pc = 0x1EBD64u;
    // 0x1ebd64: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EBD64u;
    {
        const bool branch_taken_0x1ebd64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBD64u;
        // 0x1ebd68: 0x8e42a3b4  lw          $v0, -0x5C4C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294943668)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebd64) {
            ctx->pc = 0x1EBD70u;
            goto label_1ebd70;
        }
    }
    ctx->pc = 0x1EBD6Cu;
label_1ebd6c:
    // 0x1ebd6c: 0x8e42a3b4  lw          $v0, -0x5C4C($s2)
    ctx->pc = 0x1ebd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294943668)));
label_1ebd70:
    // 0x1ebd70: 0xc07ad80  jal         func_1EB600
    ctx->pc = 0x1EBD70u;
    SET_GPR_U32(ctx, 31, 0x1EBD78u);
    ctx->pc = 0x1EBD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBD70u;
    // 0x1ebd74: 0x448021  addu        $s0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB600u, 0x1EBD70u, 0x1EBD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBD78u;
label_1ebd78:
    // 0x1ebd78: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x1ebd78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1ebd7c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1EBD7Cu;
    {
        const bool branch_taken_0x1ebd7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBD7Cu;
        // 0x1ebd80: 0x8e42a3b4  lw          $v0, -0x5C4C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294943668)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebd7c) {
            ctx->pc = 0x1EBDA8u;
            goto label_1ebda8;
        }
    }
    ctx->pc = 0x1EBD84u;
    // 0x1ebd84: 0xc07f4f8  jal         func_1FD3E0
    ctx->pc = 0x1EBD84u;
    SET_GPR_U32(ctx, 31, 0x1EBD8Cu);
    ctx->pc = 0x1FD3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD3E0u, 0x1EBD84u, 0x1EBD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBD8Cu;
label_1ebd8c:
    // 0x1ebd8c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1ebd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1ebd90: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EBD90u;
    {
        const bool branch_taken_0x1ebd90 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBD90u;
        // 0x1ebd94: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebd90) {
            ctx->pc = 0x1EBD9Cu;
            goto label_1ebd9c;
        }
    }
    ctx->pc = 0x1EBD98u;
    // 0x1ebd98: 0x42000038  ei
    ctx->pc = 0x1ebd98u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_1ebd9c:
    // 0x1ebd9c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1ebd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1ebda0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1EBDA0u;
    {
        const bool branch_taken_0x1ebda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBDA0u;
        // 0x1ebda4: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebda0) {
            ctx->pc = 0x1EBDB4u;
            goto label_1ebdb4;
        }
    }
    ctx->pc = 0x1EBDA8u;
label_1ebda8:
    // 0x1ebda8: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EBDA8u;
    {
        const bool branch_taken_0x1ebda8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBDA8u;
        // 0x1ebdac: 0xae50a3b4  sw          $s0, -0x5C4C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294943668), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebda8) {
            ctx->pc = 0x1EBDB4u;
            goto label_1ebdb4;
        }
    }
    ctx->pc = 0x1EBDB0u;
    // 0x1ebdb0: 0x42000038  ei
    ctx->pc = 0x1ebdb0u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_1ebdb4:
    // 0x1ebdb4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ebdb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ebdb8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ebdb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ebdbc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ebdbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ebdc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ebdc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ebdc4: 0x3e00008  jr          $ra
    ctx->pc = 0x1EBDC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBDC4u;
        // 0x1ebdc8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBDC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EBDCCu;
}
