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

// Function: FUN_00105bf0
// Address: 0x105bf0 - 0x105c50
void FUN_00105bf0_0x105bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00105bf0_0x105bf0");
#endif

    switch (ctx->pc) {
        case 0x105c3cu: goto label_105c3c;
        default: break;
    }

    ctx->pc = 0x105bf0u;

    // 0x105bf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x105bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x105bf4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x105bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x105bf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x105bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x105bfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x105bfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105c00: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x105C00u;
    {
        const bool branch_taken_0x105c00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x105C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105C00u;
        // 0x105c04: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105c00) {
            ctx->pc = 0x105C40u;
            goto label_105c40;
        }
    }
    ctx->pc = 0x105C08u;
    // 0x105c08: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x105c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x105c0c: 0x24427db0  addiu       $v0, $v0, 0x7DB0
    ctx->pc = 0x105c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32176));
    // 0x105c10: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x105C10u;
    {
        const bool branch_taken_0x105c10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x105C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105C10u;
        // 0x105c14: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105c10) {
            ctx->pc = 0x105C24u;
            goto label_105c24;
        }
    }
    ctx->pc = 0x105C18u;
    // 0x105c18: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x105c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x105c1c: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x105c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
    // 0x105c20: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x105c20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_105c24:
    // 0x105c24: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x105c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x105c28: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x105c28u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x105c2c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x105C2Cu;
    {
        const bool branch_taken_0x105c2c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x105C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105C2Cu;
        // 0x105c30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105c2c) {
            ctx->pc = 0x105C3Cu;
            goto label_105c3c;
        }
    }
    ctx->pc = 0x105C34u;
    // 0x105c34: 0xc0401a4  jal         func_100690
    ctx->pc = 0x105C34u;
    SET_GPR_U32(ctx, 31, 0x105C3Cu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x105C34u, 0x105C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105C3Cu;
label_105c3c:
    // 0x105c3c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x105c3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_105c40:
    // 0x105c40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x105c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105c44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x105c44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105c48: 0x3e00008  jr          $ra
    ctx->pc = 0x105C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105C48u;
        // 0x105c4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105C50u;
}
