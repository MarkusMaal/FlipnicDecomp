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

// Function: entry_001a6c10
// Address: 0x1a6c10 - 0x1a6c7c
void entry_001a6c10_0x1a6c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6c10_0x1a6c10");
#endif

    switch (ctx->pc) {
        case 0x1a6c20u: goto label_1a6c20;
        case 0x1a6c54u: goto label_1a6c54;
        default: break;
    }

    ctx->pc = 0x1a6c10u;

label_1a6c10:
    // 0x1a6c10: 0xa2000018  sb          $zero, 0x18($s0)
    ctx->pc = 0x1a6c10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 0));
label_1a6c14:
    // 0x1a6c14: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a6c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6c18:
    // 0x1a6c18: 0xc04c6d8  jal         func_131B60
label_1a6c1c:
    if (ctx->pc == 0x1A6C1Cu) {
        ctx->pc = 0x1A6C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C18u;
        // 0x1a6c1c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6C20u;
        goto label_1a6c20;
    }
    ctx->pc = 0x1A6C18u;
    SET_GPR_U32(ctx, 31, 0x1A6C20u);
    ctx->pc = 0x1A6C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6C18u;
    // 0x1a6c1c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131B60u, 0x1A6C18u, 0x1A6C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6C20u;
label_1a6c20:
    // 0x1a6c20: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1a6c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a6c24:
    // 0x1a6c24: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1a6c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1a6c28:
    // 0x1a6c28: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1a6c28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_1a6c2c:
    // 0x1a6c2c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1a6c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1a6c30:
    // 0x1a6c30: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1a6c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a6c34:
    // 0x1a6c34: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1a6c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1a6c38:
    // 0x1a6c38: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1a6c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a6c3c:
    // 0x1a6c3c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1a6c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1a6c40:
    // 0x1a6c40: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a6c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6c44:
    // 0x1a6c44: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a6c44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a6c48:
    // 0x1a6c48: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1a6c48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1a6c4c:
    // 0x1a6c4c: 0x320f809  jalr        $t9
label_1a6c50:
    if (ctx->pc == 0x1A6C50u) {
        ctx->pc = 0x1A6C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C4Cu;
        // 0x1a6c50: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6C54u;
        goto label_1a6c54;
    }
    ctx->pc = 0x1A6C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6C54u);
        ctx->pc = 0x1A6C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C4Cu;
        // 0x1a6c50: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6C4Cu, 0x1A6C54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6C54u;
label_1a6c54:
    // 0x1a6c54: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1a6c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a6c58:
    // 0x1a6c58: 0x2c810007  sltiu       $at, $a0, 0x7
    ctx->pc = 0x1a6c58u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_1a6c5c:
    // 0x1a6c5c: 0x10200055  beqz        $at, . + 4 + (0x55 << 2)
label_1a6c60:
    if (ctx->pc == 0x1A6C60u) {
        ctx->pc = 0x1A6C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C5Cu;
        // 0x1a6c60: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6C64u;
        goto label_1a6c64;
    }
    ctx->pc = 0x1A6C5Cu;
    {
        const bool branch_taken_0x1a6c5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C5Cu;
        // 0x1a6c60: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6c5c) {
            ctx->pc = 0x1A6DB4u;
            return;
        }
    }
    ctx->pc = 0x1A6C64u;
label_1a6c64:
    // 0x1a6c64: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1a6c64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1a6c68:
    // 0x1a6c68: 0x24630700  addiu       $v1, $v1, 0x700
    ctx->pc = 0x1a6c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1792));
label_1a6c6c:
    // 0x1a6c6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a6c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a6c70:
    // 0x1a6c70: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a6c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a6c74:
    // 0x1a6c74: 0x400008  jr          $v0
label_1a6c78:
    if (ctx->pc == 0x1A6C78u) {
        ctx->pc = 0x1A6C7Cu;
        goto label_fallthrough_0x1a6c74;
    }
    ctx->pc = 0x1A6C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6C74u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1a6c74:
    ctx->pc = 0x1A6C7Cu;
}
