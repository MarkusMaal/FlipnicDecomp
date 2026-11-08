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

// Function: FUN_0013cda0
// Address: 0x13cda0 - 0x13cf38
void FUN_0013cda0_0x13cda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013cda0_0x13cda0");
#endif

    switch (ctx->pc) {
        case 0x13ce34u: goto label_13ce34;
        case 0x13ce74u: goto label_13ce74;
        case 0x13ce9cu: goto label_13ce9c;
        case 0x13cec8u: goto label_13cec8;
        default: break;
    }

    ctx->pc = 0x13cda0u;

    // 0x13cda0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x13cda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x13cda4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13cda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13cda8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x13cda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x13cdac: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x13cdacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x13cdb0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x13cdb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x13cdb4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x13cdb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x13cdb8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x13cdb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x13cdbc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x13cdbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x13cdc0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13cdc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cdc4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13cdc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13cdc8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x13cdc8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x13cdcc: 0x10c2000d  beq         $a2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x13CDCCu;
    {
        const bool branch_taken_0x13cdcc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x13CDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CDCCu;
        // 0x13cdd0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cdcc) {
            ctx->pc = 0x13CE04u;
            goto label_13ce04;
        }
    }
    ctx->pc = 0x13CDD4u;
    // 0x13cdd4: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x13CDD4u;
    {
        const bool branch_taken_0x13cdd4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x13cdd4) {
            ctx->pc = 0x13CDE4u;
            goto label_13cde4;
        }
    }
    ctx->pc = 0x13CDDCu;
    // 0x13cddc: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x13CDDCu;
    {
        const bool branch_taken_0x13cddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CDDCu;
        // 0x13cde0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cddc) {
            ctx->pc = 0x13CF10u;
            goto label_13cf10;
        }
    }
    ctx->pc = 0x13CDE4u;
label_13cde4:
    // 0x13cde4: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x13cde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
    // 0x13cde8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x13cde8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13cdec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13cdecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13cdf0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13cdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13cdf4: 0x8c4200a8  lw          $v0, 0xA8($v0)
    ctx->pc = 0x13cdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x13cdf8: 0x8c4200b0  lw          $v0, 0xB0($v0)
    ctx->pc = 0x13cdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x13cdfc: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x13CDFCu;
    {
        const bool branch_taken_0x13cdfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CDFCu;
        // 0x13ce00: 0x8c42000c  lw          $v0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cdfc) {
            ctx->pc = 0x13CF10u;
            goto label_13cf10;
        }
    }
    ctx->pc = 0x13CE04u;
label_13ce04:
    // 0x13ce04: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x13ce04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
    // 0x13ce08: 0x58880  sll         $s1, $a1, 2
    ctx->pc = 0x13ce08u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13ce0c: 0x51a021  addu        $s4, $v0, $s1
    ctx->pc = 0x13ce0cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x13ce10: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x13ce10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x13ce14: 0x8c4200a8  lw          $v0, 0xA8($v0)
    ctx->pc = 0x13ce14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x13ce18: 0x8c4200b0  lw          $v0, 0xB0($v0)
    ctx->pc = 0x13ce18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x13ce1c: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x13ce1cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13ce20: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x13ce20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x13ce24: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13CE24u;
    {
        const bool branch_taken_0x13ce24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13CE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CE24u;
        // 0x13ce28: 0x2650010c  addiu       $s0, $s2, 0x10C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ce24) {
            ctx->pc = 0x13CE44u;
            goto label_13ce44;
        }
    }
    ctx->pc = 0x13CE2Cu;
    // 0x13ce2c: 0xc040168  jal         func_1005A0
    ctx->pc = 0x13CE2Cu;
    SET_GPR_U32(ctx, 31, 0x13CE34u);
    ctx->pc = 0x13CE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CE2Cu;
    // 0x13ce30: 0x132100  sll         $a0, $s3, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x13CE2Cu, 0x13CE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CE34u;
label_13ce34:
    // 0x13ce34: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x13ce34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x13ce38: 0x8c6300a8  lw          $v1, 0xA8($v1)
    ctx->pc = 0x13ce38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 168)));
    // 0x13ce3c: 0x8c6300b0  lw          $v1, 0xB0($v1)
    ctx->pc = 0x13ce3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x13ce40: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x13ce40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_13ce44:
    // 0x13ce44: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x13ce44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13ce48: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x13ce48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x13ce4c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13ce4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13ce50: 0x8c4200a8  lw          $v0, 0xA8($v0)
    ctx->pc = 0x13ce50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x13ce54: 0x8c4200b0  lw          $v0, 0xB0($v0)
    ctx->pc = 0x13ce54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x13ce58: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x13ce58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ce5c: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x13ce5cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13ce60: 0x0  nop
    ctx->pc = 0x13ce60u;
    // NOP
    // 0x13ce64: 0x45010023  bc1t        . + 4 + (0x23 << 2)
    ctx->pc = 0x13CE64u;
    {
        const bool branch_taken_0x13ce64 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13CE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CE64u;
        // 0x13ce68: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ce64) {
            ctx->pc = 0x13CEF4u;
            goto label_13cef4;
        }
    }
    ctx->pc = 0x13CE6Cu;
    // 0x13ce6c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x13CE6Cu;
    {
        const bool branch_taken_0x13ce6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CE6Cu;
        // 0x13ce70: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ce6c) {
            ctx->pc = 0x13CED0u;
            goto label_13ced0;
        }
    }
    ctx->pc = 0x13CE74u;
label_13ce74:
    // 0x13ce74: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x13ce74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
    // 0x13ce78: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x13ce78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x13ce7c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x13ce7cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x13ce80: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x13ce80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x13ce84: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13ce84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13ce88: 0x8c4200a8  lw          $v0, 0xA8($v0)
    ctx->pc = 0x13ce88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x13ce8c: 0x8c4200b0  lw          $v0, 0xB0($v0)
    ctx->pc = 0x13ce8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x13ce90: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x13ce90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x13ce94: 0xc07d37c  jal         func_1F4DF0
    ctx->pc = 0x13CE94u;
    SET_GPR_U32(ctx, 31, 0x13CE9Cu);
    ctx->pc = 0x13CE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CE94u;
    // 0x13ce98: 0x552821  addu        $a1, $v0, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DF0u, 0x13CE94u, 0x13CE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CE9Cu;
label_13ce9c:
    // 0x13ce9c: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x13ce9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
    // 0x13cea0: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x13cea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x13cea4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x13cea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x13cea8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13cea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13ceac: 0x8c4200a8  lw          $v0, 0xA8($v0)
    ctx->pc = 0x13ceacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x13ceb0: 0x8c4200b0  lw          $v0, 0xB0($v0)
    ctx->pc = 0x13ceb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x13ceb4: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x13ceb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x13ceb8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x13ceb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x13cebc: 0x752021  addu        $a0, $v1, $s5
    ctx->pc = 0x13cebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x13cec0: 0xc07d36a  jal         func_1F4DA8
    ctx->pc = 0x13CEC0u;
    SET_GPR_U32(ctx, 31, 0x13CEC8u);
    ctx->pc = 0x13CEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CEC0u;
    // 0x13cec4: 0x552821  addu        $a1, $v0, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DA8u, 0x13CEC0u, 0x13CEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CEC8u;
label_13cec8:
    // 0x13cec8: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x13cec8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x13cecc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x13ceccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_13ced0:
    // 0x13ced0: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x13ced0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x13ced4: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x13CED4u;
    {
        const bool branch_taken_0x13ced4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ced4) {
            ctx->pc = 0x13CE74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13ce74;
        }
    }
    ctx->pc = 0x13CEDCu;
    // 0x13cedc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x13cedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13cee0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x13cee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x13cee4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13cee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13cee8: 0x8c4200a8  lw          $v0, 0xA8($v0)
    ctx->pc = 0x13cee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x13ceec: 0x8c4200b0  lw          $v0, 0xB0($v0)
    ctx->pc = 0x13ceecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x13cef0: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x13cef0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_13cef4:
    // 0x13cef4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x13cef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13cef8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x13cef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x13cefc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13cefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13cf00: 0x8c4200a8  lw          $v0, 0xA8($v0)
    ctx->pc = 0x13cf00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x13cf04: 0x8c4200b0  lw          $v0, 0xB0($v0)
    ctx->pc = 0x13cf04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x13cf08: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x13cf08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x13cf0c: 0x0  nop
    ctx->pc = 0x13cf0cu;
    // NOP
label_13cf10:
    // 0x13cf10: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x13cf10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13cf14: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x13cf14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13cf18: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x13cf18u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13cf1c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x13cf1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13cf20: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x13cf20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13cf24: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x13cf24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13cf28: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x13cf28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13cf2c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13cf2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13cf30: 0x3e00008  jr          $ra
    ctx->pc = 0x13CF30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13CF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CF30u;
        // 0x13cf34: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CF30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13CF38u;
}
