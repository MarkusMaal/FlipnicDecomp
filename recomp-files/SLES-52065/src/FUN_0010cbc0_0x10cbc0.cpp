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

// Function: FUN_0010cbc0
// Address: 0x10cbc0 - 0x10cf64
void FUN_0010cbc0_0x10cbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010cbc0_0x10cbc0");
#endif

    switch (ctx->pc) {
        case 0x10cbc0u: goto label_10cbc0;
        case 0x10cbc4u: goto label_10cbc4;
        case 0x10cbc8u: goto label_10cbc8;
        case 0x10cbccu: goto label_10cbcc;
        case 0x10cbd0u: goto label_10cbd0;
        case 0x10cbd4u: goto label_10cbd4;
        case 0x10cbd8u: goto label_10cbd8;
        case 0x10cbdcu: goto label_10cbdc;
        case 0x10cbe0u: goto label_10cbe0;
        case 0x10cbe4u: goto label_10cbe4;
        case 0x10cbe8u: goto label_10cbe8;
        case 0x10cbecu: goto label_10cbec;
        case 0x10cbf0u: goto label_10cbf0;
        case 0x10cbf4u: goto label_10cbf4;
        case 0x10cbf8u: goto label_10cbf8;
        case 0x10cbfcu: goto label_10cbfc;
        case 0x10cc00u: goto label_10cc00;
        case 0x10cc04u: goto label_10cc04;
        case 0x10cc08u: goto label_10cc08;
        case 0x10cc0cu: goto label_10cc0c;
        case 0x10cc10u: goto label_10cc10;
        case 0x10cc14u: goto label_10cc14;
        case 0x10cc18u: goto label_10cc18;
        case 0x10cc1cu: goto label_10cc1c;
        case 0x10cc20u: goto label_10cc20;
        case 0x10cc24u: goto label_10cc24;
        case 0x10cc28u: goto label_10cc28;
        case 0x10cc2cu: goto label_10cc2c;
        case 0x10cc30u: goto label_10cc30;
        case 0x10cc34u: goto label_10cc34;
        case 0x10cc38u: goto label_10cc38;
        case 0x10cc3cu: goto label_10cc3c;
        case 0x10cc40u: goto label_10cc40;
        case 0x10cc44u: goto label_10cc44;
        case 0x10cc48u: goto label_10cc48;
        case 0x10cc4cu: goto label_10cc4c;
        case 0x10cc50u: goto label_10cc50;
        case 0x10cc54u: goto label_10cc54;
        case 0x10cc58u: goto label_10cc58;
        case 0x10cc5cu: goto label_10cc5c;
        case 0x10cc60u: goto label_10cc60;
        case 0x10cc64u: goto label_10cc64;
        case 0x10cc68u: goto label_10cc68;
        case 0x10cc6cu: goto label_10cc6c;
        case 0x10cc70u: goto label_10cc70;
        case 0x10cc74u: goto label_10cc74;
        case 0x10cc78u: goto label_10cc78;
        case 0x10cc7cu: goto label_10cc7c;
        case 0x10cc80u: goto label_10cc80;
        case 0x10cc84u: goto label_10cc84;
        case 0x10cc88u: goto label_10cc88;
        case 0x10cc8cu: goto label_10cc8c;
        case 0x10cc90u: goto label_10cc90;
        case 0x10cc94u: goto label_10cc94;
        case 0x10cc98u: goto label_10cc98;
        case 0x10cc9cu: goto label_10cc9c;
        case 0x10cca0u: goto label_10cca0;
        case 0x10cca4u: goto label_10cca4;
        case 0x10cca8u: goto label_10cca8;
        case 0x10ccacu: goto label_10ccac;
        case 0x10ccb0u: goto label_10ccb0;
        case 0x10ccb4u: goto label_10ccb4;
        case 0x10ccb8u: goto label_10ccb8;
        case 0x10ccbcu: goto label_10ccbc;
        case 0x10ccc0u: goto label_10ccc0;
        case 0x10ccc4u: goto label_10ccc4;
        case 0x10ccc8u: goto label_10ccc8;
        case 0x10ccccu: goto label_10cccc;
        case 0x10ccd0u: goto label_10ccd0;
        case 0x10ccd4u: goto label_10ccd4;
        case 0x10ccd8u: goto label_10ccd8;
        case 0x10ccdcu: goto label_10ccdc;
        case 0x10cce0u: goto label_10cce0;
        case 0x10cce4u: goto label_10cce4;
        case 0x10cce8u: goto label_10cce8;
        case 0x10ccecu: goto label_10ccec;
        case 0x10ccf0u: goto label_10ccf0;
        case 0x10ccf4u: goto label_10ccf4;
        case 0x10ccf8u: goto label_10ccf8;
        case 0x10ccfcu: goto label_10ccfc;
        case 0x10cd00u: goto label_10cd00;
        case 0x10cd04u: goto label_10cd04;
        case 0x10cd08u: goto label_10cd08;
        case 0x10cd0cu: goto label_10cd0c;
        case 0x10cd10u: goto label_10cd10;
        case 0x10cd14u: goto label_10cd14;
        case 0x10cd18u: goto label_10cd18;
        case 0x10cd1cu: goto label_10cd1c;
        case 0x10cd20u: goto label_10cd20;
        case 0x10cd24u: goto label_10cd24;
        case 0x10cd28u: goto label_10cd28;
        case 0x10cd2cu: goto label_10cd2c;
        case 0x10cd30u: goto label_10cd30;
        case 0x10cd34u: goto label_10cd34;
        case 0x10cd38u: goto label_10cd38;
        case 0x10cd3cu: goto label_10cd3c;
        case 0x10cd40u: goto label_10cd40;
        case 0x10cd44u: goto label_10cd44;
        case 0x10cd48u: goto label_10cd48;
        case 0x10cd4cu: goto label_10cd4c;
        case 0x10cd50u: goto label_10cd50;
        case 0x10cd54u: goto label_10cd54;
        case 0x10cd58u: goto label_10cd58;
        case 0x10cd5cu: goto label_10cd5c;
        case 0x10cd60u: goto label_10cd60;
        case 0x10cd64u: goto label_10cd64;
        case 0x10cd68u: goto label_10cd68;
        case 0x10cd6cu: goto label_10cd6c;
        case 0x10cd70u: goto label_10cd70;
        case 0x10cd74u: goto label_10cd74;
        case 0x10cd78u: goto label_10cd78;
        case 0x10cd7cu: goto label_10cd7c;
        case 0x10cd80u: goto label_10cd80;
        case 0x10cd84u: goto label_10cd84;
        case 0x10cd88u: goto label_10cd88;
        case 0x10cd8cu: goto label_10cd8c;
        case 0x10cd90u: goto label_10cd90;
        case 0x10cd94u: goto label_10cd94;
        case 0x10cd98u: goto label_10cd98;
        case 0x10cd9cu: goto label_10cd9c;
        case 0x10cda0u: goto label_10cda0;
        case 0x10cda4u: goto label_10cda4;
        case 0x10cda8u: goto label_10cda8;
        case 0x10cdacu: goto label_10cdac;
        case 0x10cdb0u: goto label_10cdb0;
        case 0x10cdb4u: goto label_10cdb4;
        case 0x10cdb8u: goto label_10cdb8;
        case 0x10cdbcu: goto label_10cdbc;
        case 0x10cdc0u: goto label_10cdc0;
        case 0x10cdc4u: goto label_10cdc4;
        case 0x10cdc8u: goto label_10cdc8;
        case 0x10cdccu: goto label_10cdcc;
        case 0x10cdd0u: goto label_10cdd0;
        case 0x10cdd4u: goto label_10cdd4;
        case 0x10cdd8u: goto label_10cdd8;
        case 0x10cddcu: goto label_10cddc;
        case 0x10cde0u: goto label_10cde0;
        case 0x10cde4u: goto label_10cde4;
        case 0x10cde8u: goto label_10cde8;
        case 0x10cdecu: goto label_10cdec;
        case 0x10cdf0u: goto label_10cdf0;
        case 0x10cdf4u: goto label_10cdf4;
        case 0x10cdf8u: goto label_10cdf8;
        case 0x10cdfcu: goto label_10cdfc;
        case 0x10ce00u: goto label_10ce00;
        case 0x10ce04u: goto label_10ce04;
        case 0x10ce08u: goto label_10ce08;
        case 0x10ce0cu: goto label_10ce0c;
        case 0x10ce10u: goto label_10ce10;
        case 0x10ce14u: goto label_10ce14;
        case 0x10ce18u: goto label_10ce18;
        case 0x10ce1cu: goto label_10ce1c;
        case 0x10ce20u: goto label_10ce20;
        case 0x10ce24u: goto label_10ce24;
        case 0x10ce28u: goto label_10ce28;
        case 0x10ce2cu: goto label_10ce2c;
        case 0x10ce30u: goto label_10ce30;
        case 0x10ce34u: goto label_10ce34;
        case 0x10ce38u: goto label_10ce38;
        case 0x10ce3cu: goto label_10ce3c;
        case 0x10ce40u: goto label_10ce40;
        case 0x10ce44u: goto label_10ce44;
        case 0x10ce48u: goto label_10ce48;
        case 0x10ce4cu: goto label_10ce4c;
        case 0x10ce50u: goto label_10ce50;
        case 0x10ce54u: goto label_10ce54;
        case 0x10ce58u: goto label_10ce58;
        case 0x10ce5cu: goto label_10ce5c;
        case 0x10ce60u: goto label_10ce60;
        case 0x10ce64u: goto label_10ce64;
        case 0x10ce68u: goto label_10ce68;
        case 0x10ce6cu: goto label_10ce6c;
        case 0x10ce70u: goto label_10ce70;
        case 0x10ce74u: goto label_10ce74;
        case 0x10ce78u: goto label_10ce78;
        case 0x10ce7cu: goto label_10ce7c;
        case 0x10ce80u: goto label_10ce80;
        case 0x10ce84u: goto label_10ce84;
        case 0x10ce88u: goto label_10ce88;
        case 0x10ce8cu: goto label_10ce8c;
        case 0x10ce90u: goto label_10ce90;
        case 0x10ce94u: goto label_10ce94;
        case 0x10ce98u: goto label_10ce98;
        case 0x10ce9cu: goto label_10ce9c;
        case 0x10cea0u: goto label_10cea0;
        case 0x10cea4u: goto label_10cea4;
        case 0x10cea8u: goto label_10cea8;
        case 0x10ceacu: goto label_10ceac;
        case 0x10ceb0u: goto label_10ceb0;
        case 0x10ceb4u: goto label_10ceb4;
        case 0x10ceb8u: goto label_10ceb8;
        case 0x10cebcu: goto label_10cebc;
        case 0x10cec0u: goto label_10cec0;
        case 0x10cec4u: goto label_10cec4;
        case 0x10cec8u: goto label_10cec8;
        case 0x10ceccu: goto label_10cecc;
        case 0x10ced0u: goto label_10ced0;
        case 0x10ced4u: goto label_10ced4;
        case 0x10ced8u: goto label_10ced8;
        case 0x10cedcu: goto label_10cedc;
        case 0x10cee0u: goto label_10cee0;
        case 0x10cee4u: goto label_10cee4;
        case 0x10cee8u: goto label_10cee8;
        case 0x10ceecu: goto label_10ceec;
        case 0x10cef0u: goto label_10cef0;
        case 0x10cef4u: goto label_10cef4;
        case 0x10cef8u: goto label_10cef8;
        case 0x10cefcu: goto label_10cefc;
        case 0x10cf00u: goto label_10cf00;
        case 0x10cf04u: goto label_10cf04;
        case 0x10cf08u: goto label_10cf08;
        case 0x10cf0cu: goto label_10cf0c;
        case 0x10cf10u: goto label_10cf10;
        case 0x10cf14u: goto label_10cf14;
        case 0x10cf18u: goto label_10cf18;
        case 0x10cf1cu: goto label_10cf1c;
        case 0x10cf20u: goto label_10cf20;
        case 0x10cf24u: goto label_10cf24;
        case 0x10cf28u: goto label_10cf28;
        case 0x10cf2cu: goto label_10cf2c;
        case 0x10cf30u: goto label_10cf30;
        case 0x10cf34u: goto label_10cf34;
        case 0x10cf38u: goto label_10cf38;
        case 0x10cf3cu: goto label_10cf3c;
        case 0x10cf40u: goto label_10cf40;
        case 0x10cf44u: goto label_10cf44;
        case 0x10cf48u: goto label_10cf48;
        case 0x10cf4cu: goto label_10cf4c;
        case 0x10cf50u: goto label_10cf50;
        case 0x10cf54u: goto label_10cf54;
        case 0x10cf58u: goto label_10cf58;
        case 0x10cf5cu: goto label_10cf5c;
        case 0x10cf60u: goto label_10cf60;
        default: break;
    }

    ctx->pc = 0x10cbc0u;

label_10cbc0:
    // 0x10cbc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x10cbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_10cbc4:
    // 0x10cbc4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x10cbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_10cbc8:
    // 0x10cbc8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x10cbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_10cbcc:
    // 0x10cbcc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x10cbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_10cbd0:
    // 0x10cbd0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x10cbd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_10cbd4:
    // 0x10cbd4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x10cbd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_10cbd8:
    // 0x10cbd8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10cbd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10cbdc:
    // 0x10cbdc: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x10cbdcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_10cbe0:
    // 0x10cbe0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10cbe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10cbe4:
    // 0x10cbe4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x10cbe4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_10cbe8:
    // 0x10cbe8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x10cbe8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_10cbec:
    // 0x10cbec: 0xc042570  jal         func_1095C0
label_10cbf0:
    if (ctx->pc == 0x10CBF0u) {
        ctx->pc = 0x10CBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CBECu;
        // 0x10cbf0: 0xa08001d3  sb          $zero, 0x1D3($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 467), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10CBF4u;
        goto label_10cbf4;
    }
    ctx->pc = 0x10CBECu;
    SET_GPR_U32(ctx, 31, 0x10CBF4u);
    ctx->pc = 0x10CBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CBECu;
    // 0x10cbf0: 0xa08001d3  sb          $zero, 0x1D3($a0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 4), 467), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x10CBECu, 0x10CBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CBF4u;
label_10cbf4:
    // 0x10cbf4: 0x6410010  bgez        $s2, . + 4 + (0x10 << 2)
label_10cbf8:
    if (ctx->pc == 0x10CBF8u) {
        ctx->pc = 0x10CBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CBF4u;
        // 0x10cbf8: 0x8e302300  lw          $s0, 0x2300($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8960)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10CBFCu;
        goto label_10cbfc;
    }
    ctx->pc = 0x10CBF4u;
    {
        const bool branch_taken_0x10cbf4 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x10CBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CBF4u;
        // 0x10cbf8: 0x8e302300  lw          $s0, 0x2300($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8960)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cbf4) {
            ctx->pc = 0x10CC38u;
            goto label_10cc38;
        }
    }
    ctx->pc = 0x10CBFCu;
label_10cbfc:
    // 0x10cbfc: 0xc0802aa  jal         func_200AA8
label_10cc00:
    if (ctx->pc == 0x10CC00u) {
        ctx->pc = 0x10CC04u;
        goto label_10cc04;
    }
    ctx->pc = 0x10CBFCu;
    SET_GPR_U32(ctx, 31, 0x10CC04u);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x10CBFCu, 0x10CC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CC04u;
label_10cc04:
    // 0x10cc04: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x10cc04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_10cc08:
    // 0x10cc08: 0x0  nop
    ctx->pc = 0x10cc08u;
    // NOP
label_10cc0c:
    // 0x10cc0c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x10cc0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_10cc10:
    // 0x10cc10: 0x3c024110  lui         $v0, 0x4110
    ctx->pc = 0x10cc10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16656 << 16));
label_10cc14:
    // 0x10cc14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10cc14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10cc18:
    // 0x10cc18: 0x0  nop
    ctx->pc = 0x10cc18u;
    // NOP
label_10cc1c:
    // 0x10cc1c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x10cc1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_10cc20:
    // 0x10cc20: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x10cc20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_10cc24:
    // 0x10cc24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10cc24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10cc28:
    // 0x10cc28: 0x0  nop
    ctx->pc = 0x10cc28u;
    // NOP
label_10cc2c:
    // 0x10cc2c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x10cc2cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_10cc30:
    // 0x10cc30: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10cc30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_10cc34:
    // 0x10cc34: 0x44120000  mfc1        $s2, $f0
    ctx->pc = 0x10cc34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
label_10cc38:
    // 0x10cc38: 0xc6202304  lwc1        $f0, 0x2304($s1)
    ctx->pc = 0x10cc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10cc3c:
    // 0x10cc3c: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x10cc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
label_10cc40:
    // 0x10cc40: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x10cc40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_10cc44:
    // 0x10cc44: 0x0  nop
    ctx->pc = 0x10cc44u;
    // NOP
label_10cc48:
    // 0x10cc48: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x10cc48u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_10cc4c:
    // 0x10cc4c: 0x0  nop
    ctx->pc = 0x10cc4cu;
    // NOP
label_10cc50:
    // 0x10cc50: 0x0  nop
    ctx->pc = 0x10cc50u;
    // NOP
label_10cc54:
    // 0x10cc54: 0xc0802aa  jal         func_200AA8
label_10cc58:
    if (ctx->pc == 0x10CC58u) {
        ctx->pc = 0x10CC5Cu;
        goto label_10cc5c;
    }
    ctx->pc = 0x10CC54u;
    SET_GPR_U32(ctx, 31, 0x10CC5Cu);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x10CC54u, 0x10CC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CC5Cu;
label_10cc5c:
    // 0x10cc5c: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x10cc5cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_10cc60:
    // 0x10cc60: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x10cc60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_10cc64:
    // 0x10cc64: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x10cc64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_10cc68:
    // 0x10cc68: 0xc6202304  lwc1        $f0, 0x2304($s1)
    ctx->pc = 0x10cc68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10cc6c:
    // 0x10cc6c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x10cc6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_10cc70:
    // 0x10cc70: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x10cc70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
label_10cc74:
    // 0x10cc74: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x10cc74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_10cc78:
    // 0x10cc78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x10cc78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10cc7c:
    // 0x10cc7c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x10cc7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_10cc80:
    // 0x10cc80: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x10cc80u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_10cc84:
    // 0x10cc84: 0x46801860  cvt.s.w     $f1, $f3
    ctx->pc = 0x10cc84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_10cc88:
    // 0x10cc88: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x10cc88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_10cc8c:
    // 0x10cc8c: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x10cc8cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
label_10cc90:
    // 0x10cc90: 0x0  nop
    ctx->pc = 0x10cc90u;
    // NOP
label_10cc94:
    // 0x10cc94: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x10cc94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_10cc98:
    // 0x10cc98: 0xc0802aa  jal         func_200AA8
label_10cc9c:
    if (ctx->pc == 0x10CC9Cu) {
        ctx->pc = 0x10CC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CC98u;
        // 0x10cc9c: 0x46010540  add.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10CCA0u;
        goto label_10cca0;
    }
    ctx->pc = 0x10CC98u;
    SET_GPR_U32(ctx, 31, 0x10CCA0u);
    ctx->pc = 0x10CC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CC98u;
    // 0x10cc9c: 0x46010540  add.s       $f21, $f0, $f1 (Delay Slot)
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x10CC98u, 0x10CCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CCA0u;
label_10cca0:
    // 0x10cca0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10cca0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10cca4:
    // 0x10cca4: 0x0  nop
    ctx->pc = 0x10cca4u;
    // NOP
label_10cca8:
    // 0x10cca8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x10cca8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_10ccac:
    // 0x10ccac: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x10ccacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_10ccb0:
    // 0x10ccb0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x10ccb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_10ccb4:
    // 0x10ccb4: 0x0  nop
    ctx->pc = 0x10ccb4u;
    // NOP
label_10ccb8:
    // 0x10ccb8: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x10ccb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_10ccbc:
    // 0x10ccbc: 0x3c024e80  lui         $v0, 0x4E80
    ctx->pc = 0x10ccbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20096 << 16));
label_10ccc0:
    // 0x10ccc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10ccc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10ccc4:
    // 0x10ccc4: 0x0  nop
    ctx->pc = 0x10ccc4u;
    // NOP
label_10ccc8:
    // 0x10ccc8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x10ccc8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_10cccc:
    // 0x10cccc: 0x0  nop
    ctx->pc = 0x10ccccu;
    // NOP
label_10ccd0:
    // 0x10ccd0: 0x0  nop
    ctx->pc = 0x10ccd0u;
    // NOP
label_10ccd4:
    // 0x10ccd4: 0xc0802aa  jal         func_200AA8
label_10ccd8:
    if (ctx->pc == 0x10CCD8u) {
        ctx->pc = 0x10CCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CCD4u;
        // 0x10ccd8: 0x46020581  sub.s       $f22, $f0, $f2 (Delay Slot)
        ctx->f[22] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10CCDCu;
        goto label_10ccdc;
    }
    ctx->pc = 0x10CCD4u;
    SET_GPR_U32(ctx, 31, 0x10CCDCu);
    ctx->pc = 0x10CCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CCD4u;
    // 0x10ccd8: 0x46020581  sub.s       $f22, $f0, $f2 (Delay Slot)
    ctx->f[22] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x10CCD4u, 0x10CCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CCDCu;
label_10ccdc:
    // 0x10ccdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10ccdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10cce0:
    // 0x10cce0: 0x3c034e80  lui         $v1, 0x4E80
    ctx->pc = 0x10cce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20096 << 16));
label_10cce4:
    // 0x10cce4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x10cce4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_10cce8:
    // 0x10cce8: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x10cce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_10ccec:
    // 0x10ccec: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x10ccecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_10ccf0:
    // 0x10ccf0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x10ccf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10ccf4:
    // 0x10ccf4: 0x46011882  mul.s       $f2, $f3, $f1
    ctx->pc = 0x10ccf4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_10ccf8:
    // 0x10ccf8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x10ccf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_10ccfc:
    // 0x10ccfc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x10ccfcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_10cd00:
    // 0x10cd00: 0x0  nop
    ctx->pc = 0x10cd00u;
    // NOP
label_10cd04:
    // 0x10cd04: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x10cd04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_10cd08:
    // 0x10cd08: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x10cd08u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
label_10cd0c:
    // 0x10cd0c: 0x4600b000  add.s       $f0, $f22, $f0
    ctx->pc = 0x10cd0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_10cd10:
    // 0x10cd10: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x10cd10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_10cd14:
    // 0x10cd14: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x10cd14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10cd18:
    // 0x10cd18: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x10cd18u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_10cd1c:
    // 0x10cd1c: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x10cd1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_10cd20:
    // 0x10cd20: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x10cd20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10cd24:
    // 0x10cd24: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x10cd24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_10cd28:
    // 0x10cd28: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x10cd28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_10cd2c:
    // 0x10cd2c: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x10cd2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_10cd30:
    // 0x10cd30: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x10cd30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
label_10cd34:
    // 0x10cd34: 0x7a260010  lq          $a2, 0x10($s1)
    ctx->pc = 0x10cd34u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_10cd38:
    // 0x10cd38: 0x7e260060  sq          $a2, 0x60($s1)
    ctx->pc = 0x10cd38u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 96), GPR_VEC(ctx, 6));
label_10cd3c:
    // 0x10cd3c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x10cd3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10cd40:
    // 0x10cd40: 0x6410010  bgez        $s2, . + 4 + (0x10 << 2)
label_10cd44:
    if (ctx->pc == 0x10CD44u) {
        ctx->pc = 0x10CD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CD40u;
        // 0x10cd44: 0x8e302300  lw          $s0, 0x2300($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8960)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10CD48u;
        goto label_10cd48;
    }
    ctx->pc = 0x10CD40u;
    {
        const bool branch_taken_0x10cd40 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x10CD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CD40u;
        // 0x10cd44: 0x8e302300  lw          $s0, 0x2300($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8960)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cd40) {
            ctx->pc = 0x10CD84u;
            goto label_10cd84;
        }
    }
    ctx->pc = 0x10CD48u;
label_10cd48:
    // 0x10cd48: 0xc0802aa  jal         func_200AA8
label_10cd4c:
    if (ctx->pc == 0x10CD4Cu) {
        ctx->pc = 0x10CD50u;
        goto label_10cd50;
    }
    ctx->pc = 0x10CD48u;
    SET_GPR_U32(ctx, 31, 0x10CD50u);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x10CD48u, 0x10CD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CD50u;
label_10cd50:
    // 0x10cd50: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x10cd50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_10cd54:
    // 0x10cd54: 0x0  nop
    ctx->pc = 0x10cd54u;
    // NOP
label_10cd58:
    // 0x10cd58: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x10cd58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_10cd5c:
    // 0x10cd5c: 0x3c024110  lui         $v0, 0x4110
    ctx->pc = 0x10cd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16656 << 16));
label_10cd60:
    // 0x10cd60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10cd60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10cd64:
    // 0x10cd64: 0x0  nop
    ctx->pc = 0x10cd64u;
    // NOP
label_10cd68:
    // 0x10cd68: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x10cd68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_10cd6c:
    // 0x10cd6c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x10cd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_10cd70:
    // 0x10cd70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10cd70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10cd74:
    // 0x10cd74: 0x0  nop
    ctx->pc = 0x10cd74u;
    // NOP
label_10cd78:
    // 0x10cd78: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x10cd78u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_10cd7c:
    // 0x10cd7c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10cd7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_10cd80:
    // 0x10cd80: 0x44120000  mfc1        $s2, $f0
    ctx->pc = 0x10cd80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
label_10cd84:
    // 0x10cd84: 0xc6202304  lwc1        $f0, 0x2304($s1)
    ctx->pc = 0x10cd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10cd88:
    // 0x10cd88: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x10cd88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
label_10cd8c:
    // 0x10cd8c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x10cd8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_10cd90:
    // 0x10cd90: 0x0  nop
    ctx->pc = 0x10cd90u;
    // NOP
label_10cd94:
    // 0x10cd94: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x10cd94u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_10cd98:
    // 0x10cd98: 0x0  nop
    ctx->pc = 0x10cd98u;
    // NOP
label_10cd9c:
    // 0x10cd9c: 0x0  nop
    ctx->pc = 0x10cd9cu;
    // NOP
label_10cda0:
    // 0x10cda0: 0xc0802aa  jal         func_200AA8
label_10cda4:
    if (ctx->pc == 0x10CDA4u) {
        ctx->pc = 0x10CDA8u;
        goto label_10cda8;
    }
    ctx->pc = 0x10CDA0u;
    SET_GPR_U32(ctx, 31, 0x10CDA8u);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x10CDA0u, 0x10CDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CDA8u;
label_10cda8:
    // 0x10cda8: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x10cda8u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_10cdac:
    // 0x10cdac: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x10cdacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_10cdb0:
    // 0x10cdb0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x10cdb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_10cdb4:
    // 0x10cdb4: 0xc6202304  lwc1        $f0, 0x2304($s1)
    ctx->pc = 0x10cdb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10cdb8:
    // 0x10cdb8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x10cdb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_10cdbc:
    // 0x10cdbc: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x10cdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
label_10cdc0:
    // 0x10cdc0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x10cdc0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_10cdc4:
    // 0x10cdc4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x10cdc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10cdc8:
    // 0x10cdc8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x10cdc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_10cdcc:
    // 0x10cdcc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x10cdccu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_10cdd0:
    // 0x10cdd0: 0x46801860  cvt.s.w     $f1, $f3
    ctx->pc = 0x10cdd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_10cdd4:
    // 0x10cdd4: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x10cdd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_10cdd8:
    // 0x10cdd8: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x10cdd8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
label_10cddc:
    // 0x10cddc: 0x0  nop
    ctx->pc = 0x10cddcu;
    // NOP
label_10cde0:
    // 0x10cde0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x10cde0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_10cde4:
    // 0x10cde4: 0xc0802aa  jal         func_200AA8
label_10cde8:
    if (ctx->pc == 0x10CDE8u) {
        ctx->pc = 0x10CDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CDE4u;
        // 0x10cde8: 0x46010540  add.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10CDECu;
        goto label_10cdec;
    }
    ctx->pc = 0x10CDE4u;
    SET_GPR_U32(ctx, 31, 0x10CDECu);
    ctx->pc = 0x10CDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CDE4u;
    // 0x10cde8: 0x46010540  add.s       $f21, $f0, $f1 (Delay Slot)
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x10CDE4u, 0x10CDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CDECu;
label_10cdec:
    // 0x10cdec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10cdecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10cdf0:
    // 0x10cdf0: 0x0  nop
    ctx->pc = 0x10cdf0u;
    // NOP
label_10cdf4:
    // 0x10cdf4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x10cdf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_10cdf8:
    // 0x10cdf8: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x10cdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_10cdfc:
    // 0x10cdfc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x10cdfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_10ce00:
    // 0x10ce00: 0x0  nop
    ctx->pc = 0x10ce00u;
    // NOP
label_10ce04:
    // 0x10ce04: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x10ce04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_10ce08:
    // 0x10ce08: 0x3c024e80  lui         $v0, 0x4E80
    ctx->pc = 0x10ce08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20096 << 16));
label_10ce0c:
    // 0x10ce0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10ce0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10ce10:
    // 0x10ce10: 0x0  nop
    ctx->pc = 0x10ce10u;
    // NOP
label_10ce14:
    // 0x10ce14: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x10ce14u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_10ce18:
    // 0x10ce18: 0x0  nop
    ctx->pc = 0x10ce18u;
    // NOP
label_10ce1c:
    // 0x10ce1c: 0x0  nop
    ctx->pc = 0x10ce1cu;
    // NOP
label_10ce20:
    // 0x10ce20: 0xc0802aa  jal         func_200AA8
label_10ce24:
    if (ctx->pc == 0x10CE24u) {
        ctx->pc = 0x10CE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CE20u;
        // 0x10ce24: 0x46020581  sub.s       $f22, $f0, $f2 (Delay Slot)
        ctx->f[22] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10CE28u;
        goto label_10ce28;
    }
    ctx->pc = 0x10CE20u;
    SET_GPR_U32(ctx, 31, 0x10CE28u);
    ctx->pc = 0x10CE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CE20u;
    // 0x10ce24: 0x46020581  sub.s       $f22, $f0, $f2 (Delay Slot)
    ctx->f[22] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x10CE20u, 0x10CE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CE28u;
label_10ce28:
    // 0x10ce28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10ce28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10ce2c:
    // 0x10ce2c: 0x3c034e80  lui         $v1, 0x4E80
    ctx->pc = 0x10ce2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20096 << 16));
label_10ce30:
    // 0x10ce30: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x10ce30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_10ce34:
    // 0x10ce34: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x10ce34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_10ce38:
    // 0x10ce38: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x10ce38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_10ce3c:
    // 0x10ce3c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x10ce3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10ce40:
    // 0x10ce40: 0x46011882  mul.s       $f2, $f3, $f1
    ctx->pc = 0x10ce40u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_10ce44:
    // 0x10ce44: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x10ce44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_10ce48:
    // 0x10ce48: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x10ce48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_10ce4c:
    // 0x10ce4c: 0x0  nop
    ctx->pc = 0x10ce4cu;
    // NOP
label_10ce50:
    // 0x10ce50: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x10ce50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_10ce54:
    // 0x10ce54: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x10ce54u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
label_10ce58:
    // 0x10ce58: 0x4600b000  add.s       $f0, $f22, $f0
    ctx->pc = 0x10ce58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_10ce5c:
    // 0x10ce5c: 0xe6200230  swc1        $f0, 0x230($s1)
    ctx->pc = 0x10ce5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 560), bits); }
label_10ce60:
    // 0x10ce60: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x10ce60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10ce64:
    // 0x10ce64: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x10ce64u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_10ce68:
    // 0x10ce68: 0xe6200234  swc1        $f0, 0x234($s1)
    ctx->pc = 0x10ce68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 564), bits); }
label_10ce6c:
    // 0x10ce6c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x10ce6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10ce70:
    // 0x10ce70: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x10ce70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_10ce74:
    // 0x10ce74: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x10ce74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_10ce78:
    // 0x10ce78: 0xe6200238  swc1        $f0, 0x238($s1)
    ctx->pc = 0x10ce78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 568), bits); }
label_10ce7c:
    // 0x10ce7c: 0xc0802aa  jal         func_200AA8
label_10ce80:
    if (ctx->pc == 0x10CE80u) {
        ctx->pc = 0x10CE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CE7Cu;
        // 0x10ce80: 0xae22023c  sw          $v0, 0x23C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 572), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10CE84u;
        goto label_10ce84;
    }
    ctx->pc = 0x10CE7Cu;
    SET_GPR_U32(ctx, 31, 0x10CE84u);
    ctx->pc = 0x10CE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CE7Cu;
    // 0x10ce80: 0xae22023c  sw          $v0, 0x23C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 572), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x10CE7Cu, 0x10CE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CE84u;
label_10ce84:
    // 0x10ce84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x10ce84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_10ce88:
    // 0x10ce88: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x10ce88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
label_10ce8c:
    // 0x10ce8c: 0x26250230  addiu       $a1, $s1, 0x230
    ctx->pc = 0x10ce8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 560));
label_10ce90:
    // 0x10ce90: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x10ce90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_10ce94:
    // 0x10ce94: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x10ce94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_10ce98:
    // 0x10ce98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10ce98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10ce9c:
    // 0x10ce9c: 0x0  nop
    ctx->pc = 0x10ce9cu;
    // NOP
label_10cea0:
    // 0x10cea0: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x10cea0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_10cea4:
    // 0x10cea4: 0x3c023eae  lui         $v0, 0x3EAE
    ctx->pc = 0x10cea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16046 << 16));
label_10cea8:
    // 0x10cea8: 0x3443147b  ori         $v1, $v0, 0x147B
    ctx->pc = 0x10cea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5243);
label_10ceac:
    // 0x10ceac: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x10ceacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_10ceb0:
    // 0x10ceb0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x10ceb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_10ceb4:
    // 0x10ceb4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x10ceb4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10ceb8:
    // 0x10ceb8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x10ceb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_10cebc:
    // 0x10cebc: 0x0  nop
    ctx->pc = 0x10cebcu;
    // NOP
label_10cec0:
    // 0x10cec0: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x10cec0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
label_10cec4:
    // 0x10cec4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10cec4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10cec8:
    // 0x10cec8: 0x0  nop
    ctx->pc = 0x10cec8u;
    // NOP
label_10cecc:
    // 0x10cecc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x10ceccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_10ced0:
    // 0x10ced0: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x10ced0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_10ced4:
    // 0x10ced4: 0x7a260230  lq          $a2, 0x230($s1)
    ctx->pc = 0x10ced4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 560)));
label_10ced8:
    // 0x10ced8: 0x7e260230  sq          $a2, 0x230($s1)
    ctx->pc = 0x10ced8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 560), GPR_VEC(ctx, 6));
label_10cedc:
    // 0x10cedc: 0x26240220  addiu       $a0, $s1, 0x220
    ctx->pc = 0x10cedcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
label_10cee0:
    // 0x10cee0: 0x7a260060  lq          $a2, 0x60($s1)
    ctx->pc = 0x10cee0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 96)));
label_10cee4:
    // 0x10cee4: 0x7e260220  sq          $a2, 0x220($s1)
    ctx->pc = 0x10cee4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 544), GPR_VEC(ctx, 6));
label_10cee8:
    // 0x10cee8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x10cee8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10ceec:
    // 0x10ceec: 0xc6210234  lwc1        $f1, 0x234($s1)
    ctx->pc = 0x10ceecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10cef0:
    // 0x10cef0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x10cef0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_10cef4:
    // 0x10cef4: 0xc0433dc  jal         func_10CF70
label_10cef8:
    if (ctx->pc == 0x10CEF8u) {
        ctx->pc = 0x10CEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CEF4u;
        // 0x10cef8: 0xe6200234  swc1        $f0, 0x234($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 564), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10CEFCu;
        goto label_10cefc;
    }
    ctx->pc = 0x10CEF4u;
    SET_GPR_U32(ctx, 31, 0x10CEFCu);
    ctx->pc = 0x10CEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CEF4u;
    // 0x10cef8: 0xe6200234  swc1        $f0, 0x234($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 564), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CF70u, 0x10CEF4u, 0x10CEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CEFCu;
label_10cefc:
    // 0x10cefc: 0xe6200240  swc1        $f0, 0x240($s1)
    ctx->pc = 0x10cefcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 576), bits); }
label_10cf00:
    // 0x10cf00: 0xc7818020  lwc1        $f1, -0x7FE0($gp)
    ctx->pc = 0x10cf00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10cf04:
    // 0x10cf04: 0xc6200240  lwc1        $f0, 0x240($s1)
    ctx->pc = 0x10cf04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10cf08:
    // 0x10cf08: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x10cf08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_10cf0c:
    // 0x10cf0c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x10cf0cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_10cf10:
    // 0x10cf10: 0xe6200248  swc1        $f0, 0x248($s1)
    ctx->pc = 0x10cf10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 584), bits); }
label_10cf14:
    // 0x10cf14: 0xae200244  sw          $zero, 0x244($s1)
    ctx->pc = 0x10cf14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 580), GPR_U32(ctx, 0));
label_10cf18:
    // 0x10cf18: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x10cf18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_10cf1c:
    // 0x10cf1c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x10cf1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10cf20:
    // 0x10cf20: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x10cf20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_10cf24:
    // 0x10cf24: 0x320f809  jalr        $t9
label_10cf28:
    if (ctx->pc == 0x10CF28u) {
        ctx->pc = 0x10CF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CF24u;
        // 0x10cf28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10CF2Cu;
        goto label_10cf2c;
    }
    ctx->pc = 0x10CF24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10CF2Cu);
        ctx->pc = 0x10CF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CF24u;
        // 0x10cf28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CF24u, 0x10CF2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10CF2Cu;
label_10cf2c:
    // 0x10cf2c: 0xa220007a  sb          $zero, 0x7A($s1)
    ctx->pc = 0x10cf2cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 122), (uint8_t)GPR_U32(ctx, 0));
label_10cf30:
    // 0x10cf30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10cf30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10cf34:
    // 0x10cf34: 0xa2230078  sb          $v1, 0x78($s1)
    ctx->pc = 0x10cf34u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 120), (uint8_t)GPR_U32(ctx, 3));
label_10cf38:
    // 0x10cf38: 0xa623024e  sh          $v1, 0x24E($s1)
    ctx->pc = 0x10cf38u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 590), (uint16_t)GPR_U32(ctx, 3));
label_10cf3c:
    // 0x10cf3c: 0xa623024e  sh          $v1, 0x24E($s1)
    ctx->pc = 0x10cf3cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 590), (uint16_t)GPR_U32(ctx, 3));
label_10cf40:
    // 0x10cf40: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x10cf40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_10cf44:
    // 0x10cf44: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x10cf44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_10cf48:
    // 0x10cf48: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x10cf48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_10cf4c:
    // 0x10cf4c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x10cf4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_10cf50:
    // 0x10cf50: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x10cf50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10cf54:
    // 0x10cf54: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x10cf54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_10cf58:
    // 0x10cf58: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x10cf58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10cf5c:
    // 0x10cf5c: 0x3e00008  jr          $ra
label_10cf60:
    if (ctx->pc == 0x10CF60u) {
        ctx->pc = 0x10CF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CF5Cu;
        // 0x10cf60: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10CF64u;
        goto label_fallthrough_0x10cf5c;
    }
    ctx->pc = 0x10CF5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CF5Cu;
        // 0x10cf60: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CF5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10cf5c:
    ctx->pc = 0x10CF64u;
}
