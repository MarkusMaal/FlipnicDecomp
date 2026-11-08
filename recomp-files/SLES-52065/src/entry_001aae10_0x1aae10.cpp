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

// Function: entry_001aae10
// Address: 0x1aae10 - 0x1aae88
void entry_001aae10_0x1aae10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aae10_0x1aae10");
#endif

    switch (ctx->pc) {
        case 0x1aae34u: goto label_1aae34;
        case 0x1aae48u: goto label_1aae48;
        case 0x1aae58u: goto label_1aae58;
        default: break;
    }

    ctx->pc = 0x1aae10u;

label_1aae10:
    // 0x1aae10: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x1aae10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_1aae14:
    // 0x1aae14: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x1aae14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1aae18:
    // 0x1aae18: 0x8c420300  lw          $v0, 0x300($v0)
    ctx->pc = 0x1aae18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 768)));
label_1aae1c:
    // 0x1aae1c: 0xae820800  sw          $v0, 0x800($s4)
    ctx->pc = 0x1aae1cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2048), GPR_U32(ctx, 2));
label_1aae20:
    // 0x1aae20: 0x8e840800  lw          $a0, 0x800($s4)
    ctx->pc = 0x1aae20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2048)));
label_1aae24:
    // 0x1aae24: 0x8c990004  lw          $t9, 0x4($a0)
    ctx->pc = 0x1aae24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1aae28:
    // 0x1aae28: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1aae28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1aae2c:
    // 0x1aae2c: 0x320f809  jalr        $t9
label_1aae30:
    if (ctx->pc == 0x1AAE30u) {
        ctx->pc = 0x1AAE34u;
        goto label_1aae34;
    }
    ctx->pc = 0x1AAE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AAE34u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AAE2Cu, 0x1AAE34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AAE34u;
label_1aae34:
    // 0x1aae34: 0x8e830800  lw          $v1, 0x800($s4)
    ctx->pc = 0x1aae34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2048)));
label_1aae38:
    // 0x1aae38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aae38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aae3c:
    // 0x1aae3c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1aae3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_1aae40:
    // 0x1aae40: 0xc064228  jal         func_1908A0
label_1aae44:
    if (ctx->pc == 0x1AAE44u) {
        ctx->pc = 0x1AAE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAE40u;
        // 0x1aae44: 0xa3828398  sb          $v0, -0x7C68($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935448), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAE48u;
        goto label_1aae48;
    }
    ctx->pc = 0x1AAE40u;
    SET_GPR_U32(ctx, 31, 0x1AAE48u);
    ctx->pc = 0x1AAE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAE40u;
    // 0x1aae44: 0xa3828398  sb          $v0, -0x7C68($gp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935448), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1908A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1908A0u, 0x1AAE40u, 0x1AAE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAE48u;
label_1aae48:
    // 0x1aae48: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1aae48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1aae4c:
    // 0x1aae4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1aae4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aae50:
    // 0x1aae50: 0xc0642e0  jal         func_190B80
label_1aae54:
    if (ctx->pc == 0x1AAE54u) {
        ctx->pc = 0x1AAE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAE50u;
        // 0x1aae54: 0x24a50908  addiu       $a1, $a1, 0x908 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2312));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAE58u;
        goto label_1aae58;
    }
    ctx->pc = 0x1AAE50u;
    SET_GPR_U32(ctx, 31, 0x1AAE58u);
    ctx->pc = 0x1AAE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAE50u;
    // 0x1aae54: 0x24a50908  addiu       $a1, $a1, 0x908 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190B80u, 0x1AAE50u, 0x1AAE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAE58u;
label_1aae58:
    // 0x1aae58: 0xae8206ec  sw          $v0, 0x6EC($s4)
    ctx->pc = 0x1aae58u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1772), GPR_U32(ctx, 2));
label_1aae5c:
    // 0x1aae5c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1aae5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aae60:
    // 0x1aae60: 0xae8006e8  sw          $zero, 0x6E8($s4)
    ctx->pc = 0x1aae60u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1768), GPR_U32(ctx, 0));
label_1aae64:
    // 0x1aae64: 0x1080  sll         $v0, $zero, 2
    ctx->pc = 0x1aae64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_1aae68:
    // 0x1aae68: 0x8e830664  lw          $v1, 0x664($s4)
    ctx->pc = 0x1aae68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1636)));
label_1aae6c:
    // 0x1aae6c: 0x401021  addu        $v0, $v0, $zero
    ctx->pc = 0x1aae6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 0)));
label_1aae70:
    // 0x1aae70: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1aae70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1aae74:
    // 0x1aae74: 0x401021  addu        $v0, $v0, $zero
    ctx->pc = 0x1aae74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 0)));
label_1aae78:
    // 0x1aae78: 0x28880  sll         $s1, $v0, 2
    ctx->pc = 0x1aae78u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1aae7c:
    // 0x1aae7c: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x1aae7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1aae80:
    // 0x1aae80: 0x10000030  b           . + 4 + (0x30 << 2)
label_1aae84:
    if (ctx->pc == 0x1AAE84u) {
        ctx->pc = 0x1AAE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAE80u;
        // 0x1aae84: 0x24700040  addiu       $s0, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAE88u;
        goto label_fallthrough_0x1aae80;
    }
    ctx->pc = 0x1AAE80u;
    {
        const bool branch_taken_0x1aae80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAE80u;
        // 0x1aae84: 0x24700040  addiu       $s0, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aae80) {
            ctx->pc = 0x1AAF44u;
            return;
        }
    }
label_fallthrough_0x1aae80:
    ctx->pc = 0x1AAE88u;
}
