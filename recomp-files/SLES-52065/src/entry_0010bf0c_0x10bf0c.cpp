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

// Function: entry_0010bf0c
// Address: 0x10bf0c - 0x10bf40
void entry_0010bf0c_0x10bf0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010bf0c_0x10bf0c");
#endif

    switch (ctx->pc) {
        case 0x10bf20u: goto label_10bf20;
        default: break;
    }

    ctx->pc = 0x10bf0cu;

label_10bf0c:
    // 0x10bf0c: 0x8e990008  lw          $t9, 0x8($s4)
    ctx->pc = 0x10bf0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_10bf10:
    // 0x10bf10: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x10bf10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10bf14:
    // 0x10bf14: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x10bf14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_10bf18:
    // 0x10bf18: 0x320f809  jalr        $t9
label_10bf1c:
    if (ctx->pc == 0x10BF1Cu) {
        ctx->pc = 0x10BF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BF18u;
        // 0x10bf1c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BF20u;
        goto label_10bf20;
    }
    ctx->pc = 0x10BF18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10BF20u);
        ctx->pc = 0x10BF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BF18u;
        // 0x10bf1c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BF18u, 0x10BF20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10BF20u;
label_10bf20:
    // 0x10bf20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x10bf20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10bf24:
    // 0x10bf24: 0x0  nop
    ctx->pc = 0x10bf24u;
    // NOP
label_10bf28:
    // 0x10bf28: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x10bf28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10bf2c:
    // 0x10bf2c: 0x0  nop
    ctx->pc = 0x10bf2cu;
    // NOP
label_10bf30:
    // 0x10bf30: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_10bf34:
    if (ctx->pc == 0x10BF34u) {
        ctx->pc = 0x10BF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BF30u;
        // 0x10bf34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BF38u;
        goto label_10bf38;
    }
    ctx->pc = 0x10BF30u;
    {
        const bool branch_taken_0x10bf30 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x10BF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BF30u;
        // 0x10bf34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bf30) {
            ctx->pc = 0x10BF40u;
            return;
        }
    }
    ctx->pc = 0x10BF38u;
label_10bf38:
    // 0x10bf38: 0x10000003  b           . + 4 + (0x3 << 2)
label_10bf3c:
    if (ctx->pc == 0x10BF3Cu) {
        ctx->pc = 0x10BF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BF38u;
        // 0x10bf3c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BF40u;
        goto label_fallthrough_0x10bf38;
    }
    ctx->pc = 0x10BF38u;
    {
        const bool branch_taken_0x10bf38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BF38u;
        // 0x10bf3c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bf38) {
            ctx->pc = 0x10BF48u;
            return;
        }
    }
label_fallthrough_0x10bf38:
    ctx->pc = 0x10BF40u;
}
