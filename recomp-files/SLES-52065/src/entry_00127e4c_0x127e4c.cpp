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

// Function: entry_00127e4c
// Address: 0x127e4c - 0x127e90
void entry_00127e4c_0x127e4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127e4c_0x127e4c");
#endif

    switch (ctx->pc) {
        case 0x127e60u: goto label_127e60;
        case 0x127e74u: goto label_127e74;
        case 0x127e88u: goto label_127e88;
        default: break;
    }

    ctx->pc = 0x127e4cu;

label_127e4c:
    // 0x127e4c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x127e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_127e50:
    // 0x127e50: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x127e50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_127e54:
    // 0x127e54: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x127e54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_127e58:
    // 0x127e58: 0x320f809  jalr        $t9
label_127e5c:
    if (ctx->pc == 0x127E5Cu) {
        ctx->pc = 0x127E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127E58u;
        // 0x127e5c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127E60u;
        goto label_127e60;
    }
    ctx->pc = 0x127E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x127E60u);
        ctx->pc = 0x127E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127E58u;
        // 0x127e5c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127E58u, 0x127E60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127E60u;
label_127e60:
    // 0x127e60: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x127e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_127e64:
    // 0x127e64: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x127e64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_127e68:
    // 0x127e68: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x127e68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_127e6c:
    // 0x127e6c: 0x320f809  jalr        $t9
label_127e70:
    if (ctx->pc == 0x127E70u) {
        ctx->pc = 0x127E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127E6Cu;
        // 0x127e70: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127E74u;
        goto label_127e74;
    }
    ctx->pc = 0x127E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x127E74u);
        ctx->pc = 0x127E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127E6Cu;
        // 0x127e70: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127E6Cu, 0x127E74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127E74u;
label_127e74:
    // 0x127e74: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x127e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_127e78:
    // 0x127e78: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x127e78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_127e7c:
    // 0x127e7c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x127e7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_127e80:
    // 0x127e80: 0x320f809  jalr        $t9
label_127e84:
    if (ctx->pc == 0x127E84u) {
        ctx->pc = 0x127E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127E80u;
        // 0x127e84: 0xc7ac005c  lwc1        $f12, 0x5C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x127E88u;
        goto label_127e88;
    }
    ctx->pc = 0x127E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x127E88u);
        ctx->pc = 0x127E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127E80u;
        // 0x127e84: 0xc7ac005c  lwc1        $f12, 0x5C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127E80u, 0x127E88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127E88u;
label_127e88:
    // 0x127e88: 0x10000045  b           . + 4 + (0x45 << 2)
label_127e8c:
    if (ctx->pc == 0x127E8Cu) {
        ctx->pc = 0x127E90u;
        goto label_fallthrough_0x127e88;
    }
    ctx->pc = 0x127E88u;
    {
        const bool branch_taken_0x127e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127e88) {
            ctx->pc = 0x127FA0u;
            return;
        }
    }
label_fallthrough_0x127e88:
    ctx->pc = 0x127E90u;
}
