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

// Function: FUN_00184130
// Address: 0x184130 - 0x184174
void FUN_00184130_0x184130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00184130_0x184130");
#endif

    switch (ctx->pc) {
        case 0x184160u: goto label_184160;
        default: break;
    }

    ctx->pc = 0x184130u;

    // 0x184130: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x184130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x184134: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x184134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x184138: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x184138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18413c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18413cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184140: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x184140u;
    {
        const bool branch_taken_0x184140 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x184144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184140u;
        // 0x184144: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184140) {
            ctx->pc = 0x184164u;
            goto label_184164;
        }
    }
    ctx->pc = 0x184148u;
    // 0x184148: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x184148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x18414c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18414cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x184150: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x184150u;
    {
        const bool branch_taken_0x184150 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x184150) {
            ctx->pc = 0x184160u;
            goto label_184160;
        }
    }
    ctx->pc = 0x184158u;
    // 0x184158: 0xc0401a4  jal         func_100690
    ctx->pc = 0x184158u;
    SET_GPR_U32(ctx, 31, 0x184160u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x184158u, 0x184160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184160u;
label_184160:
    // 0x184160: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x184160u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_184164:
    // 0x184164: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x184164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x184168: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x184168u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18416c: 0x3e00008  jr          $ra
    ctx->pc = 0x18416Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18416Cu;
        // 0x184170: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18416Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184174u;
}
