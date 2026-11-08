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

// Function: FUN_001eeba8
// Address: 0x1eeba8 - 0x1eec38
void FUN_001eeba8_0x1eeba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001eeba8_0x1eeba8");
#endif

    switch (ctx->pc) {
        case 0x1eebc0u: goto label_1eebc0;
        case 0x1eebf8u: goto label_1eebf8;
        case 0x1eec20u: goto label_1eec20;
        default: break;
    }

    ctx->pc = 0x1eeba8u;

    // 0x1eeba8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1eeba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1eebac: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1eebacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1eebb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1eebb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1eebb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1eebb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1eebb8: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1EEBB8u;
    SET_GPR_U32(ctx, 31, 0x1EEBC0u);
    ctx->pc = 0x1EEBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEBB8u;
    // 0x1eebbc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1EEBB8u, 0x1EEBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEBC0u;
label_1eebc0:
    // 0x1eebc0: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1eebc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1eebc4: 0x2463e180  addiu       $v1, $v1, -0x1E80
    ctx->pc = 0x1eebc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959488));
    // 0x1eebc8: 0x8c700028  lw          $s0, 0x28($v1)
    ctx->pc = 0x1eebc8u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x38E1A8u));
    // 0x1eebcc: 0x16110004  bne         $s0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EEBCCu;
    {
        const bool branch_taken_0x1eebcc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x1eebcc) {
            ctx->pc = 0x1EEBE0u;
            goto label_1eebe0;
        }
    }
    ctx->pc = 0x1EEBD4u;
    // 0x1eebd4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1eebd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1eebd8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1EEBD8u;
    {
        const bool branch_taken_0x1eebd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEBD8u;
        // 0x1eebdc: 0xac620028  sw          $v0, 0x28($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eebd8) {
            ctx->pc = 0x1EEC18u;
            goto label_1eec18;
        }
    }
    ctx->pc = 0x1EEBE0u;
label_1eebe0:
    // 0x1eebe0: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1EEBE0u;
    {
        const bool branch_taken_0x1eebe0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eebe0) {
            ctx->pc = 0x1EEC18u;
            goto label_1eec18;
        }
    }
    ctx->pc = 0x1EEBE8u;
    // 0x1eebe8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1eebe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1eebec: 0x50710009  beql        $v1, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EEBECu;
    {
        const bool branch_taken_0x1eebec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x1eebec) {
            ctx->pc = 0x1EEBF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EEBECu;
            // 0x1eebf0: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EEC14u;
            goto label_1eec14;
        }
    }
    ctx->pc = 0x1EEBF4u;
    // 0x1eebf4: 0x0  nop
    ctx->pc = 0x1eebf4u;
    // NOP
label_1eebf8:
    // 0x1eebf8: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1eebf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eebfc: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EEBFCu;
    {
        const bool branch_taken_0x1eebfc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eebfc) {
            ctx->pc = 0x1EEC18u;
            goto label_1eec18;
        }
    }
    ctx->pc = 0x1EEC04u;
    // 0x1eec04: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1eec04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1eec08: 0x1451fffb  bne         $v0, $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1EEC08u;
    {
        const bool branch_taken_0x1eec08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1EEC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEC08u;
        // 0x1eec0c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eec08) {
            ctx->pc = 0x1EEBF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eebf8;
        }
    }
    ctx->pc = 0x1EEC10u;
    // 0x1eec10: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1eec10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1eec14:
    // 0x1eec14: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x1eec14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_1eec18:
    // 0x1eec18: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1EEC18u;
    SET_GPR_U32(ctx, 31, 0x1EEC20u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1EEC18u, 0x1EEC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEC20u;
label_1eec20:
    // 0x1eec20: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1eec20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eec24: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1eec24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eec28: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1eec28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eec2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1eec2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eec30: 0x3e00008  jr          $ra
    ctx->pc = 0x1EEC30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EEC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEC30u;
        // 0x1eec34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EEC30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EEC38u;
}
