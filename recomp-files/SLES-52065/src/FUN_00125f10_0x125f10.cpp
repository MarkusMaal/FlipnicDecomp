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

// Function: FUN_00125f10
// Address: 0x125f10 - 0x125f54
void FUN_00125f10_0x125f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00125f10_0x125f10");
#endif

    switch (ctx->pc) {
        case 0x125f40u: goto label_125f40;
        default: break;
    }

    ctx->pc = 0x125f10u;

    // 0x125f10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x125f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x125f14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x125f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x125f18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x125f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x125f1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x125f1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125f20: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x125F20u;
    {
        const bool branch_taken_0x125f20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x125F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125F20u;
        // 0x125f24: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125f20) {
            ctx->pc = 0x125F44u;
            goto label_125f44;
        }
    }
    ctx->pc = 0x125F28u;
    // 0x125f28: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x125f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x125f2c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x125f2cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x125f30: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x125F30u;
    {
        const bool branch_taken_0x125f30 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x125f30) {
            ctx->pc = 0x125F40u;
            goto label_125f40;
        }
    }
    ctx->pc = 0x125F38u;
    // 0x125f38: 0xc0401a4  jal         func_100690
    ctx->pc = 0x125F38u;
    SET_GPR_U32(ctx, 31, 0x125F40u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x125F38u, 0x125F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125F40u;
label_125f40:
    // 0x125f40: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x125f40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_125f44:
    // 0x125f44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x125f44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x125f48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x125f48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x125F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125F4Cu;
        // 0x125f50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125F4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125F54u;
}
