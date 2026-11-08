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

// Function: entry_0011a37c
// Address: 0x11a37c - 0x11a3cc
void entry_0011a37c_0x11a37c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a37c_0x11a37c");
#endif

    switch (ctx->pc) {
        case 0x11a38cu: goto label_11a38c;
        default: break;
    }

    ctx->pc = 0x11a37cu;

    // 0x11a37c: 0x2512021  addu        $a0, $s2, $s1
    ctx->pc = 0x11a37cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x11a380: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x11a380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a384: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x11A384u;
    SET_GPR_U32(ctx, 31, 0x11A38Cu);
    ctx->pc = 0x11A388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A384u;
    // 0x11a388: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x11A384u, 0x11A38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A38Cu;
label_11a38c:
    // 0x11a38c: 0x2351021  addu        $v0, $s1, $s5
    ctx->pc = 0x11a38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x11a390: 0xae020098  sw          $v0, 0x98($s0)
    ctx->pc = 0x11a390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
    // 0x11a394: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x11a394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x11a398: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x11a398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x11a39c: 0xae0200a0  sw          $v0, 0xA0($s0)
    ctx->pc = 0x11a39cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
    // 0x11a3a0: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x11a3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x11a3a4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11A3A4u;
    {
        const bool branch_taken_0x11a3a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11a3a4) {
            ctx->pc = 0x11A3CCu;
            return;
        }
    }
    ctx->pc = 0x11A3ACu;
    // 0x11a3ac: 0x8e030098  lw          $v1, 0x98($s0)
    ctx->pc = 0x11a3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x11a3b0: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x11a3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x11a3b4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x11a3b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11a3b8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11A3B8u;
    {
        const bool branch_taken_0x11a3b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A3B8u;
        // 0x11a3bc: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a3b8) {
            ctx->pc = 0x11A3E8u;
            return;
        }
    }
    ctx->pc = 0x11A3C0u;
    // 0x11a3c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11a3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11a3c4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11A3C4u;
    {
        const bool branch_taken_0x11a3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A3C4u;
        // 0x11a3c8: 0xae02009c  sw          $v0, 0x9C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a3c4) {
            ctx->pc = 0x11A3E4u;
            return;
        }
    }
    ctx->pc = 0x11A3CCu;
}
