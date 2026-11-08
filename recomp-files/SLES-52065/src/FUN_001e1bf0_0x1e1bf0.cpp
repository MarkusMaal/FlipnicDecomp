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

// Function: FUN_001e1bf0
// Address: 0x1e1bf0 - 0x1e1c88
void FUN_001e1bf0_0x1e1bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e1bf0_0x1e1bf0");
#endif

    switch (ctx->pc) {
        case 0x1e1c58u: goto label_1e1c58;
        case 0x1e1c70u: goto label_1e1c70;
        default: break;
    }

    ctx->pc = 0x1e1bf0u;

    // 0x1e1bf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e1bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e1bf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e1bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e1bf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e1bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e1bfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e1bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e1c00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e1c00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1c04: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1E1C04u;
    {
        const bool branch_taken_0x1e1c04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1C04u;
        // 0x1e1c08: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1c04) {
            ctx->pc = 0x1E1C70u;
            goto label_1e1c70;
        }
    }
    ctx->pc = 0x1E1C0Cu;
    // 0x1e1c0c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1e1c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1e1c10: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1e1c10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1e1c14: 0x2442c1d0  addiu       $v0, $v0, -0x3E30
    ctx->pc = 0x1e1c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951376));
    // 0x1e1c18: 0x2463c1dc  addiu       $v1, $v1, -0x3E24
    ctx->pc = 0x1e1c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951388));
    // 0x1e1c1c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1e1c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1e1c20: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x1e1c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1e1c24: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e1c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e1c28: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e1c28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1e1c2c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1e1c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e1c30: 0x831023  subu        $v0, $a0, $v1
    ctx->pc = 0x1e1c30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e1c34: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E1C34u;
    {
        const bool branch_taken_0x1e1c34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1C34u;
        // 0x1e1c38: 0xac620048  sw          $v0, 0x48($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1c34) {
            ctx->pc = 0x1E1C58u;
            goto label_1e1c58;
        }
    }
    ctx->pc = 0x1E1C3Cu;
    // 0x1e1c3c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E1C3Cu;
    {
        const bool branch_taken_0x1e1c3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1C3Cu;
        // 0x1e1c40: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1c3c) {
            ctx->pc = 0x1E1C5Cu;
            goto label_1e1c5c;
        }
    }
    ctx->pc = 0x1E1C44u;
    // 0x1e1c44: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1e1c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1e1c48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e1c48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1c4c: 0x2442c1b8  addiu       $v0, $v0, -0x3E48
    ctx->pc = 0x1e1c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951352));
    // 0x1e1c50: 0xc078548  jal         func_1E1520
    ctx->pc = 0x1E1C50u;
    SET_GPR_U32(ctx, 31, 0x1E1C58u);
    ctx->pc = 0x1E1C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1C50u;
    // 0x1e1c54: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1520u, 0x1E1C50u, 0x1E1C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1C58u;
label_1e1c58:
    // 0x1e1c58: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1e1c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1e1c5c:
    // 0x1e1c5c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e1c5cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1e1c60: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E1C60u;
    {
        const bool branch_taken_0x1e1c60 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1E1C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1C60u;
        // 0x1e1c64: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1c60) {
            ctx->pc = 0x1E1C74u;
            goto label_1e1c74;
        }
    }
    ctx->pc = 0x1E1C68u;
    // 0x1e1c68: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1E1C68u;
    SET_GPR_U32(ctx, 31, 0x1E1C70u);
    ctx->pc = 0x1E1C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1C68u;
    // 0x1e1c6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1E1C68u, 0x1E1C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1C70u;
label_1e1c70:
    // 0x1e1c70: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e1c70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e1c74:
    // 0x1e1c74: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e1c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1c78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e1c78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1c7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e1c7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1c80: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1C80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1C80u;
        // 0x1e1c84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1C80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1C88u;
}
