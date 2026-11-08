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

// Function: FUN_0018beb0
// Address: 0x18beb0 - 0x18c0e8
void FUN_0018beb0_0x18beb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018beb0_0x18beb0");
#endif

    switch (ctx->pc) {
        case 0x18beb0u: goto label_18beb0;
        case 0x18beb4u: goto label_18beb4;
        case 0x18beb8u: goto label_18beb8;
        case 0x18bebcu: goto label_18bebc;
        case 0x18bec0u: goto label_18bec0;
        case 0x18bec4u: goto label_18bec4;
        case 0x18bec8u: goto label_18bec8;
        case 0x18beccu: goto label_18becc;
        case 0x18bed0u: goto label_18bed0;
        case 0x18bed4u: goto label_18bed4;
        case 0x18bed8u: goto label_18bed8;
        case 0x18bedcu: goto label_18bedc;
        case 0x18bee0u: goto label_18bee0;
        case 0x18bee4u: goto label_18bee4;
        case 0x18bee8u: goto label_18bee8;
        case 0x18beecu: goto label_18beec;
        case 0x18bef0u: goto label_18bef0;
        case 0x18bef4u: goto label_18bef4;
        case 0x18bef8u: goto label_18bef8;
        case 0x18befcu: goto label_18befc;
        case 0x18bf00u: goto label_18bf00;
        case 0x18bf04u: goto label_18bf04;
        case 0x18bf08u: goto label_18bf08;
        case 0x18bf0cu: goto label_18bf0c;
        case 0x18bf10u: goto label_18bf10;
        case 0x18bf14u: goto label_18bf14;
        case 0x18bf18u: goto label_18bf18;
        case 0x18bf1cu: goto label_18bf1c;
        case 0x18bf20u: goto label_18bf20;
        case 0x18bf24u: goto label_18bf24;
        case 0x18bf28u: goto label_18bf28;
        case 0x18bf2cu: goto label_18bf2c;
        case 0x18bf30u: goto label_18bf30;
        case 0x18bf34u: goto label_18bf34;
        case 0x18bf38u: goto label_18bf38;
        case 0x18bf3cu: goto label_18bf3c;
        case 0x18bf40u: goto label_18bf40;
        case 0x18bf44u: goto label_18bf44;
        case 0x18bf48u: goto label_18bf48;
        case 0x18bf4cu: goto label_18bf4c;
        case 0x18bf50u: goto label_18bf50;
        case 0x18bf54u: goto label_18bf54;
        case 0x18bf58u: goto label_18bf58;
        case 0x18bf5cu: goto label_18bf5c;
        case 0x18bf60u: goto label_18bf60;
        case 0x18bf64u: goto label_18bf64;
        case 0x18bf68u: goto label_18bf68;
        case 0x18bf6cu: goto label_18bf6c;
        case 0x18bf70u: goto label_18bf70;
        case 0x18bf74u: goto label_18bf74;
        case 0x18bf78u: goto label_18bf78;
        case 0x18bf7cu: goto label_18bf7c;
        case 0x18bf80u: goto label_18bf80;
        case 0x18bf84u: goto label_18bf84;
        case 0x18bf88u: goto label_18bf88;
        case 0x18bf8cu: goto label_18bf8c;
        case 0x18bf90u: goto label_18bf90;
        case 0x18bf94u: goto label_18bf94;
        case 0x18bf98u: goto label_18bf98;
        case 0x18bf9cu: goto label_18bf9c;
        case 0x18bfa0u: goto label_18bfa0;
        case 0x18bfa4u: goto label_18bfa4;
        case 0x18bfa8u: goto label_18bfa8;
        case 0x18bfacu: goto label_18bfac;
        case 0x18bfb0u: goto label_18bfb0;
        case 0x18bfb4u: goto label_18bfb4;
        case 0x18bfb8u: goto label_18bfb8;
        case 0x18bfbcu: goto label_18bfbc;
        case 0x18bfc0u: goto label_18bfc0;
        case 0x18bfc4u: goto label_18bfc4;
        case 0x18bfc8u: goto label_18bfc8;
        case 0x18bfccu: goto label_18bfcc;
        case 0x18bfd0u: goto label_18bfd0;
        case 0x18bfd4u: goto label_18bfd4;
        case 0x18bfd8u: goto label_18bfd8;
        case 0x18bfdcu: goto label_18bfdc;
        case 0x18bfe0u: goto label_18bfe0;
        case 0x18bfe4u: goto label_18bfe4;
        case 0x18bfe8u: goto label_18bfe8;
        case 0x18bfecu: goto label_18bfec;
        case 0x18bff0u: goto label_18bff0;
        case 0x18bff4u: goto label_18bff4;
        case 0x18bff8u: goto label_18bff8;
        case 0x18bffcu: goto label_18bffc;
        case 0x18c000u: goto label_18c000;
        case 0x18c004u: goto label_18c004;
        case 0x18c008u: goto label_18c008;
        case 0x18c00cu: goto label_18c00c;
        case 0x18c010u: goto label_18c010;
        case 0x18c014u: goto label_18c014;
        case 0x18c018u: goto label_18c018;
        case 0x18c01cu: goto label_18c01c;
        case 0x18c020u: goto label_18c020;
        case 0x18c024u: goto label_18c024;
        case 0x18c028u: goto label_18c028;
        case 0x18c02cu: goto label_18c02c;
        case 0x18c030u: goto label_18c030;
        case 0x18c034u: goto label_18c034;
        case 0x18c038u: goto label_18c038;
        case 0x18c03cu: goto label_18c03c;
        case 0x18c040u: goto label_18c040;
        case 0x18c044u: goto label_18c044;
        case 0x18c048u: goto label_18c048;
        case 0x18c04cu: goto label_18c04c;
        case 0x18c050u: goto label_18c050;
        case 0x18c054u: goto label_18c054;
        case 0x18c058u: goto label_18c058;
        case 0x18c05cu: goto label_18c05c;
        case 0x18c060u: goto label_18c060;
        case 0x18c064u: goto label_18c064;
        case 0x18c068u: goto label_18c068;
        case 0x18c06cu: goto label_18c06c;
        case 0x18c070u: goto label_18c070;
        case 0x18c074u: goto label_18c074;
        case 0x18c078u: goto label_18c078;
        case 0x18c07cu: goto label_18c07c;
        case 0x18c080u: goto label_18c080;
        case 0x18c084u: goto label_18c084;
        case 0x18c088u: goto label_18c088;
        case 0x18c08cu: goto label_18c08c;
        case 0x18c090u: goto label_18c090;
        case 0x18c094u: goto label_18c094;
        case 0x18c098u: goto label_18c098;
        case 0x18c09cu: goto label_18c09c;
        case 0x18c0a0u: goto label_18c0a0;
        case 0x18c0a4u: goto label_18c0a4;
        case 0x18c0a8u: goto label_18c0a8;
        case 0x18c0acu: goto label_18c0ac;
        case 0x18c0b0u: goto label_18c0b0;
        case 0x18c0b4u: goto label_18c0b4;
        case 0x18c0b8u: goto label_18c0b8;
        case 0x18c0bcu: goto label_18c0bc;
        case 0x18c0c0u: goto label_18c0c0;
        case 0x18c0c4u: goto label_18c0c4;
        case 0x18c0c8u: goto label_18c0c8;
        case 0x18c0ccu: goto label_18c0cc;
        case 0x18c0d0u: goto label_18c0d0;
        case 0x18c0d4u: goto label_18c0d4;
        case 0x18c0d8u: goto label_18c0d8;
        case 0x18c0dcu: goto label_18c0dc;
        case 0x18c0e0u: goto label_18c0e0;
        case 0x18c0e4u: goto label_18c0e4;
        default: break;
    }

    ctx->pc = 0x18beb0u;

label_18beb0:
    // 0x18beb0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x18beb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_18beb4:
    // 0x18beb4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x18beb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_18beb8:
    // 0x18beb8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18beb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_18bebc:
    // 0x18bebc: 0x24a5fce0  addiu       $a1, $a1, -0x320
    ctx->pc = 0x18bebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
label_18bec0:
    // 0x18bec0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18bec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_18bec4:
    // 0x18bec4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18bec4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18bec8:
    // 0x18bec8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18bec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_18becc:
    // 0x18becc: 0xc05f878  jal         func_17E1E0
label_18bed0:
    if (ctx->pc == 0x18BED0u) {
        ctx->pc = 0x18BED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BECCu;
        // 0x18bed0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BED4u;
        goto label_18bed4;
    }
    ctx->pc = 0x18BECCu;
    SET_GPR_U32(ctx, 31, 0x18BED4u);
    ctx->pc = 0x18BED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BECCu;
    // 0x18bed0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E1E0u, 0x18BECCu, 0x18BED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BED4u;
label_18bed4:
    // 0x18bed4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18bed4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18bed8:
    // 0x18bed8: 0xc07d3ac  jal         func_1F4EB0
label_18bedc:
    if (ctx->pc == 0x18BEDCu) {
        ctx->pc = 0x18BEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BED8u;
        // 0x18bedc: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BEE0u;
        goto label_18bee0;
    }
    ctx->pc = 0x18BED8u;
    SET_GPR_U32(ctx, 31, 0x18BEE0u);
    ctx->pc = 0x18BEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BED8u;
    // 0x18bedc: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x18BED8u, 0x18BEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BEE0u;
label_18bee0:
    // 0x18bee0: 0xc62104e0  lwc1        $f1, 0x4E0($s1)
    ctx->pc = 0x18bee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18bee4:
    // 0x18bee4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x18bee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_18bee8:
    // 0x18bee8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18bee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18beec:
    // 0x18beec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18beecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18bef0:
    // 0x18bef0: 0x0  nop
    ctx->pc = 0x18bef0u;
    // NOP
label_18bef4:
    // 0x18bef4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18bef4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18bef8:
    // 0x18bef8: 0x0  nop
    ctx->pc = 0x18bef8u;
    // NOP
label_18befc:
    // 0x18befc: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_18bf00:
    if (ctx->pc == 0x18BF00u) {
        ctx->pc = 0x18BF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BEFCu;
        // 0x18bf00: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BF04u;
        goto label_18bf04;
    }
    ctx->pc = 0x18BEFCu;
    {
        const bool branch_taken_0x18befc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18BF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BEFCu;
        // 0x18bf00: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18befc) {
            ctx->pc = 0x18BF18u;
            goto label_18bf18;
        }
    }
    ctx->pc = 0x18BF04u;
label_18bf04:
    // 0x18bf04: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18bf04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18bf08:
    // 0x18bf08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18bf08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18bf0c:
    // 0x18bf0c: 0x0  nop
    ctx->pc = 0x18bf0cu;
    // NOP
label_18bf10:
    // 0x18bf10: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18bf10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_18bf14:
    // 0x18bf14: 0xe62004e0  swc1        $f0, 0x4E0($s1)
    ctx->pc = 0x18bf14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1248), bits); }
label_18bf18:
    // 0x18bf18: 0xc62104e0  lwc1        $f1, 0x4E0($s1)
    ctx->pc = 0x18bf18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18bf1c:
    // 0x18bf1c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x18bf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_18bf20:
    // 0x18bf20: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18bf20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18bf24:
    // 0x18bf24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18bf24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18bf28:
    // 0x18bf28: 0x0  nop
    ctx->pc = 0x18bf28u;
    // NOP
label_18bf2c:
    // 0x18bf2c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18bf2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18bf30:
    // 0x18bf30: 0x0  nop
    ctx->pc = 0x18bf30u;
    // NOP
label_18bf34:
    // 0x18bf34: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_18bf38:
    if (ctx->pc == 0x18BF38u) {
        ctx->pc = 0x18BF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BF34u;
        // 0x18bf38: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BF3Cu;
        goto label_18bf3c;
    }
    ctx->pc = 0x18BF34u;
    {
        const bool branch_taken_0x18bf34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18BF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BF34u;
        // 0x18bf38: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bf34) {
            ctx->pc = 0x18BF50u;
            goto label_18bf50;
        }
    }
    ctx->pc = 0x18BF3Cu;
label_18bf3c:
    // 0x18bf3c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18bf3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18bf40:
    // 0x18bf40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18bf40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18bf44:
    // 0x18bf44: 0x0  nop
    ctx->pc = 0x18bf44u;
    // NOP
label_18bf48:
    // 0x18bf48: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x18bf48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_18bf4c:
    // 0x18bf4c: 0xe62004e0  swc1        $f0, 0x4E0($s1)
    ctx->pc = 0x18bf4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1248), bits); }
label_18bf50:
    // 0x18bf50: 0xc62104e4  lwc1        $f1, 0x4E4($s1)
    ctx->pc = 0x18bf50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18bf54:
    // 0x18bf54: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x18bf54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_18bf58:
    // 0x18bf58: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18bf58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18bf5c:
    // 0x18bf5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18bf5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18bf60:
    // 0x18bf60: 0x0  nop
    ctx->pc = 0x18bf60u;
    // NOP
label_18bf64:
    // 0x18bf64: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18bf64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18bf68:
    // 0x18bf68: 0x0  nop
    ctx->pc = 0x18bf68u;
    // NOP
label_18bf6c:
    // 0x18bf6c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_18bf70:
    if (ctx->pc == 0x18BF70u) {
        ctx->pc = 0x18BF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BF6Cu;
        // 0x18bf70: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BF74u;
        goto label_18bf74;
    }
    ctx->pc = 0x18BF6Cu;
    {
        const bool branch_taken_0x18bf6c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18BF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BF6Cu;
        // 0x18bf70: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bf6c) {
            ctx->pc = 0x18BF88u;
            goto label_18bf88;
        }
    }
    ctx->pc = 0x18BF74u;
label_18bf74:
    // 0x18bf74: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18bf74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18bf78:
    // 0x18bf78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18bf78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18bf7c:
    // 0x18bf7c: 0x0  nop
    ctx->pc = 0x18bf7cu;
    // NOP
label_18bf80:
    // 0x18bf80: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18bf80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_18bf84:
    // 0x18bf84: 0xe62004e4  swc1        $f0, 0x4E4($s1)
    ctx->pc = 0x18bf84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1252), bits); }
label_18bf88:
    // 0x18bf88: 0xc62104e4  lwc1        $f1, 0x4E4($s1)
    ctx->pc = 0x18bf88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18bf8c:
    // 0x18bf8c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x18bf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_18bf90:
    // 0x18bf90: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18bf90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18bf94:
    // 0x18bf94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18bf94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18bf98:
    // 0x18bf98: 0x0  nop
    ctx->pc = 0x18bf98u;
    // NOP
label_18bf9c:
    // 0x18bf9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18bf9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18bfa0:
    // 0x18bfa0: 0x0  nop
    ctx->pc = 0x18bfa0u;
    // NOP
label_18bfa4:
    // 0x18bfa4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_18bfa8:
    if (ctx->pc == 0x18BFA8u) {
        ctx->pc = 0x18BFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BFA4u;
        // 0x18bfa8: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BFACu;
        goto label_18bfac;
    }
    ctx->pc = 0x18BFA4u;
    {
        const bool branch_taken_0x18bfa4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18BFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BFA4u;
        // 0x18bfa8: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bfa4) {
            ctx->pc = 0x18BFC0u;
            goto label_18bfc0;
        }
    }
    ctx->pc = 0x18BFACu;
label_18bfac:
    // 0x18bfac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18bfacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18bfb0:
    // 0x18bfb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18bfb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18bfb4:
    // 0x18bfb4: 0x0  nop
    ctx->pc = 0x18bfb4u;
    // NOP
label_18bfb8:
    // 0x18bfb8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x18bfb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_18bfbc:
    // 0x18bfbc: 0xe62004e4  swc1        $f0, 0x4E4($s1)
    ctx->pc = 0x18bfbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1252), bits); }
label_18bfc0:
    // 0x18bfc0: 0xc62104e8  lwc1        $f1, 0x4E8($s1)
    ctx->pc = 0x18bfc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18bfc4:
    // 0x18bfc4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x18bfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_18bfc8:
    // 0x18bfc8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18bfc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18bfcc:
    // 0x18bfcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18bfccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18bfd0:
    // 0x18bfd0: 0x0  nop
    ctx->pc = 0x18bfd0u;
    // NOP
label_18bfd4:
    // 0x18bfd4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18bfd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18bfd8:
    // 0x18bfd8: 0x0  nop
    ctx->pc = 0x18bfd8u;
    // NOP
label_18bfdc:
    // 0x18bfdc: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_18bfe0:
    if (ctx->pc == 0x18BFE0u) {
        ctx->pc = 0x18BFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BFDCu;
        // 0x18bfe0: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BFE4u;
        goto label_18bfe4;
    }
    ctx->pc = 0x18BFDCu;
    {
        const bool branch_taken_0x18bfdc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18BFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BFDCu;
        // 0x18bfe0: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bfdc) {
            ctx->pc = 0x18BFF8u;
            goto label_18bff8;
        }
    }
    ctx->pc = 0x18BFE4u;
label_18bfe4:
    // 0x18bfe4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18bfe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18bfe8:
    // 0x18bfe8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18bfe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18bfec:
    // 0x18bfec: 0x0  nop
    ctx->pc = 0x18bfecu;
    // NOP
label_18bff0:
    // 0x18bff0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18bff0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_18bff4:
    // 0x18bff4: 0xe62004e8  swc1        $f0, 0x4E8($s1)
    ctx->pc = 0x18bff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1256), bits); }
label_18bff8:
    // 0x18bff8: 0xc62104e8  lwc1        $f1, 0x4E8($s1)
    ctx->pc = 0x18bff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18bffc:
    // 0x18bffc: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x18bffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_18c000:
    // 0x18c000: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18c000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18c004:
    // 0x18c004: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18c008:
    // 0x18c008: 0x0  nop
    ctx->pc = 0x18c008u;
    // NOP
label_18c00c:
    // 0x18c00c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18c00cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18c010:
    // 0x18c010: 0x0  nop
    ctx->pc = 0x18c010u;
    // NOP
label_18c014:
    // 0x18c014: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_18c018:
    if (ctx->pc == 0x18C018u) {
        ctx->pc = 0x18C018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C014u;
        // 0x18c018: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C01Cu;
        goto label_18c01c;
    }
    ctx->pc = 0x18C014u;
    {
        const bool branch_taken_0x18c014 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18C018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C014u;
        // 0x18c018: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c014) {
            ctx->pc = 0x18C030u;
            goto label_18c030;
        }
    }
    ctx->pc = 0x18C01Cu;
label_18c01c:
    // 0x18c01c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18c01cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18c020:
    // 0x18c020: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18c024:
    // 0x18c024: 0x0  nop
    ctx->pc = 0x18c024u;
    // NOP
label_18c028:
    // 0x18c028: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x18c028u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_18c02c:
    // 0x18c02c: 0xe62004e8  swc1        $f0, 0x4E8($s1)
    ctx->pc = 0x18c02cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1256), bits); }
label_18c030:
    // 0x18c030: 0xc62c04e8  lwc1        $f12, 0x4E8($s1)
    ctx->pc = 0x18c030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18c034:
    // 0x18c034: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x18c034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18c038:
    // 0x18c038: 0xc07d3d4  jal         func_1F4F50
label_18c03c:
    if (ctx->pc == 0x18C03Cu) {
        ctx->pc = 0x18C03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C038u;
        // 0x18c03c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C040u;
        goto label_18c040;
    }
    ctx->pc = 0x18C038u;
    SET_GPR_U32(ctx, 31, 0x18C040u);
    ctx->pc = 0x18C03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C038u;
    // 0x18c03c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4F50u, 0x18C038u, 0x18C040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C040u;
label_18c040:
    // 0x18c040: 0xc62c04e0  lwc1        $f12, 0x4E0($s1)
    ctx->pc = 0x18c040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18c044:
    // 0x18c044: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x18c044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18c048:
    // 0x18c048: 0xc07d3fe  jal         func_1F4FF8
label_18c04c:
    if (ctx->pc == 0x18C04Cu) {
        ctx->pc = 0x18C04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C048u;
        // 0x18c04c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C050u;
        goto label_18c050;
    }
    ctx->pc = 0x18C048u;
    SET_GPR_U32(ctx, 31, 0x18C050u);
    ctx->pc = 0x18C04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C048u;
    // 0x18c04c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4FF8u, 0x18C048u, 0x18C050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C050u;
label_18c050:
    // 0x18c050: 0xc62c04e4  lwc1        $f12, 0x4E4($s1)
    ctx->pc = 0x18c050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18c054:
    // 0x18c054: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x18c054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18c058:
    // 0x18c058: 0xc07d428  jal         func_1F50A0
label_18c05c:
    if (ctx->pc == 0x18C05Cu) {
        ctx->pc = 0x18C05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C058u;
        // 0x18c05c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C060u;
        goto label_18c060;
    }
    ctx->pc = 0x18C058u;
    SET_GPR_U32(ctx, 31, 0x18C060u);
    ctx->pc = 0x18C05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C058u;
    // 0x18c05c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F50A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F50A0u, 0x18C058u, 0x18C060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C060u;
label_18c060:
    // 0x18c060: 0xc62004d0  lwc1        $f0, 0x4D0($s1)
    ctx->pc = 0x18c060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18c064:
    // 0x18c064: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18c064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18c068:
    // 0x18c068: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x18c068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_18c06c:
    // 0x18c06c: 0xc62004d4  lwc1        $f0, 0x4D4($s1)
    ctx->pc = 0x18c06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18c070:
    // 0x18c070: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x18c070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_18c074:
    // 0x18c074: 0xc62004d8  lwc1        $f0, 0x4D8($s1)
    ctx->pc = 0x18c074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18c078:
    // 0x18c078: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x18c078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_18c07c:
    // 0x18c07c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x18c07cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18c080:
    // 0x18c080: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x18c080u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_18c084:
    // 0x18c084: 0x320f809  jalr        $t9
label_18c088:
    if (ctx->pc == 0x18C088u) {
        ctx->pc = 0x18C088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C084u;
        // 0x18c088: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C08Cu;
        goto label_18c08c;
    }
    ctx->pc = 0x18C084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18C08Cu);
        ctx->pc = 0x18C088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C084u;
        // 0x18c088: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C084u, 0x18C08Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18C08Cu;
label_18c08c:
    // 0x18c08c: 0xc62005b4  lwc1        $f0, 0x5B4($s1)
    ctx->pc = 0x18c08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18c090:
    // 0x18c090: 0x8e2405b8  lw          $a0, 0x5B8($s1)
    ctx->pc = 0x18c090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
label_18c094:
    // 0x18c094: 0x262505c0  addiu       $a1, $s1, 0x5C0
    ctx->pc = 0x18c094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1472));
label_18c098:
    // 0x18c098: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18c098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18c09c:
    // 0x18c09c: 0xc05ff20  jal         func_17FC80
label_18c0a0:
    if (ctx->pc == 0x18C0A0u) {
        ctx->pc = 0x18C0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C09Cu;
        // 0x18c0a0: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C0A4u;
        goto label_18c0a4;
    }
    ctx->pc = 0x18C09Cu;
    SET_GPR_U32(ctx, 31, 0x18C0A4u);
    ctx->pc = 0x18C0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C09Cu;
    // 0x18c0a0: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FC80u, 0x18C09Cu, 0x18C0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C0A4u;
label_18c0a4:
    // 0x18c0a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18c0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18c0a8:
    // 0x18c0a8: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_18c0ac:
    if (ctx->pc == 0x18C0ACu) {
        ctx->pc = 0x18C0B0u;
        goto label_18c0b0;
    }
    ctx->pc = 0x18C0A8u;
    {
        const bool branch_taken_0x18c0a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x18c0a8) {
            ctx->pc = 0x18C0B4u;
            goto label_18c0b4;
        }
    }
    ctx->pc = 0x18C0B0u;
label_18c0b0:
    // 0x18c0b0: 0xae2005b4  sw          $zero, 0x5B4($s1)
    ctx->pc = 0x18c0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1460), GPR_U32(ctx, 0));
label_18c0b4:
    // 0x18c0b4: 0x8e2205b0  lw          $v0, 0x5B0($s1)
    ctx->pc = 0x18c0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1456)));
label_18c0b8:
    // 0x18c0b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_18c0bc:
    if (ctx->pc == 0x18C0BCu) {
        ctx->pc = 0x18C0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C0B8u;
        // 0x18c0bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C0C0u;
        goto label_18c0c0;
    }
    ctx->pc = 0x18C0B8u;
    {
        const bool branch_taken_0x18c0b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C0B8u;
        // 0x18c0bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c0b8) {
            ctx->pc = 0x18C0CCu;
            goto label_18c0cc;
        }
    }
    ctx->pc = 0x18C0C0u;
label_18c0c0:
    // 0x18c0c0: 0x8e2205b4  lw          $v0, 0x5B4($s1)
    ctx->pc = 0x18c0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1460)));
label_18c0c4:
    // 0x18c0c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18c0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_18c0c8:
    // 0x18c0c8: 0xae2205b4  sw          $v0, 0x5B4($s1)
    ctx->pc = 0x18c0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1460), GPR_U32(ctx, 2));
label_18c0cc:
    // 0x18c0cc: 0xc052f7c  jal         func_14BDF0
label_18c0d0:
    if (ctx->pc == 0x18C0D0u) {
        ctx->pc = 0x18C0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C0CCu;
        // 0x18c0d0: 0x262505c0  addiu       $a1, $s1, 0x5C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1472));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C0D4u;
        goto label_18c0d4;
    }
    ctx->pc = 0x18C0CCu;
    SET_GPR_U32(ctx, 31, 0x18C0D4u);
    ctx->pc = 0x18C0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C0CCu;
    // 0x18c0d0: 0x262505c0  addiu       $a1, $s1, 0x5C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BDF0u, 0x18C0CCu, 0x18C0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C0D4u;
label_18c0d4:
    // 0x18c0d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18c0d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_18c0d8:
    // 0x18c0d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18c0d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18c0dc:
    // 0x18c0dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18c0dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_18c0e0:
    // 0x18c0e0: 0x3e00008  jr          $ra
label_18c0e4:
    if (ctx->pc == 0x18C0E4u) {
        ctx->pc = 0x18C0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C0E0u;
        // 0x18c0e4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C0E8u;
        goto label_fallthrough_0x18c0e0;
    }
    ctx->pc = 0x18C0E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C0E0u;
        // 0x18c0e4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C0E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x18c0e0:
    ctx->pc = 0x18C0E8u;
}
