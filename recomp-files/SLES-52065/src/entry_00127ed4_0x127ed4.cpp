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

// Function: entry_00127ed4
// Address: 0x127ed4 - 0x127f18
void entry_00127ed4_0x127ed4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127ed4_0x127ed4");
#endif

    switch (ctx->pc) {
        case 0x127ee8u: goto label_127ee8;
        case 0x127efcu: goto label_127efc;
        case 0x127f10u: goto label_127f10;
        default: break;
    }

    ctx->pc = 0x127ed4u;

label_127ed4:
    // 0x127ed4: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x127ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_127ed8:
    // 0x127ed8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x127ed8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_127edc:
    // 0x127edc: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x127edcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_127ee0:
    // 0x127ee0: 0x320f809  jalr        $t9
label_127ee4:
    if (ctx->pc == 0x127EE4u) {
        ctx->pc = 0x127EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127EE0u;
        // 0x127ee4: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127EE8u;
        goto label_127ee8;
    }
    ctx->pc = 0x127EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x127EE8u);
        ctx->pc = 0x127EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127EE0u;
        // 0x127ee4: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127EE0u, 0x127EE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127EE8u;
label_127ee8:
    // 0x127ee8: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x127ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_127eec:
    // 0x127eec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x127eecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_127ef0:
    // 0x127ef0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x127ef0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_127ef4:
    // 0x127ef4: 0x320f809  jalr        $t9
label_127ef8:
    if (ctx->pc == 0x127EF8u) {
        ctx->pc = 0x127EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127EF4u;
        // 0x127ef8: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127EFCu;
        goto label_127efc;
    }
    ctx->pc = 0x127EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x127EFCu);
        ctx->pc = 0x127EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127EF4u;
        // 0x127ef8: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127EF4u, 0x127EFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127EFCu;
label_127efc:
    // 0x127efc: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x127efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_127f00:
    // 0x127f00: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x127f00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_127f04:
    // 0x127f04: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x127f04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_127f08:
    // 0x127f08: 0x320f809  jalr        $t9
label_127f0c:
    if (ctx->pc == 0x127F0Cu) {
        ctx->pc = 0x127F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F08u;
        // 0x127f0c: 0xc7ac005c  lwc1        $f12, 0x5C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x127F10u;
        goto label_127f10;
    }
    ctx->pc = 0x127F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x127F10u);
        ctx->pc = 0x127F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F08u;
        // 0x127f0c: 0xc7ac005c  lwc1        $f12, 0x5C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127F08u, 0x127F10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127F10u;
label_127f10:
    // 0x127f10: 0x10000023  b           . + 4 + (0x23 << 2)
label_127f14:
    if (ctx->pc == 0x127F14u) {
        ctx->pc = 0x127F18u;
        goto label_fallthrough_0x127f10;
    }
    ctx->pc = 0x127F10u;
    {
        const bool branch_taken_0x127f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127f10) {
            ctx->pc = 0x127FA0u;
            return;
        }
    }
label_fallthrough_0x127f10:
    ctx->pc = 0x127F18u;
}
