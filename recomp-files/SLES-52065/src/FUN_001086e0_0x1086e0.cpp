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

// Function: FUN_001086e0
// Address: 0x1086e0 - 0x108750
void FUN_001086e0_0x1086e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001086e0_0x1086e0");
#endif

    switch (ctx->pc) {
        case 0x10873cu: goto label_10873c;
        default: break;
    }

    ctx->pc = 0x1086e0u;

    // 0x1086e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1086e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1086e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1086e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1086e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1086e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1086ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1086ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1086f0: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1086F0u;
    {
        const bool branch_taken_0x1086f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1086F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1086F0u;
        // 0x1086f4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1086f0) {
            ctx->pc = 0x108740u;
            goto label_108740;
        }
    }
    ctx->pc = 0x1086F8u;
    // 0x1086f8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1086f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1086fc: 0x24428110  addiu       $v0, $v0, -0x7EF0
    ctx->pc = 0x1086fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934800));
    // 0x108700: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x108700u;
    {
        const bool branch_taken_0x108700 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x108704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108700u;
        // 0x108704: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108700) {
            ctx->pc = 0x108724u;
            goto label_108724;
        }
    }
    ctx->pc = 0x108708u;
    // 0x108708: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x108708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x10870c: 0x24427bd0  addiu       $v0, $v0, 0x7BD0
    ctx->pc = 0x10870cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31696));
    // 0x108710: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x108710u;
    {
        const bool branch_taken_0x108710 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x108714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108710u;
        // 0x108714: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108710) {
            ctx->pc = 0x108724u;
            goto label_108724;
        }
    }
    ctx->pc = 0x108718u;
    // 0x108718: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x108718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x10871c: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x10871cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
    // 0x108720: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x108720u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_108724:
    // 0x108724: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x108724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x108728: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x108728u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x10872c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10872Cu;
    {
        const bool branch_taken_0x10872c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x108730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10872Cu;
        // 0x108730: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10872c) {
            ctx->pc = 0x10873Cu;
            goto label_10873c;
        }
    }
    ctx->pc = 0x108734u;
    // 0x108734: 0xc0401a4  jal         func_100690
    ctx->pc = 0x108734u;
    SET_GPR_U32(ctx, 31, 0x10873Cu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x108734u, 0x10873Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10873Cu;
label_10873c:
    // 0x10873c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10873cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_108740:
    // 0x108740: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x108740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108744: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x108744u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108748: 0x3e00008  jr          $ra
    ctx->pc = 0x108748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10874Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108748u;
        // 0x10874c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108750u;
}
