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

// Function: entry_0018ae20
// Address: 0x18ae20 - 0x18ae3c
void entry_0018ae20_0x18ae20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ae20_0x18ae20");
#endif

    ctx->pc = 0x18ae20u;

    // 0x18ae20: 0x2512021  addu        $a0, $s2, $s1
    ctx->pc = 0x18ae20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x18ae24: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x18ae24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18ae28: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x18ae28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18ae2c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18AE2Cu;
    {
        const bool branch_taken_0x18ae2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x18ae2c) {
            ctx->pc = 0x18AE3Cu;
            return;
        }
    }
    ctx->pc = 0x18AE34u;
    // 0x18ae34: 0xc07657c  jal         func_1D95F0
    ctx->pc = 0x18AE34u;
    SET_GPR_U32(ctx, 31, 0x18AE3Cu);
    ctx->pc = 0x1D95F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D95F0u, 0x18AE34u, 0x18AE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AE3Cu;
}
