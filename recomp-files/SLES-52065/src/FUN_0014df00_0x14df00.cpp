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

// Function: FUN_0014df00
// Address: 0x14df00 - 0x14df48
void FUN_0014df00_0x14df00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014df00_0x14df00");
#endif

    switch (ctx->pc) {
        case 0x14df34u: goto label_14df34;
        default: break;
    }

    ctx->pc = 0x14df00u;

    // 0x14df00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14df00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14df04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14df04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14df08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14df08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14df0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14df0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14df10: 0x12050009  beq         $s0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x14DF10u;
    {
        const bool branch_taken_0x14df10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x14DF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DF10u;
        // 0x14df14: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14df10) {
            ctx->pc = 0x14DF38u;
            goto label_14df38;
        }
    }
    ctx->pc = 0x14DF18u;
    // 0x14df18: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x14df18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x14df1c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x14df1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x14df20: 0x83a7002c  lb          $a3, 0x2C($sp)
    ctx->pc = 0x14df20u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x14df24: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14df24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14df28: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x14df28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14df2c: 0xc053a84  jal         func_14EA10
    ctx->pc = 0x14DF2Cu;
    SET_GPR_U32(ctx, 31, 0x14DF34u);
    ctx->pc = 0x14DF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DF2Cu;
    // 0x14df30: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EA10u, 0x14DF2Cu, 0x14DF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DF34u;
label_14df34:
    // 0x14df34: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x14df34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14df38:
    // 0x14df38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14df38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14df3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14df3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14df40: 0x3e00008  jr          $ra
    ctx->pc = 0x14DF40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14DF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DF40u;
        // 0x14df44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14DF40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14DF48u;
}
