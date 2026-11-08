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

// Function: entry_001b04ec
// Address: 0x1b04ec - 0x1b0544
void entry_001b04ec_0x1b04ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b04ec_0x1b04ec");
#endif

    switch (ctx->pc) {
        case 0x1b0504u: goto label_1b0504;
        default: break;
    }

    ctx->pc = 0x1b04ecu;

label_1b04ec:
    // 0x1b04ec: 0x2911021  addu        $v0, $s4, $s1
    ctx->pc = 0x1b04ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_1b04f0:
    // 0x1b04f0: 0x8c440100  lw          $a0, 0x100($v0)
    ctx->pc = 0x1b04f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
label_1b04f4:
    // 0x1b04f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1b04f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b04f8:
    // 0x1b04f8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1b04f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1b04fc:
    // 0x1b04fc: 0x320f809  jalr        $t9
label_1b0500:
    if (ctx->pc == 0x1B0500u) {
        ctx->pc = 0x1B0500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B04FCu;
        // 0x1b0500: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0504u;
        goto label_1b0504;
    }
    ctx->pc = 0x1B04FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B0504u);
        ctx->pc = 0x1B0500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B04FCu;
        // 0x1b0500: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B04FCu, 0x1B0504u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B0504u;
label_1b0504:
    // 0x1b0504: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b0504u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1b0508:
    // 0x1b0508: 0x2a030006  slti        $v1, $s0, 0x6
    ctx->pc = 0x1b0508u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
label_1b050c:
    // 0x1b050c: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_1b0510:
    if (ctx->pc == 0x1B0510u) {
        ctx->pc = 0x1B0510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B050Cu;
        // 0x1b0510: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0514u;
        goto label_1b0514;
    }
    ctx->pc = 0x1B050Cu;
    {
        const bool branch_taken_0x1b050c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B050Cu;
        // 0x1b0510: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b050c) {
            ctx->pc = 0x1B04ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b04ec;
        }
    }
    ctx->pc = 0x1B0514u;
label_1b0514:
    // 0x1b0514: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1b0514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1b0518:
    // 0x1b0518: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x1b0518u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1b051c:
    // 0x1b051c: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x1b051cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1b0520:
    // 0x1b0520: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1b0520u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1b0524:
    // 0x1b0524: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1b0524u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1b0528:
    // 0x1b0528: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1b0528u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1b052c:
    // 0x1b052c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1b052cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1b0530:
    // 0x1b0530: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1b0530u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b0534:
    // 0x1b0534: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1b0534u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b0538:
    // 0x1b0538: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b0538u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b053c:
    // 0x1b053c: 0x3e00008  jr          $ra
label_1b0540:
    if (ctx->pc == 0x1B0540u) {
        ctx->pc = 0x1B0540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B053Cu;
        // 0x1b0540: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0544u;
        goto label_fallthrough_0x1b053c;
    }
    ctx->pc = 0x1B053Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B053Cu;
        // 0x1b0540: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B053Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b053c:
    ctx->pc = 0x1B0544u;
}
