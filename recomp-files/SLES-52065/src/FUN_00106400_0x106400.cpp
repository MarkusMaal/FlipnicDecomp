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

// Function: FUN_00106400
// Address: 0x106400 - 0x106480
void FUN_00106400_0x106400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00106400_0x106400");
#endif

    switch (ctx->pc) {
        case 0x10646cu: goto label_10646c;
        default: break;
    }

    ctx->pc = 0x106400u;

    // 0x106400: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x106400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x106404: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x106404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x106408: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x106408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10640c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10640cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106410: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x106410u;
    {
        const bool branch_taken_0x106410 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x106414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106410u;
        // 0x106414: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106410) {
            ctx->pc = 0x106470u;
            goto label_106470;
        }
    }
    ctx->pc = 0x106418u;
    // 0x106418: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x106418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x10641c: 0x24427930  addiu       $v0, $v0, 0x7930
    ctx->pc = 0x10641cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31024));
    // 0x106420: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x106420u;
    {
        const bool branch_taken_0x106420 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x106424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106420u;
        // 0x106424: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106420) {
            ctx->pc = 0x106454u;
            goto label_106454;
        }
    }
    ctx->pc = 0x106428u;
    // 0x106428: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x106428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x10642c: 0x2442a250  addiu       $v0, $v0, -0x5DB0
    ctx->pc = 0x10642cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943312));
    // 0x106430: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x106430u;
    {
        const bool branch_taken_0x106430 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x106434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106430u;
        // 0x106434: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106430) {
            ctx->pc = 0x106454u;
            goto label_106454;
        }
    }
    ctx->pc = 0x106438u;
    // 0x106438: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x106438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x10643c: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x10643cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x106440: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x106440u;
    {
        const bool branch_taken_0x106440 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x106444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106440u;
        // 0x106444: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106440) {
            ctx->pc = 0x106454u;
            goto label_106454;
        }
    }
    ctx->pc = 0x106448u;
    // 0x106448: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x106448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x10644c: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x10644cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
    // 0x106450: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x106450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_106454:
    // 0x106454: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x106454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x106458: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x106458u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x10645c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10645Cu;
    {
        const bool branch_taken_0x10645c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x106460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10645Cu;
        // 0x106460: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10645c) {
            ctx->pc = 0x10646Cu;
            goto label_10646c;
        }
    }
    ctx->pc = 0x106464u;
    // 0x106464: 0xc0401a4  jal         func_100690
    ctx->pc = 0x106464u;
    SET_GPR_U32(ctx, 31, 0x10646Cu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x106464u, 0x10646Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10646Cu;
label_10646c:
    // 0x10646c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10646cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_106470:
    // 0x106470: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x106470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106474: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x106474u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106478: 0x3e00008  jr          $ra
    ctx->pc = 0x106478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10647Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106478u;
        // 0x10647c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106480u;
}
