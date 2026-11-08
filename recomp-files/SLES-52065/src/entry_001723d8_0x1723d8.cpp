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

// Function: entry_001723d8
// Address: 0x1723d8 - 0x172408
void entry_001723d8_0x1723d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001723d8_0x1723d8");
#endif

    switch (ctx->pc) {
        case 0x172400u: goto label_172400;
        default: break;
    }

    ctx->pc = 0x1723d8u;

    // 0x1723d8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1723D8u;
    {
        const bool branch_taken_0x1723d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1723DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1723D8u;
        // 0x1723dc: 0x26220058  addiu       $v0, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1723d8) {
            ctx->pc = 0x17240Cu;
            return;
        }
    }
    ctx->pc = 0x1723E0u;
    // 0x1723e0: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1723e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1723e4: 0x2442acc0  addiu       $v0, $v0, -0x5340
    ctx->pc = 0x1723e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945984));
    // 0x1723e8: 0xae220074  sw          $v0, 0x74($s1)
    ctx->pc = 0x1723e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
    // 0x1723ec: 0x8e24006c  lw          $a0, 0x6C($s1)
    ctx->pc = 0x1723ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x1723f0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1723F0u;
    {
        const bool branch_taken_0x1723f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1723f0) {
            ctx->pc = 0x172408u;
            return;
        }
    }
    ctx->pc = 0x1723F8u;
    // 0x1723f8: 0xc04018c  jal         func_100630
    ctx->pc = 0x1723F8u;
    SET_GPR_U32(ctx, 31, 0x172400u);
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1723F8u, 0x172400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172400u;
label_172400:
    // 0x172400: 0xae20006c  sw          $zero, 0x6C($s1)
    ctx->pc = 0x172400u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 0));
    // 0x172404: 0xae200068  sw          $zero, 0x68($s1)
    ctx->pc = 0x172404u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
    ctx->pc = 0x172408u;
}
