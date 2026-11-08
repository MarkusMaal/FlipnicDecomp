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

// Function: entry_0015b904
// Address: 0x15b904 - 0x15b924
void entry_0015b904_0x15b904(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015b904_0x15b904");
#endif

    ctx->pc = 0x15b904u;

    // 0x15b904: 0x86230216  lh          $v1, 0x216($s1)
    ctx->pc = 0x15b904u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 534)));
    // 0x15b908: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15B908u;
    {
        const bool branch_taken_0x15b908 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15b908) {
            ctx->pc = 0x15B924u;
            return;
        }
    }
    ctx->pc = 0x15B910u;
    // 0x15b910: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x15b910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x15b914: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15b914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b918: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15b918u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15b91c: 0xc0425a4  jal         func_109690
    ctx->pc = 0x15B91Cu;
    SET_GPR_U32(ctx, 31, 0x15B924u);
    ctx->pc = 0x15B920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B91Cu;
    // 0x15b920: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x15B91Cu, 0x15B924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B924u;
}
