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

// Function: FUN_001eeb10
// Address: 0x1eeb10 - 0x1eeba4
void FUN_001eeb10_0x1eeb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001eeb10_0x1eeb10");
#endif

    switch (ctx->pc) {
        case 0x1eeb30u: goto label_1eeb30;
        case 0x1eeb60u: goto label_1eeb60;
        case 0x1eeb88u: goto label_1eeb88;
        default: break;
    }

    ctx->pc = 0x1eeb10u;

    // 0x1eeb10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1eeb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1eeb14: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1eeb14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1eeb18: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1eeb18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1eeb1c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1eeb1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eeb20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1eeb20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1eeb24: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1eeb24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1eeb28: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1EEB28u;
    SET_GPR_U32(ctx, 31, 0x1EEB30u);
    ctx->pc = 0x1EEB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEB28u;
    // 0x1eeb2c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1EEB28u, 0x1EEB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEB30u;
label_1eeb30:
    // 0x1eeb30: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x1eeb30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1eeb34: 0x16110004  bne         $s0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EEB34u;
    {
        const bool branch_taken_0x1eeb34 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x1eeb34) {
            ctx->pc = 0x1EEB48u;
            goto label_1eeb48;
        }
    }
    ctx->pc = 0x1EEB3Cu;
    // 0x1eeb3c: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x1eeb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1eeb40: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1EEB40u;
    {
        const bool branch_taken_0x1eeb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEB40u;
        // 0x1eeb44: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eeb40) {
            ctx->pc = 0x1EEB80u;
            goto label_1eeb80;
        }
    }
    ctx->pc = 0x1EEB48u;
label_1eeb48:
    // 0x1eeb48: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1EEB48u;
    {
        const bool branch_taken_0x1eeb48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eeb48) {
            ctx->pc = 0x1EEB80u;
            goto label_1eeb80;
        }
    }
    ctx->pc = 0x1EEB50u;
    // 0x1eeb50: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x1eeb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1eeb54: 0x50710009  beql        $v1, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EEB54u;
    {
        const bool branch_taken_0x1eeb54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x1eeb54) {
            ctx->pc = 0x1EEB58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EEB54u;
            // 0x1eeb58: 0x8e220038  lw          $v0, 0x38($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EEB7Cu;
            goto label_1eeb7c;
        }
    }
    ctx->pc = 0x1EEB5Cu;
    // 0x1eeb5c: 0x0  nop
    ctx->pc = 0x1eeb5cu;
    // NOP
label_1eeb60:
    // 0x1eeb60: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1eeb60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eeb64: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EEB64u;
    {
        const bool branch_taken_0x1eeb64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eeb64) {
            ctx->pc = 0x1EEB80u;
            goto label_1eeb80;
        }
    }
    ctx->pc = 0x1EEB6Cu;
    // 0x1eeb6c: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x1eeb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1eeb70: 0x1451fffb  bne         $v0, $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1EEB70u;
    {
        const bool branch_taken_0x1eeb70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1EEB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEB70u;
        // 0x1eeb74: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eeb70) {
            ctx->pc = 0x1EEB60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eeb60;
        }
    }
    ctx->pc = 0x1EEB78u;
    // 0x1eeb78: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x1eeb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_1eeb7c:
    // 0x1eeb7c: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x1eeb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
label_1eeb80:
    // 0x1eeb80: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1EEB80u;
    SET_GPR_U32(ctx, 31, 0x1EEB88u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1EEB80u, 0x1EEB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEB88u;
label_1eeb88:
    // 0x1eeb88: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1eeb88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eeb8c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1eeb8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1eeb90: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1eeb90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eeb94: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1eeb94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eeb98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1eeb98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eeb9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EEB9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EEBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEB9Cu;
        // 0x1eeba0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EEB9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EEBA4u;
}
