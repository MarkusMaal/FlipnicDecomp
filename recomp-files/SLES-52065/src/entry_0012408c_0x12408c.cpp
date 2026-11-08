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

// Function: entry_0012408c
// Address: 0x12408c - 0x1240ac
void entry_0012408c_0x12408c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012408c_0x12408c");
#endif

    ctx->pc = 0x12408cu;

    // 0x12408c: 0x0  nop
    ctx->pc = 0x12408cu;
    // NOP
    // 0x124090: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x124090u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x124094: 0x8e840088  lw          $a0, 0x88($s4)
    ctx->pc = 0x124094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
    // 0x124098: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x124098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12409c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x12409cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1240a0: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x1240a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x1240a4: 0xc047ec4  jal         func_11FB10
    ctx->pc = 0x1240A4u;
    SET_GPR_U32(ctx, 31, 0x1240ACu);
    ctx->pc = 0x1240A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1240A4u;
    // 0x1240a8: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FB10u, 0x1240A4u, 0x1240ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1240ACu;
}
