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

// Function: entry_001b633c
// Address: 0x1b633c - 0x1b63a4
void entry_001b633c_0x1b633c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b633c_0x1b633c");
#endif

    switch (ctx->pc) {
        case 0x1b6364u: goto label_1b6364;
        case 0x1b6390u: goto label_1b6390;
        default: break;
    }

    ctx->pc = 0x1b633cu;

    // 0x1b633c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1b633cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1b6340: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b6340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b6344: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1b6344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1b6348: 0x2471ffff  addiu       $s1, $v1, -0x1
    ctx->pc = 0x1b6348u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1b634c: 0x222001b  divu        $zero, $s1, $v0
    ctx->pc = 0x1b634cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,17); } }
    // 0x1b6350: 0x0  nop
    ctx->pc = 0x1b6350u;
    // NOP
    // 0x1b6354: 0x0  nop
    ctx->pc = 0x1b6354u;
    // NOP
    // 0x1b6358: 0x2812  mflo        $a1
    ctx->pc = 0x1b6358u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1b635c: 0xc04fc44  jal         func_13F110
    ctx->pc = 0x1B635Cu;
    SET_GPR_U32(ctx, 31, 0x1B6364u);
    ctx->pc = 0x1B6360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B635Cu;
    // 0x1b6360: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F110u, 0x1B635Cu, 0x1B6364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6364u;
label_1b6364:
    // 0x1b6364: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b6364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b6368: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b6368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b636c: 0x223001b  divu        $zero, $s1, $v1
    ctx->pc = 0x1b636cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,17); } }
    // 0x1b6370: 0x0  nop
    ctx->pc = 0x1b6370u;
    // NOP
    // 0x1b6374: 0x0  nop
    ctx->pc = 0x1b6374u;
    // NOP
    // 0x1b6378: 0x1810  mfhi        $v1
    ctx->pc = 0x1b6378u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1b637c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b637cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b6380: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b6380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b6384: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b6384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b6388: 0xc06da14  jal         func_1B6850
    ctx->pc = 0x1B6388u;
    SET_GPR_U32(ctx, 31, 0x1B6390u);
    ctx->pc = 0x1B638Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6388u;
    // 0x1b638c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6850u, 0x1B6388u, 0x1B6390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6390u;
label_1b6390:
    // 0x1b6390: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b6390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6394: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B6394u;
    {
        const bool branch_taken_0x1b6394 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6394u;
        // 0x1b6398: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6394) {
            ctx->pc = 0x1B63A4u;
            return;
        }
    }
    ctx->pc = 0x1B639Cu;
    // 0x1b639c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B639Cu;
    {
        const bool branch_taken_0x1b639c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B63A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B639Cu;
        // 0x1b63a0: 0xa2030034  sb          $v1, 0x34($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 52), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b639c) {
            ctx->pc = 0x1B63B4u;
            return;
        }
    }
    ctx->pc = 0x1B63A4u;
}
