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

// Function: entry_0012b698
// Address: 0x12b698 - 0x12b6c4
void entry_0012b698_0x12b698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b698_0x12b698");
#endif

    switch (ctx->pc) {
        case 0x12b6a8u: goto label_12b6a8;
        case 0x12b6b8u: goto label_12b6b8;
        default: break;
    }

    ctx->pc = 0x12b698u;

    // 0x12b698: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x12b698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x12b69c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x12b69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x12b6a0: 0xc04aa64  jal         func_12A990
    ctx->pc = 0x12B6A0u;
    SET_GPR_U32(ctx, 31, 0x12B6A8u);
    ctx->pc = 0x12B6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B6A0u;
    // 0x12b6a4: 0x2454000c  addiu       $s4, $v0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A990u, 0x12B6A0u, 0x12B6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B6A8u;
label_12b6a8:
    // 0x12b6a8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12B6A8u;
    {
        const bool branch_taken_0x12b6a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12b6a8) {
            ctx->pc = 0x12B6C4u;
            return;
        }
    }
    ctx->pc = 0x12B6B0u;
    // 0x12b6b0: 0xc04aa68  jal         func_12A9A0
    ctx->pc = 0x12B6B0u;
    SET_GPR_U32(ctx, 31, 0x12B6B8u);
    ctx->pc = 0x12B6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B6B0u;
    // 0x12b6b4: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A9A0u, 0x12B6B0u, 0x12B6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B6B8u;
label_12b6b8:
    // 0x12b6b8: 0x27d1821  addu        $v1, $s3, $sp
    ctx->pc = 0x12b6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x12b6bc: 0xac620068  sw          $v0, 0x68($v1)
    ctx->pc = 0x12b6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 2));
    // 0x12b6c0: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x12b6c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    ctx->pc = 0x12b6c4u;
}
