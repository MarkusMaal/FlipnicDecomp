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

// Function: entry_0012c68c
// Address: 0x12c68c - 0x12c6b8
void entry_0012c68c_0x12c68c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c68c_0x12c68c");
#endif

    switch (ctx->pc) {
        case 0x12c698u: goto label_12c698;
        default: break;
    }

    ctx->pc = 0x12c68cu;

    // 0x12c68c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x12c68cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c690: 0xc04b058  jal         func_12C160
    ctx->pc = 0x12C690u;
    SET_GPR_U32(ctx, 31, 0x12C698u);
    ctx->pc = 0x12C694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C690u;
    // 0x12c694: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C160u, 0x12C690u, 0x12C698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C698u;
label_12c698:
    // 0x12c698: 0x82440065  lb          $a0, 0x65($s2)
    ctx->pc = 0x12c698u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 101)));
    // 0x12c69c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12C69Cu;
    {
        const bool branch_taken_0x12c69c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c69c) {
            ctx->pc = 0x12C6B8u;
            return;
        }
    }
    ctx->pc = 0x12C6A4u;
    // 0x12c6a4: 0x82430064  lb          $v1, 0x64($s2)
    ctx->pc = 0x12c6a4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x12c6a8: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12C6A8u;
    {
        const bool branch_taken_0x12c6a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x12c6a8) {
            ctx->pc = 0x12C6B8u;
            return;
        }
    }
    ctx->pc = 0x12C6B0u;
    // 0x12c6b0: 0xa2400065  sb          $zero, 0x65($s2)
    ctx->pc = 0x12c6b0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 101), (uint8_t)GPR_U32(ctx, 0));
    // 0x12c6b4: 0xa2400066  sb          $zero, 0x66($s2)
    ctx->pc = 0x12c6b4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 102), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x12c6b8u;
}
