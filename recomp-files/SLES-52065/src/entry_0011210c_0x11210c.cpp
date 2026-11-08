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

// Function: entry_0011210c
// Address: 0x11210c - 0x11213c
void entry_0011210c_0x11210c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011210c_0x11210c");
#endif

    switch (ctx->pc) {
        case 0x112134u: goto label_112134;
        default: break;
    }

    ctx->pc = 0x11210cu;

    // 0x11210c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x11210cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x112110: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x112110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x112114: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x112114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x112118: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x112118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x11211c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x11211cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x112120: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x112120u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x112124: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x112124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x112128: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x112128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x11212c: 0xc043dec  jal         func_10F7B0
    ctx->pc = 0x11212Cu;
    SET_GPR_U32(ctx, 31, 0x112134u);
    ctx->pc = 0x112130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11212Cu;
    // 0x112130: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F7B0u, 0x11212Cu, 0x112134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112134u;
label_112134:
    // 0x112134: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x112134u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x112138: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x112138u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x11213cu;
}
