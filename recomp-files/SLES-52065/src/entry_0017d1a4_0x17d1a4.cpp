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

// Function: entry_0017d1a4
// Address: 0x17d1a4 - 0x17d1c0
void entry_0017d1a4_0x17d1a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d1a4_0x17d1a4");
#endif

    switch (ctx->pc) {
        case 0x17d1b4u: goto label_17d1b4;
        default: break;
    }

    ctx->pc = 0x17d1a4u;

    // 0x17d1a4: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x17d1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x17d1a8: 0x2532821  addu        $a1, $s2, $s3
    ctx->pc = 0x17d1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x17d1ac: 0xc05f4cc  jal         func_17D330
    ctx->pc = 0x17D1ACu;
    SET_GPR_U32(ctx, 31, 0x17D1B4u);
    ctx->pc = 0x17D1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D1ACu;
    // 0x17d1b0: 0x552021  addu        $a0, $v0, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D330u, 0x17D1ACu, 0x17D1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D1B4u;
label_17d1b4:
    // 0x17d1b4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x17d1b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x17d1b8: 0x26b500c0  addiu       $s5, $s5, 0xC0
    ctx->pc = 0x17d1b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
    // 0x17d1bc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x17d1bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x17d1c0u;
}
