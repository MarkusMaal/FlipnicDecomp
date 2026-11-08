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

// Function: entry_0014ceb8
// Address: 0x14ceb8 - 0x14cf04
void entry_0014ceb8_0x14ceb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ceb8_0x14ceb8");
#endif

    switch (ctx->pc) {
        case 0x14cefcu: goto label_14cefc;
        default: break;
    }

    ctx->pc = 0x14ceb8u;

label_14ceb8:
    // 0x14ceb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14ceb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14cebc:
    // 0x14cebc: 0x0  nop
    ctx->pc = 0x14cebcu;
    // NOP
label_14cec0:
    // 0x14cec0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x14cec0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14cec4:
    // 0x14cec4: 0x0  nop
    ctx->pc = 0x14cec4u;
    // NOP
label_14cec8:
    // 0x14cec8: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_14cecc:
    if (ctx->pc == 0x14CECCu) {
        ctx->pc = 0x14CECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CEC8u;
        // 0x14cecc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CED0u;
        goto label_14ced0;
    }
    ctx->pc = 0x14CEC8u;
    {
        const bool branch_taken_0x14cec8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14CECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CEC8u;
        // 0x14cecc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cec8) {
            ctx->pc = 0x14CF08u;
            return;
        }
    }
    ctx->pc = 0x14CED0u;
label_14ced0:
    // 0x14ced0: 0x8c8300c4  lw          $v1, 0xC4($a0)
    ctx->pc = 0x14ced0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
label_14ced4:
    // 0x14ced4: 0x8c8200dc  lw          $v0, 0xDC($a0)
    ctx->pc = 0x14ced4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
label_14ced8:
    // 0x14ced8: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x14ced8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_14cedc:
    // 0x14cedc: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_14cee0:
    if (ctx->pc == 0x14CEE0u) {
        ctx->pc = 0x14CEE4u;
        goto label_14cee4;
    }
    ctx->pc = 0x14CEDCu;
    {
        const bool branch_taken_0x14cedc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cedc) {
            ctx->pc = 0x14CF04u;
            return;
        }
    }
    ctx->pc = 0x14CEE4u;
label_14cee4:
    // 0x14cee4: 0x8c8200b0  lw          $v0, 0xB0($a0)
    ctx->pc = 0x14cee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
label_14cee8:
    // 0x14cee8: 0x8c4402b8  lw          $a0, 0x2B8($v0)
    ctx->pc = 0x14cee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 696)));
label_14ceec:
    // 0x14ceec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14ceecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_14cef0:
    // 0x14cef0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x14cef0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_14cef4:
    // 0x14cef4: 0x320f809  jalr        $t9
label_14cef8:
    if (ctx->pc == 0x14CEF8u) {
        ctx->pc = 0x14CEFCu;
        goto label_14cefc;
    }
    ctx->pc = 0x14CEF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14CEFCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CEF4u, 0x14CEFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14CEFCu;
label_14cefc:
    // 0x14cefc: 0x10000002  b           . + 4 + (0x2 << 2)
label_14cf00:
    if (ctx->pc == 0x14CF00u) {
        ctx->pc = 0x14CF04u;
        goto label_fallthrough_0x14cefc;
    }
    ctx->pc = 0x14CEFCu;
    {
        const bool branch_taken_0x14cefc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cefc) {
            ctx->pc = 0x14CF08u;
            return;
        }
    }
label_fallthrough_0x14cefc:
    ctx->pc = 0x14CF04u;
}
