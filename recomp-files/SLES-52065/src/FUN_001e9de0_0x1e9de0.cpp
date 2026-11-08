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

// Function: FUN_001e9de0
// Address: 0x1e9de0 - 0x1e9e40
void FUN_001e9de0_0x1e9de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e9de0_0x1e9de0");
#endif

    switch (ctx->pc) {
        case 0x1e9e2cu: goto label_1e9e2c;
        default: break;
    }

    ctx->pc = 0x1e9de0u;

    // 0x1e9de0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e9de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e9de4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e9de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e9de8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e9de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e9dec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e9decu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9df0: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x1E9DF0u;
    {
        const bool branch_taken_0x1e9df0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9DF0u;
        // 0x1e9df4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9df0) {
            ctx->pc = 0x1E9E30u;
            goto label_1e9e30;
        }
    }
    ctx->pc = 0x1E9DF8u;
    // 0x1e9df8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1e9df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1e9dfc: 0x2442c360  addiu       $v0, $v0, -0x3CA0
    ctx->pc = 0x1e9dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951776));
    // 0x1e9e00: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E9E00u;
    {
        const bool branch_taken_0x1e9e00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9E00u;
        // 0x1e9e04: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9e00) {
            ctx->pc = 0x1E9E14u;
            goto label_1e9e14;
        }
    }
    ctx->pc = 0x1E9E08u;
    // 0x1e9e08: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1e9e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1e9e0c: 0x2442c0c0  addiu       $v0, $v0, -0x3F40
    ctx->pc = 0x1e9e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951104));
    // 0x1e9e10: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e9e10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1e9e14:
    // 0x1e9e14: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1e9e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1e9e18: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e9e18u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1e9e1c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E9E1Cu;
    {
        const bool branch_taken_0x1e9e1c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1E9E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9E1Cu;
        // 0x1e9e20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9e1c) {
            ctx->pc = 0x1E9E2Cu;
            goto label_1e9e2c;
        }
    }
    ctx->pc = 0x1E9E24u;
    // 0x1e9e24: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1E9E24u;
    SET_GPR_U32(ctx, 31, 0x1E9E2Cu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1E9E24u, 0x1E9E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9E2Cu;
label_1e9e2c:
    // 0x1e9e2c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e9e2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e9e30:
    // 0x1e9e30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e9e30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9e34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e9e34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9e38: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9E38u;
        // 0x1e9e3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9E38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9E40u;
}
