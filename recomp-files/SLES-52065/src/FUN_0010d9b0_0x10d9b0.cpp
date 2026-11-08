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

// Function: FUN_0010d9b0
// Address: 0x10d9b0 - 0x10da40
void FUN_0010d9b0_0x10d9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010d9b0_0x10d9b0");
#endif

    switch (ctx->pc) {
        case 0x10da10u: goto label_10da10;
        case 0x10da28u: goto label_10da28;
        default: break;
    }

    ctx->pc = 0x10d9b0u;

    // 0x10d9b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10d9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10d9b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10d9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10d9b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10d9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10d9bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10d9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10d9c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10d9c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d9c4: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x10D9C4u;
    {
        const bool branch_taken_0x10d9c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D9C4u;
        // 0x10d9c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d9c4) {
            ctx->pc = 0x10DA28u;
            goto label_10da28;
        }
    }
    ctx->pc = 0x10D9CCu;
    // 0x10d9cc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x10d9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x10d9d0: 0x24428170  addiu       $v0, $v0, -0x7E90
    ctx->pc = 0x10d9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934896));
    // 0x10d9d4: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x10D9D4u;
    {
        const bool branch_taken_0x10d9d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D9D4u;
        // 0x10d9d8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d9d4) {
            ctx->pc = 0x10DA10u;
            goto label_10da10;
        }
    }
    ctx->pc = 0x10D9DCu;
    // 0x10d9dc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x10d9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x10d9e0: 0x244281d0  addiu       $v0, $v0, -0x7E30
    ctx->pc = 0x10d9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934992));
    // 0x10d9e4: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x10D9E4u;
    {
        const bool branch_taken_0x10d9e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D9E4u;
        // 0x10d9e8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d9e4) {
            ctx->pc = 0x10DA10u;
            goto label_10da10;
        }
    }
    ctx->pc = 0x10D9ECu;
    // 0x10d9ec: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x10d9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x10d9f0: 0x2442a250  addiu       $v0, $v0, -0x5DB0
    ctx->pc = 0x10d9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943312));
    // 0x10d9f4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10D9F4u;
    {
        const bool branch_taken_0x10d9f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D9F4u;
        // 0x10d9f8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d9f4) {
            ctx->pc = 0x10DA10u;
            goto label_10da10;
        }
    }
    ctx->pc = 0x10D9FCu;
    // 0x10d9fc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x10d9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x10da00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10da00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10da04: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x10da04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x10da08: 0xc0418ec  jal         func_1063B0
    ctx->pc = 0x10DA08u;
    SET_GPR_U32(ctx, 31, 0x10DA10u);
    ctx->pc = 0x10DA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DA08u;
    // 0x10da0c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1063B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1063B0u, 0x10DA08u, 0x10DA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DA10u;
label_10da10:
    // 0x10da10: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x10da10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x10da14: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x10da14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x10da18: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10DA18u;
    {
        const bool branch_taken_0x10da18 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x10DA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DA18u;
        // 0x10da1c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10da18) {
            ctx->pc = 0x10DA2Cu;
            goto label_10da2c;
        }
    }
    ctx->pc = 0x10DA20u;
    // 0x10da20: 0xc0401a4  jal         func_100690
    ctx->pc = 0x10DA20u;
    SET_GPR_U32(ctx, 31, 0x10DA28u);
    ctx->pc = 0x10DA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DA20u;
    // 0x10da24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x10DA20u, 0x10DA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DA28u;
label_10da28:
    // 0x10da28: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x10da28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10da2c:
    // 0x10da2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10da2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10da30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10da30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10da34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10da34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10da38: 0x3e00008  jr          $ra
    ctx->pc = 0x10DA38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10DA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DA38u;
        // 0x10da3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DA38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10DA40u;
}
