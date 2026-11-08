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

// Function: FUN_0016e970
// Address: 0x16e970 - 0x16ec08
void FUN_0016e970_0x16e970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016e970_0x16e970");
#endif

    switch (ctx->pc) {
        case 0x16e970u: goto label_16e970;
        case 0x16e974u: goto label_16e974;
        case 0x16e978u: goto label_16e978;
        case 0x16e97cu: goto label_16e97c;
        case 0x16e980u: goto label_16e980;
        case 0x16e984u: goto label_16e984;
        case 0x16e988u: goto label_16e988;
        case 0x16e98cu: goto label_16e98c;
        case 0x16e990u: goto label_16e990;
        case 0x16e994u: goto label_16e994;
        case 0x16e998u: goto label_16e998;
        case 0x16e99cu: goto label_16e99c;
        case 0x16e9a0u: goto label_16e9a0;
        case 0x16e9a4u: goto label_16e9a4;
        case 0x16e9a8u: goto label_16e9a8;
        case 0x16e9acu: goto label_16e9ac;
        case 0x16e9b0u: goto label_16e9b0;
        case 0x16e9b4u: goto label_16e9b4;
        case 0x16e9b8u: goto label_16e9b8;
        case 0x16e9bcu: goto label_16e9bc;
        case 0x16e9c0u: goto label_16e9c0;
        case 0x16e9c4u: goto label_16e9c4;
        case 0x16e9c8u: goto label_16e9c8;
        case 0x16e9ccu: goto label_16e9cc;
        case 0x16e9d0u: goto label_16e9d0;
        case 0x16e9d4u: goto label_16e9d4;
        case 0x16e9d8u: goto label_16e9d8;
        case 0x16e9dcu: goto label_16e9dc;
        case 0x16e9e0u: goto label_16e9e0;
        case 0x16e9e4u: goto label_16e9e4;
        case 0x16e9e8u: goto label_16e9e8;
        case 0x16e9ecu: goto label_16e9ec;
        case 0x16e9f0u: goto label_16e9f0;
        case 0x16e9f4u: goto label_16e9f4;
        case 0x16e9f8u: goto label_16e9f8;
        case 0x16e9fcu: goto label_16e9fc;
        case 0x16ea00u: goto label_16ea00;
        case 0x16ea04u: goto label_16ea04;
        case 0x16ea08u: goto label_16ea08;
        case 0x16ea0cu: goto label_16ea0c;
        case 0x16ea10u: goto label_16ea10;
        case 0x16ea14u: goto label_16ea14;
        case 0x16ea18u: goto label_16ea18;
        case 0x16ea1cu: goto label_16ea1c;
        case 0x16ea20u: goto label_16ea20;
        case 0x16ea24u: goto label_16ea24;
        case 0x16ea28u: goto label_16ea28;
        case 0x16ea2cu: goto label_16ea2c;
        case 0x16ea30u: goto label_16ea30;
        case 0x16ea34u: goto label_16ea34;
        case 0x16ea38u: goto label_16ea38;
        case 0x16ea3cu: goto label_16ea3c;
        case 0x16ea40u: goto label_16ea40;
        case 0x16ea44u: goto label_16ea44;
        case 0x16ea48u: goto label_16ea48;
        case 0x16ea4cu: goto label_16ea4c;
        case 0x16ea50u: goto label_16ea50;
        case 0x16ea54u: goto label_16ea54;
        case 0x16ea58u: goto label_16ea58;
        case 0x16ea5cu: goto label_16ea5c;
        case 0x16ea60u: goto label_16ea60;
        case 0x16ea64u: goto label_16ea64;
        case 0x16ea68u: goto label_16ea68;
        case 0x16ea6cu: goto label_16ea6c;
        case 0x16ea70u: goto label_16ea70;
        case 0x16ea74u: goto label_16ea74;
        case 0x16ea78u: goto label_16ea78;
        case 0x16ea7cu: goto label_16ea7c;
        case 0x16ea80u: goto label_16ea80;
        case 0x16ea84u: goto label_16ea84;
        case 0x16ea88u: goto label_16ea88;
        case 0x16ea8cu: goto label_16ea8c;
        case 0x16ea90u: goto label_16ea90;
        case 0x16ea94u: goto label_16ea94;
        case 0x16ea98u: goto label_16ea98;
        case 0x16ea9cu: goto label_16ea9c;
        case 0x16eaa0u: goto label_16eaa0;
        case 0x16eaa4u: goto label_16eaa4;
        case 0x16eaa8u: goto label_16eaa8;
        case 0x16eaacu: goto label_16eaac;
        case 0x16eab0u: goto label_16eab0;
        case 0x16eab4u: goto label_16eab4;
        case 0x16eab8u: goto label_16eab8;
        case 0x16eabcu: goto label_16eabc;
        case 0x16eac0u: goto label_16eac0;
        case 0x16eac4u: goto label_16eac4;
        case 0x16eac8u: goto label_16eac8;
        case 0x16eaccu: goto label_16eacc;
        case 0x16ead0u: goto label_16ead0;
        case 0x16ead4u: goto label_16ead4;
        case 0x16ead8u: goto label_16ead8;
        case 0x16eadcu: goto label_16eadc;
        case 0x16eae0u: goto label_16eae0;
        case 0x16eae4u: goto label_16eae4;
        case 0x16eae8u: goto label_16eae8;
        case 0x16eaecu: goto label_16eaec;
        case 0x16eaf0u: goto label_16eaf0;
        case 0x16eaf4u: goto label_16eaf4;
        case 0x16eaf8u: goto label_16eaf8;
        case 0x16eafcu: goto label_16eafc;
        case 0x16eb00u: goto label_16eb00;
        case 0x16eb04u: goto label_16eb04;
        case 0x16eb08u: goto label_16eb08;
        case 0x16eb0cu: goto label_16eb0c;
        case 0x16eb10u: goto label_16eb10;
        case 0x16eb14u: goto label_16eb14;
        case 0x16eb18u: goto label_16eb18;
        case 0x16eb1cu: goto label_16eb1c;
        case 0x16eb20u: goto label_16eb20;
        case 0x16eb24u: goto label_16eb24;
        case 0x16eb28u: goto label_16eb28;
        case 0x16eb2cu: goto label_16eb2c;
        case 0x16eb30u: goto label_16eb30;
        case 0x16eb34u: goto label_16eb34;
        case 0x16eb38u: goto label_16eb38;
        case 0x16eb3cu: goto label_16eb3c;
        case 0x16eb40u: goto label_16eb40;
        case 0x16eb44u: goto label_16eb44;
        case 0x16eb48u: goto label_16eb48;
        case 0x16eb4cu: goto label_16eb4c;
        case 0x16eb50u: goto label_16eb50;
        case 0x16eb54u: goto label_16eb54;
        case 0x16eb58u: goto label_16eb58;
        case 0x16eb5cu: goto label_16eb5c;
        case 0x16eb60u: goto label_16eb60;
        case 0x16eb64u: goto label_16eb64;
        case 0x16eb68u: goto label_16eb68;
        case 0x16eb6cu: goto label_16eb6c;
        case 0x16eb70u: goto label_16eb70;
        case 0x16eb74u: goto label_16eb74;
        case 0x16eb78u: goto label_16eb78;
        case 0x16eb7cu: goto label_16eb7c;
        case 0x16eb80u: goto label_16eb80;
        case 0x16eb84u: goto label_16eb84;
        case 0x16eb88u: goto label_16eb88;
        case 0x16eb8cu: goto label_16eb8c;
        case 0x16eb90u: goto label_16eb90;
        case 0x16eb94u: goto label_16eb94;
        case 0x16eb98u: goto label_16eb98;
        case 0x16eb9cu: goto label_16eb9c;
        case 0x16eba0u: goto label_16eba0;
        case 0x16eba4u: goto label_16eba4;
        case 0x16eba8u: goto label_16eba8;
        case 0x16ebacu: goto label_16ebac;
        case 0x16ebb0u: goto label_16ebb0;
        case 0x16ebb4u: goto label_16ebb4;
        case 0x16ebb8u: goto label_16ebb8;
        case 0x16ebbcu: goto label_16ebbc;
        case 0x16ebc0u: goto label_16ebc0;
        case 0x16ebc4u: goto label_16ebc4;
        case 0x16ebc8u: goto label_16ebc8;
        case 0x16ebccu: goto label_16ebcc;
        case 0x16ebd0u: goto label_16ebd0;
        case 0x16ebd4u: goto label_16ebd4;
        case 0x16ebd8u: goto label_16ebd8;
        case 0x16ebdcu: goto label_16ebdc;
        case 0x16ebe0u: goto label_16ebe0;
        case 0x16ebe4u: goto label_16ebe4;
        case 0x16ebe8u: goto label_16ebe8;
        case 0x16ebecu: goto label_16ebec;
        case 0x16ebf0u: goto label_16ebf0;
        case 0x16ebf4u: goto label_16ebf4;
        case 0x16ebf8u: goto label_16ebf8;
        case 0x16ebfcu: goto label_16ebfc;
        case 0x16ec00u: goto label_16ec00;
        case 0x16ec04u: goto label_16ec04;
        default: break;
    }

    ctx->pc = 0x16e970u;

label_16e970:
    // 0x16e970: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x16e970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_16e974:
    // 0x16e974: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x16e974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_16e978:
    // 0x16e978: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x16e978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_16e97c:
    // 0x16e97c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x16e97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_16e980:
    // 0x16e980: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x16e980u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16e984:
    // 0x16e984: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x16e984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_16e988:
    // 0x16e988: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x16e988u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16e98c:
    // 0x16e98c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16e98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_16e990:
    // 0x16e990: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x16e990u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16e994:
    // 0x16e994: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16e994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_16e998:
    // 0x16e998: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x16e998u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16e99c:
    // 0x16e99c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x16e99cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_16e9a0:
    // 0x16e9a0: 0x10000049  b           . + 4 + (0x49 << 2)
label_16e9a4:
    if (ctx->pc == 0x16E9A4u) {
        ctx->pc = 0x16E9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E9A0u;
        // 0x16e9a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E9A8u;
        goto label_16e9a8;
    }
    ctx->pc = 0x16E9A0u;
    {
        const bool branch_taken_0x16e9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E9A0u;
        // 0x16e9a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e9a0) {
            ctx->pc = 0x16EAC8u;
            goto label_16eac8;
        }
    }
    ctx->pc = 0x16E9A8u;
label_16e9a8:
    // 0x16e9a8: 0x8e020210  lw          $v0, 0x210($s0)
    ctx->pc = 0x16e9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
label_16e9ac:
    // 0x16e9ac: 0x533021  addu        $a2, $v0, $s3
    ctx->pc = 0x16e9acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_16e9b0:
    // 0x16e9b0: 0x84c20082  lh          $v0, 0x82($a2)
    ctx->pc = 0x16e9b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 130)));
label_16e9b4:
    // 0x16e9b4: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
label_16e9b8:
    if (ctx->pc == 0x16E9B8u) {
        ctx->pc = 0x16E9BCu;
        goto label_16e9bc;
    }
    ctx->pc = 0x16E9B4u;
    {
        const bool branch_taken_0x16e9b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e9b4) {
            ctx->pc = 0x16EAC0u;
            goto label_16eac0;
        }
    }
    ctx->pc = 0x16E9BCu;
label_16e9bc:
    // 0x16e9bc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x16e9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16e9c0:
    // 0x16e9c0: 0xc68c01c0  lwc1        $f12, 0x1C0($s4)
    ctx->pc = 0x16e9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_16e9c4:
    // 0x16e9c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x16e9c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16e9c8:
    // 0x16e9c8: 0xc44d0050  lwc1        $f13, 0x50($v0)
    ctx->pc = 0x16e9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_16e9cc:
    // 0x16e9cc: 0xc054e78  jal         func_1539E0
label_16e9d0:
    if (ctx->pc == 0x16E9D0u) {
        ctx->pc = 0x16E9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E9CCu;
        // 0x16e9d0: 0x26850300  addiu       $a1, $s4, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E9D4u;
        goto label_16e9d4;
    }
    ctx->pc = 0x16E9CCu;
    SET_GPR_U32(ctx, 31, 0x16E9D4u);
    ctx->pc = 0x16E9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E9CCu;
    // 0x16e9d0: 0x26850300  addiu       $a1, $s4, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539E0u, 0x16E9CCu, 0x16E9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E9D4u;
label_16e9d4:
    // 0x16e9d4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x16e9d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16e9d8:
    // 0x16e9d8: 0x0  nop
    ctx->pc = 0x16e9d8u;
    // NOP
label_16e9dc:
    // 0x16e9dc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16e9dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16e9e0:
    // 0x16e9e0: 0x0  nop
    ctx->pc = 0x16e9e0u;
    // NOP
label_16e9e4:
    // 0x16e9e4: 0x45010036  bc1t        . + 4 + (0x36 << 2)
label_16e9e8:
    if (ctx->pc == 0x16E9E8u) {
        ctx->pc = 0x16E9ECu;
        goto label_16e9ec;
    }
    ctx->pc = 0x16E9E4u;
    {
        const bool branch_taken_0x16e9e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e9e4) {
            ctx->pc = 0x16EAC0u;
            goto label_16eac0;
        }
    }
    ctx->pc = 0x16E9ECu;
label_16e9ec:
    // 0x16e9ec: 0x8e020210  lw          $v0, 0x210($s0)
    ctx->pc = 0x16e9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
label_16e9f0:
    // 0x16e9f0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x16e9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_16e9f4:
    // 0x16e9f4: 0x84420080  lh          $v0, 0x80($v0)
    ctx->pc = 0x16e9f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
label_16e9f8:
    // 0x16e9f8: 0x440001e  bltz        $v0, . + 4 + (0x1E << 2)
label_16e9fc:
    if (ctx->pc == 0x16E9FCu) {
        ctx->pc = 0x16E9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E9F8u;
        // 0x16e9fc: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EA00u;
        goto label_16ea00;
    }
    ctx->pc = 0x16E9F8u;
    {
        const bool branch_taken_0x16e9f8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x16E9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E9F8u;
        // 0x16e9fc: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e9f8) {
            ctx->pc = 0x16EA74u;
            goto label_16ea74;
        }
    }
    ctx->pc = 0x16EA00u;
label_16ea00:
    // 0x16ea00: 0x8f848608  lw          $a0, -0x79F8($gp)
    ctx->pc = 0x16ea00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936072)));
label_16ea04:
    // 0x16ea04: 0x8f82860c  lw          $v0, -0x79F4($gp)
    ctx->pc = 0x16ea04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936076)));
label_16ea08:
    // 0x16ea08: 0x8f8783a8  lw          $a3, -0x7C58($gp)
    ctx->pc = 0x16ea08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_16ea0c:
    // 0x16ea0c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x16ea0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_16ea10:
    // 0x16ea10: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x16ea10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_16ea14:
    // 0x16ea14: 0xe42821  addu        $a1, $a3, $a0
    ctx->pc = 0x16ea14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_16ea18:
    // 0x16ea18: 0xe22021  addu        $a0, $a3, $v0
    ctx->pc = 0x16ea18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_16ea1c:
    // 0x16ea1c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x16ea1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_16ea20:
    // 0x16ea20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16ea20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16ea24:
    // 0x16ea24: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x16ea24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16ea28:
    // 0x16ea28: 0xc046648  jal         func_119920
label_16ea2c:
    if (ctx->pc == 0x16EA2Cu) {
        ctx->pc = 0x16EA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EA28u;
        // 0x16ea2c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EA30u;
        goto label_16ea30;
    }
    ctx->pc = 0x16EA28u;
    SET_GPR_U32(ctx, 31, 0x16EA30u);
    ctx->pc = 0x16EA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EA28u;
    // 0x16ea2c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119920u, 0x16EA28u, 0x16EA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EA30u;
label_16ea30:
    // 0x16ea30: 0x8e020210  lw          $v0, 0x210($s0)
    ctx->pc = 0x16ea30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
label_16ea34:
    // 0x16ea34: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x16ea34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16ea38:
    // 0x16ea38: 0x8f848608  lw          $a0, -0x79F8($gp)
    ctx->pc = 0x16ea38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936072)));
label_16ea3c:
    // 0x16ea3c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x16ea3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16ea40:
    // 0x16ea40: 0x8f8383a8  lw          $v1, -0x7C58($gp)
    ctx->pc = 0x16ea40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_16ea44:
    // 0x16ea44: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x16ea44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_16ea48:
    // 0x16ea48: 0x84450080  lh          $a1, 0x80($v0)
    ctx->pc = 0x16ea48u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
label_16ea4c:
    // 0x16ea4c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x16ea4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_16ea50:
    // 0x16ea50: 0xc046704  jal         func_119C10
label_16ea54:
    if (ctx->pc == 0x16EA54u) {
        ctx->pc = 0x16EA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EA50u;
        // 0x16ea54: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EA58u;
        goto label_16ea58;
    }
    ctx->pc = 0x16EA50u;
    SET_GPR_U32(ctx, 31, 0x16EA58u);
    ctx->pc = 0x16EA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EA50u;
    // 0x16ea54: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119C10u, 0x16EA50u, 0x16EA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EA58u;
label_16ea58:
    // 0x16ea58: 0x8e020210  lw          $v0, 0x210($s0)
    ctx->pc = 0x16ea58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
label_16ea5c:
    // 0x16ea5c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16ea5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16ea60:
    // 0x16ea60: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x16ea60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_16ea64:
    // 0x16ea64: 0xa4400082  sh          $zero, 0x82($v0)
    ctx->pc = 0x16ea64u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 130), (uint16_t)GPR_U32(ctx, 0));
label_16ea68:
    // 0x16ea68: 0x8e020210  lw          $v0, 0x210($s0)
    ctx->pc = 0x16ea68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
label_16ea6c:
    // 0x16ea6c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x16ea6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_16ea70:
    // 0x16ea70: 0xa4430080  sh          $v1, 0x80($v0)
    ctx->pc = 0x16ea70u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 128), (uint16_t)GPR_U32(ctx, 3));
label_16ea74:
    // 0x16ea74: 0x0  nop
    ctx->pc = 0x16ea74u;
    // NOP
label_16ea78:
    // 0x16ea78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16ea78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16ea7c:
    // 0x16ea7c: 0xc042118  jal         func_108460
label_16ea80:
    if (ctx->pc == 0x16EA80u) {
        ctx->pc = 0x16EA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EA7Cu;
        // 0x16ea80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EA84u;
        goto label_16ea84;
    }
    ctx->pc = 0x16EA7Cu;
    SET_GPR_U32(ctx, 31, 0x16EA84u);
    ctx->pc = 0x16EA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EA7Cu;
    // 0x16ea80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x16EA7Cu, 0x16EA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EA84u;
label_16ea84:
    // 0x16ea84: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
label_16ea88:
    if (ctx->pc == 0x16EA88u) {
        ctx->pc = 0x16EA8Cu;
        goto label_16ea8c;
    }
    ctx->pc = 0x16EA84u;
    {
        const bool branch_taken_0x16ea84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ea84) {
            ctx->pc = 0x16EAB0u;
            goto label_16eab0;
        }
    }
    ctx->pc = 0x16EA8Cu;
label_16ea8c:
    // 0x16ea8c: 0x8e0201fc  lw          $v0, 0x1FC($s0)
    ctx->pc = 0x16ea8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 508)));
label_16ea90:
    // 0x16ea90: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16ea90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_16ea94:
    // 0x16ea94: 0xae0201fc  sw          $v0, 0x1FC($s0)
    ctx->pc = 0x16ea94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 508), GPR_U32(ctx, 2));
label_16ea98:
    // 0x16ea98: 0x860201fa  lh          $v0, 0x1FA($s0)
    ctx->pc = 0x16ea98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 506)));
label_16ea9c:
    // 0x16ea9c: 0x28410064  slti        $at, $v0, 0x64
    ctx->pc = 0x16ea9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)100) ? 1 : 0);
label_16eaa0:
    // 0x16eaa0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_16eaa4:
    if (ctx->pc == 0x16EAA4u) {
        ctx->pc = 0x16EAA8u;
        goto label_16eaa8;
    }
    ctx->pc = 0x16EAA0u;
    {
        const bool branch_taken_0x16eaa0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16eaa0) {
            ctx->pc = 0x16EAB0u;
            goto label_16eab0;
        }
    }
    ctx->pc = 0x16EAA8u;
label_16eaa8:
    // 0x16eaa8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16eaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_16eaac:
    // 0x16eaac: 0xa60201fa  sh          $v0, 0x1FA($s0)
    ctx->pc = 0x16eaacu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 506), (uint16_t)GPR_U32(ctx, 2));
label_16eab0:
    // 0x16eab0: 0x86020216  lh          $v0, 0x216($s0)
    ctx->pc = 0x16eab0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 534)));
label_16eab4:
    // 0x16eab4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x16eab4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_16eab8:
    // 0x16eab8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16eab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_16eabc:
    // 0x16eabc: 0xa6020216  sh          $v0, 0x216($s0)
    ctx->pc = 0x16eabcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 534), (uint16_t)GPR_U32(ctx, 2));
label_16eac0:
    // 0x16eac0: 0x26730090  addiu       $s3, $s3, 0x90
    ctx->pc = 0x16eac0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_16eac4:
    // 0x16eac4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x16eac4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_16eac8:
    // 0x16eac8: 0x86020214  lh          $v0, 0x214($s0)
    ctx->pc = 0x16eac8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 532)));
label_16eacc:
    // 0x16eacc: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x16eaccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_16ead0:
    // 0x16ead0: 0x1440ffb5  bnez        $v0, . + 4 + (-0x4B << 2)
label_16ead4:
    if (ctx->pc == 0x16EAD4u) {
        ctx->pc = 0x16EAD8u;
        goto label_16ead8;
    }
    ctx->pc = 0x16EAD0u;
    {
        const bool branch_taken_0x16ead0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ead0) {
            ctx->pc = 0x16E9A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16e9a8;
        }
    }
    ctx->pc = 0x16EAD8u;
label_16ead8:
    // 0x16ead8: 0x12200042  beqz        $s1, . + 4 + (0x42 << 2)
label_16eadc:
    if (ctx->pc == 0x16EADCu) {
        ctx->pc = 0x16EADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EAD8u;
        // 0x16eadc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EAE0u;
        goto label_16eae0;
    }
    ctx->pc = 0x16EAD8u;
    {
        const bool branch_taken_0x16ead8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EAD8u;
        // 0x16eadc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ead8) {
            ctx->pc = 0x16EBE4u;
            goto label_16ebe4;
        }
    }
    ctx->pc = 0x16EAE0u;
label_16eae0:
    // 0x16eae0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x16eae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16eae4:
    // 0x16eae4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16eae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16eae8:
    // 0x16eae8: 0x80830022  lb          $v1, 0x22($a0)
    ctx->pc = 0x16eae8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 34)));
label_16eaec:
    // 0x16eaec: 0x1062003c  beq         $v1, $v0, . + 4 + (0x3C << 2)
label_16eaf0:
    if (ctx->pc == 0x16EAF0u) {
        ctx->pc = 0x16EAF4u;
        goto label_16eaf4;
    }
    ctx->pc = 0x16EAECu;
    {
        const bool branch_taken_0x16eaec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x16eaec) {
            ctx->pc = 0x16EBE0u;
            goto label_16ebe0;
        }
    }
    ctx->pc = 0x16EAF4u;
label_16eaf4:
    // 0x16eaf4: 0x86030216  lh          $v1, 0x216($s0)
    ctx->pc = 0x16eaf4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 534)));
label_16eaf8:
    // 0x16eaf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16eaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16eafc:
    // 0x16eafc: 0x14620038  bne         $v1, $v0, . + 4 + (0x38 << 2)
label_16eb00:
    if (ctx->pc == 0x16EB00u) {
        ctx->pc = 0x16EB04u;
        goto label_16eb04;
    }
    ctx->pc = 0x16EAFCu;
    {
        const bool branch_taken_0x16eafc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16eafc) {
            ctx->pc = 0x16EBE0u;
            goto label_16ebe0;
        }
    }
    ctx->pc = 0x16EB04u;
label_16eb04:
    // 0x16eb04: 0x80820024  lb          $v0, 0x24($a0)
    ctx->pc = 0x16eb04u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 36)));
label_16eb08:
    // 0x16eb08: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_16eb0c:
    if (ctx->pc == 0x16EB0Cu) {
        ctx->pc = 0x16EB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EB08u;
        // 0x16eb0c: 0x241200c0  addiu       $s2, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EB10u;
        goto label_16eb10;
    }
    ctx->pc = 0x16EB08u;
    {
        const bool branch_taken_0x16eb08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EB08u;
        // 0x16eb0c: 0x241200c0  addiu       $s2, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eb08) {
            ctx->pc = 0x16EB18u;
            goto label_16eb18;
        }
    }
    ctx->pc = 0x16EB10u;
label_16eb10:
    // 0x16eb10: 0x90820024  lbu         $v0, 0x24($a0)
    ctx->pc = 0x16eb10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 36)));
label_16eb14:
    // 0x16eb14: 0x290c0  sll         $s2, $v0, 3
    ctx->pc = 0x16eb14u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_16eb18:
    // 0x16eb18: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x16eb18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16eb1c:
    // 0x16eb1c: 0x1000002c  b           . + 4 + (0x2C << 2)
label_16eb20:
    if (ctx->pc == 0x16EB20u) {
        ctx->pc = 0x16EB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EB1Cu;
        // 0x16eb20: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EB24u;
        goto label_16eb24;
    }
    ctx->pc = 0x16EB1Cu;
    {
        const bool branch_taken_0x16eb1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EB1Cu;
        // 0x16eb20: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eb1c) {
            ctx->pc = 0x16EBD0u;
            goto label_16ebd0;
        }
    }
    ctx->pc = 0x16EB24u;
label_16eb24:
    // 0x16eb24: 0x8e020210  lw          $v0, 0x210($s0)
    ctx->pc = 0x16eb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
label_16eb28:
    // 0x16eb28: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x16eb28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_16eb2c:
    // 0x16eb2c: 0x84420080  lh          $v0, 0x80($v0)
    ctx->pc = 0x16eb2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
label_16eb30:
    // 0x16eb30: 0x4400024  bltz        $v0, . + 4 + (0x24 << 2)
label_16eb34:
    if (ctx->pc == 0x16EB34u) {
        ctx->pc = 0x16EB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EB30u;
        // 0x16eb34: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EB38u;
        goto label_16eb38;
    }
    ctx->pc = 0x16EB30u;
    {
        const bool branch_taken_0x16eb30 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x16EB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EB30u;
        // 0x16eb34: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eb30) {
            ctx->pc = 0x16EBC4u;
            goto label_16ebc4;
        }
    }
    ctx->pc = 0x16EB38u;
label_16eb38:
    // 0x16eb38: 0x8f848608  lw          $a0, -0x79F8($gp)
    ctx->pc = 0x16eb38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936072)));
label_16eb3c:
    // 0x16eb3c: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x16eb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_16eb40:
    // 0x16eb40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16eb40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16eb44:
    // 0x16eb44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16eb44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16eb48:
    // 0x16eb48: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x16eb48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_16eb4c:
    // 0x16eb4c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x16eb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_16eb50:
    // 0x16eb50: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x16eb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16eb54:
    // 0x16eb54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16eb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16eb58:
    // 0x16eb58: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x16eb58u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16eb5c:
    // 0x16eb5c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x16eb5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_16eb60:
    // 0x16eb60: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x16eb60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_16eb64:
    // 0x16eb64: 0x320f809  jalr        $t9
label_16eb68:
    if (ctx->pc == 0x16EB68u) {
        ctx->pc = 0x16EB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EB64u;
        // 0x16eb68: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EB6Cu;
        goto label_16eb6c;
    }
    ctx->pc = 0x16EB64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16EB6Cu);
        ctx->pc = 0x16EB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EB64u;
        // 0x16eb68: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16EB64u, 0x16EB6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16EB6Cu;
label_16eb6c:
    // 0x16eb6c: 0x12400015  beqz        $s2, . + 4 + (0x15 << 2)
label_16eb70:
    if (ctx->pc == 0x16EB70u) {
        ctx->pc = 0x16EB74u;
        goto label_16eb74;
    }
    ctx->pc = 0x16EB6Cu;
    {
        const bool branch_taken_0x16eb6c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x16eb6c) {
            ctx->pc = 0x16EBC4u;
            goto label_16ebc4;
        }
    }
    ctx->pc = 0x16EB74u;
label_16eb74:
    // 0x16eb74: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x16eb74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16eb78:
    // 0x16eb78: 0x80620024  lb          $v0, 0x24($v1)
    ctx->pc = 0x16eb78u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 36)));
label_16eb7c:
    // 0x16eb7c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_16eb80:
    if (ctx->pc == 0x16EB80u) {
        ctx->pc = 0x16EB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EB7Cu;
        // 0x16eb80: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EB84u;
        goto label_16eb84;
    }
    ctx->pc = 0x16EB7Cu;
    {
        const bool branch_taken_0x16eb7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EB7Cu;
        // 0x16eb80: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eb7c) {
            ctx->pc = 0x16EB8Cu;
            goto label_16eb8c;
        }
    }
    ctx->pc = 0x16EB84u;
label_16eb84:
    // 0x16eb84: 0x90620024  lbu         $v0, 0x24($v1)
    ctx->pc = 0x16eb84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 36)));
label_16eb88:
    // 0x16eb88: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x16eb88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_16eb8c:
    // 0x16eb8c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x16eb8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_16eb90:
    // 0x16eb90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16eb90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16eb94:
    // 0x16eb94: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16eb94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16eb98:
    // 0x16eb98: 0x8f390094  lw          $t9, 0x94($t9)
    ctx->pc = 0x16eb98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 148)));
label_16eb9c:
    // 0x16eb9c: 0x320f809  jalr        $t9
label_16eba0:
    if (ctx->pc == 0x16EBA0u) {
        ctx->pc = 0x16EBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EB9Cu;
        // 0x16eba0: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EBA4u;
        goto label_16eba4;
    }
    ctx->pc = 0x16EB9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16EBA4u);
        ctx->pc = 0x16EBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EB9Cu;
        // 0x16eba0: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16EB9Cu, 0x16EBA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16EBA4u;
label_16eba4:
    // 0x16eba4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x16eba4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16eba8:
    // 0x16eba8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16eba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16ebac:
    // 0x16ebac: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x16ebacu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_16ebb0:
    // 0x16ebb0: 0x46140303  div.s       $f12, $f0, $f20
    ctx->pc = 0x16ebb0u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
label_16ebb4:
    // 0x16ebb4: 0x0  nop
    ctx->pc = 0x16ebb4u;
    // NOP
label_16ebb8:
    // 0x16ebb8: 0x0  nop
    ctx->pc = 0x16ebb8u;
    // NOP
label_16ebbc:
    // 0x16ebbc: 0xc04c72c  jal         func_131CB0
label_16ebc0:
    if (ctx->pc == 0x16EBC0u) {
        ctx->pc = 0x16EBC4u;
        goto label_16ebc4;
    }
    ctx->pc = 0x16EBBCu;
    SET_GPR_U32(ctx, 31, 0x16EBC4u);
    ctx->pc = 0x131CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131CB0u, 0x16EBBCu, 0x16EBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EBC4u;
label_16ebc4:
    // 0x16ebc4: 0x0  nop
    ctx->pc = 0x16ebc4u;
    // NOP
label_16ebc8:
    // 0x16ebc8: 0x26940090  addiu       $s4, $s4, 0x90
    ctx->pc = 0x16ebc8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
label_16ebcc:
    // 0x16ebcc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x16ebccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_16ebd0:
    // 0x16ebd0: 0x86020214  lh          $v0, 0x214($s0)
    ctx->pc = 0x16ebd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 532)));
label_16ebd4:
    // 0x16ebd4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x16ebd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_16ebd8:
    // 0x16ebd8: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
label_16ebdc:
    if (ctx->pc == 0x16EBDCu) {
        ctx->pc = 0x16EBE0u;
        goto label_16ebe0;
    }
    ctx->pc = 0x16EBD8u;
    {
        const bool branch_taken_0x16ebd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ebd8) {
            ctx->pc = 0x16EB24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16eb24;
        }
    }
    ctx->pc = 0x16EBE0u;
label_16ebe0:
    // 0x16ebe0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16ebe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16ebe4:
    // 0x16ebe4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x16ebe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_16ebe8:
    // 0x16ebe8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x16ebe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_16ebec:
    // 0x16ebec: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x16ebecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_16ebf0:
    // 0x16ebf0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x16ebf0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_16ebf4:
    // 0x16ebf4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x16ebf4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16ebf8:
    // 0x16ebf8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16ebf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16ebfc:
    // 0x16ebfc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16ebfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16ec00:
    // 0x16ec00: 0x3e00008  jr          $ra
label_16ec04:
    if (ctx->pc == 0x16EC04u) {
        ctx->pc = 0x16EC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EC00u;
        // 0x16ec04: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EC08u;
        goto label_fallthrough_0x16ec00;
    }
    ctx->pc = 0x16EC00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16EC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EC00u;
        // 0x16ec04: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16EC00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x16ec00:
    ctx->pc = 0x16EC08u;
}
