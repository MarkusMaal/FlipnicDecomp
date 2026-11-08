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

// Function: FUN_001a6dd0
// Address: 0x1a6dd0 - 0x1a6e2c
void FUN_001a6dd0_0x1a6dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a6dd0_0x1a6dd0");
#endif

    switch (ctx->pc) {
        case 0x1a6dfcu: goto label_1a6dfc;
        case 0x1a6e14u: goto label_1a6e14;
        default: break;
    }

    ctx->pc = 0x1a6dd0u;

    // 0x1a6dd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a6dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a6dd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a6dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a6dd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a6dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a6ddc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a6ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a6de0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a6de0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6de4: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x1A6DE4u;
    {
        const bool branch_taken_0x1a6de4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6DE4u;
        // 0x1a6de8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6de4) {
            ctx->pc = 0x1A6E14u;
            goto label_1a6e14;
        }
    }
    ctx->pc = 0x1A6DECu;
    // 0x1a6dec: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1a6decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1a6df0: 0x2442b4c0  addiu       $v0, $v0, -0x4B40
    ctx->pc = 0x1a6df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948032));
    // 0x1a6df4: 0xc069b94  jal         func_1A6E50
    ctx->pc = 0x1A6DF4u;
    SET_GPR_U32(ctx, 31, 0x1A6DFCu);
    ctx->pc = 0x1A6DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6DF4u;
    // 0x1a6df8: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6E50u, 0x1A6DF4u, 0x1A6DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6DFCu;
label_1a6dfc:
    // 0x1a6dfc: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1a6dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1a6e00: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1a6e00u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1a6e04: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A6E04u;
    {
        const bool branch_taken_0x1a6e04 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1A6E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6E04u;
        // 0x1a6e08: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6e04) {
            ctx->pc = 0x1A6E18u;
            goto label_1a6e18;
        }
    }
    ctx->pc = 0x1A6E0Cu;
    // 0x1a6e0c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1A6E0Cu;
    SET_GPR_U32(ctx, 31, 0x1A6E14u);
    ctx->pc = 0x1A6E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6E0Cu;
    // 0x1a6e10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1A6E0Cu, 0x1A6E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6E14u;
label_1a6e14:
    // 0x1a6e14: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a6e14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a6e18:
    // 0x1a6e18: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a6e18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a6e1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a6e1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6e20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a6e20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6e24: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6E24u;
        // 0x1a6e28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6E24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6E2Cu;
}
