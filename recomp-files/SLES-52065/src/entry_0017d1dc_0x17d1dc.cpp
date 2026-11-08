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

// Function: entry_0017d1dc
// Address: 0x17d1dc - 0x17d1f8
void entry_0017d1dc_0x17d1dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d1dc_0x17d1dc");
#endif

    switch (ctx->pc) {
        case 0x17d1ecu: goto label_17d1ec;
        default: break;
    }

    ctx->pc = 0x17d1dcu;

    // 0x17d1dc: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x17d1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x17d1e0: 0x2532821  addu        $a1, $s2, $s3
    ctx->pc = 0x17d1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x17d1e4: 0xc05f4cc  jal         func_17D330
    ctx->pc = 0x17D1E4u;
    SET_GPR_U32(ctx, 31, 0x17D1ECu);
    ctx->pc = 0x17D1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D1E4u;
    // 0x17d1e8: 0x542021  addu        $a0, $v0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D330u, 0x17D1E4u, 0x17D1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D1ECu;
label_17d1ec:
    // 0x17d1ec: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x17d1ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x17d1f0: 0x269400c0  addiu       $s4, $s4, 0xC0
    ctx->pc = 0x17d1f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 192));
    // 0x17d1f4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x17d1f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    ctx->pc = 0x17d1f8u;
}
