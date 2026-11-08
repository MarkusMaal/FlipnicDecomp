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

// Function: entry_00172a64
// Address: 0x172a64 - 0x172ac0
void entry_00172a64_0x172a64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172a64_0x172a64");
#endif

    switch (ctx->pc) {
        case 0x172a78u: goto label_172a78;
        case 0x172a90u: goto label_172a90;
        case 0x172aacu: goto label_172aac;
        default: break;
    }

    ctx->pc = 0x172a64u;

label_172a64:
    // 0x172a64: 0x8e244020  lw          $a0, 0x4020($s1)
    ctx->pc = 0x172a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16416)));
label_172a68:
    // 0x172a68: 0x8c990010  lw          $t9, 0x10($a0)
    ctx->pc = 0x172a68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_172a6c:
    // 0x172a6c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x172a6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_172a70:
    // 0x172a70: 0x320f809  jalr        $t9
label_172a74:
    if (ctx->pc == 0x172A74u) {
        ctx->pc = 0x172A78u;
        goto label_172a78;
    }
    ctx->pc = 0x172A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x172A78u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172A70u, 0x172A78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x172A78u;
label_172a78:
    // 0x172a78: 0x8e244020  lw          $a0, 0x4020($s1)
    ctx->pc = 0x172a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16416)));
label_172a7c:
    // 0x172a7c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x172a7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_172a80:
    // 0x172a80: 0x8c990010  lw          $t9, 0x10($a0)
    ctx->pc = 0x172a80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_172a84:
    // 0x172a84: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x172a84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_172a88:
    // 0x172a88: 0x320f809  jalr        $t9
label_172a8c:
    if (ctx->pc == 0x172A8Cu) {
        ctx->pc = 0x172A90u;
        goto label_172a90;
    }
    ctx->pc = 0x172A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x172A90u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172A88u, 0x172A90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x172A90u;
label_172a90:
    // 0x172a90: 0x8e226008  lw          $v0, 0x6008($s1)
    ctx->pc = 0x172a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24584)));
label_172a94:
    // 0x172a94: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x172a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_172a98:
    // 0x172a98: 0x1c400027  bgtz        $v0, . + 4 + (0x27 << 2)
label_172a9c:
    if (ctx->pc == 0x172A9Cu) {
        ctx->pc = 0x172A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172A98u;
        // 0x172a9c: 0xae226008  sw          $v0, 0x6008($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172AA0u;
        goto label_172aa0;
    }
    ctx->pc = 0x172A98u;
    {
        const bool branch_taken_0x172a98 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x172A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172A98u;
        // 0x172a9c: 0xae226008  sw          $v0, 0x6008($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172a98) {
            ctx->pc = 0x172B38u;
            return;
        }
    }
    ctx->pc = 0x172AA0u;
label_172aa0:
    // 0x172aa0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x172aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_172aa4:
    // 0x172aa4: 0xc05c9f4  jal         func_1727D0
label_172aa8:
    if (ctx->pc == 0x172AA8u) {
        ctx->pc = 0x172AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172AA4u;
        // 0x172aa8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172AACu;
        goto label_172aac;
    }
    ctx->pc = 0x172AA4u;
    SET_GPR_U32(ctx, 31, 0x172AACu);
    ctx->pc = 0x172AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172AA4u;
    // 0x172aa8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1727D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1727D0u, 0x172AA4u, 0x172AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172AACu;
label_172aac:
    // 0x172aac: 0x8e22601c  lw          $v0, 0x601C($s1)
    ctx->pc = 0x172aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24604)));
label_172ab0:
    // 0x172ab0: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x172ab0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
label_172ab4:
    // 0x172ab4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_172ab8:
    if (ctx->pc == 0x172AB8u) {
        ctx->pc = 0x172ABCu;
        goto label_172abc;
    }
    ctx->pc = 0x172AB4u;
    {
        const bool branch_taken_0x172ab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x172ab4) {
            ctx->pc = 0x172AC0u;
            return;
        }
    }
    ctx->pc = 0x172ABCu;
label_172abc:
    // 0x172abc: 0xae20601c  sw          $zero, 0x601C($s1)
    ctx->pc = 0x172abcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24604), GPR_U32(ctx, 0));
    ctx->pc = 0x172ac0u;
}
