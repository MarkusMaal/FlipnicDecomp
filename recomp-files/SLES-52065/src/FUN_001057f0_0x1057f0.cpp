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

// Function: FUN_001057f0
// Address: 0x1057f0 - 0x105870
void FUN_001057f0_0x1057f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001057f0_0x1057f0");
#endif

    switch (ctx->pc) {
        case 0x10585cu: goto label_10585c;
        default: break;
    }

    ctx->pc = 0x1057f0u;

    // 0x1057f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1057f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1057f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1057f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1057f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1057f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1057fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1057fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105800: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x105800u;
    {
        const bool branch_taken_0x105800 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x105804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105800u;
        // 0x105804: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105800) {
            ctx->pc = 0x105860u;
            goto label_105860;
        }
    }
    ctx->pc = 0x105808u;
    // 0x105808: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x105808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x10580c: 0x2442a490  addiu       $v0, $v0, -0x5B70
    ctx->pc = 0x10580cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943888));
    // 0x105810: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x105810u;
    {
        const bool branch_taken_0x105810 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x105814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105810u;
        // 0x105814: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105810) {
            ctx->pc = 0x105844u;
            goto label_105844;
        }
    }
    ctx->pc = 0x105818u;
    // 0x105818: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x105818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x10581c: 0x2442a250  addiu       $v0, $v0, -0x5DB0
    ctx->pc = 0x10581cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943312));
    // 0x105820: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x105820u;
    {
        const bool branch_taken_0x105820 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x105824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105820u;
        // 0x105824: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105820) {
            ctx->pc = 0x105844u;
            goto label_105844;
        }
    }
    ctx->pc = 0x105828u;
    // 0x105828: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x105828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x10582c: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x10582cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x105830: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x105830u;
    {
        const bool branch_taken_0x105830 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x105834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105830u;
        // 0x105834: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105830) {
            ctx->pc = 0x105844u;
            goto label_105844;
        }
    }
    ctx->pc = 0x105838u;
    // 0x105838: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x105838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x10583c: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x10583cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
    // 0x105840: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x105840u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_105844:
    // 0x105844: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x105844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x105848: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x105848u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x10584c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10584Cu;
    {
        const bool branch_taken_0x10584c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x105850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10584Cu;
        // 0x105850: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10584c) {
            ctx->pc = 0x10585Cu;
            goto label_10585c;
        }
    }
    ctx->pc = 0x105854u;
    // 0x105854: 0xc0401a4  jal         func_100690
    ctx->pc = 0x105854u;
    SET_GPR_U32(ctx, 31, 0x10585Cu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x105854u, 0x10585Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10585Cu;
label_10585c:
    // 0x10585c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10585cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_105860:
    // 0x105860: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x105860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105864: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x105864u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105868: 0x3e00008  jr          $ra
    ctx->pc = 0x105868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10586Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105868u;
        // 0x10586c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105870u;
}
