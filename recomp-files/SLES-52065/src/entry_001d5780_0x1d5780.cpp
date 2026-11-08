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

// Function: entry_001d5780
// Address: 0x1d5780 - 0x1d5798
void entry_001d5780_0x1d5780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5780_0x1d5780");
#endif

    switch (ctx->pc) {
        case 0x1d5790u: goto label_1d5790;
        default: break;
    }

    ctx->pc = 0x1d5780u;

    // 0x1d5780: 0x26450040  addiu       $a1, $s2, 0x40
    ctx->pc = 0x1d5780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x1d5784: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1d5784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5788: 0xc078428  jal         func_1E10A0
    ctx->pc = 0x1D5788u;
    SET_GPR_U32(ctx, 31, 0x1D5790u);
    ctx->pc = 0x1D578Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5788u;
    // 0x1d578c: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E10A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E10A0u, 0x1D5788u, 0x1D5790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5790u;
label_1d5790:
    // 0x1d5790: 0x2531821  addu        $v1, $s2, $s3
    ctx->pc = 0x1d5790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x1d5794: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1d5794u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x1d5798u;
}
