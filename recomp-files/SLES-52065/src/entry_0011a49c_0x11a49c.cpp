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

// Function: entry_0011a49c
// Address: 0x11a49c - 0x11a4ec
void entry_0011a49c_0x11a49c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a49c_0x11a49c");
#endif

    switch (ctx->pc) {
        case 0x11a4acu: goto label_11a4ac;
        default: break;
    }

    ctx->pc = 0x11a49cu;

    // 0x11a49c: 0x2512021  addu        $a0, $s2, $s1
    ctx->pc = 0x11a49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x11a4a0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x11a4a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a4a4: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x11A4A4u;
    SET_GPR_U32(ctx, 31, 0x11A4ACu);
    ctx->pc = 0x11A4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A4A4u;
    // 0x11a4a8: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x11A4A4u, 0x11A4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A4ACu;
label_11a4ac:
    // 0x11a4ac: 0x2351021  addu        $v0, $s1, $s5
    ctx->pc = 0x11a4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x11a4b0: 0xae0200b4  sw          $v0, 0xB4($s0)
    ctx->pc = 0x11a4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
    // 0x11a4b4: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x11a4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x11a4b8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x11a4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x11a4bc: 0xae0200b0  sw          $v0, 0xB0($s0)
    ctx->pc = 0x11a4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    // 0x11a4c0: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x11a4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x11a4c4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11A4C4u;
    {
        const bool branch_taken_0x11a4c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11a4c4) {
            ctx->pc = 0x11A4ECu;
            return;
        }
    }
    ctx->pc = 0x11A4CCu;
    // 0x11a4cc: 0x8e0300b4  lw          $v1, 0xB4($s0)
    ctx->pc = 0x11a4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x11a4d0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x11a4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x11a4d4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x11a4d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11a4d8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11A4D8u;
    {
        const bool branch_taken_0x11a4d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A4D8u;
        // 0x11a4dc: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a4d8) {
            ctx->pc = 0x11A508u;
            return;
        }
    }
    ctx->pc = 0x11A4E0u;
    // 0x11a4e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11a4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11a4e4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11A4E4u;
    {
        const bool branch_taken_0x11a4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A4E4u;
        // 0x11a4e8: 0xae0200b8  sw          $v0, 0xB8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a4e4) {
            ctx->pc = 0x11A504u;
            return;
        }
    }
    ctx->pc = 0x11A4ECu;
}
