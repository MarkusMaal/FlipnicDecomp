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

// Function: entry_00148370
// Address: 0x148370 - 0x148390
void entry_00148370_0x148370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148370_0x148370");
#endif

    switch (ctx->pc) {
        case 0x148378u: goto label_148378;
        default: break;
    }

    ctx->pc = 0x148370u;

    // 0x148370: 0xc050224  jal         func_140890
    ctx->pc = 0x148370u;
    SET_GPR_U32(ctx, 31, 0x148378u);
    ctx->pc = 0x148374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148370u;
    // 0x148374: 0x27a40210  addiu       $a0, $sp, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140890u, 0x148370u, 0x148378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148378u;
label_148378:
    // 0x148378: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x148378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x14837c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x14837cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x148380: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x148380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x148384: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x148384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x148388: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x148388u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x14838c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x14838cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x148390u;
}
