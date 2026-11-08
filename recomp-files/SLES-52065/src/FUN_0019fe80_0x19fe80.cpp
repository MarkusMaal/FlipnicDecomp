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

// Function: FUN_0019fe80
// Address: 0x19fe80 - 0x1a02d0
void FUN_0019fe80_0x19fe80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019fe80_0x19fe80");
#endif

    switch (ctx->pc) {
        case 0x19fe80u: goto label_19fe80;
        case 0x19fe84u: goto label_19fe84;
        case 0x19fe88u: goto label_19fe88;
        case 0x19fe8cu: goto label_19fe8c;
        case 0x19fe90u: goto label_19fe90;
        case 0x19fe94u: goto label_19fe94;
        case 0x19fe98u: goto label_19fe98;
        case 0x19fe9cu: goto label_19fe9c;
        case 0x19fea0u: goto label_19fea0;
        case 0x19fea4u: goto label_19fea4;
        case 0x19fea8u: goto label_19fea8;
        case 0x19feacu: goto label_19feac;
        case 0x19feb0u: goto label_19feb0;
        case 0x19feb4u: goto label_19feb4;
        case 0x19feb8u: goto label_19feb8;
        case 0x19febcu: goto label_19febc;
        case 0x19fec0u: goto label_19fec0;
        case 0x19fec4u: goto label_19fec4;
        case 0x19fec8u: goto label_19fec8;
        case 0x19feccu: goto label_19fecc;
        case 0x19fed0u: goto label_19fed0;
        case 0x19fed4u: goto label_19fed4;
        case 0x19fed8u: goto label_19fed8;
        case 0x19fedcu: goto label_19fedc;
        case 0x19fee0u: goto label_19fee0;
        case 0x19fee4u: goto label_19fee4;
        case 0x19fee8u: goto label_19fee8;
        case 0x19feecu: goto label_19feec;
        case 0x19fef0u: goto label_19fef0;
        case 0x19fef4u: goto label_19fef4;
        case 0x19fef8u: goto label_19fef8;
        case 0x19fefcu: goto label_19fefc;
        case 0x19ff00u: goto label_19ff00;
        case 0x19ff04u: goto label_19ff04;
        case 0x19ff08u: goto label_19ff08;
        case 0x19ff0cu: goto label_19ff0c;
        case 0x19ff10u: goto label_19ff10;
        case 0x19ff14u: goto label_19ff14;
        case 0x19ff18u: goto label_19ff18;
        case 0x19ff1cu: goto label_19ff1c;
        case 0x19ff20u: goto label_19ff20;
        case 0x19ff24u: goto label_19ff24;
        case 0x19ff28u: goto label_19ff28;
        case 0x19ff2cu: goto label_19ff2c;
        case 0x19ff30u: goto label_19ff30;
        case 0x19ff34u: goto label_19ff34;
        case 0x19ff38u: goto label_19ff38;
        case 0x19ff3cu: goto label_19ff3c;
        case 0x19ff40u: goto label_19ff40;
        case 0x19ff44u: goto label_19ff44;
        case 0x19ff48u: goto label_19ff48;
        case 0x19ff4cu: goto label_19ff4c;
        case 0x19ff50u: goto label_19ff50;
        case 0x19ff54u: goto label_19ff54;
        case 0x19ff58u: goto label_19ff58;
        case 0x19ff5cu: goto label_19ff5c;
        case 0x19ff60u: goto label_19ff60;
        case 0x19ff64u: goto label_19ff64;
        case 0x19ff68u: goto label_19ff68;
        case 0x19ff6cu: goto label_19ff6c;
        case 0x19ff70u: goto label_19ff70;
        case 0x19ff74u: goto label_19ff74;
        case 0x19ff78u: goto label_19ff78;
        case 0x19ff7cu: goto label_19ff7c;
        case 0x19ff80u: goto label_19ff80;
        case 0x19ff84u: goto label_19ff84;
        case 0x19ff88u: goto label_19ff88;
        case 0x19ff8cu: goto label_19ff8c;
        case 0x19ff90u: goto label_19ff90;
        case 0x19ff94u: goto label_19ff94;
        case 0x19ff98u: goto label_19ff98;
        case 0x19ff9cu: goto label_19ff9c;
        case 0x19ffa0u: goto label_19ffa0;
        case 0x19ffa4u: goto label_19ffa4;
        case 0x19ffa8u: goto label_19ffa8;
        case 0x19ffacu: goto label_19ffac;
        case 0x19ffb0u: goto label_19ffb0;
        case 0x19ffb4u: goto label_19ffb4;
        case 0x19ffb8u: goto label_19ffb8;
        case 0x19ffbcu: goto label_19ffbc;
        case 0x19ffc0u: goto label_19ffc0;
        case 0x19ffc4u: goto label_19ffc4;
        case 0x19ffc8u: goto label_19ffc8;
        case 0x19ffccu: goto label_19ffcc;
        case 0x19ffd0u: goto label_19ffd0;
        case 0x19ffd4u: goto label_19ffd4;
        case 0x19ffd8u: goto label_19ffd8;
        case 0x19ffdcu: goto label_19ffdc;
        case 0x19ffe0u: goto label_19ffe0;
        case 0x19ffe4u: goto label_19ffe4;
        case 0x19ffe8u: goto label_19ffe8;
        case 0x19ffecu: goto label_19ffec;
        case 0x19fff0u: goto label_19fff0;
        case 0x19fff4u: goto label_19fff4;
        case 0x19fff8u: goto label_19fff8;
        case 0x19fffcu: goto label_19fffc;
        case 0x1a0000u: goto label_1a0000;
        case 0x1a0004u: goto label_1a0004;
        case 0x1a0008u: goto label_1a0008;
        case 0x1a000cu: goto label_1a000c;
        case 0x1a0010u: goto label_1a0010;
        case 0x1a0014u: goto label_1a0014;
        case 0x1a0018u: goto label_1a0018;
        case 0x1a001cu: goto label_1a001c;
        case 0x1a0020u: goto label_1a0020;
        case 0x1a0024u: goto label_1a0024;
        case 0x1a0028u: goto label_1a0028;
        case 0x1a002cu: goto label_1a002c;
        case 0x1a0030u: goto label_1a0030;
        case 0x1a0034u: goto label_1a0034;
        case 0x1a0038u: goto label_1a0038;
        case 0x1a003cu: goto label_1a003c;
        case 0x1a0040u: goto label_1a0040;
        case 0x1a0044u: goto label_1a0044;
        case 0x1a0048u: goto label_1a0048;
        case 0x1a004cu: goto label_1a004c;
        case 0x1a0050u: goto label_1a0050;
        case 0x1a0054u: goto label_1a0054;
        case 0x1a0058u: goto label_1a0058;
        case 0x1a005cu: goto label_1a005c;
        case 0x1a0060u: goto label_1a0060;
        case 0x1a0064u: goto label_1a0064;
        case 0x1a0068u: goto label_1a0068;
        case 0x1a006cu: goto label_1a006c;
        case 0x1a0070u: goto label_1a0070;
        case 0x1a0074u: goto label_1a0074;
        case 0x1a0078u: goto label_1a0078;
        case 0x1a007cu: goto label_1a007c;
        case 0x1a0080u: goto label_1a0080;
        case 0x1a0084u: goto label_1a0084;
        case 0x1a0088u: goto label_1a0088;
        case 0x1a008cu: goto label_1a008c;
        case 0x1a0090u: goto label_1a0090;
        case 0x1a0094u: goto label_1a0094;
        case 0x1a0098u: goto label_1a0098;
        case 0x1a009cu: goto label_1a009c;
        case 0x1a00a0u: goto label_1a00a0;
        case 0x1a00a4u: goto label_1a00a4;
        case 0x1a00a8u: goto label_1a00a8;
        case 0x1a00acu: goto label_1a00ac;
        case 0x1a00b0u: goto label_1a00b0;
        case 0x1a00b4u: goto label_1a00b4;
        case 0x1a00b8u: goto label_1a00b8;
        case 0x1a00bcu: goto label_1a00bc;
        case 0x1a00c0u: goto label_1a00c0;
        case 0x1a00c4u: goto label_1a00c4;
        case 0x1a00c8u: goto label_1a00c8;
        case 0x1a00ccu: goto label_1a00cc;
        case 0x1a00d0u: goto label_1a00d0;
        case 0x1a00d4u: goto label_1a00d4;
        case 0x1a00d8u: goto label_1a00d8;
        case 0x1a00dcu: goto label_1a00dc;
        case 0x1a00e0u: goto label_1a00e0;
        case 0x1a00e4u: goto label_1a00e4;
        case 0x1a00e8u: goto label_1a00e8;
        case 0x1a00ecu: goto label_1a00ec;
        case 0x1a00f0u: goto label_1a00f0;
        case 0x1a00f4u: goto label_1a00f4;
        case 0x1a00f8u: goto label_1a00f8;
        case 0x1a00fcu: goto label_1a00fc;
        case 0x1a0100u: goto label_1a0100;
        case 0x1a0104u: goto label_1a0104;
        case 0x1a0108u: goto label_1a0108;
        case 0x1a010cu: goto label_1a010c;
        case 0x1a0110u: goto label_1a0110;
        case 0x1a0114u: goto label_1a0114;
        case 0x1a0118u: goto label_1a0118;
        case 0x1a011cu: goto label_1a011c;
        case 0x1a0120u: goto label_1a0120;
        case 0x1a0124u: goto label_1a0124;
        case 0x1a0128u: goto label_1a0128;
        case 0x1a012cu: goto label_1a012c;
        case 0x1a0130u: goto label_1a0130;
        case 0x1a0134u: goto label_1a0134;
        case 0x1a0138u: goto label_1a0138;
        case 0x1a013cu: goto label_1a013c;
        case 0x1a0140u: goto label_1a0140;
        case 0x1a0144u: goto label_1a0144;
        case 0x1a0148u: goto label_1a0148;
        case 0x1a014cu: goto label_1a014c;
        case 0x1a0150u: goto label_1a0150;
        case 0x1a0154u: goto label_1a0154;
        case 0x1a0158u: goto label_1a0158;
        case 0x1a015cu: goto label_1a015c;
        case 0x1a0160u: goto label_1a0160;
        case 0x1a0164u: goto label_1a0164;
        case 0x1a0168u: goto label_1a0168;
        case 0x1a016cu: goto label_1a016c;
        case 0x1a0170u: goto label_1a0170;
        case 0x1a0174u: goto label_1a0174;
        case 0x1a0178u: goto label_1a0178;
        case 0x1a017cu: goto label_1a017c;
        case 0x1a0180u: goto label_1a0180;
        case 0x1a0184u: goto label_1a0184;
        case 0x1a0188u: goto label_1a0188;
        case 0x1a018cu: goto label_1a018c;
        case 0x1a0190u: goto label_1a0190;
        case 0x1a0194u: goto label_1a0194;
        case 0x1a0198u: goto label_1a0198;
        case 0x1a019cu: goto label_1a019c;
        case 0x1a01a0u: goto label_1a01a0;
        case 0x1a01a4u: goto label_1a01a4;
        case 0x1a01a8u: goto label_1a01a8;
        case 0x1a01acu: goto label_1a01ac;
        case 0x1a01b0u: goto label_1a01b0;
        case 0x1a01b4u: goto label_1a01b4;
        case 0x1a01b8u: goto label_1a01b8;
        case 0x1a01bcu: goto label_1a01bc;
        case 0x1a01c0u: goto label_1a01c0;
        case 0x1a01c4u: goto label_1a01c4;
        case 0x1a01c8u: goto label_1a01c8;
        case 0x1a01ccu: goto label_1a01cc;
        case 0x1a01d0u: goto label_1a01d0;
        case 0x1a01d4u: goto label_1a01d4;
        case 0x1a01d8u: goto label_1a01d8;
        case 0x1a01dcu: goto label_1a01dc;
        case 0x1a01e0u: goto label_1a01e0;
        case 0x1a01e4u: goto label_1a01e4;
        case 0x1a01e8u: goto label_1a01e8;
        case 0x1a01ecu: goto label_1a01ec;
        case 0x1a01f0u: goto label_1a01f0;
        case 0x1a01f4u: goto label_1a01f4;
        case 0x1a01f8u: goto label_1a01f8;
        case 0x1a01fcu: goto label_1a01fc;
        case 0x1a0200u: goto label_1a0200;
        case 0x1a0204u: goto label_1a0204;
        case 0x1a0208u: goto label_1a0208;
        case 0x1a020cu: goto label_1a020c;
        case 0x1a0210u: goto label_1a0210;
        case 0x1a0214u: goto label_1a0214;
        case 0x1a0218u: goto label_1a0218;
        case 0x1a021cu: goto label_1a021c;
        case 0x1a0220u: goto label_1a0220;
        case 0x1a0224u: goto label_1a0224;
        case 0x1a0228u: goto label_1a0228;
        case 0x1a022cu: goto label_1a022c;
        case 0x1a0230u: goto label_1a0230;
        case 0x1a0234u: goto label_1a0234;
        case 0x1a0238u: goto label_1a0238;
        case 0x1a023cu: goto label_1a023c;
        case 0x1a0240u: goto label_1a0240;
        case 0x1a0244u: goto label_1a0244;
        case 0x1a0248u: goto label_1a0248;
        case 0x1a024cu: goto label_1a024c;
        case 0x1a0250u: goto label_1a0250;
        case 0x1a0254u: goto label_1a0254;
        case 0x1a0258u: goto label_1a0258;
        case 0x1a025cu: goto label_1a025c;
        case 0x1a0260u: goto label_1a0260;
        case 0x1a0264u: goto label_1a0264;
        case 0x1a0268u: goto label_1a0268;
        case 0x1a026cu: goto label_1a026c;
        case 0x1a0270u: goto label_1a0270;
        case 0x1a0274u: goto label_1a0274;
        case 0x1a0278u: goto label_1a0278;
        case 0x1a027cu: goto label_1a027c;
        case 0x1a0280u: goto label_1a0280;
        case 0x1a0284u: goto label_1a0284;
        case 0x1a0288u: goto label_1a0288;
        case 0x1a028cu: goto label_1a028c;
        case 0x1a0290u: goto label_1a0290;
        case 0x1a0294u: goto label_1a0294;
        case 0x1a0298u: goto label_1a0298;
        case 0x1a029cu: goto label_1a029c;
        case 0x1a02a0u: goto label_1a02a0;
        case 0x1a02a4u: goto label_1a02a4;
        case 0x1a02a8u: goto label_1a02a8;
        case 0x1a02acu: goto label_1a02ac;
        case 0x1a02b0u: goto label_1a02b0;
        case 0x1a02b4u: goto label_1a02b4;
        case 0x1a02b8u: goto label_1a02b8;
        case 0x1a02bcu: goto label_1a02bc;
        case 0x1a02c0u: goto label_1a02c0;
        case 0x1a02c4u: goto label_1a02c4;
        case 0x1a02c8u: goto label_1a02c8;
        case 0x1a02ccu: goto label_1a02cc;
        default: break;
    }

    ctx->pc = 0x19fe80u;

label_19fe80:
    // 0x19fe80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19fe80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_19fe84:
    // 0x19fe84: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19fe84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_19fe88:
    // 0x19fe88: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x19fe88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_19fe8c:
    // 0x19fe8c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x19fe8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_19fe90:
    // 0x19fe90: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19fe90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19fe94:
    // 0x19fe94: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19fe94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_19fe98:
    // 0x19fe98: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x19fe98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19fe9c:
    // 0x19fe9c: 0xc063dd4  jal         func_18F750
label_19fea0:
    if (ctx->pc == 0x19FEA0u) {
        ctx->pc = 0x19FEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE9Cu;
        // 0x19fea0: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FEA4u;
        goto label_19fea4;
    }
    ctx->pc = 0x19FE9Cu;
    SET_GPR_U32(ctx, 31, 0x19FEA4u);
    ctx->pc = 0x19FEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FE9Cu;
    // 0x19fea0: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F750u, 0x19FE9Cu, 0x19FEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FEA4u;
label_19fea4:
    // 0x19fea4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x19fea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_19fea8:
    // 0x19fea8: 0x34640002  ori         $a0, $v1, 0x2
    ctx->pc = 0x19fea8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_19feac:
    // 0x19feac: 0x10440101  beq         $v0, $a0, . + 4 + (0x101 << 2)
label_19feb0:
    if (ctx->pc == 0x19FEB0u) {
        ctx->pc = 0x19FEB4u;
        goto label_19feb4;
    }
    ctx->pc = 0x19FEACu;
    {
        const bool branch_taken_0x19feac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x19feac) {
            ctx->pc = 0x1A02B4u;
            goto label_1a02b4;
        }
    }
    ctx->pc = 0x19FEB4u;
label_19feb4:
    // 0x19feb4: 0x104300ff  beq         $v0, $v1, . + 4 + (0xFF << 2)
label_19feb8:
    if (ctx->pc == 0x19FEB8u) {
        ctx->pc = 0x19FEBCu;
        goto label_19febc;
    }
    ctx->pc = 0x19FEB4u;
    {
        const bool branch_taken_0x19feb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19feb4) {
            ctx->pc = 0x1A02B4u;
            goto label_1a02b4;
        }
    }
    ctx->pc = 0x19FEBCu;
label_19febc:
    // 0x19febc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x19febcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19fec0:
    // 0x19fec0: 0x104300f5  beq         $v0, $v1, . + 4 + (0xF5 << 2)
label_19fec4:
    if (ctx->pc == 0x19FEC4u) {
        ctx->pc = 0x19FEC8u;
        goto label_19fec8;
    }
    ctx->pc = 0x19FEC0u;
    {
        const bool branch_taken_0x19fec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19fec0) {
            ctx->pc = 0x1A0298u;
            goto label_1a0298;
        }
    }
    ctx->pc = 0x19FEC8u;
label_19fec8:
    // 0x19fec8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19fec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19fecc:
    // 0x19fecc: 0x10430071  beq         $v0, $v1, . + 4 + (0x71 << 2)
label_19fed0:
    if (ctx->pc == 0x19FED0u) {
        ctx->pc = 0x19FED4u;
        goto label_19fed4;
    }
    ctx->pc = 0x19FECCu;
    {
        const bool branch_taken_0x19fecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19fecc) {
            ctx->pc = 0x1A0094u;
            goto label_1a0094;
        }
    }
    ctx->pc = 0x19FED4u;
label_19fed4:
    // 0x19fed4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19fed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19fed8:
    // 0x19fed8: 0x1043001d  beq         $v0, $v1, . + 4 + (0x1D << 2)
label_19fedc:
    if (ctx->pc == 0x19FEDCu) {
        ctx->pc = 0x19FEE0u;
        goto label_19fee0;
    }
    ctx->pc = 0x19FED8u;
    {
        const bool branch_taken_0x19fed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19fed8) {
            ctx->pc = 0x19FF50u;
            goto label_19ff50;
        }
    }
    ctx->pc = 0x19FEE0u;
label_19fee0:
    // 0x19fee0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_19fee4:
    if (ctx->pc == 0x19FEE4u) {
        ctx->pc = 0x19FEE8u;
        goto label_19fee8;
    }
    ctx->pc = 0x19FEE0u;
    {
        const bool branch_taken_0x19fee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fee0) {
            ctx->pc = 0x19FEF0u;
            goto label_19fef0;
        }
    }
    ctx->pc = 0x19FEE8u;
label_19fee8:
    // 0x19fee8: 0x100000f3  b           . + 4 + (0xF3 << 2)
label_19feec:
    if (ctx->pc == 0x19FEECu) {
        ctx->pc = 0x19FEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FEE8u;
        // 0x19feec: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FEF0u;
        goto label_19fef0;
    }
    ctx->pc = 0x19FEE8u;
    {
        const bool branch_taken_0x19fee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FEE8u;
        // 0x19feec: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fee8) {
            ctx->pc = 0x1A02B8u;
            goto label_1a02b8;
        }
    }
    ctx->pc = 0x19FEF0u;
label_19fef0:
    // 0x19fef0: 0x8e420664  lw          $v0, 0x664($s2)
    ctx->pc = 0x19fef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1636)));
label_19fef4:
    // 0x19fef4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19fef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19fef8:
    // 0x19fef8: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x19fef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_19fefc:
    // 0x19fefc: 0xae420664  sw          $v0, 0x664($s2)
    ctx->pc = 0x19fefcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1636), GPR_U32(ctx, 2));
label_19ff00:
    // 0x19ff00: 0x8e420664  lw          $v0, 0x664($s2)
    ctx->pc = 0x19ff00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1636)));
label_19ff04:
    // 0x19ff04: 0xc064918  jal         func_192460
label_19ff08:
    if (ctx->pc == 0x19FF08u) {
        ctx->pc = 0x19FF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FF04u;
        // 0x19ff08: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FF0Cu;
        goto label_19ff0c;
    }
    ctx->pc = 0x19FF04u;
    SET_GPR_U32(ctx, 31, 0x19FF0Cu);
    ctx->pc = 0x19FF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FF04u;
    // 0x19ff08: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192460u, 0x19FF04u, 0x19FF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FF0Cu;
label_19ff0c:
    // 0x19ff0c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_19ff10:
    if (ctx->pc == 0x19FF10u) {
        ctx->pc = 0x19FF14u;
        goto label_19ff14;
    }
    ctx->pc = 0x19FF0Cu;
    {
        const bool branch_taken_0x19ff0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ff0c) {
            ctx->pc = 0x19FF38u;
            goto label_19ff38;
        }
    }
    ctx->pc = 0x19FF14u;
label_19ff14:
    // 0x19ff14: 0x124000e7  beqz        $s2, . + 4 + (0xE7 << 2)
label_19ff18:
    if (ctx->pc == 0x19FF18u) {
        ctx->pc = 0x19FF1Cu;
        goto label_19ff1c;
    }
    ctx->pc = 0x19FF14u;
    {
        const bool branch_taken_0x19ff14 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ff14) {
            ctx->pc = 0x1A02B4u;
            goto label_1a02b4;
        }
    }
    ctx->pc = 0x19FF1Cu;
label_19ff1c:
    // 0x19ff1c: 0x8e59031c  lw          $t9, 0x31C($s2)
    ctx->pc = 0x19ff1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 796)));
label_19ff20:
    // 0x19ff20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19ff20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19ff24:
    // 0x19ff24: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x19ff24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_19ff28:
    // 0x19ff28: 0x320f809  jalr        $t9
label_19ff2c:
    if (ctx->pc == 0x19FF2Cu) {
        ctx->pc = 0x19FF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FF28u;
        // 0x19ff2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FF30u;
        goto label_19ff30;
    }
    ctx->pc = 0x19FF28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19FF30u);
        ctx->pc = 0x19FF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FF28u;
        // 0x19ff2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FF28u, 0x19FF30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19FF30u;
label_19ff30:
    // 0x19ff30: 0x100000e0  b           . + 4 + (0xE0 << 2)
label_19ff34:
    if (ctx->pc == 0x19FF34u) {
        ctx->pc = 0x19FF38u;
        goto label_19ff38;
    }
    ctx->pc = 0x19FF30u;
    {
        const bool branch_taken_0x19ff30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ff30) {
            ctx->pc = 0x1A02B4u;
            goto label_1a02b4;
        }
    }
    ctx->pc = 0x19FF38u;
label_19ff38:
    // 0x19ff38: 0x8e420664  lw          $v0, 0x664($s2)
    ctx->pc = 0x19ff38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1636)));
label_19ff3c:
    // 0x19ff3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19ff3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19ff40:
    // 0x19ff40: 0xc063dc0  jal         func_18F700
label_19ff44:
    if (ctx->pc == 0x19FF44u) {
        ctx->pc = 0x19FF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FF40u;
        // 0x19ff44: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FF48u;
        goto label_19ff48;
    }
    ctx->pc = 0x19FF40u;
    SET_GPR_U32(ctx, 31, 0x19FF48u);
    ctx->pc = 0x19FF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FF40u;
    // 0x19ff44: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x19FF40u, 0x19FF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FF48u;
label_19ff48:
    // 0x19ff48: 0xc063e14  jal         func_18F850
label_19ff4c:
    if (ctx->pc == 0x19FF4Cu) {
        ctx->pc = 0x19FF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FF48u;
        // 0x19ff4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FF50u;
        goto label_19ff50;
    }
    ctx->pc = 0x19FF48u;
    SET_GPR_U32(ctx, 31, 0x19FF50u);
    ctx->pc = 0x19FF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FF48u;
    // 0x19ff4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x19FF48u, 0x19FF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FF50u;
label_19ff50:
    // 0x19ff50: 0x8e420664  lw          $v0, 0x664($s2)
    ctx->pc = 0x19ff50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1636)));
label_19ff54:
    // 0x19ff54: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x19ff54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_19ff58:
    // 0x19ff58: 0x8c460024  lw          $a2, 0x24($v0)
    ctx->pc = 0x19ff58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_19ff5c:
    // 0x19ff5c: 0xc057040  jal         func_15C100
label_19ff60:
    if (ctx->pc == 0x19FF60u) {
        ctx->pc = 0x19FF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FF5Cu;
        // 0x19ff60: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FF64u;
        goto label_19ff64;
    }
    ctx->pc = 0x19FF5Cu;
    SET_GPR_U32(ctx, 31, 0x19FF64u);
    ctx->pc = 0x19FF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FF5Cu;
    // 0x19ff60: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x19FF5Cu, 0x19FF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FF64u;
label_19ff64:
    // 0x19ff64: 0x8f8585f4  lw          $a1, -0x7A0C($gp)
    ctx->pc = 0x19ff64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_19ff68:
    // 0x19ff68: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x19ff68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_19ff6c:
    // 0x19ff6c: 0x8e490664  lw          $t1, 0x664($s2)
    ctx->pc = 0x19ff6cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1636)));
label_19ff70:
    // 0x19ff70: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x19ff70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_19ff74:
    // 0x19ff74: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x19ff74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_19ff78:
    // 0x19ff78: 0x8c842cd8  lw          $a0, 0x2CD8($a0)
    ctx->pc = 0x19ff78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11480)));
label_19ff7c:
    // 0x19ff7c: 0x8d26002c  lw          $a2, 0x2C($t1)
    ctx->pc = 0x19ff7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 44)));
label_19ff80:
    // 0x19ff80: 0x10c30029  beq         $a2, $v1, . + 4 + (0x29 << 2)
label_19ff84:
    if (ctx->pc == 0x19FF84u) {
        ctx->pc = 0x19FF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FF80u;
        // 0x19ff84: 0x8c900004  lw          $s0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FF88u;
        goto label_19ff88;
    }
    ctx->pc = 0x19FF80u;
    {
        const bool branch_taken_0x19ff80 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x19FF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FF80u;
        // 0x19ff84: 0x8c900004  lw          $s0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ff80) {
            ctx->pc = 0x1A0028u;
            goto label_1a0028;
        }
    }
    ctx->pc = 0x19FF88u;
label_19ff88:
    // 0x19ff88: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x19ff88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_19ff8c:
    // 0x19ff8c: 0x10c30011  beq         $a2, $v1, . + 4 + (0x11 << 2)
label_19ff90:
    if (ctx->pc == 0x19FF90u) {
        ctx->pc = 0x19FF94u;
        goto label_19ff94;
    }
    ctx->pc = 0x19FF8Cu;
    {
        const bool branch_taken_0x19ff8c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x19ff8c) {
            ctx->pc = 0x19FFD4u;
            goto label_19ffd4;
        }
    }
    ctx->pc = 0x19FF94u;
label_19ff94:
    // 0x19ff94: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x19ff94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_19ff98:
    // 0x19ff98: 0x10c30003  beq         $a2, $v1, . + 4 + (0x3 << 2)
label_19ff9c:
    if (ctx->pc == 0x19FF9Cu) {
        ctx->pc = 0x19FFA0u;
        goto label_19ffa0;
    }
    ctx->pc = 0x19FF98u;
    {
        const bool branch_taken_0x19ff98 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x19ff98) {
            ctx->pc = 0x19FFA8u;
            goto label_19ffa8;
        }
    }
    ctx->pc = 0x19FFA0u;
label_19ffa0:
    // 0x19ffa0: 0x10000034  b           . + 4 + (0x34 << 2)
label_19ffa4:
    if (ctx->pc == 0x19FFA4u) {
        ctx->pc = 0x19FFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FFA0u;
        // 0x19ffa4: 0x8d270030  lw          $a3, 0x30($t1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FFA8u;
        goto label_19ffa8;
    }
    ctx->pc = 0x19FFA0u;
    {
        const bool branch_taken_0x19ffa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FFA0u;
        // 0x19ffa4: 0x8d270030  lw          $a3, 0x30($t1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ffa0) {
            ctx->pc = 0x1A0074u;
            goto label_1a0074;
        }
    }
    ctx->pc = 0x19FFA8u;
label_19ffa8:
    // 0x19ffa8: 0x8d270030  lw          $a3, 0x30($t1)
    ctx->pc = 0x19ffa8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 48)));
label_19ffac:
    // 0x19ffac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x19ffacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19ffb0:
    // 0x19ffb0: 0x10e30036  beq         $a3, $v1, . + 4 + (0x36 << 2)
label_19ffb4:
    if (ctx->pc == 0x19FFB4u) {
        ctx->pc = 0x19FFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FFB0u;
        // 0x19ffb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FFB8u;
        goto label_19ffb8;
    }
    ctx->pc = 0x19FFB0u;
    {
        const bool branch_taken_0x19ffb0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x19FFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FFB0u;
        // 0x19ffb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ffb0) {
            ctx->pc = 0x1A008Cu;
            goto label_1a008c;
        }
    }
    ctx->pc = 0x19FFB8u;
label_19ffb8:
    // 0x19ffb8: 0x8d280034  lw          $t0, 0x34($t1)
    ctx->pc = 0x19ffb8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 52)));
label_19ffbc:
    // 0x19ffbc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19ffbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19ffc0:
    // 0x19ffc0: 0x8d290038  lw          $t1, 0x38($t1)
    ctx->pc = 0x19ffc0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 56)));
label_19ffc4:
    // 0x19ffc4: 0xc064d84  jal         func_193610
label_19ffc8:
    if (ctx->pc == 0x19FFC8u) {
        ctx->pc = 0x19FFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FFC4u;
        // 0x19ffc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FFCCu;
        goto label_19ffcc;
    }
    ctx->pc = 0x19FFC4u;
    SET_GPR_U32(ctx, 31, 0x19FFCCu);
    ctx->pc = 0x19FFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FFC4u;
    // 0x19ffc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193610u, 0x19FFC4u, 0x19FFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FFCCu;
label_19ffcc:
    // 0x19ffcc: 0x1000002e  b           . + 4 + (0x2E << 2)
label_19ffd0:
    if (ctx->pc == 0x19FFD0u) {
        ctx->pc = 0x19FFD4u;
        goto label_19ffd4;
    }
    ctx->pc = 0x19FFCCu;
    {
        const bool branch_taken_0x19ffcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ffcc) {
            ctx->pc = 0x1A0088u;
            goto label_1a0088;
        }
    }
    ctx->pc = 0x19FFD4u;
label_19ffd4:
    // 0x19ffd4: 0x8d270030  lw          $a3, 0x30($t1)
    ctx->pc = 0x19ffd4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 48)));
label_19ffd8:
    // 0x19ffd8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x19ffd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19ffdc:
    // 0x19ffdc: 0x10e3002a  beq         $a3, $v1, . + 4 + (0x2A << 2)
label_19ffe0:
    if (ctx->pc == 0x19FFE0u) {
        ctx->pc = 0x19FFE4u;
        goto label_19ffe4;
    }
    ctx->pc = 0x19FFDCu;
    {
        const bool branch_taken_0x19ffdc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x19ffdc) {
            ctx->pc = 0x1A0088u;
            goto label_1a0088;
        }
    }
    ctx->pc = 0x19FFE4u;
label_19ffe4:
    // 0x19ffe4: 0x8d280034  lw          $t0, 0x34($t1)
    ctx->pc = 0x19ffe4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 52)));
label_19ffe8:
    // 0x19ffe8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19ffe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19ffec:
    // 0x19ffec: 0x8d290038  lw          $t1, 0x38($t1)
    ctx->pc = 0x19ffecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 56)));
label_19fff0:
    // 0x19fff0: 0xc064d84  jal         func_193610
label_19fff4:
    if (ctx->pc == 0x19FFF4u) {
        ctx->pc = 0x19FFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FFF0u;
        // 0x19fff4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FFF8u;
        goto label_19fff8;
    }
    ctx->pc = 0x19FFF0u;
    SET_GPR_U32(ctx, 31, 0x19FFF8u);
    ctx->pc = 0x19FFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FFF0u;
    // 0x19fff4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193610u, 0x19FFF0u, 0x19FFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FFF8u;
label_19fff8:
    // 0x19fff8: 0x8e430664  lw          $v1, 0x664($s2)
    ctx->pc = 0x19fff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1636)));
label_19fffc:
    // 0x19fffc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19fffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a0000:
    // 0x1a0000: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x1a0000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1a0004:
    // 0x1a0004: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
label_1a0008:
    if (ctx->pc == 0x1A0008u) {
        ctx->pc = 0x1A000Cu;
        goto label_1a000c;
    }
    ctx->pc = 0x1A0004u;
    {
        const bool branch_taken_0x1a0004 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a0004) {
            ctx->pc = 0x1A0088u;
            goto label_1a0088;
        }
    }
    ctx->pc = 0x1A000Cu;
label_1a000c:
    // 0x1a000c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1a000cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a0010:
    // 0x1a0010: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a0014:
    // 0x1a0014: 0x8f390078  lw          $t9, 0x78($t9)
    ctx->pc = 0x1a0014u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 120)));
label_1a0018:
    // 0x1a0018: 0x320f809  jalr        $t9
label_1a001c:
    if (ctx->pc == 0x1A001Cu) {
        ctx->pc = 0x1A001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0018u;
        // 0x1a001c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0020u;
        goto label_1a0020;
    }
    ctx->pc = 0x1A0018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A0020u);
        ctx->pc = 0x1A001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0018u;
        // 0x1a001c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0018u, 0x1A0020u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A0020u;
label_1a0020:
    // 0x1a0020: 0x10000019  b           . + 4 + (0x19 << 2)
label_1a0024:
    if (ctx->pc == 0x1A0024u) {
        ctx->pc = 0x1A0028u;
        goto label_1a0028;
    }
    ctx->pc = 0x1A0020u;
    {
        const bool branch_taken_0x1a0020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0020) {
            ctx->pc = 0x1A0088u;
            goto label_1a0088;
        }
    }
    ctx->pc = 0x1A0028u;
label_1a0028:
    // 0x1a0028: 0x8d270030  lw          $a3, 0x30($t1)
    ctx->pc = 0x1a0028u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 48)));
label_1a002c:
    // 0x1a002c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a002cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a0030:
    // 0x1a0030: 0x8d280034  lw          $t0, 0x34($t1)
    ctx->pc = 0x1a0030u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 52)));
label_1a0034:
    // 0x1a0034: 0x8d290038  lw          $t1, 0x38($t1)
    ctx->pc = 0x1a0034u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 56)));
label_1a0038:
    // 0x1a0038: 0xc064d84  jal         func_193610
label_1a003c:
    if (ctx->pc == 0x1A003Cu) {
        ctx->pc = 0x1A003Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0038u;
        // 0x1a003c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0040u;
        goto label_1a0040;
    }
    ctx->pc = 0x1A0038u;
    SET_GPR_U32(ctx, 31, 0x1A0040u);
    ctx->pc = 0x1A003Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0038u;
    // 0x1a003c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193610u, 0x1A0038u, 0x1A0040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0040u;
label_1a0040:
    // 0x1a0040: 0x8e430664  lw          $v1, 0x664($s2)
    ctx->pc = 0x1a0040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1636)));
label_1a0044:
    // 0x1a0044: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a0044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a0048:
    // 0x1a0048: 0x8c630038  lw          $v1, 0x38($v1)
    ctx->pc = 0x1a0048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_1a004c:
    // 0x1a004c: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_1a0050:
    if (ctx->pc == 0x1A0050u) {
        ctx->pc = 0x1A0054u;
        goto label_1a0054;
    }
    ctx->pc = 0x1A004Cu;
    {
        const bool branch_taken_0x1a004c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a004c) {
            ctx->pc = 0x1A0088u;
            goto label_1a0088;
        }
    }
    ctx->pc = 0x1A0054u;
label_1a0054:
    // 0x1a0054: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1a0054u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a0058:
    // 0x1a0058: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a005c:
    // 0x1a005c: 0x8f390078  lw          $t9, 0x78($t9)
    ctx->pc = 0x1a005cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 120)));
label_1a0060:
    // 0x1a0060: 0x320f809  jalr        $t9
label_1a0064:
    if (ctx->pc == 0x1A0064u) {
        ctx->pc = 0x1A0064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0060u;
        // 0x1a0064: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0068u;
        goto label_1a0068;
    }
    ctx->pc = 0x1A0060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A0068u);
        ctx->pc = 0x1A0064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0060u;
        // 0x1a0064: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0060u, 0x1A0068u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A0068u;
label_1a0068:
    // 0x1a0068: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a006c:
    if (ctx->pc == 0x1A006Cu) {
        ctx->pc = 0x1A0070u;
        goto label_1a0070;
    }
    ctx->pc = 0x1A0068u;
    {
        const bool branch_taken_0x1a0068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0068) {
            ctx->pc = 0x1A0088u;
            goto label_1a0088;
        }
    }
    ctx->pc = 0x1A0070u;
label_1a0070:
    // 0x1a0070: 0x8d270030  lw          $a3, 0x30($t1)
    ctx->pc = 0x1a0070u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 48)));
label_1a0074:
    // 0x1a0074: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a0074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a0078:
    // 0x1a0078: 0x8d280034  lw          $t0, 0x34($t1)
    ctx->pc = 0x1a0078u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 52)));
label_1a007c:
    // 0x1a007c: 0x8d290038  lw          $t1, 0x38($t1)
    ctx->pc = 0x1a007cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 56)));
label_1a0080:
    // 0x1a0080: 0xc064d84  jal         func_193610
label_1a0084:
    if (ctx->pc == 0x1A0084u) {
        ctx->pc = 0x1A0084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0080u;
        // 0x1a0084: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0088u;
        goto label_1a0088;
    }
    ctx->pc = 0x1A0080u;
    SET_GPR_U32(ctx, 31, 0x1A0088u);
    ctx->pc = 0x1A0084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0080u;
    // 0x1a0084: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193610u, 0x1A0080u, 0x1A0088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0088u;
label_1a0088:
    // 0x1a0088: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a0088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a008c:
    // 0x1a008c: 0xc063e14  jal         func_18F850
label_1a0090:
    if (ctx->pc == 0x1A0090u) {
        ctx->pc = 0x1A0094u;
        goto label_1a0094;
    }
    ctx->pc = 0x1A008Cu;
    SET_GPR_U32(ctx, 31, 0x1A0094u);
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A008Cu, 0x1A0094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0094u;
label_1a0094:
    // 0x1a0094: 0x8e420664  lw          $v0, 0x664($s2)
    ctx->pc = 0x1a0094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1636)));
label_1a0098:
    // 0x1a0098: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1a0098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a009c:
    // 0x1a009c: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x1a009cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1a00a0:
    // 0x1a00a0: 0x8c460024  lw          $a2, 0x24($v0)
    ctx->pc = 0x1a00a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_1a00a4:
    // 0x1a00a4: 0xc057040  jal         func_15C100
label_1a00a8:
    if (ctx->pc == 0x1A00A8u) {
        ctx->pc = 0x1A00A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A00A4u;
        // 0x1a00a8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A00ACu;
        goto label_1a00ac;
    }
    ctx->pc = 0x1A00A4u;
    SET_GPR_U32(ctx, 31, 0x1A00ACu);
    ctx->pc = 0x1A00A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A00A4u;
    // 0x1a00a8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1A00A4u, 0x1A00ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A00ACu;
label_1a00ac:
    // 0x1a00ac: 0x8f8585f4  lw          $a1, -0x7A0C($gp)
    ctx->pc = 0x1a00acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a00b0:
    // 0x1a00b0: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1a00b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a00b4:
    // 0x1a00b4: 0x8e460664  lw          $a2, 0x664($s2)
    ctx->pc = 0x1a00b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1636)));
label_1a00b8:
    // 0x1a00b8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1a00b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1a00bc:
    // 0x1a00bc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1a00bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1a00c0:
    // 0x1a00c0: 0x8c852cd8  lw          $a1, 0x2CD8($a0)
    ctx->pc = 0x1a00c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11480)));
label_1a00c4:
    // 0x1a00c4: 0x8cc4002c  lw          $a0, 0x2C($a2)
    ctx->pc = 0x1a00c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
label_1a00c8:
    // 0x1a00c8: 0x10830043  beq         $a0, $v1, . + 4 + (0x43 << 2)
label_1a00cc:
    if (ctx->pc == 0x1A00CCu) {
        ctx->pc = 0x1A00CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A00C8u;
        // 0x1a00cc: 0x8cb10004  lw          $s1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A00D0u;
        goto label_1a00d0;
    }
    ctx->pc = 0x1A00C8u;
    {
        const bool branch_taken_0x1a00c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A00CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A00C8u;
        // 0x1a00cc: 0x8cb10004  lw          $s1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a00c8) {
            ctx->pc = 0x1A01D8u;
            goto label_1a01d8;
        }
    }
    ctx->pc = 0x1A00D0u;
label_1a00d0:
    // 0x1a00d0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1a00d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1a00d4:
    // 0x1a00d4: 0x10830023  beq         $a0, $v1, . + 4 + (0x23 << 2)
label_1a00d8:
    if (ctx->pc == 0x1A00D8u) {
        ctx->pc = 0x1A00DCu;
        goto label_1a00dc;
    }
    ctx->pc = 0x1A00D4u;
    {
        const bool branch_taken_0x1a00d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a00d4) {
            ctx->pc = 0x1A0164u;
            goto label_1a0164;
        }
    }
    ctx->pc = 0x1A00DCu;
label_1a00dc:
    // 0x1a00dc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1a00dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1a00e0:
    // 0x1a00e0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_1a00e4:
    if (ctx->pc == 0x1A00E4u) {
        ctx->pc = 0x1A00E8u;
        goto label_1a00e8;
    }
    ctx->pc = 0x1A00E0u;
    {
        const bool branch_taken_0x1a00e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a00e0) {
            ctx->pc = 0x1A00F0u;
            goto label_1a00f0;
        }
    }
    ctx->pc = 0x1A00E8u;
label_1a00e8:
    // 0x1a00e8: 0x10000057  b           . + 4 + (0x57 << 2)
label_1a00ec:
    if (ctx->pc == 0x1A00ECu) {
        ctx->pc = 0x1A00F0u;
        goto label_1a00f0;
    }
    ctx->pc = 0x1A00E8u;
    {
        const bool branch_taken_0x1a00e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a00e8) {
            ctx->pc = 0x1A0248u;
            goto label_1a0248;
        }
    }
    ctx->pc = 0x1A00F0u;
label_1a00f0:
    // 0x1a00f0: 0x8cc30034  lw          $v1, 0x34($a2)
    ctx->pc = 0x1a00f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_1a00f4:
    // 0x1a00f4: 0x18600054  blez        $v1, . + 4 + (0x54 << 2)
label_1a00f8:
    if (ctx->pc == 0x1A00F8u) {
        ctx->pc = 0x1A00FCu;
        goto label_1a00fc;
    }
    ctx->pc = 0x1A00F4u;
    {
        const bool branch_taken_0x1a00f4 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1a00f4) {
            ctx->pc = 0x1A0248u;
            goto label_1a0248;
        }
    }
    ctx->pc = 0x1A00FCu;
label_1a00fc:
    // 0x1a00fc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1a00fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a0100:
    // 0x1a0100: 0x8f390090  lw          $t9, 0x90($t9)
    ctx->pc = 0x1a0100u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 144)));
label_1a0104:
    // 0x1a0104: 0x320f809  jalr        $t9
label_1a0108:
    if (ctx->pc == 0x1A0108u) {
        ctx->pc = 0x1A0108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0104u;
        // 0x1a0108: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A010Cu;
        goto label_1a010c;
    }
    ctx->pc = 0x1A0104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A010Cu);
        ctx->pc = 0x1A0108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0104u;
        // 0x1a0108: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0104u, 0x1A010Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A010Cu;
label_1a010c:
    // 0x1a010c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1a010cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a0110:
    // 0x1a0110: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1a0110u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1a0114:
    // 0x1a0114: 0x8f390094  lw          $t9, 0x94($t9)
    ctx->pc = 0x1a0114u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 148)));
label_1a0118:
    // 0x1a0118: 0x320f809  jalr        $t9
label_1a011c:
    if (ctx->pc == 0x1A011Cu) {
        ctx->pc = 0x1A011Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0118u;
        // 0x1a011c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0120u;
        goto label_1a0120;
    }
    ctx->pc = 0x1A0118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A0120u);
        ctx->pc = 0x1A011Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0118u;
        // 0x1a011c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0118u, 0x1A0120u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A0120u;
label_1a0120:
    // 0x1a0120: 0x0  nop
    ctx->pc = 0x1a0120u;
    // NOP
label_1a0124:
    // 0x1a0124: 0x0  nop
    ctx->pc = 0x1a0124u;
    // NOP
label_1a0128:
    // 0x1a0128: 0x4600a043  div.s       $f1, $f20, $f0
    ctx->pc = 0x1a0128u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
label_1a012c:
    // 0x1a012c: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x1a012cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
label_1a0130:
    // 0x1a0130: 0x8e430664  lw          $v1, 0x664($s2)
    ctx->pc = 0x1a0130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1636)));
label_1a0134:
    // 0x1a0134: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x1a0134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1a0138:
    // 0x1a0138: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1a0138u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a013c:
    // 0x1a013c: 0x0  nop
    ctx->pc = 0x1a013cu;
    // NOP
label_1a0140:
    // 0x1a0140: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a0140u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1a0144:
    // 0x1a0144: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a0144u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1a0148:
    // 0x1a0148: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1a0148u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_1a014c:
    // 0x1a014c: 0x0  nop
    ctx->pc = 0x1a014cu;
    // NOP
label_1a0150:
    // 0x1a0150: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x1a0150u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1a0154:
    // 0x1a0154: 0x1020003c  beqz        $at, . + 4 + (0x3C << 2)
label_1a0158:
    if (ctx->pc == 0x1A0158u) {
        ctx->pc = 0x1A015Cu;
        goto label_1a015c;
    }
    ctx->pc = 0x1A0154u;
    {
        const bool branch_taken_0x1a0154 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0154) {
            ctx->pc = 0x1A0248u;
            goto label_1a0248;
        }
    }
    ctx->pc = 0x1A015Cu;
label_1a015c:
    // 0x1a015c: 0x1000003a  b           . + 4 + (0x3A << 2)
label_1a0160:
    if (ctx->pc == 0x1A0160u) {
        ctx->pc = 0x1A0160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A015Cu;
        // 0x1a0160: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0164u;
        goto label_1a0164;
    }
    ctx->pc = 0x1A015Cu;
    {
        const bool branch_taken_0x1a015c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A015Cu;
        // 0x1a0160: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a015c) {
            ctx->pc = 0x1A0248u;
            goto label_1a0248;
        }
    }
    ctx->pc = 0x1A0164u;
label_1a0164:
    // 0x1a0164: 0x8cc30034  lw          $v1, 0x34($a2)
    ctx->pc = 0x1a0164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_1a0168:
    // 0x1a0168: 0x18600037  blez        $v1, . + 4 + (0x37 << 2)
label_1a016c:
    if (ctx->pc == 0x1A016Cu) {
        ctx->pc = 0x1A0170u;
        goto label_1a0170;
    }
    ctx->pc = 0x1A0168u;
    {
        const bool branch_taken_0x1a0168 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1a0168) {
            ctx->pc = 0x1A0248u;
            goto label_1a0248;
        }
    }
    ctx->pc = 0x1A0170u;
label_1a0170:
    // 0x1a0170: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1a0170u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a0174:
    // 0x1a0174: 0x8f390098  lw          $t9, 0x98($t9)
    ctx->pc = 0x1a0174u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 152)));
label_1a0178:
    // 0x1a0178: 0x320f809  jalr        $t9
label_1a017c:
    if (ctx->pc == 0x1A017Cu) {
        ctx->pc = 0x1A017Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0178u;
        // 0x1a017c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0180u;
        goto label_1a0180;
    }
    ctx->pc = 0x1A0178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A0180u);
        ctx->pc = 0x1A017Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0178u;
        // 0x1a017c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0178u, 0x1A0180u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A0180u;
label_1a0180:
    // 0x1a0180: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1a0180u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a0184:
    // 0x1a0184: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1a0184u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1a0188:
    // 0x1a0188: 0x8f39009c  lw          $t9, 0x9C($t9)
    ctx->pc = 0x1a0188u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 156)));
label_1a018c:
    // 0x1a018c: 0x320f809  jalr        $t9
label_1a0190:
    if (ctx->pc == 0x1A0190u) {
        ctx->pc = 0x1A0190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A018Cu;
        // 0x1a0190: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0194u;
        goto label_1a0194;
    }
    ctx->pc = 0x1A018Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A0194u);
        ctx->pc = 0x1A0190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A018Cu;
        // 0x1a0190: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A018Cu, 0x1A0194u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A0194u;
label_1a0194:
    // 0x1a0194: 0x0  nop
    ctx->pc = 0x1a0194u;
    // NOP
label_1a0198:
    // 0x1a0198: 0x0  nop
    ctx->pc = 0x1a0198u;
    // NOP
label_1a019c:
    // 0x1a019c: 0x4600a043  div.s       $f1, $f20, $f0
    ctx->pc = 0x1a019cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
label_1a01a0:
    // 0x1a01a0: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x1a01a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
label_1a01a4:
    // 0x1a01a4: 0x8e430664  lw          $v1, 0x664($s2)
    ctx->pc = 0x1a01a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1636)));
label_1a01a8:
    // 0x1a01a8: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x1a01a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1a01ac:
    // 0x1a01ac: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1a01acu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a01b0:
    // 0x1a01b0: 0x0  nop
    ctx->pc = 0x1a01b0u;
    // NOP
label_1a01b4:
    // 0x1a01b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a01b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1a01b8:
    // 0x1a01b8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a01b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1a01bc:
    // 0x1a01bc: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1a01bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_1a01c0:
    // 0x1a01c0: 0x0  nop
    ctx->pc = 0x1a01c0u;
    // NOP
label_1a01c4:
    // 0x1a01c4: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x1a01c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1a01c8:
    // 0x1a01c8: 0x1020001f  beqz        $at, . + 4 + (0x1F << 2)
label_1a01cc:
    if (ctx->pc == 0x1A01CCu) {
        ctx->pc = 0x1A01D0u;
        goto label_1a01d0;
    }
    ctx->pc = 0x1A01C8u;
    {
        const bool branch_taken_0x1a01c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a01c8) {
            ctx->pc = 0x1A0248u;
            goto label_1a0248;
        }
    }
    ctx->pc = 0x1A01D0u;
label_1a01d0:
    // 0x1a01d0: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1a01d4:
    if (ctx->pc == 0x1A01D4u) {
        ctx->pc = 0x1A01D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A01D0u;
        // 0x1a01d4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A01D8u;
        goto label_1a01d8;
    }
    ctx->pc = 0x1A01D0u;
    {
        const bool branch_taken_0x1a01d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A01D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A01D0u;
        // 0x1a01d4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a01d0) {
            ctx->pc = 0x1A0248u;
            goto label_1a0248;
        }
    }
    ctx->pc = 0x1A01D8u;
label_1a01d8:
    // 0x1a01d8: 0x8cc30038  lw          $v1, 0x38($a2)
    ctx->pc = 0x1a01d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
label_1a01dc:
    // 0x1a01dc: 0x1860001a  blez        $v1, . + 4 + (0x1A << 2)
label_1a01e0:
    if (ctx->pc == 0x1A01E0u) {
        ctx->pc = 0x1A01E4u;
        goto label_1a01e4;
    }
    ctx->pc = 0x1A01DCu;
    {
        const bool branch_taken_0x1a01dc = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1a01dc) {
            ctx->pc = 0x1A0248u;
            goto label_1a0248;
        }
    }
    ctx->pc = 0x1A01E4u;
label_1a01e4:
    // 0x1a01e4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1a01e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a01e8:
    // 0x1a01e8: 0x8f390098  lw          $t9, 0x98($t9)
    ctx->pc = 0x1a01e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 152)));
label_1a01ec:
    // 0x1a01ec: 0x320f809  jalr        $t9
label_1a01f0:
    if (ctx->pc == 0x1A01F0u) {
        ctx->pc = 0x1A01F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A01ECu;
        // 0x1a01f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A01F4u;
        goto label_1a01f4;
    }
    ctx->pc = 0x1A01ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A01F4u);
        ctx->pc = 0x1A01F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A01ECu;
        // 0x1a01f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A01ECu, 0x1A01F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A01F4u;
label_1a01f4:
    // 0x1a01f4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1a01f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a01f8:
    // 0x1a01f8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1a01f8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1a01fc:
    // 0x1a01fc: 0x8f39009c  lw          $t9, 0x9C($t9)
    ctx->pc = 0x1a01fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 156)));
label_1a0200:
    // 0x1a0200: 0x320f809  jalr        $t9
label_1a0204:
    if (ctx->pc == 0x1A0204u) {
        ctx->pc = 0x1A0204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0200u;
        // 0x1a0204: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0208u;
        goto label_1a0208;
    }
    ctx->pc = 0x1A0200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A0208u);
        ctx->pc = 0x1A0204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0200u;
        // 0x1a0204: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0200u, 0x1A0208u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A0208u;
label_1a0208:
    // 0x1a0208: 0x0  nop
    ctx->pc = 0x1a0208u;
    // NOP
label_1a020c:
    // 0x1a020c: 0x0  nop
    ctx->pc = 0x1a020cu;
    // NOP
label_1a0210:
    // 0x1a0210: 0x4600a043  div.s       $f1, $f20, $f0
    ctx->pc = 0x1a0210u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
label_1a0214:
    // 0x1a0214: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x1a0214u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
label_1a0218:
    // 0x1a0218: 0x8e430664  lw          $v1, 0x664($s2)
    ctx->pc = 0x1a0218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1636)));
label_1a021c:
    // 0x1a021c: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x1a021cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1a0220:
    // 0x1a0220: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1a0220u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a0224:
    // 0x1a0224: 0x0  nop
    ctx->pc = 0x1a0224u;
    // NOP
label_1a0228:
    // 0x1a0228: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a0228u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1a022c:
    // 0x1a022c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a022cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1a0230:
    // 0x1a0230: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1a0230u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_1a0234:
    // 0x1a0234: 0x0  nop
    ctx->pc = 0x1a0234u;
    // NOP
label_1a0238:
    // 0x1a0238: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x1a0238u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1a023c:
    // 0x1a023c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1a0240:
    if (ctx->pc == 0x1A0240u) {
        ctx->pc = 0x1A0244u;
        goto label_1a0244;
    }
    ctx->pc = 0x1A023Cu;
    {
        const bool branch_taken_0x1a023c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a023c) {
            ctx->pc = 0x1A0248u;
            goto label_1a0248;
        }
    }
    ctx->pc = 0x1A0244u;
label_1a0244:
    // 0x1a0244: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a0244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a0248:
    // 0x1a0248: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_1a024c:
    if (ctx->pc == 0x1A024Cu) {
        ctx->pc = 0x1A0250u;
        goto label_1a0250;
    }
    ctx->pc = 0x1A0248u;
    {
        const bool branch_taken_0x1a0248 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0248) {
            ctx->pc = 0x1A02B4u;
            goto label_1a02b4;
        }
    }
    ctx->pc = 0x1A0250u;
label_1a0250:
    // 0x1a0250: 0x8e430664  lw          $v1, 0x664($s2)
    ctx->pc = 0x1a0250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1636)));
label_1a0254:
    // 0x1a0254: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1a0254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1a0258:
    // 0x1a0258: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x1a0258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_1a025c:
    // 0x1a025c: 0xae430664  sw          $v1, 0x664($s2)
    ctx->pc = 0x1a025cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1636), GPR_U32(ctx, 3));
label_1a0260:
    // 0x1a0260: 0x8e430664  lw          $v1, 0x664($s2)
    ctx->pc = 0x1a0260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1636)));
label_1a0264:
    // 0x1a0264: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1a0264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1a0268:
    // 0x1a0268: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_1a026c:
    if (ctx->pc == 0x1A026Cu) {
        ctx->pc = 0x1A026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0268u;
        // 0x1a026c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0270u;
        goto label_1a0270;
    }
    ctx->pc = 0x1A0268u;
    {
        const bool branch_taken_0x1a0268 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0268u;
        // 0x1a026c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0268) {
            ctx->pc = 0x1A0288u;
            goto label_1a0288;
        }
    }
    ctx->pc = 0x1A0270u;
label_1a0270:
    // 0x1a0270: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a0270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a0274:
    // 0x1a0274: 0xc063e08  jal         func_18F820
label_1a0278:
    if (ctx->pc == 0x1A0278u) {
        ctx->pc = 0x1A0278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0274u;
        // 0x1a0278: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A027Cu;
        goto label_1a027c;
    }
    ctx->pc = 0x1A0274u;
    SET_GPR_U32(ctx, 31, 0x1A027Cu);
    ctx->pc = 0x1A0278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0274u;
    // 0x1a0278: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1A0274u, 0x1A027Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A027Cu;
label_1a027c:
    // 0x1a027c: 0x1000000d  b           . + 4 + (0xD << 2)
label_1a0280:
    if (ctx->pc == 0x1A0280u) {
        ctx->pc = 0x1A0284u;
        goto label_1a0284;
    }
    ctx->pc = 0x1A027Cu;
    {
        const bool branch_taken_0x1a027c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a027c) {
            ctx->pc = 0x1A02B4u;
            goto label_1a02b4;
        }
    }
    ctx->pc = 0x1A0284u;
label_1a0284:
    // 0x1a0284: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a0284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a0288:
    // 0x1a0288: 0xc063e08  jal         func_18F820
label_1a028c:
    if (ctx->pc == 0x1A028Cu) {
        ctx->pc = 0x1A028Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0288u;
        // 0x1a028c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0290u;
        goto label_1a0290;
    }
    ctx->pc = 0x1A0288u;
    SET_GPR_U32(ctx, 31, 0x1A0290u);
    ctx->pc = 0x1A028Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0288u;
    // 0x1a028c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1A0288u, 0x1A0290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0290u;
label_1a0290:
    // 0x1a0290: 0x10000008  b           . + 4 + (0x8 << 2)
label_1a0294:
    if (ctx->pc == 0x1A0294u) {
        ctx->pc = 0x1A0298u;
        goto label_1a0298;
    }
    ctx->pc = 0x1A0290u;
    {
        const bool branch_taken_0x1a0290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0290) {
            ctx->pc = 0x1A02B4u;
            goto label_1a02b4;
        }
    }
    ctx->pc = 0x1A0298u;
label_1a0298:
    // 0x1a0298: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_1a029c:
    if (ctx->pc == 0x1A029Cu) {
        ctx->pc = 0x1A02A0u;
        goto label_1a02a0;
    }
    ctx->pc = 0x1A0298u;
    {
        const bool branch_taken_0x1a0298 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0298) {
            ctx->pc = 0x1A02B4u;
            goto label_1a02b4;
        }
    }
    ctx->pc = 0x1A02A0u;
label_1a02a0:
    // 0x1a02a0: 0x8e59031c  lw          $t9, 0x31C($s2)
    ctx->pc = 0x1a02a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 796)));
label_1a02a4:
    // 0x1a02a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a02a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a02a8:
    // 0x1a02a8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1a02a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1a02ac:
    // 0x1a02ac: 0x320f809  jalr        $t9
label_1a02b0:
    if (ctx->pc == 0x1A02B0u) {
        ctx->pc = 0x1A02B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A02ACu;
        // 0x1a02b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A02B4u;
        goto label_1a02b4;
    }
    ctx->pc = 0x1A02ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A02B4u);
        ctx->pc = 0x1A02B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A02ACu;
        // 0x1a02b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A02ACu, 0x1A02B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A02B4u;
label_1a02b4:
    // 0x1a02b4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a02b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a02b8:
    // 0x1a02b8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1a02b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a02bc:
    // 0x1a02bc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1a02bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a02c0:
    // 0x1a02c0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1a02c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a02c4:
    // 0x1a02c4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a02c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a02c8:
    // 0x1a02c8: 0x3e00008  jr          $ra
label_1a02cc:
    if (ctx->pc == 0x1A02CCu) {
        ctx->pc = 0x1A02CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A02C8u;
        // 0x1a02cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A02D0u;
        goto label_fallthrough_0x1a02c8;
    }
    ctx->pc = 0x1A02C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A02CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A02C8u;
        // 0x1a02cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A02C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a02c8:
    ctx->pc = 0x1A02D0u;
}
