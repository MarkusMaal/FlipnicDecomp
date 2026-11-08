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

// Function: FUN_00113dd0
// Address: 0x113dd0 - 0x113e78
void FUN_00113dd0_0x113dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00113dd0_0x113dd0");
#endif

    switch (ctx->pc) {
        case 0x113e08u: goto label_113e08;
        case 0x113e48u: goto label_113e48;
        case 0x113e60u: goto label_113e60;
        default: break;
    }

    ctx->pc = 0x113dd0u;

    // 0x113dd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x113dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x113dd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x113dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x113dd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x113dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x113ddc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x113ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x113de0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x113de0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113de4: 0x1220001e  beqz        $s1, . + 4 + (0x1E << 2)
    ctx->pc = 0x113DE4u;
    {
        const bool branch_taken_0x113de4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x113DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113DE4u;
        // 0x113de8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113de4) {
            ctx->pc = 0x113E60u;
            goto label_113e60;
        }
    }
    ctx->pc = 0x113DECu;
    // 0x113dec: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x113decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x113df0: 0x3c050011  lui         $a1, 0x11
    ctx->pc = 0x113df0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17 << 16));
    // 0x113df4: 0x24428370  addiu       $v0, $v0, -0x7C90
    ctx->pc = 0x113df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935408));
    // 0x113df8: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x113df8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x113dfc: 0x8e240220  lw          $a0, 0x220($s1)
    ctx->pc = 0x113dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x113e00: 0xc07a394  jal         func_1E8E50
    ctx->pc = 0x113E00u;
    SET_GPR_U32(ctx, 31, 0x113E08u);
    ctx->pc = 0x113E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113E00u;
    // 0x113e04: 0x24a53cd0  addiu       $a1, $a1, 0x3CD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8E50u, 0x113E00u, 0x113E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113E08u;
label_113e08:
    // 0x113e08: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x113E08u;
    {
        const bool branch_taken_0x113e08 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x113E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113E08u;
        // 0x113e0c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113e08) {
            ctx->pc = 0x113E4Cu;
            goto label_113e4c;
        }
    }
    ctx->pc = 0x113E10u;
    // 0x113e10: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x113e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x113e14: 0x2442a130  addiu       $v0, $v0, -0x5ED0
    ctx->pc = 0x113e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943024));
    // 0x113e18: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x113E18u;
    {
        const bool branch_taken_0x113e18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x113E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113E18u;
        // 0x113e1c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113e18) {
            ctx->pc = 0x113E48u;
            goto label_113e48;
        }
    }
    ctx->pc = 0x113E20u;
    // 0x113e20: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x113e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x113e24: 0x2442a250  addiu       $v0, $v0, -0x5DB0
    ctx->pc = 0x113e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943312));
    // 0x113e28: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x113E28u;
    {
        const bool branch_taken_0x113e28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x113E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113E28u;
        // 0x113e2c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113e28) {
            ctx->pc = 0x113E48u;
            goto label_113e48;
        }
    }
    ctx->pc = 0x113E30u;
    // 0x113e30: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x113e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x113e34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x113e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113e38: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x113e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x113e3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x113e3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113e40: 0xc0418ec  jal         func_1063B0
    ctx->pc = 0x113E40u;
    SET_GPR_U32(ctx, 31, 0x113E48u);
    ctx->pc = 0x113E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113E40u;
    // 0x113e44: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1063B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1063B0u, 0x113E40u, 0x113E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113E48u;
label_113e48:
    // 0x113e48: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x113e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_113e4c:
    // 0x113e4c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x113e4cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x113e50: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x113E50u;
    {
        const bool branch_taken_0x113e50 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x113E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113E50u;
        // 0x113e54: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113e50) {
            ctx->pc = 0x113E64u;
            goto label_113e64;
        }
    }
    ctx->pc = 0x113E58u;
    // 0x113e58: 0xc0401a4  jal         func_100690
    ctx->pc = 0x113E58u;
    SET_GPR_U32(ctx, 31, 0x113E60u);
    ctx->pc = 0x113E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113E58u;
    // 0x113e5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x113E58u, 0x113E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113E60u;
label_113e60:
    // 0x113e60: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x113e60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_113e64:
    // 0x113e64: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x113e64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113e68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x113e68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113e6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x113e6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113e70: 0x3e00008  jr          $ra
    ctx->pc = 0x113E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113E70u;
        // 0x113e74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113E70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113E78u;
}
