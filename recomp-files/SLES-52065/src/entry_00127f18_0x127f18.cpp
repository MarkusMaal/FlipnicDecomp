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

// Function: entry_00127f18
// Address: 0x127f18 - 0x127f5c
void entry_00127f18_0x127f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127f18_0x127f18");
#endif

    switch (ctx->pc) {
        case 0x127f2cu: goto label_127f2c;
        case 0x127f40u: goto label_127f40;
        case 0x127f54u: goto label_127f54;
        default: break;
    }

    ctx->pc = 0x127f18u;

label_127f18:
    // 0x127f18: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x127f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_127f1c:
    // 0x127f1c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x127f1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_127f20:
    // 0x127f20: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x127f20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_127f24:
    // 0x127f24: 0x320f809  jalr        $t9
label_127f28:
    if (ctx->pc == 0x127F28u) {
        ctx->pc = 0x127F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F24u;
        // 0x127f28: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127F2Cu;
        goto label_127f2c;
    }
    ctx->pc = 0x127F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x127F2Cu);
        ctx->pc = 0x127F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F24u;
        // 0x127f28: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127F24u, 0x127F2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127F2Cu;
label_127f2c:
    // 0x127f2c: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x127f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_127f30:
    // 0x127f30: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x127f30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_127f34:
    // 0x127f34: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x127f34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_127f38:
    // 0x127f38: 0x320f809  jalr        $t9
label_127f3c:
    if (ctx->pc == 0x127F3Cu) {
        ctx->pc = 0x127F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F38u;
        // 0x127f3c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127F40u;
        goto label_127f40;
    }
    ctx->pc = 0x127F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x127F40u);
        ctx->pc = 0x127F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F38u;
        // 0x127f3c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127F38u, 0x127F40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127F40u;
label_127f40:
    // 0x127f40: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x127f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_127f44:
    // 0x127f44: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x127f44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_127f48:
    // 0x127f48: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x127f48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_127f4c:
    // 0x127f4c: 0x320f809  jalr        $t9
label_127f50:
    if (ctx->pc == 0x127F50u) {
        ctx->pc = 0x127F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F4Cu;
        // 0x127f50: 0xc7ac005c  lwc1        $f12, 0x5C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x127F54u;
        goto label_127f54;
    }
    ctx->pc = 0x127F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x127F54u);
        ctx->pc = 0x127F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F4Cu;
        // 0x127f50: 0xc7ac005c  lwc1        $f12, 0x5C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127F4Cu, 0x127F54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127F54u;
label_127f54:
    // 0x127f54: 0x10000012  b           . + 4 + (0x12 << 2)
label_127f58:
    if (ctx->pc == 0x127F58u) {
        ctx->pc = 0x127F5Cu;
        goto label_fallthrough_0x127f54;
    }
    ctx->pc = 0x127F54u;
    {
        const bool branch_taken_0x127f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127f54) {
            ctx->pc = 0x127FA0u;
            return;
        }
    }
label_fallthrough_0x127f54:
    ctx->pc = 0x127F5Cu;
}
