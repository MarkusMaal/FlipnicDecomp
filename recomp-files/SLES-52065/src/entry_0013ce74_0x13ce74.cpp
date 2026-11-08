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

// Function: entry_0013ce74
// Address: 0x13ce74 - 0x13ced0
void entry_0013ce74_0x13ce74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ce74_0x13ce74");
#endif

    switch (ctx->pc) {
        case 0x13ce9cu: goto label_13ce9c;
        case 0x13cec8u: goto label_13cec8;
        default: break;
    }

    ctx->pc = 0x13ce74u;

    // 0x13ce74: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x13ce74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
    // 0x13ce78: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x13ce78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x13ce7c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x13ce7cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x13ce80: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x13ce80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x13ce84: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13ce84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13ce88: 0x8c4200a8  lw          $v0, 0xA8($v0)
    ctx->pc = 0x13ce88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x13ce8c: 0x8c4200b0  lw          $v0, 0xB0($v0)
    ctx->pc = 0x13ce8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x13ce90: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x13ce90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x13ce94: 0xc07d37c  jal         func_1F4DF0
    ctx->pc = 0x13CE94u;
    SET_GPR_U32(ctx, 31, 0x13CE9Cu);
    ctx->pc = 0x13CE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CE94u;
    // 0x13ce98: 0x552821  addu        $a1, $v0, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DF0u, 0x13CE94u, 0x13CE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CE9Cu;
label_13ce9c:
    // 0x13ce9c: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x13ce9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
    // 0x13cea0: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x13cea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x13cea4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x13cea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x13cea8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13cea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13ceac: 0x8c4200a8  lw          $v0, 0xA8($v0)
    ctx->pc = 0x13ceacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x13ceb0: 0x8c4200b0  lw          $v0, 0xB0($v0)
    ctx->pc = 0x13ceb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x13ceb4: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x13ceb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x13ceb8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x13ceb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x13cebc: 0x752021  addu        $a0, $v1, $s5
    ctx->pc = 0x13cebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x13cec0: 0xc07d36a  jal         func_1F4DA8
    ctx->pc = 0x13CEC0u;
    SET_GPR_U32(ctx, 31, 0x13CEC8u);
    ctx->pc = 0x13CEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CEC0u;
    // 0x13cec4: 0x552821  addu        $a1, $v0, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DA8u, 0x13CEC0u, 0x13CEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CEC8u;
label_13cec8:
    // 0x13cec8: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x13cec8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x13cecc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x13ceccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->pc = 0x13ced0u;
}
