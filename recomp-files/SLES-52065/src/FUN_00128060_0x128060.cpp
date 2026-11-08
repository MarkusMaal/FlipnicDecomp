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

// Function: FUN_00128060
// Address: 0x128060 - 0x1280ac
void FUN_00128060_0x128060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00128060_0x128060");
#endif

    switch (ctx->pc) {
        case 0x12808cu: goto label_12808c;
        case 0x128098u: goto label_128098;
        default: break;
    }

    ctx->pc = 0x128060u;

    // 0x128060: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x128060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x128064: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x128064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x128068: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x128068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12806c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12806cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x128070: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x128070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x128074: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x128074u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128078: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x128078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x12807c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12807Cu;
    {
        const bool branch_taken_0x12807c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x128080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12807Cu;
        // 0x128080: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12807c) {
            ctx->pc = 0x12808Cu;
            goto label_12808c;
        }
    }
    ctx->pc = 0x128084u;
    // 0x128084: 0xc04a178  jal         func_1285E0
    ctx->pc = 0x128084u;
    SET_GPR_U32(ctx, 31, 0x12808Cu);
    ctx->pc = 0x128088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128084u;
    // 0x128088: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1285E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1285E0u, 0x128084u, 0x12808Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12808Cu;
label_12808c:
    // 0x12808c: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x12808cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x128090: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x128090u;
    SET_GPR_U32(ctx, 31, 0x128098u);
    ctx->pc = 0x128094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128090u;
    // 0x128094: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x128090u, 0x128098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128098u;
label_128098:
    // 0x128098: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x128098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12809c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12809cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1280a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1280a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1280a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1280A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1280A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1280A4u;
        // 0x1280a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1280A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1280ACu;
}
