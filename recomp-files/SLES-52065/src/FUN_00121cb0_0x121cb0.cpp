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

// Function: FUN_00121cb0
// Address: 0x121cb0 - 0x121d04
void FUN_00121cb0_0x121cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00121cb0_0x121cb0");
#endif

    switch (ctx->pc) {
        case 0x121cd4u: goto label_121cd4;
        case 0x121cecu: goto label_121cec;
        default: break;
    }

    ctx->pc = 0x121cb0u;

    // 0x121cb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x121cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x121cb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x121cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x121cb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x121cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x121cbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x121cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x121cc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x121cc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121cc4: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x121CC4u;
    {
        const bool branch_taken_0x121cc4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x121CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121CC4u;
        // 0x121cc8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121cc4) {
            ctx->pc = 0x121CECu;
            goto label_121cec;
        }
    }
    ctx->pc = 0x121CCCu;
    // 0x121ccc: 0xc04619c  jal         func_118670
    ctx->pc = 0x121CCCu;
    SET_GPR_U32(ctx, 31, 0x121CD4u);
    ctx->pc = 0x121CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121CCCu;
    // 0x121cd0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x121CCCu, 0x121CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121CD4u;
label_121cd4:
    // 0x121cd4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x121cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x121cd8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x121cd8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x121cdc: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x121CDCu;
    {
        const bool branch_taken_0x121cdc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x121CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121CDCu;
        // 0x121ce0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121cdc) {
            ctx->pc = 0x121CF0u;
            goto label_121cf0;
        }
    }
    ctx->pc = 0x121CE4u;
    // 0x121ce4: 0xc0401a4  jal         func_100690
    ctx->pc = 0x121CE4u;
    SET_GPR_U32(ctx, 31, 0x121CECu);
    ctx->pc = 0x121CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121CE4u;
    // 0x121ce8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x121CE4u, 0x121CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121CECu;
label_121cec:
    // 0x121cec: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x121cecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_121cf0:
    // 0x121cf0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x121cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x121cf4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x121cf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x121cf8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x121cf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x121cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x121CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121CFCu;
        // 0x121d00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121CFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x121D04u;
}
