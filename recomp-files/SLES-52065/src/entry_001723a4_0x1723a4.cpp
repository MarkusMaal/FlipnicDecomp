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

// Function: entry_001723a4
// Address: 0x1723a4 - 0x1723d4
void entry_001723a4_0x1723a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001723a4_0x1723a4");
#endif

    switch (ctx->pc) {
        case 0x1723ccu: goto label_1723cc;
        default: break;
    }

    ctx->pc = 0x1723a4u;

    // 0x1723a4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1723A4u;
    {
        const bool branch_taken_0x1723a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1723A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1723A4u;
        // 0x1723a8: 0x26220068  addiu       $v0, $s1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1723a4) {
            ctx->pc = 0x1723D8u;
            return;
        }
    }
    ctx->pc = 0x1723ACu;
    // 0x1723ac: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1723acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1723b0: 0x2442acc0  addiu       $v0, $v0, -0x5340
    ctx->pc = 0x1723b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945984));
    // 0x1723b4: 0xae220084  sw          $v0, 0x84($s1)
    ctx->pc = 0x1723b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 2));
    // 0x1723b8: 0x8e24007c  lw          $a0, 0x7C($s1)
    ctx->pc = 0x1723b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x1723bc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1723BCu;
    {
        const bool branch_taken_0x1723bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1723bc) {
            ctx->pc = 0x1723D4u;
            return;
        }
    }
    ctx->pc = 0x1723C4u;
    // 0x1723c4: 0xc04018c  jal         func_100630
    ctx->pc = 0x1723C4u;
    SET_GPR_U32(ctx, 31, 0x1723CCu);
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1723C4u, 0x1723CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1723CCu;
label_1723cc:
    // 0x1723cc: 0xae20007c  sw          $zero, 0x7C($s1)
    ctx->pc = 0x1723ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 0));
    // 0x1723d0: 0xae200078  sw          $zero, 0x78($s1)
    ctx->pc = 0x1723d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 0));
    ctx->pc = 0x1723d4u;
}
