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

// Function: FUN_001052b0
// Address: 0x1052b0 - 0x105330
void FUN_001052b0_0x1052b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001052b0_0x1052b0");
#endif

    switch (ctx->pc) {
        case 0x10531cu: goto label_10531c;
        default: break;
    }

    ctx->pc = 0x1052b0u;

    // 0x1052b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1052b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1052b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1052b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1052b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1052b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1052bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1052bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1052c0: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1052C0u;
    {
        const bool branch_taken_0x1052c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1052C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1052C0u;
        // 0x1052c4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1052c0) {
            ctx->pc = 0x105320u;
            goto label_105320;
        }
    }
    ctx->pc = 0x1052C8u;
    // 0x1052c8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1052c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1052cc: 0x244281d0  addiu       $v0, $v0, -0x7E30
    ctx->pc = 0x1052ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934992));
    // 0x1052d0: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1052D0u;
    {
        const bool branch_taken_0x1052d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1052D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1052D0u;
        // 0x1052d4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1052d0) {
            ctx->pc = 0x105304u;
            goto label_105304;
        }
    }
    ctx->pc = 0x1052D8u;
    // 0x1052d8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1052d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1052dc: 0x2442a250  addiu       $v0, $v0, -0x5DB0
    ctx->pc = 0x1052dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943312));
    // 0x1052e0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1052E0u;
    {
        const bool branch_taken_0x1052e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1052E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1052E0u;
        // 0x1052e4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1052e0) {
            ctx->pc = 0x105304u;
            goto label_105304;
        }
    }
    ctx->pc = 0x1052E8u;
    // 0x1052e8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1052e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1052ec: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x1052ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x1052f0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1052F0u;
    {
        const bool branch_taken_0x1052f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1052F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1052F0u;
        // 0x1052f4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1052f0) {
            ctx->pc = 0x105304u;
            goto label_105304;
        }
    }
    ctx->pc = 0x1052F8u;
    // 0x1052f8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1052f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1052fc: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x1052fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
    // 0x105300: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x105300u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_105304:
    // 0x105304: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x105304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x105308: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x105308u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x10530c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10530Cu;
    {
        const bool branch_taken_0x10530c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x105310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10530Cu;
        // 0x105310: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10530c) {
            ctx->pc = 0x10531Cu;
            goto label_10531c;
        }
    }
    ctx->pc = 0x105314u;
    // 0x105314: 0xc0401a4  jal         func_100690
    ctx->pc = 0x105314u;
    SET_GPR_U32(ctx, 31, 0x10531Cu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x105314u, 0x10531Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10531Cu;
label_10531c:
    // 0x10531c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10531cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_105320:
    // 0x105320: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x105320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105324: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x105324u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105328: 0x3e00008  jr          $ra
    ctx->pc = 0x105328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10532Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105328u;
        // 0x10532c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105330u;
}
