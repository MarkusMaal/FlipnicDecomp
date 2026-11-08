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

// Function: entry_001d0af4
// Address: 0x1d0af4 - 0x1d0b60
void entry_001d0af4_0x1d0af4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0af4_0x1d0af4");
#endif

    switch (ctx->pc) {
        case 0x1d0b34u: goto label_1d0b34;
        case 0x1d0b4cu: goto label_1d0b4c;
        case 0x1d0b58u: goto label_1d0b58;
        default: break;
    }

    ctx->pc = 0x1d0af4u;

label_1d0af4:
    // 0x1d0af4: 0x3c0442fe  lui         $a0, 0x42FE
    ctx->pc = 0x1d0af4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17150 << 16));
label_1d0af8:
    // 0x1d0af8: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x1d0af8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
label_1d0afc:
    // 0x1d0afc: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x1d0afcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
label_1d0b00:
    // 0x1d0b00: 0x27a5006c  addiu       $a1, $sp, 0x6C
    ctx->pc = 0x1d0b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_1d0b04:
    // 0x1d0b04: 0xafa40064  sw          $a0, 0x64($sp)
    ctx->pc = 0x1d0b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 4));
label_1d0b08:
    // 0x1d0b08: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1d0b08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d0b0c:
    // 0x1d0b0c: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x1d0b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
label_1d0b10:
    // 0x1d0b10: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1d0b10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_1d0b14:
    // 0x1d0b14: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1d0b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0b18:
    // 0x1d0b18: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1d0b18u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d0b1c:
    // 0x1d0b1c: 0x0  nop
    ctx->pc = 0x1d0b1cu;
    // NOP
label_1d0b20:
    // 0x1d0b20: 0x45010070  bc1t        . + 4 + (0x70 << 2)
label_1d0b24:
    if (ctx->pc == 0x1D0B24u) {
        ctx->pc = 0x1D0B28u;
        goto label_1d0b28;
    }
    ctx->pc = 0x1D0B20u;
    {
        const bool branch_taken_0x1d0b20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d0b20) {
            ctx->pc = 0x1D0CE4u;
            return;
        }
    }
    ctx->pc = 0x1D0B28u;
label_1d0b28:
    // 0x1d0b28: 0x8e650044  lw          $a1, 0x44($s3)
    ctx->pc = 0x1d0b28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
label_1d0b2c:
    // 0x1d0b2c: 0xc0485c8  jal         func_121720
label_1d0b30:
    if (ctx->pc == 0x1D0B30u) {
        ctx->pc = 0x1D0B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0B2Cu;
        // 0x1d0b30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0B34u;
        goto label_1d0b34;
    }
    ctx->pc = 0x1D0B2Cu;
    SET_GPR_U32(ctx, 31, 0x1D0B34u);
    ctx->pc = 0x1D0B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0B2Cu;
    // 0x1d0b30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121720u, 0x1D0B2Cu, 0x1D0B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0B34u;
label_1d0b34:
    // 0x1d0b34: 0x8e640044  lw          $a0, 0x44($s3)
    ctx->pc = 0x1d0b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
label_1d0b38:
    // 0x1d0b38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d0b38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d0b3c:
    // 0x1d0b3c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1d0b3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d0b40:
    // 0x1d0b40: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1d0b40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1d0b44:
    // 0x1d0b44: 0x320f809  jalr        $t9
label_1d0b48:
    if (ctx->pc == 0x1D0B48u) {
        ctx->pc = 0x1D0B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0B44u;
        // 0x1d0b48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0B4Cu;
        goto label_1d0b4c;
    }
    ctx->pc = 0x1D0B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D0B4Cu);
        ctx->pc = 0x1D0B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0B44u;
        // 0x1d0b48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0B44u, 0x1D0B4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D0B4Cu;
label_1d0b4c:
    // 0x1d0b4c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1d0b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1d0b50:
    // 0x1d0b50: 0xc07d3a0  jal         func_1F4E80
label_1d0b54:
    if (ctx->pc == 0x1D0B54u) {
        ctx->pc = 0x1D0B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0B50u;
        // 0x1d0b54: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0B58u;
        goto label_1d0b58;
    }
    ctx->pc = 0x1D0B50u;
    SET_GPR_U32(ctx, 31, 0x1D0B58u);
    ctx->pc = 0x1D0B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0B50u;
    // 0x1d0b54: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E80u, 0x1D0B50u, 0x1D0B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0B58u;
label_1d0b58:
    // 0x1d0b58: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d0b58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0b5c:
    // 0x1d0b5c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d0b5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1d0b60u;
}
