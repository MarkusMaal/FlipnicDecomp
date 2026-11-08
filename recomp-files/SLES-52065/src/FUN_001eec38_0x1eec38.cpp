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

// Function: FUN_001eec38
// Address: 0x1eec38 - 0x1eec90
void FUN_001eec38_0x1eec38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001eec38_0x1eec38");
#endif

    switch (ctx->pc) {
        case 0x1eec50u: goto label_1eec50;
        case 0x1eec78u: goto label_1eec78;
        default: break;
    }

    ctx->pc = 0x1eec38u;

    // 0x1eec38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1eec38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1eec3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1eec3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1eec40: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1eec40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1eec44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1eec44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1eec48: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1EEC48u;
    SET_GPR_U32(ctx, 31, 0x1EEC50u);
    ctx->pc = 0x1EEC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEC48u;
    // 0x1eec4c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1EEC48u, 0x1EEC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEC50u;
label_1eec50:
    // 0x1eec50: 0x8e11000c  lw          $s1, 0xC($s0)
    ctx->pc = 0x1eec50u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1eec54: 0x56200003  bnel        $s1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EEC54u;
    {
        const bool branch_taken_0x1eec54 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eec54) {
            ctx->pc = 0x1EEC58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EEC54u;
            // 0x1eec58: 0x8e23003c  lw          $v1, 0x3C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EEC64u;
            goto label_1eec64;
        }
    }
    ctx->pc = 0x1EEC5Cu;
    // 0x1eec5c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1EEC5Cu;
    {
        const bool branch_taken_0x1eec5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEC5Cu;
        // 0x1eec60: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eec5c) {
            ctx->pc = 0x1EEC70u;
            goto label_1eec70;
        }
    }
    ctx->pc = 0x1EEC64u;
label_1eec64:
    // 0x1eec64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1eec64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eec68: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1eec68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1eec6c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1eec6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1eec70:
    // 0x1eec70: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1EEC70u;
    SET_GPR_U32(ctx, 31, 0x1EEC78u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1EEC70u, 0x1EEC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEC78u;
label_1eec78:
    // 0x1eec78: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1eec78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eec7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1eec7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eec80: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1eec80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eec84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1eec84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eec88: 0x3e00008  jr          $ra
    ctx->pc = 0x1EEC88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EEC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEC88u;
        // 0x1eec8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EEC88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EEC90u;
}
