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

// Function: FUN_00182de0
// Address: 0x182de0 - 0x182e24
void FUN_00182de0_0x182de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00182de0_0x182de0");
#endif

    switch (ctx->pc) {
        case 0x182e10u: goto label_182e10;
        default: break;
    }

    ctx->pc = 0x182de0u;

    // 0x182de0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x182de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x182de4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x182de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x182de8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x182de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x182dec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x182decu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182df0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x182DF0u;
    {
        const bool branch_taken_0x182df0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x182DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182DF0u;
        // 0x182df4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182df0) {
            ctx->pc = 0x182E14u;
            goto label_182e14;
        }
    }
    ctx->pc = 0x182DF8u;
    // 0x182df8: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x182df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x182dfc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x182dfcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x182e00: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x182E00u;
    {
        const bool branch_taken_0x182e00 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x182e00) {
            ctx->pc = 0x182E10u;
            goto label_182e10;
        }
    }
    ctx->pc = 0x182E08u;
    // 0x182e08: 0xc0401a4  jal         func_100690
    ctx->pc = 0x182E08u;
    SET_GPR_U32(ctx, 31, 0x182E10u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x182E08u, 0x182E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182E10u;
label_182e10:
    // 0x182e10: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x182e10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_182e14:
    // 0x182e14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x182e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182e18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x182e18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182e1c: 0x3e00008  jr          $ra
    ctx->pc = 0x182E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182E1Cu;
        // 0x182e20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182E1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182E24u;
}
