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

// Function: entry_001fe660
// Address: 0x1fe660 - 0x1fe68c
void entry_001fe660_0x1fe660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe660_0x1fe660");
#endif

    switch (ctx->pc) {
        case 0x1fe670u: goto label_1fe670;
        default: break;
    }

    ctx->pc = 0x1fe660u;

    // 0x1fe660: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1fe660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fe664: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1fe664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe668: 0xc07fe2a  jal         func_1FF8A8
    ctx->pc = 0x1FE668u;
    SET_GPR_U32(ctx, 31, 0x1FE670u);
    ctx->pc = 0x1FE66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE668u;
    // 0x1fe66c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF8A8u, 0x1FE668u, 0x1FE670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE670u;
label_1fe670:
    // 0x1fe670: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1fe670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1fe674: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1fe674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fe678: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x1fe678u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1fe67c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1fe67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1fe680: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1fe680u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1fe684: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1fe684u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1fe688: 0x2b0a823  subu        $s5, $s5, $s0
    ctx->pc = 0x1fe688u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    ctx->pc = 0x1fe68cu;
}
