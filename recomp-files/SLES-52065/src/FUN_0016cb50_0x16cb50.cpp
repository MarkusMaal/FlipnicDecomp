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

// Function: FUN_0016cb50
// Address: 0x16cb50 - 0x16cbe8
void FUN_0016cb50_0x16cb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016cb50_0x16cb50");
#endif

    switch (ctx->pc) {
        case 0x16cb50u: goto label_16cb50;
        case 0x16cb54u: goto label_16cb54;
        case 0x16cb58u: goto label_16cb58;
        case 0x16cb5cu: goto label_16cb5c;
        case 0x16cb60u: goto label_16cb60;
        case 0x16cb64u: goto label_16cb64;
        case 0x16cb68u: goto label_16cb68;
        case 0x16cb6cu: goto label_16cb6c;
        case 0x16cb70u: goto label_16cb70;
        case 0x16cb74u: goto label_16cb74;
        case 0x16cb78u: goto label_16cb78;
        case 0x16cb7cu: goto label_16cb7c;
        case 0x16cb80u: goto label_16cb80;
        case 0x16cb84u: goto label_16cb84;
        case 0x16cb88u: goto label_16cb88;
        case 0x16cb8cu: goto label_16cb8c;
        case 0x16cb90u: goto label_16cb90;
        case 0x16cb94u: goto label_16cb94;
        case 0x16cb98u: goto label_16cb98;
        case 0x16cb9cu: goto label_16cb9c;
        case 0x16cba0u: goto label_16cba0;
        case 0x16cba4u: goto label_16cba4;
        case 0x16cba8u: goto label_16cba8;
        case 0x16cbacu: goto label_16cbac;
        case 0x16cbb0u: goto label_16cbb0;
        case 0x16cbb4u: goto label_16cbb4;
        case 0x16cbb8u: goto label_16cbb8;
        case 0x16cbbcu: goto label_16cbbc;
        case 0x16cbc0u: goto label_16cbc0;
        case 0x16cbc4u: goto label_16cbc4;
        case 0x16cbc8u: goto label_16cbc8;
        case 0x16cbccu: goto label_16cbcc;
        case 0x16cbd0u: goto label_16cbd0;
        case 0x16cbd4u: goto label_16cbd4;
        case 0x16cbd8u: goto label_16cbd8;
        case 0x16cbdcu: goto label_16cbdc;
        case 0x16cbe0u: goto label_16cbe0;
        case 0x16cbe4u: goto label_16cbe4;
        default: break;
    }

    ctx->pc = 0x16cb50u;

label_16cb50:
    // 0x16cb50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16cb50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_16cb54:
    // 0x16cb54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16cb54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_16cb58:
    // 0x16cb58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16cb58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16cb5c:
    // 0x16cb5c: 0xc0563cc  jal         func_158F30
label_16cb60:
    if (ctx->pc == 0x16CB60u) {
        ctx->pc = 0x16CB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CB5Cu;
        // 0x16cb60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CB64u;
        goto label_16cb64;
    }
    ctx->pc = 0x16CB5Cu;
    SET_GPR_U32(ctx, 31, 0x16CB64u);
    ctx->pc = 0x16CB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CB5Cu;
    // 0x16cb60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158F30u, 0x16CB5Cu, 0x16CB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CB64u;
label_16cb64:
    // 0x16cb64: 0xa20001d0  sb          $zero, 0x1D0($s0)
    ctx->pc = 0x16cb64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 464), (uint8_t)GPR_U32(ctx, 0));
label_16cb68:
    // 0x16cb68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16cb68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16cb6c:
    // 0x16cb6c: 0xa6000220  sh          $zero, 0x220($s0)
    ctx->pc = 0x16cb6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 544), (uint16_t)GPR_U32(ctx, 0));
label_16cb70:
    // 0x16cb70: 0xae000230  sw          $zero, 0x230($s0)
    ctx->pc = 0x16cb70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 0));
label_16cb74:
    // 0x16cb74: 0xae000224  sw          $zero, 0x224($s0)
    ctx->pc = 0x16cb74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 0));
label_16cb78:
    // 0x16cb78: 0xae00022c  sw          $zero, 0x22C($s0)
    ctx->pc = 0x16cb78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 556), GPR_U32(ctx, 0));
label_16cb7c:
    // 0x16cb7c: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x16cb7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_16cb80:
    // 0x16cb80: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x16cb80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_16cb84:
    // 0x16cb84: 0x320f809  jalr        $t9
label_16cb88:
    if (ctx->pc == 0x16CB88u) {
        ctx->pc = 0x16CB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CB84u;
        // 0x16cb88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CB8Cu;
        goto label_16cb8c;
    }
    ctx->pc = 0x16CB84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16CB8Cu);
        ctx->pc = 0x16CB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CB84u;
        // 0x16cb88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CB84u, 0x16CB8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16CB8Cu;
label_16cb8c:
    // 0x16cb8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16cb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16cb90:
    // 0x16cb90: 0xa2020078  sb          $v0, 0x78($s0)
    ctx->pc = 0x16cb90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 120), (uint8_t)GPR_U32(ctx, 2));
label_16cb94:
    // 0x16cb94: 0xc0802aa  jal         func_200AA8
label_16cb98:
    if (ctx->pc == 0x16CB98u) {
        ctx->pc = 0x16CB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CB94u;
        // 0x16cb98: 0xae000240  sw          $zero, 0x240($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CB9Cu;
        goto label_16cb9c;
    }
    ctx->pc = 0x16CB94u;
    SET_GPR_U32(ctx, 31, 0x16CB9Cu);
    ctx->pc = 0x16CB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CB94u;
    // 0x16cb98: 0xae000240  sw          $zero, 0x240($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x16CB94u, 0x16CB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CB9Cu;
label_16cb9c:
    // 0x16cb9c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16cb9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16cba0:
    // 0x16cba0: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x16cba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
label_16cba4:
    // 0x16cba4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16cba4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16cba8:
    // 0x16cba8: 0x0  nop
    ctx->pc = 0x16cba8u;
    // NOP
label_16cbac:
    // 0x16cbac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x16cbacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_16cbb0:
    // 0x16cbb0: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x16cbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_16cbb4:
    // 0x16cbb4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x16cbb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_16cbb8:
    // 0x16cbb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16cbb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16cbbc:
    // 0x16cbbc: 0x0  nop
    ctx->pc = 0x16cbbcu;
    // NOP
label_16cbc0:
    // 0x16cbc0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x16cbc0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_16cbc4:
    // 0x16cbc4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16cbc4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_16cbc8:
    // 0x16cbc8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x16cbc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_16cbcc:
    // 0x16cbcc: 0x0  nop
    ctx->pc = 0x16cbccu;
    // NOP
label_16cbd0:
    // 0x16cbd0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16cbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16cbd4:
    // 0x16cbd4: 0xa6030222  sh          $v1, 0x222($s0)
    ctx->pc = 0x16cbd4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 546), (uint16_t)GPR_U32(ctx, 3));
label_16cbd8:
    // 0x16cbd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16cbd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16cbdc:
    // 0x16cbdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16cbdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16cbe0:
    // 0x16cbe0: 0x3e00008  jr          $ra
label_16cbe4:
    if (ctx->pc == 0x16CBE4u) {
        ctx->pc = 0x16CBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CBE0u;
        // 0x16cbe4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CBE8u;
        goto label_fallthrough_0x16cbe0;
    }
    ctx->pc = 0x16CBE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16CBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CBE0u;
        // 0x16cbe4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CBE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x16cbe0:
    ctx->pc = 0x16CBE8u;
}
