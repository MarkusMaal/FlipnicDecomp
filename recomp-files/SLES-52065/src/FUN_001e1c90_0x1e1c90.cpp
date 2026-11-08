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

// Function: FUN_001e1c90
// Address: 0x1e1c90 - 0x1e1d28
void FUN_001e1c90_0x1e1c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e1c90_0x1e1c90");
#endif

    switch (ctx->pc) {
        case 0x1e1cf8u: goto label_1e1cf8;
        case 0x1e1d10u: goto label_1e1d10;
        default: break;
    }

    ctx->pc = 0x1e1c90u;

    // 0x1e1c90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e1c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e1c94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e1c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e1c98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e1c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e1c9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e1c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e1ca0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e1ca0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1ca4: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1E1CA4u;
    {
        const bool branch_taken_0x1e1ca4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1CA4u;
        // 0x1e1ca8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1ca4) {
            ctx->pc = 0x1E1D10u;
            goto label_1e1d10;
        }
    }
    ctx->pc = 0x1E1CACu;
    // 0x1e1cac: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1e1cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1e1cb0: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1e1cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1e1cb4: 0x2442c1a0  addiu       $v0, $v0, -0x3E60
    ctx->pc = 0x1e1cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951328));
    // 0x1e1cb8: 0x2463c1ac  addiu       $v1, $v1, -0x3E54
    ctx->pc = 0x1e1cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951340));
    // 0x1e1cbc: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1e1cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x1e1cc0: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x1e1cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x1e1cc4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e1cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e1cc8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e1cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1e1ccc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1e1cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e1cd0: 0x831023  subu        $v0, $a0, $v1
    ctx->pc = 0x1e1cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e1cd4: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E1CD4u;
    {
        const bool branch_taken_0x1e1cd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1CD4u;
        // 0x1e1cd8: 0xac620048  sw          $v0, 0x48($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1cd4) {
            ctx->pc = 0x1E1CF8u;
            goto label_1e1cf8;
        }
    }
    ctx->pc = 0x1E1CDCu;
    // 0x1e1cdc: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E1CDCu;
    {
        const bool branch_taken_0x1e1cdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1CDCu;
        // 0x1e1ce0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1cdc) {
            ctx->pc = 0x1E1CFCu;
            goto label_1e1cfc;
        }
    }
    ctx->pc = 0x1E1CE4u;
    // 0x1e1ce4: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1e1ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1e1ce8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e1ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1cec: 0x2442c1b8  addiu       $v0, $v0, -0x3E48
    ctx->pc = 0x1e1cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951352));
    // 0x1e1cf0: 0xc078548  jal         func_1E1520
    ctx->pc = 0x1E1CF0u;
    SET_GPR_U32(ctx, 31, 0x1E1CF8u);
    ctx->pc = 0x1E1CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1CF0u;
    // 0x1e1cf4: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1520u, 0x1E1CF0u, 0x1E1CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1CF8u;
label_1e1cf8:
    // 0x1e1cf8: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1e1cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1e1cfc:
    // 0x1e1cfc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e1cfcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1e1d00: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E1D00u;
    {
        const bool branch_taken_0x1e1d00 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1E1D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1D00u;
        // 0x1e1d04: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1d00) {
            ctx->pc = 0x1E1D14u;
            goto label_1e1d14;
        }
    }
    ctx->pc = 0x1E1D08u;
    // 0x1e1d08: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1E1D08u;
    SET_GPR_U32(ctx, 31, 0x1E1D10u);
    ctx->pc = 0x1E1D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1D08u;
    // 0x1e1d0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1E1D08u, 0x1E1D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1D10u;
label_1e1d10:
    // 0x1e1d10: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e1d10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e1d14:
    // 0x1e1d14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e1d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1d18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e1d18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1d1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e1d1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1d20: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1D20u;
        // 0x1e1d24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1D28u;
}
