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

// Function: FUN_001ca2c0
// Address: 0x1ca2c0 - 0x1ca338
void FUN_001ca2c0_0x1ca2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ca2c0_0x1ca2c0");
#endif

    switch (ctx->pc) {
        case 0x1ca2dcu: goto label_1ca2dc;
        default: break;
    }

    ctx->pc = 0x1ca2c0u;

    // 0x1ca2c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ca2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ca2c4: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1ca2c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1ca2c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ca2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ca2cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ca2ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ca2d0: 0x8c22ca84  lw          $v0, -0x357C($at)
    ctx->pc = 0x1ca2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x22CA84u));
    // 0x1ca2d4: 0xc073090  jal         func_1CC240
    ctx->pc = 0x1CA2D4u;
    SET_GPR_U32(ctx, 31, 0x1CA2DCu);
    ctx->pc = 0x1CA2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA2D4u;
    // 0x1ca2d8: 0x245010c8  addiu       $s0, $v0, 0x10C8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC240u, 0x1CA2D4u, 0x1CA2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA2DCu;
label_1ca2dc:
    // 0x1ca2dc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1ca2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ca2e0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1ca2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1ca2e4: 0x24422500  addiu       $v0, $v0, 0x2500
    ctx->pc = 0x1ca2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9472));
    // 0x1ca2e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ca2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ca2ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ca2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ca2f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ca2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ca2f4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1ca2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1ca2f8: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1ca2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1ca2fc: 0x24430006  addiu       $v1, $v0, 0x6
    ctx->pc = 0x1ca2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x1ca300: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CA300u;
    {
        const bool branch_taken_0x1ca300 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1CA304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA300u;
        // 0x1ca304: 0x310c3  sra         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca300) {
            ctx->pc = 0x1CA310u;
            goto label_1ca310;
        }
    }
    ctx->pc = 0x1CA308u;
    // 0x1ca308: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x1ca308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x1ca30c: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x1ca30cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_1ca310:
    // 0x1ca310: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1ca310u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1ca314: 0x210fc  dsll32      $v0, $v0, 3
    ctx->pc = 0x1ca314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 3));
    // 0x1ca318: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CA318u;
    {
        const bool branch_taken_0x1ca318 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1CA31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA318u;
        // 0x1ca31c: 0x210ff  dsra32      $v0, $v0, 3 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca318) {
            ctx->pc = 0x1CA328u;
            goto label_1ca328;
        }
    }
    ctx->pc = 0x1CA320u;
    // 0x1ca320: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x1ca320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x1ca324: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x1ca324u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_1ca328:
    // 0x1ca328: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ca328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ca32c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ca32cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca330: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA330u;
        // 0x1ca334: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA338u;
}
