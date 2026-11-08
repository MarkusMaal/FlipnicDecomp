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

// Function: FUN_0017f8c0
// Address: 0x17f8c0 - 0x17f930
void FUN_0017f8c0_0x17f8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017f8c0_0x17f8c0");
#endif

    switch (ctx->pc) {
        case 0x17f900u: goto label_17f900;
        case 0x17f918u: goto label_17f918;
        default: break;
    }

    ctx->pc = 0x17f8c0u;

    // 0x17f8c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17f8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17f8c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17f8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17f8c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17f8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17f8cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17f8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17f8d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17f8d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f8d4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x17F8D4u;
    {
        const bool branch_taken_0x17f8d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F8D4u;
        // 0x17f8d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f8d4) {
            ctx->pc = 0x17F918u;
            goto label_17f918;
        }
    }
    ctx->pc = 0x17F8DCu;
    // 0x17f8dc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x17f8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x17f8e0: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x17f8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x17f8e4: 0x2442b128  addiu       $v0, $v0, -0x4ED8
    ctx->pc = 0x17f8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947112));
    // 0x17f8e8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17F8E8u;
    {
        const bool branch_taken_0x17f8e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F8E8u;
        // 0x17f8ec: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f8e8) {
            ctx->pc = 0x17F900u;
            goto label_17f900;
        }
    }
    ctx->pc = 0x17F8F0u;
    // 0x17f8f0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F8F0u;
    {
        const bool branch_taken_0x17f8f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F8F0u;
        // 0x17f8f4: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f8f0) {
            ctx->pc = 0x17F904u;
            goto label_17f904;
        }
    }
    ctx->pc = 0x17F8F8u;
    // 0x17f8f8: 0xc048414  jal         func_121050
    ctx->pc = 0x17F8F8u;
    SET_GPR_U32(ctx, 31, 0x17F900u);
    ctx->pc = 0x17F8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F8F8u;
    // 0x17f8fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121050u, 0x17F8F8u, 0x17F900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F900u;
label_17f900:
    // 0x17f900: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x17f900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_17f904:
    // 0x17f904: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x17f904u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x17f908: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F908u;
    {
        const bool branch_taken_0x17f908 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x17F90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F908u;
        // 0x17f90c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f908) {
            ctx->pc = 0x17F91Cu;
            goto label_17f91c;
        }
    }
    ctx->pc = 0x17F910u;
    // 0x17f910: 0xc0401a4  jal         func_100690
    ctx->pc = 0x17F910u;
    SET_GPR_U32(ctx, 31, 0x17F918u);
    ctx->pc = 0x17F914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F910u;
    // 0x17f914: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x17F910u, 0x17F918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F918u;
label_17f918:
    // 0x17f918: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x17f918u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17f91c:
    // 0x17f91c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17f91cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f920: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17f920u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f924: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17f924u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f928: 0x3e00008  jr          $ra
    ctx->pc = 0x17F928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F928u;
        // 0x17f92c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F930u;
}
