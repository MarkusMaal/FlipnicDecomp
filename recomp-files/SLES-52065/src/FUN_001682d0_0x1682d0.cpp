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

// Function: FUN_001682d0
// Address: 0x1682d0 - 0x168350
void FUN_001682d0_0x1682d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001682d0_0x1682d0");
#endif

    switch (ctx->pc) {
        case 0x16833cu: goto label_16833c;
        default: break;
    }

    ctx->pc = 0x1682d0u;

    // 0x1682d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1682d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1682d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1682d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1682d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1682d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1682dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1682dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1682e0: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1682E0u;
    {
        const bool branch_taken_0x1682e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1682E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1682E0u;
        // 0x1682e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1682e0) {
            ctx->pc = 0x168340u;
            goto label_168340;
        }
    }
    ctx->pc = 0x1682E8u;
    // 0x1682e8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1682e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1682ec: 0x24429ef0  addiu       $v0, $v0, -0x6110
    ctx->pc = 0x1682ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942448));
    // 0x1682f0: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1682F0u;
    {
        const bool branch_taken_0x1682f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1682F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1682F0u;
        // 0x1682f4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1682f0) {
            ctx->pc = 0x168324u;
            goto label_168324;
        }
    }
    ctx->pc = 0x1682F8u;
    // 0x1682f8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1682f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1682fc: 0x2442a250  addiu       $v0, $v0, -0x5DB0
    ctx->pc = 0x1682fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943312));
    // 0x168300: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x168300u;
    {
        const bool branch_taken_0x168300 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x168304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168300u;
        // 0x168304: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168300) {
            ctx->pc = 0x168324u;
            goto label_168324;
        }
    }
    ctx->pc = 0x168308u;
    // 0x168308: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x168308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x16830c: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x16830cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x168310: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x168310u;
    {
        const bool branch_taken_0x168310 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x168314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168310u;
        // 0x168314: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168310) {
            ctx->pc = 0x168324u;
            goto label_168324;
        }
    }
    ctx->pc = 0x168318u;
    // 0x168318: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x168318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x16831c: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x16831cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
    // 0x168320: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x168320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_168324:
    // 0x168324: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x168324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x168328: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x168328u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x16832c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16832Cu;
    {
        const bool branch_taken_0x16832c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x168330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16832Cu;
        // 0x168330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16832c) {
            ctx->pc = 0x16833Cu;
            goto label_16833c;
        }
    }
    ctx->pc = 0x168334u;
    // 0x168334: 0xc0401a4  jal         func_100690
    ctx->pc = 0x168334u;
    SET_GPR_U32(ctx, 31, 0x16833Cu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x168334u, 0x16833Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16833Cu;
label_16833c:
    // 0x16833c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16833cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_168340:
    // 0x168340: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x168340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168344: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x168344u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168348: 0x3e00008  jr          $ra
    ctx->pc = 0x168348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16834Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168348u;
        // 0x16834c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168350u;
}
