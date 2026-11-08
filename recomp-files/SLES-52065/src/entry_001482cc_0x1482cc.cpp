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

// Function: entry_001482cc
// Address: 0x1482cc - 0x1482f0
void entry_001482cc_0x1482cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001482cc_0x1482cc");
#endif

    switch (ctx->pc) {
        case 0x1482d4u: goto label_1482d4;
        default: break;
    }

    ctx->pc = 0x1482ccu;

    // 0x1482cc: 0xc050224  jal         func_140890
    ctx->pc = 0x1482CCu;
    SET_GPR_U32(ctx, 31, 0x1482D4u);
    ctx->pc = 0x1482D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1482CCu;
    // 0x1482d0: 0x27a40210  addiu       $a0, $sp, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140890u, 0x1482CCu, 0x1482D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1482D4u;
label_1482d4:
    // 0x1482d4: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x1482d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1482d8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1482d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1482dc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1482dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1482e0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1482e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1482e4: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1482e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x1482e8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1482E8u;
    {
        const bool branch_taken_0x1482e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1482ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1482E8u;
        // 0x1482ec: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1482e8) {
            ctx->pc = 0x148390u;
            return;
        }
    }
    ctx->pc = 0x1482F0u;
}
