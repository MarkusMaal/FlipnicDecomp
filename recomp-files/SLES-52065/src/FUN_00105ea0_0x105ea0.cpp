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

// Function: FUN_00105ea0
// Address: 0x105ea0 - 0x105f50
void FUN_00105ea0_0x105ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00105ea0_0x105ea0");
#endif

    switch (ctx->pc) {
        case 0x105ee0u: goto label_105ee0;
        case 0x105f20u: goto label_105f20;
        case 0x105f38u: goto label_105f38;
        default: break;
    }

    ctx->pc = 0x105ea0u;

    // 0x105ea0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x105ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x105ea4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x105ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x105ea8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x105ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x105eac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x105eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x105eb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x105eb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105eb4: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x105EB4u;
    {
        const bool branch_taken_0x105eb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x105EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105EB4u;
        // 0x105eb8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105eb4) {
            ctx->pc = 0x105F38u;
            goto label_105f38;
        }
    }
    ctx->pc = 0x105EBCu;
    // 0x105ebc: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x105ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x105ec0: 0x26020220  addiu       $v0, $s0, 0x220
    ctx->pc = 0x105ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    // 0x105ec4: 0x2463a6d0  addiu       $v1, $v1, -0x5930
    ctx->pc = 0x105ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944464));
    // 0x105ec8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x105EC8u;
    {
        const bool branch_taken_0x105ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105EC8u;
        // 0x105ecc: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105ec8) {
            ctx->pc = 0x105EE0u;
            goto label_105ee0;
        }
    }
    ctx->pc = 0x105ED0u;
    // 0x105ed0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x105ED0u;
    {
        const bool branch_taken_0x105ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x105ed0) {
            ctx->pc = 0x105EE0u;
            goto label_105ee0;
        }
    }
    ctx->pc = 0x105ED8u;
    // 0x105ed8: 0xc04018c  jal         func_100630
    ctx->pc = 0x105ED8u;
    SET_GPR_U32(ctx, 31, 0x105EE0u);
    ctx->pc = 0x105EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105ED8u;
    // 0x105edc: 0x8e040228  lw          $a0, 0x228($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 552)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x105ED8u, 0x105EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105EE0u;
label_105ee0:
    // 0x105ee0: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x105EE0u;
    {
        const bool branch_taken_0x105ee0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x105EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105EE0u;
        // 0x105ee4: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105ee0) {
            ctx->pc = 0x105F24u;
            goto label_105f24;
        }
    }
    ctx->pc = 0x105EE8u;
    // 0x105ee8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x105ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x105eec: 0x244296b0  addiu       $v0, $v0, -0x6950
    ctx->pc = 0x105eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940336));
    // 0x105ef0: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x105EF0u;
    {
        const bool branch_taken_0x105ef0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x105EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105EF0u;
        // 0x105ef4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105ef0) {
            ctx->pc = 0x105F20u;
            goto label_105f20;
        }
    }
    ctx->pc = 0x105EF8u;
    // 0x105ef8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x105ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x105efc: 0x24429770  addiu       $v0, $v0, -0x6890
    ctx->pc = 0x105efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940528));
    // 0x105f00: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x105F00u;
    {
        const bool branch_taken_0x105f00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x105F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105F00u;
        // 0x105f04: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105f00) {
            ctx->pc = 0x105F20u;
            goto label_105f20;
        }
    }
    ctx->pc = 0x105F08u;
    // 0x105f08: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x105f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x105f0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x105f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105f10: 0x24427f90  addiu       $v0, $v0, 0x7F90
    ctx->pc = 0x105f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32656));
    // 0x105f14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x105f14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105f18: 0xc0418c0  jal         func_106300
    ctx->pc = 0x105F18u;
    SET_GPR_U32(ctx, 31, 0x105F20u);
    ctx->pc = 0x105F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105F18u;
    // 0x105f1c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106300u, 0x105F18u, 0x105F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105F20u;
label_105f20:
    // 0x105f20: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x105f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_105f24:
    // 0x105f24: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x105f24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x105f28: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x105F28u;
    {
        const bool branch_taken_0x105f28 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x105F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105F28u;
        // 0x105f2c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105f28) {
            ctx->pc = 0x105F3Cu;
            goto label_105f3c;
        }
    }
    ctx->pc = 0x105F30u;
    // 0x105f30: 0xc0401a4  jal         func_100690
    ctx->pc = 0x105F30u;
    SET_GPR_U32(ctx, 31, 0x105F38u);
    ctx->pc = 0x105F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105F30u;
    // 0x105f34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x105F30u, 0x105F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105F38u;
label_105f38:
    // 0x105f38: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x105f38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_105f3c:
    // 0x105f3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x105f3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x105f40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x105f40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105f44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x105f44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105f48: 0x3e00008  jr          $ra
    ctx->pc = 0x105F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105F48u;
        // 0x105f4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105F50u;
}
