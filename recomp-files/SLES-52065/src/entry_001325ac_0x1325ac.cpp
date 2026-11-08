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

// Function: entry_001325ac
// Address: 0x1325ac - 0x132604
void entry_001325ac_0x1325ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001325ac_0x1325ac");
#endif

    switch (ctx->pc) {
        case 0x1325f4u: goto label_1325f4;
        case 0x1325fcu: goto label_1325fc;
        default: break;
    }

    ctx->pc = 0x1325acu;

    // 0x1325ac: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x1325acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1325b0: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x1325b0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x1325b4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1325b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1325b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1325b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1325bc: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x1325bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x1325c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1325c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1325c4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1325c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1325c8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1325c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1325cc: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1325ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1325d0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1325d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1325d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1325d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1325d8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1325d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1325dc: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x1325dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x1325e0: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1325e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1325e4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1325E4u;
    {
        const bool branch_taken_0x1325e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1325E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1325E4u;
        // 0x1325e8: 0x27a40088  addiu       $a0, $sp, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1325e4) {
            ctx->pc = 0x132604u;
            return;
        }
    }
    ctx->pc = 0x1325ECu;
    // 0x1325ec: 0xc04c990  jal         func_132640
    ctx->pc = 0x1325ECu;
    SET_GPR_U32(ctx, 31, 0x1325F4u);
    ctx->pc = 0x132640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132640u, 0x1325ECu, 0x1325F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1325F4u;
label_1325f4:
    // 0x1325f4: 0xc04c98c  jal         func_132630
    ctx->pc = 0x1325F4u;
    SET_GPR_U32(ctx, 31, 0x1325FCu);
    ctx->pc = 0x1325F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1325F4u;
    // 0x1325f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132630u, 0x1325F4u, 0x1325FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1325FCu;
label_1325fc:
    // 0x1325fc: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1325FCu;
    SET_GPR_U32(ctx, 31, 0x132604u);
    ctx->pc = 0x132600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1325FCu;
    // 0x132600: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1325FCu, 0x132604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132604u;
}
