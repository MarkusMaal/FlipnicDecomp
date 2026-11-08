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

// Function: entry_00193578
// Address: 0x193578 - 0x1935b4
void entry_00193578_0x193578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193578_0x193578");
#endif

    switch (ctx->pc) {
        case 0x1935b0u: goto label_1935b0;
        default: break;
    }

    ctx->pc = 0x193578u;

    // 0x193578: 0x8f838384  lw          $v1, -0x7C7C($gp)
    ctx->pc = 0x193578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935428)));
    // 0x19357c: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x19357cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x193580: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x193580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193584: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x193584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193588: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x193588u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19358c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19358cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193590: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x193590u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x193594: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x193594u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x193598: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x193598u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x19359c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x19359cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1935a0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1935a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1935a4: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x1935a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1935a8: 0xc04bce0  jal         func_12F380
    ctx->pc = 0x1935A8u;
    SET_GPR_U32(ctx, 31, 0x1935B0u);
    ctx->pc = 0x1935ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1935A8u;
    // 0x1935ac: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F380u, 0x1935A8u, 0x1935B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1935B0u;
label_1935b0:
    // 0x1935b0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1935b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    ctx->pc = 0x1935b4u;
}
