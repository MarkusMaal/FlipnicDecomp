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

// Function: entry_00145660
// Address: 0x145660 - 0x145690
void entry_00145660_0x145660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145660_0x145660");
#endif

    switch (ctx->pc) {
        case 0x145678u: goto label_145678;
        case 0x145680u: goto label_145680;
        default: break;
    }

    ctx->pc = 0x145660u;

    // 0x145660: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x145660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x145664: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x145664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x145668: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x145668u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14566c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14566cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x145670: 0xc0401a4  jal         func_100690
    ctx->pc = 0x145670u;
    SET_GPR_U32(ctx, 31, 0x145678u);
    ctx->pc = 0x145674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145670u;
    // 0x145674: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x145670u, 0x145678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145678u;
label_145678:
    // 0x145678: 0xc04fe2c  jal         func_13F8B0
    ctx->pc = 0x145678u;
    SET_GPR_U32(ctx, 31, 0x145680u);
    ctx->pc = 0x14567Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145678u;
    // 0x14567c: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F8B0u, 0x145678u, 0x145680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145680u;
label_145680:
    // 0x145680: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x145680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x145684: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x145684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x145688: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x145688u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x14568c: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x14568cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    ctx->pc = 0x145690u;
}
