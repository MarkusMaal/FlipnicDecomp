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

// Function: entry_001311c0
// Address: 0x1311c0 - 0x1311fc
void entry_001311c0_0x1311c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001311c0_0x1311c0");
#endif

    switch (ctx->pc) {
        case 0x1311e4u: goto label_1311e4;
        default: break;
    }

    ctx->pc = 0x1311c0u;

    // 0x1311c0: 0x27a2009c  addiu       $v0, $sp, 0x9C
    ctx->pc = 0x1311c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x1311c4: 0x27b5008c  addiu       $s5, $sp, 0x8C
    ctx->pc = 0x1311c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x1311c8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1311c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1311cc: 0x27a50098  addiu       $a1, $sp, 0x98
    ctx->pc = 0x1311ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x1311d0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1311d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1311d4: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x1311d4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1311d8: 0xafb30098  sw          $s3, 0x98($sp)
    ctx->pc = 0x1311d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 19));
    // 0x1311dc: 0xc04c4b4  jal         func_1312D0
    ctx->pc = 0x1311DCu;
    SET_GPR_U32(ctx, 31, 0x1311E4u);
    ctx->pc = 0x1311E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1311DCu;
    // 0x1311e0: 0xafb40088  sw          $s4, 0x88($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1312D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1312D0u, 0x1311DCu, 0x1311E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1311E4u;
label_1311e4:
    // 0x1311e4: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1311e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1311e8: 0x24470008  addiu       $a3, $v0, 0x8
    ctx->pc = 0x1311e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1311ec: 0x10e0000d  beqz        $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x1311ECu;
    {
        const bool branch_taken_0x1311ec = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1311F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1311ECu;
        // 0x1311f0: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1311ec) {
            ctx->pc = 0x131224u;
            return;
        }
    }
    ctx->pc = 0x1311F4u;
    // 0x1311f4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1311f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1311f8: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1311f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1311fcu;
}
