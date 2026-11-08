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

// Function: FUN_00125c70
// Address: 0x125c70 - 0x125cbc
void FUN_00125c70_0x125c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00125c70_0x125c70");
#endif

    switch (ctx->pc) {
        case 0x125ca8u: goto label_125ca8;
        default: break;
    }

    ctx->pc = 0x125c70u;

    // 0x125c70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x125c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x125c74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x125c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x125c78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x125c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x125c7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x125c7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125c80: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x125C80u;
    {
        const bool branch_taken_0x125c80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x125C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125C80u;
        // 0x125c84: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125c80) {
            ctx->pc = 0x125CACu;
            goto label_125cac;
        }
    }
    ctx->pc = 0x125C88u;
    // 0x125c88: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x125c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x125c8c: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x125c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x125c90: 0x24638930  addiu       $v1, $v1, -0x76D0
    ctx->pc = 0x125c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936880));
    // 0x125c94: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x125c94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x125c98: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x125C98u;
    {
        const bool branch_taken_0x125c98 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x125C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125C98u;
        // 0x125c9c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125c98) {
            ctx->pc = 0x125CA8u;
            goto label_125ca8;
        }
    }
    ctx->pc = 0x125CA0u;
    // 0x125ca0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x125CA0u;
    SET_GPR_U32(ctx, 31, 0x125CA8u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x125CA0u, 0x125CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125CA8u;
label_125ca8:
    // 0x125ca8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x125ca8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_125cac:
    // 0x125cac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x125cacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x125cb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x125cb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x125CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125CB4u;
        // 0x125cb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125CB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125CBCu;
}
