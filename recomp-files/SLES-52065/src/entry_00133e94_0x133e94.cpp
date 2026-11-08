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

// Function: entry_00133e94
// Address: 0x133e94 - 0x133eac
void entry_00133e94_0x133e94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133e94_0x133e94");
#endif

    switch (ctx->pc) {
        case 0x133ea4u: goto label_133ea4;
        default: break;
    }

    ctx->pc = 0x133e94u;

    // 0x133e94: 0x0  nop
    ctx->pc = 0x133e94u;
    // NOP
    // 0x133e98: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x133e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133e9c: 0xc04cee4  jal         func_133B90
    ctx->pc = 0x133E9Cu;
    SET_GPR_U32(ctx, 31, 0x133EA4u);
    ctx->pc = 0x133EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133E9Cu;
    // 0x133ea0: 0x2702821  addu        $a1, $s3, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133B90u, 0x133E9Cu, 0x133EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133EA4u;
label_133ea4:
    // 0x133ea4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x133ea4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x133ea8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x133ea8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x133eacu;
}
