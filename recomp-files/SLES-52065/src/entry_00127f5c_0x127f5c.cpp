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

// Function: entry_00127f5c
// Address: 0x127f5c - 0x127fa0
void entry_00127f5c_0x127f5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127f5c_0x127f5c");
#endif

    switch (ctx->pc) {
        case 0x127f70u: goto label_127f70;
        case 0x127f84u: goto label_127f84;
        case 0x127f98u: goto label_127f98;
        default: break;
    }

    ctx->pc = 0x127f5cu;

label_127f5c:
    // 0x127f5c: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x127f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_127f60:
    // 0x127f60: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x127f60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_127f64:
    // 0x127f64: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x127f64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_127f68:
    // 0x127f68: 0x320f809  jalr        $t9
label_127f6c:
    if (ctx->pc == 0x127F6Cu) {
        ctx->pc = 0x127F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F68u;
        // 0x127f6c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127F70u;
        goto label_127f70;
    }
    ctx->pc = 0x127F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x127F70u);
        ctx->pc = 0x127F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F68u;
        // 0x127f6c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127F68u, 0x127F70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127F70u;
label_127f70:
    // 0x127f70: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x127f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_127f74:
    // 0x127f74: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x127f74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_127f78:
    // 0x127f78: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x127f78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_127f7c:
    // 0x127f7c: 0x320f809  jalr        $t9
label_127f80:
    if (ctx->pc == 0x127F80u) {
        ctx->pc = 0x127F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F7Cu;
        // 0x127f80: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127F84u;
        goto label_127f84;
    }
    ctx->pc = 0x127F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x127F84u);
        ctx->pc = 0x127F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F7Cu;
        // 0x127f80: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127F7Cu, 0x127F84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127F84u;
label_127f84:
    // 0x127f84: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x127f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_127f88:
    // 0x127f88: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x127f88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_127f8c:
    // 0x127f8c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x127f8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_127f90:
    // 0x127f90: 0x320f809  jalr        $t9
label_127f94:
    if (ctx->pc == 0x127F94u) {
        ctx->pc = 0x127F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F90u;
        // 0x127f94: 0xc7ac005c  lwc1        $f12, 0x5C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x127F98u;
        goto label_127f98;
    }
    ctx->pc = 0x127F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x127F98u);
        ctx->pc = 0x127F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F90u;
        // 0x127f94: 0xc7ac005c  lwc1        $f12, 0x5C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127F90u, 0x127F98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127F98u;
label_127f98:
    // 0x127f98: 0xc04a5c8  jal         func_129720
label_127f9c:
    if (ctx->pc == 0x127F9Cu) {
        ctx->pc = 0x127F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F98u;
        // 0x127f9c: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127FA0u;
        goto label_fallthrough_0x127f98;
    }
    ctx->pc = 0x127F98u;
    SET_GPR_U32(ctx, 31, 0x127FA0u);
    ctx->pc = 0x127F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127F98u;
    // 0x127f9c: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129720u, 0x127F98u, 0x127FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x127f98:
    ctx->pc = 0x127FA0u;
}
