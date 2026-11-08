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

// Function: entry_0018d048
// Address: 0x18d048 - 0x18d088
void entry_0018d048_0x18d048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d048_0x18d048");
#endif

    switch (ctx->pc) {
        case 0x18d074u: goto label_18d074;
        case 0x18d080u: goto label_18d080;
        default: break;
    }

    ctx->pc = 0x18d048u;

    // 0x18d048: 0xc6410488  lwc1        $f1, 0x488($s2)
    ctx->pc = 0x18d048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18d04c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18d04cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18d050: 0x0  nop
    ctx->pc = 0x18d050u;
    // NOP
    // 0x18d054: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x18d054u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18d058: 0x0  nop
    ctx->pc = 0x18d058u;
    // NOP
    // 0x18d05c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x18D05Cu;
    {
        const bool branch_taken_0x18d05c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18D060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D05Cu;
        // 0x18d060: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d05c) {
            ctx->pc = 0x18D088u;
            return;
        }
    }
    ctx->pc = 0x18D064u;
    // 0x18d064: 0x8e460454  lw          $a2, 0x454($s2)
    ctx->pc = 0x18d064u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1108)));
    // 0x18d068: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18d068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d06c: 0xc053274  jal         func_14C9D0
    ctx->pc = 0x18D06Cu;
    SET_GPR_U32(ctx, 31, 0x18D074u);
    ctx->pc = 0x18D070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D06Cu;
    // 0x18d070: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C9D0u, 0x18D06Cu, 0x18D074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D074u;
label_18d074:
    // 0x18d074: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18d074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d078: 0xc063e08  jal         func_18F820
    ctx->pc = 0x18D078u;
    SET_GPR_U32(ctx, 31, 0x18D080u);
    ctx->pc = 0x18D07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D078u;
    // 0x18d07c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x18D078u, 0x18D080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D080u;
label_18d080:
    // 0x18d080: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x18D080u;
    {
        const bool branch_taken_0x18d080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D080u;
        // 0x18d084: 0xae400490  sw          $zero, 0x490($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d080) {
            ctx->pc = 0x18D0C0u;
            return;
        }
    }
    ctx->pc = 0x18D088u;
}
