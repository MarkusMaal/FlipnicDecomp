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

// Function: FUN_0012a070
// Address: 0x12a070 - 0x12a0bc
void FUN_0012a070_0x12a070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012a070_0x12a070");
#endif

    switch (ctx->pc) {
        case 0x12a0a8u: goto label_12a0a8;
        default: break;
    }

    ctx->pc = 0x12a070u;

    // 0x12a070: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12a070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12a074: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12a074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12a078: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12a078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12a07c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12a07cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a080: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x12A080u;
    {
        const bool branch_taken_0x12a080 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A080u;
        // 0x12a084: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a080) {
            ctx->pc = 0x12A0ACu;
            goto label_12a0ac;
        }
    }
    ctx->pc = 0x12A088u;
    // 0x12a088: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x12a088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x12a08c: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x12a08cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x12a090: 0x24638ae0  addiu       $v1, $v1, -0x7520
    ctx->pc = 0x12a090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937312));
    // 0x12a094: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x12a094u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x12a098: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12A098u;
    {
        const bool branch_taken_0x12a098 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x12A09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A098u;
        // 0x12a09c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a098) {
            ctx->pc = 0x12A0A8u;
            goto label_12a0a8;
        }
    }
    ctx->pc = 0x12A0A0u;
    // 0x12a0a0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x12A0A0u;
    SET_GPR_U32(ctx, 31, 0x12A0A8u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x12A0A0u, 0x12A0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A0A8u;
label_12a0a8:
    // 0x12a0a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x12a0a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12a0ac:
    // 0x12a0ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12a0acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12a0b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12a0b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12a0b4: 0x3e00008  jr          $ra
    ctx->pc = 0x12A0B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A0B4u;
        // 0x12a0b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A0B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12A0BCu;
}
