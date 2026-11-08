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

// Function: FUN_001a9470
// Address: 0x1a9470 - 0x1a94d4
void FUN_001a9470_0x1a9470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a9470_0x1a9470");
#endif

    switch (ctx->pc) {
        case 0x1a9498u: goto label_1a9498;
        case 0x1a94a8u: goto label_1a94a8;
        case 0x1a94bcu: goto label_1a94bc;
        default: break;
    }

    ctx->pc = 0x1a9470u;

    // 0x1a9470: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a9470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a9474: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a9474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a9478: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a9478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a947c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a947cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a9480: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a9480u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9484: 0x8c8209bc  lw          $v0, 0x9BC($a0)
    ctx->pc = 0x1a9484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2492)));
    // 0x1a9488: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A9488u;
    {
        const bool branch_taken_0x1a9488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A948Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9488u;
        // 0x1a948c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9488) {
            ctx->pc = 0x1A94B0u;
            goto label_1a94b0;
        }
    }
    ctx->pc = 0x1A9490u;
    // 0x1a9490: 0xc069afc  jal         func_1A6BF0
    ctx->pc = 0x1A9490u;
    SET_GPR_U32(ctx, 31, 0x1A9498u);
    ctx->pc = 0x1A9494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9490u;
    // 0x1a9494: 0x26240a70  addiu       $a0, $s1, 0xA70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6BF0u, 0x1A9490u, 0x1A9498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9498u;
label_1a9498:
    // 0x1a9498: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A9498u;
    {
        const bool branch_taken_0x1a9498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A949Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9498u;
        // 0x1a949c: 0x26240a90  addiu       $a0, $s1, 0xA90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9498) {
            ctx->pc = 0x1A94B4u;
            goto label_1a94b4;
        }
    }
    ctx->pc = 0x1A94A0u;
    // 0x1a94a0: 0xc069ae8  jal         func_1A6BA0
    ctx->pc = 0x1A94A0u;
    SET_GPR_U32(ctx, 31, 0x1A94A8u);
    ctx->pc = 0x1A94A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A94A0u;
    // 0x1a94a4: 0x26240a70  addiu       $a0, $s1, 0xA70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6BA0u, 0x1A94A0u, 0x1A94A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A94A8u;
label_1a94a8:
    // 0x1a94a8: 0xae2009bc  sw          $zero, 0x9BC($s1)
    ctx->pc = 0x1a94a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2492), GPR_U32(ctx, 0));
    // 0x1a94ac: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x1a94acu;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1a94b0:
    // 0x1a94b0: 0x26240a90  addiu       $a0, $s1, 0xA90
    ctx->pc = 0x1a94b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2704));
label_1a94b4:
    // 0x1a94b4: 0xc069bb0  jal         func_1A6EC0
    ctx->pc = 0x1A94B4u;
    SET_GPR_U32(ctx, 31, 0x1A94BCu);
    ctx->pc = 0x1A6EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6EC0u, 0x1A94B4u, 0x1A94BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A94BCu;
label_1a94bc:
    // 0x1a94bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a94bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a94c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a94c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a94c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a94c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a94c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a94c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a94cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A94CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A94D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A94CCu;
        // 0x1a94d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A94CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A94D4u;
}
