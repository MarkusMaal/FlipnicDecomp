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

// Function: FUN_00129c40
// Address: 0x129c40 - 0x129ef0
void FUN_00129c40_0x129c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00129c40_0x129c40");
#endif

    switch (ctx->pc) {
        case 0x129c40u: goto label_129c40;
        case 0x129c44u: goto label_129c44;
        case 0x129c48u: goto label_129c48;
        case 0x129c4cu: goto label_129c4c;
        case 0x129c50u: goto label_129c50;
        case 0x129c54u: goto label_129c54;
        case 0x129c58u: goto label_129c58;
        case 0x129c5cu: goto label_129c5c;
        case 0x129c60u: goto label_129c60;
        case 0x129c64u: goto label_129c64;
        case 0x129c68u: goto label_129c68;
        case 0x129c6cu: goto label_129c6c;
        case 0x129c70u: goto label_129c70;
        case 0x129c74u: goto label_129c74;
        case 0x129c78u: goto label_129c78;
        case 0x129c7cu: goto label_129c7c;
        case 0x129c80u: goto label_129c80;
        case 0x129c84u: goto label_129c84;
        case 0x129c88u: goto label_129c88;
        case 0x129c8cu: goto label_129c8c;
        case 0x129c90u: goto label_129c90;
        case 0x129c94u: goto label_129c94;
        case 0x129c98u: goto label_129c98;
        case 0x129c9cu: goto label_129c9c;
        case 0x129ca0u: goto label_129ca0;
        case 0x129ca4u: goto label_129ca4;
        case 0x129ca8u: goto label_129ca8;
        case 0x129cacu: goto label_129cac;
        case 0x129cb0u: goto label_129cb0;
        case 0x129cb4u: goto label_129cb4;
        case 0x129cb8u: goto label_129cb8;
        case 0x129cbcu: goto label_129cbc;
        case 0x129cc0u: goto label_129cc0;
        case 0x129cc4u: goto label_129cc4;
        case 0x129cc8u: goto label_129cc8;
        case 0x129cccu: goto label_129ccc;
        case 0x129cd0u: goto label_129cd0;
        case 0x129cd4u: goto label_129cd4;
        case 0x129cd8u: goto label_129cd8;
        case 0x129cdcu: goto label_129cdc;
        case 0x129ce0u: goto label_129ce0;
        case 0x129ce4u: goto label_129ce4;
        case 0x129ce8u: goto label_129ce8;
        case 0x129cecu: goto label_129cec;
        case 0x129cf0u: goto label_129cf0;
        case 0x129cf4u: goto label_129cf4;
        case 0x129cf8u: goto label_129cf8;
        case 0x129cfcu: goto label_129cfc;
        case 0x129d00u: goto label_129d00;
        case 0x129d04u: goto label_129d04;
        case 0x129d08u: goto label_129d08;
        case 0x129d0cu: goto label_129d0c;
        case 0x129d10u: goto label_129d10;
        case 0x129d14u: goto label_129d14;
        case 0x129d18u: goto label_129d18;
        case 0x129d1cu: goto label_129d1c;
        case 0x129d20u: goto label_129d20;
        case 0x129d24u: goto label_129d24;
        case 0x129d28u: goto label_129d28;
        case 0x129d2cu: goto label_129d2c;
        case 0x129d30u: goto label_129d30;
        case 0x129d34u: goto label_129d34;
        case 0x129d38u: goto label_129d38;
        case 0x129d3cu: goto label_129d3c;
        case 0x129d40u: goto label_129d40;
        case 0x129d44u: goto label_129d44;
        case 0x129d48u: goto label_129d48;
        case 0x129d4cu: goto label_129d4c;
        case 0x129d50u: goto label_129d50;
        case 0x129d54u: goto label_129d54;
        case 0x129d58u: goto label_129d58;
        case 0x129d5cu: goto label_129d5c;
        case 0x129d60u: goto label_129d60;
        case 0x129d64u: goto label_129d64;
        case 0x129d68u: goto label_129d68;
        case 0x129d6cu: goto label_129d6c;
        case 0x129d70u: goto label_129d70;
        case 0x129d74u: goto label_129d74;
        case 0x129d78u: goto label_129d78;
        case 0x129d7cu: goto label_129d7c;
        case 0x129d80u: goto label_129d80;
        case 0x129d84u: goto label_129d84;
        case 0x129d88u: goto label_129d88;
        case 0x129d8cu: goto label_129d8c;
        case 0x129d90u: goto label_129d90;
        case 0x129d94u: goto label_129d94;
        case 0x129d98u: goto label_129d98;
        case 0x129d9cu: goto label_129d9c;
        case 0x129da0u: goto label_129da0;
        case 0x129da4u: goto label_129da4;
        case 0x129da8u: goto label_129da8;
        case 0x129dacu: goto label_129dac;
        case 0x129db0u: goto label_129db0;
        case 0x129db4u: goto label_129db4;
        case 0x129db8u: goto label_129db8;
        case 0x129dbcu: goto label_129dbc;
        case 0x129dc0u: goto label_129dc0;
        case 0x129dc4u: goto label_129dc4;
        case 0x129dc8u: goto label_129dc8;
        case 0x129dccu: goto label_129dcc;
        case 0x129dd0u: goto label_129dd0;
        case 0x129dd4u: goto label_129dd4;
        case 0x129dd8u: goto label_129dd8;
        case 0x129ddcu: goto label_129ddc;
        case 0x129de0u: goto label_129de0;
        case 0x129de4u: goto label_129de4;
        case 0x129de8u: goto label_129de8;
        case 0x129decu: goto label_129dec;
        case 0x129df0u: goto label_129df0;
        case 0x129df4u: goto label_129df4;
        case 0x129df8u: goto label_129df8;
        case 0x129dfcu: goto label_129dfc;
        case 0x129e00u: goto label_129e00;
        case 0x129e04u: goto label_129e04;
        case 0x129e08u: goto label_129e08;
        case 0x129e0cu: goto label_129e0c;
        case 0x129e10u: goto label_129e10;
        case 0x129e14u: goto label_129e14;
        case 0x129e18u: goto label_129e18;
        case 0x129e1cu: goto label_129e1c;
        case 0x129e20u: goto label_129e20;
        case 0x129e24u: goto label_129e24;
        case 0x129e28u: goto label_129e28;
        case 0x129e2cu: goto label_129e2c;
        case 0x129e30u: goto label_129e30;
        case 0x129e34u: goto label_129e34;
        case 0x129e38u: goto label_129e38;
        case 0x129e3cu: goto label_129e3c;
        case 0x129e40u: goto label_129e40;
        case 0x129e44u: goto label_129e44;
        case 0x129e48u: goto label_129e48;
        case 0x129e4cu: goto label_129e4c;
        case 0x129e50u: goto label_129e50;
        case 0x129e54u: goto label_129e54;
        case 0x129e58u: goto label_129e58;
        case 0x129e5cu: goto label_129e5c;
        case 0x129e60u: goto label_129e60;
        case 0x129e64u: goto label_129e64;
        case 0x129e68u: goto label_129e68;
        case 0x129e6cu: goto label_129e6c;
        case 0x129e70u: goto label_129e70;
        case 0x129e74u: goto label_129e74;
        case 0x129e78u: goto label_129e78;
        case 0x129e7cu: goto label_129e7c;
        case 0x129e80u: goto label_129e80;
        case 0x129e84u: goto label_129e84;
        case 0x129e88u: goto label_129e88;
        case 0x129e8cu: goto label_129e8c;
        case 0x129e90u: goto label_129e90;
        case 0x129e94u: goto label_129e94;
        case 0x129e98u: goto label_129e98;
        case 0x129e9cu: goto label_129e9c;
        case 0x129ea0u: goto label_129ea0;
        case 0x129ea4u: goto label_129ea4;
        case 0x129ea8u: goto label_129ea8;
        case 0x129eacu: goto label_129eac;
        case 0x129eb0u: goto label_129eb0;
        case 0x129eb4u: goto label_129eb4;
        case 0x129eb8u: goto label_129eb8;
        case 0x129ebcu: goto label_129ebc;
        case 0x129ec0u: goto label_129ec0;
        case 0x129ec4u: goto label_129ec4;
        case 0x129ec8u: goto label_129ec8;
        case 0x129eccu: goto label_129ecc;
        case 0x129ed0u: goto label_129ed0;
        case 0x129ed4u: goto label_129ed4;
        case 0x129ed8u: goto label_129ed8;
        case 0x129edcu: goto label_129edc;
        case 0x129ee0u: goto label_129ee0;
        case 0x129ee4u: goto label_129ee4;
        case 0x129ee8u: goto label_129ee8;
        case 0x129eecu: goto label_129eec;
        default: break;
    }

    ctx->pc = 0x129c40u;

label_129c40:
    // 0x129c40: 0x27bdfde0  addiu       $sp, $sp, -0x220
    ctx->pc = 0x129c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966752));
label_129c44:
    // 0x129c44: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x129c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_129c48:
    // 0x129c48: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x129c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_129c4c:
    // 0x129c4c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x129c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_129c50:
    // 0x129c50: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x129c50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_129c54:
    // 0x129c54: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x129c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_129c58:
    // 0x129c58: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x129c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_129c5c:
    // 0x129c5c: 0xc07d3ac  jal         func_1F4EB0
label_129c60:
    if (ctx->pc == 0x129C60u) {
        ctx->pc = 0x129C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129C5Cu;
        // 0x129c60: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x129C64u;
        goto label_129c64;
    }
    ctx->pc = 0x129C5Cu;
    SET_GPR_U32(ctx, 31, 0x129C64u);
    ctx->pc = 0x129C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129C5Cu;
    // 0x129c60: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x129C5Cu, 0x129C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129C64u;
label_129c64:
    // 0x129c64: 0xc07d3ac  jal         func_1F4EB0
label_129c68:
    if (ctx->pc == 0x129C68u) {
        ctx->pc = 0x129C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129C64u;
        // 0x129c68: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129C6Cu;
        goto label_129c6c;
    }
    ctx->pc = 0x129C64u;
    SET_GPR_U32(ctx, 31, 0x129C6Cu);
    ctx->pc = 0x129C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129C64u;
    // 0x129c68: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x129C64u, 0x129C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129C6Cu;
label_129c6c:
    // 0x129c6c: 0x3c02bc23  lui         $v0, 0xBC23
    ctx->pc = 0x129c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
label_129c70:
    // 0x129c70: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x129c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_129c74:
    // 0x129c74: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x129c74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
label_129c78:
    // 0x129c78: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x129c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_129c7c:
    // 0x129c7c: 0xc04c6d8  jal         func_131B60
label_129c80:
    if (ctx->pc == 0x129C80u) {
        ctx->pc = 0x129C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129C7Cu;
        // 0x129c80: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129C84u;
        goto label_129c84;
    }
    ctx->pc = 0x129C7Cu;
    SET_GPR_U32(ctx, 31, 0x129C84u);
    ctx->pc = 0x129C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129C7Cu;
    // 0x129c80: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131B60u, 0x129C7Cu, 0x129C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129C84u;
label_129c84:
    // 0x129c84: 0x3c02bba3  lui         $v0, 0xBBA3
    ctx->pc = 0x129c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48035 << 16));
label_129c88:
    // 0x129c88: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x129c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_129c8c:
    // 0x129c8c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x129c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_129c90:
    // 0x129c90: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x129c90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_129c94:
    // 0x129c94: 0xc07d428  jal         func_1F50A0
label_129c98:
    if (ctx->pc == 0x129C98u) {
        ctx->pc = 0x129C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129C94u;
        // 0x129c98: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129C9Cu;
        goto label_129c9c;
    }
    ctx->pc = 0x129C94u;
    SET_GPR_U32(ctx, 31, 0x129C9Cu);
    ctx->pc = 0x129C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129C94u;
    // 0x129c98: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F50A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F50A0u, 0x129C94u, 0x129C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129C9Cu;
label_129c9c:
    // 0x129c9c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x129c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_129ca0:
    // 0x129ca0: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x129ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_129ca4:
    // 0x129ca4: 0xc07d2ee  jal         func_1F4BB8
label_129ca8:
    if (ctx->pc == 0x129CA8u) {
        ctx->pc = 0x129CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129CA4u;
        // 0x129ca8: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129CACu;
        goto label_129cac;
    }
    ctx->pc = 0x129CA4u;
    SET_GPR_U32(ctx, 31, 0x129CACu);
    ctx->pc = 0x129CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129CA4u;
    // 0x129ca8: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x129CA4u, 0x129CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129CACu;
label_129cac:
    // 0x129cac: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x129cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_129cb0:
    // 0x129cb0: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x129cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_129cb4:
    // 0x129cb4: 0xc07d2ee  jal         func_1F4BB8
label_129cb8:
    if (ctx->pc == 0x129CB8u) {
        ctx->pc = 0x129CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129CB4u;
        // 0x129cb8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129CBCu;
        goto label_129cbc;
    }
    ctx->pc = 0x129CB4u;
    SET_GPR_U32(ctx, 31, 0x129CBCu);
    ctx->pc = 0x129CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129CB4u;
    // 0x129cb8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x129CB4u, 0x129CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129CBCu;
label_129cbc:
    // 0x129cbc: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x129cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_129cc0:
    // 0x129cc0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x129cc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_129cc4:
    // 0x129cc4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x129cc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_129cc8:
    // 0x129cc8: 0x320f809  jalr        $t9
label_129ccc:
    if (ctx->pc == 0x129CCCu) {
        ctx->pc = 0x129CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129CC8u;
        // 0x129ccc: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129CD0u;
        goto label_129cd0;
    }
    ctx->pc = 0x129CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x129CD0u);
        ctx->pc = 0x129CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129CC8u;
        // 0x129ccc: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129CC8u, 0x129CD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x129CD0u;
label_129cd0:
    // 0x129cd0: 0xc04b1e4  jal         func_12C790
label_129cd4:
    if (ctx->pc == 0x129CD4u) {
        ctx->pc = 0x129CD8u;
        goto label_129cd8;
    }
    ctx->pc = 0x129CD0u;
    SET_GPR_U32(ctx, 31, 0x129CD8u);
    ctx->pc = 0x12C790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C790u, 0x129CD0u, 0x129CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129CD8u;
label_129cd8:
    // 0x129cd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x129cd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_129cdc:
    // 0x129cdc: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x129cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_129ce0:
    // 0x129ce0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x129ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_129ce4:
    // 0x129ce4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x129ce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_129ce8:
    // 0x129ce8: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x129ce8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_129cec:
    // 0x129cec: 0x0  nop
    ctx->pc = 0x129cecu;
    // NOP
label_129cf0:
    // 0x129cf0: 0x460063c6  mov.s       $f15, $f12
    ctx->pc = 0x129cf0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
label_129cf4:
    // 0x129cf4: 0xc04b1f8  jal         func_12C7E0
label_129cf8:
    if (ctx->pc == 0x129CF8u) {
        ctx->pc = 0x129CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129CF4u;
        // 0x129cf8: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x129CFCu;
        goto label_129cfc;
    }
    ctx->pc = 0x129CF4u;
    SET_GPR_U32(ctx, 31, 0x129CFCu);
    ctx->pc = 0x129CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129CF4u;
    // 0x129cf8: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C7E0u, 0x129CF4u, 0x129CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129CFCu;
label_129cfc:
    // 0x129cfc: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x129cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_129d00:
    // 0x129d00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x129d00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_129d04:
    // 0x129d04: 0xc07fe6c  jal         func_1FF9B0
label_129d08:
    if (ctx->pc == 0x129D08u) {
        ctx->pc = 0x129D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129D04u;
        // 0x129d08: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129D0Cu;
        goto label_129d0c;
    }
    ctx->pc = 0x129D04u;
    SET_GPR_U32(ctx, 31, 0x129D0Cu);
    ctx->pc = 0x129D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129D04u;
    // 0x129d08: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF9B0u, 0x129D04u, 0x129D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129D0Cu;
label_129d0c:
    // 0x129d0c: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x129d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_129d10:
    // 0x129d10: 0xafa20168  sw          $v0, 0x168($sp)
    ctx->pc = 0x129d10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 2));
label_129d14:
    // 0x129d14: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x129d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_129d18:
    // 0x129d18: 0xc04c6dc  jal         func_131B70
label_129d1c:
    if (ctx->pc == 0x129D1Cu) {
        ctx->pc = 0x129D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129D18u;
        // 0x129d1c: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129D20u;
        goto label_129d20;
    }
    ctx->pc = 0x129D18u;
    SET_GPR_U32(ctx, 31, 0x129D20u);
    ctx->pc = 0x129D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129D18u;
    // 0x129d1c: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131B70u, 0x129D18u, 0x129D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129D20u;
label_129d20:
    // 0x129d20: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x129d20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_129d24:
    // 0x129d24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x129d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_129d28:
    // 0x129d28: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x129d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_129d2c:
    // 0x129d2c: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x129d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_129d30:
    // 0x129d30: 0xc04b218  jal         func_12C860
label_129d34:
    if (ctx->pc == 0x129D34u) {
        ctx->pc = 0x129D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129D30u;
        // 0x129d34: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129D38u;
        goto label_129d38;
    }
    ctx->pc = 0x129D30u;
    SET_GPR_U32(ctx, 31, 0x129D38u);
    ctx->pc = 0x129D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129D30u;
    // 0x129d34: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C860u, 0x129D30u, 0x129D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129D38u;
label_129d38:
    // 0x129d38: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x129d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_129d3c:
    // 0x129d3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x129d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_129d40:
    // 0x129d40: 0xc07fe6c  jal         func_1FF9B0
label_129d44:
    if (ctx->pc == 0x129D44u) {
        ctx->pc = 0x129D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129D40u;
        // 0x129d44: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129D48u;
        goto label_129d48;
    }
    ctx->pc = 0x129D40u;
    SET_GPR_U32(ctx, 31, 0x129D48u);
    ctx->pc = 0x129D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129D40u;
    // 0x129d44: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF9B0u, 0x129D40u, 0x129D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129D48u;
label_129d48:
    // 0x129d48: 0xc04c720  jal         func_131C80
label_129d4c:
    if (ctx->pc == 0x129D4Cu) {
        ctx->pc = 0x129D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129D48u;
        // 0x129d4c: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129D50u;
        goto label_129d50;
    }
    ctx->pc = 0x129D48u;
    SET_GPR_U32(ctx, 31, 0x129D50u);
    ctx->pc = 0x129D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129D48u;
    // 0x129d4c: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131C80u, 0x129D48u, 0x129D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129D50u;
label_129d50:
    // 0x129d50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x129d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_129d54:
    // 0x129d54: 0xc04c6d8  jal         func_131B60
label_129d58:
    if (ctx->pc == 0x129D58u) {
        ctx->pc = 0x129D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129D54u;
        // 0x129d58: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129D5Cu;
        goto label_129d5c;
    }
    ctx->pc = 0x129D54u;
    SET_GPR_U32(ctx, 31, 0x129D5Cu);
    ctx->pc = 0x129D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129D54u;
    // 0x129d58: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131B60u, 0x129D54u, 0x129D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129D5Cu;
label_129d5c:
    // 0x129d5c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x129d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_129d60:
    // 0x129d60: 0x27b10160  addiu       $s1, $sp, 0x160
    ctx->pc = 0x129d60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_129d64:
    // 0x129d64: 0xc04c6ec  jal         func_131BB0
label_129d68:
    if (ctx->pc == 0x129D68u) {
        ctx->pc = 0x129D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129D64u;
        // 0x129d68: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129D6Cu;
        goto label_129d6c;
    }
    ctx->pc = 0x129D64u;
    SET_GPR_U32(ctx, 31, 0x129D6Cu);
    ctx->pc = 0x129D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129D64u;
    // 0x129d68: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131BB0u, 0x129D64u, 0x129D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129D6Cu;
label_129d6c:
    // 0x129d6c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x129d6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_129d70:
    // 0x129d70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x129d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_129d74:
    // 0x129d74: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x129d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_129d78:
    // 0x129d78: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x129d78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_129d7c:
    // 0x129d7c: 0xc04b218  jal         func_12C860
label_129d80:
    if (ctx->pc == 0x129D80u) {
        ctx->pc = 0x129D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129D7Cu;
        // 0x129d80: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129D84u;
        goto label_129d84;
    }
    ctx->pc = 0x129D7Cu;
    SET_GPR_U32(ctx, 31, 0x129D84u);
    ctx->pc = 0x129D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129D7Cu;
    // 0x129d80: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C860u, 0x129D7Cu, 0x129D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129D84u;
label_129d84:
    // 0x129d84: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x129d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_129d88:
    // 0x129d88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x129d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_129d8c:
    // 0x129d8c: 0xafa201b4  sw          $v0, 0x1B4($sp)
    ctx->pc = 0x129d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 2));
label_129d90:
    // 0x129d90: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x129d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_129d94:
    // 0x129d94: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x129d94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_129d98:
    // 0x129d98: 0xafa001b0  sw          $zero, 0x1B0($sp)
    ctx->pc = 0x129d98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 0));
label_129d9c:
    // 0x129d9c: 0xc07d300  jal         func_1F4C00
label_129da0:
    if (ctx->pc == 0x129DA0u) {
        ctx->pc = 0x129DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129D9Cu;
        // 0x129da0: 0xafa001b8  sw          $zero, 0x1B8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129DA4u;
        goto label_129da4;
    }
    ctx->pc = 0x129D9Cu;
    SET_GPR_U32(ctx, 31, 0x129DA4u);
    ctx->pc = 0x129DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129D9Cu;
    // 0x129da0: 0xafa001b8  sw          $zero, 0x1B8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C00u, 0x129D9Cu, 0x129DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129DA4u;
label_129da4:
    // 0x129da4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x129da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_129da8:
    // 0x129da8: 0xc07d312  jal         func_1F4C48
label_129dac:
    if (ctx->pc == 0x129DACu) {
        ctx->pc = 0x129DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129DA8u;
        // 0x129dac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129DB0u;
        goto label_129db0;
    }
    ctx->pc = 0x129DA8u;
    SET_GPR_U32(ctx, 31, 0x129DB0u);
    ctx->pc = 0x129DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129DA8u;
    // 0x129dac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x129DA8u, 0x129DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129DB0u;
label_129db0:
    // 0x129db0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x129db0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_129db4:
    // 0x129db4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x129db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_129db8:
    // 0x129db8: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x129db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_129dbc:
    // 0x129dbc: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x129dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_129dc0:
    // 0x129dc0: 0xc04b218  jal         func_12C860
label_129dc4:
    if (ctx->pc == 0x129DC4u) {
        ctx->pc = 0x129DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129DC0u;
        // 0x129dc4: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129DC8u;
        goto label_129dc8;
    }
    ctx->pc = 0x129DC0u;
    SET_GPR_U32(ctx, 31, 0x129DC8u);
    ctx->pc = 0x129DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129DC0u;
    // 0x129dc4: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C860u, 0x129DC0u, 0x129DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129DC8u;
label_129dc8:
    // 0x129dc8: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x129dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_129dcc:
    // 0x129dcc: 0xc04c6dc  jal         func_131B70
label_129dd0:
    if (ctx->pc == 0x129DD0u) {
        ctx->pc = 0x129DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129DCCu;
        // 0x129dd0: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129DD4u;
        goto label_129dd4;
    }
    ctx->pc = 0x129DCCu;
    SET_GPR_U32(ctx, 31, 0x129DD4u);
    ctx->pc = 0x129DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129DCCu;
    // 0x129dd0: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131B70u, 0x129DCCu, 0x129DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129DD4u;
label_129dd4:
    // 0x129dd4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x129dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_129dd8:
    // 0x129dd8: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x129dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_129ddc:
    // 0x129ddc: 0xafa201e8  sw          $v0, 0x1E8($sp)
    ctx->pc = 0x129ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 2));
label_129de0:
    // 0x129de0: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x129de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_129de4:
    // 0x129de4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x129de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_129de8:
    // 0x129de8: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x129de8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_129dec:
    // 0x129dec: 0xafa201ec  sw          $v0, 0x1EC($sp)
    ctx->pc = 0x129decu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 2));
label_129df0:
    // 0x129df0: 0xafa001e0  sw          $zero, 0x1E0($sp)
    ctx->pc = 0x129df0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 0));
label_129df4:
    // 0x129df4: 0xc07d2e2  jal         func_1F4B88
label_129df8:
    if (ctx->pc == 0x129DF8u) {
        ctx->pc = 0x129DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129DF4u;
        // 0x129df8: 0xafa001e4  sw          $zero, 0x1E4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129DFCu;
        goto label_129dfc;
    }
    ctx->pc = 0x129DF4u;
    SET_GPR_U32(ctx, 31, 0x129DFCu);
    ctx->pc = 0x129DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129DF4u;
    // 0x129df8: 0xafa001e4  sw          $zero, 0x1E4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4B88u, 0x129DF4u, 0x129DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129DFCu;
label_129dfc:
    // 0x129dfc: 0xc04c720  jal         func_131C80
label_129e00:
    if (ctx->pc == 0x129E00u) {
        ctx->pc = 0x129E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129DFCu;
        // 0x129e00: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129E04u;
        goto label_129e04;
    }
    ctx->pc = 0x129DFCu;
    SET_GPR_U32(ctx, 31, 0x129E04u);
    ctx->pc = 0x129E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129DFCu;
    // 0x129e00: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131C80u, 0x129DFCu, 0x129E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129E04u;
label_129e04:
    // 0x129e04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x129e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_129e08:
    // 0x129e08: 0xc04c6dc  jal         func_131B70
label_129e0c:
    if (ctx->pc == 0x129E0Cu) {
        ctx->pc = 0x129E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129E08u;
        // 0x129e0c: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129E10u;
        goto label_129e10;
    }
    ctx->pc = 0x129E08u;
    SET_GPR_U32(ctx, 31, 0x129E10u);
    ctx->pc = 0x129E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129E08u;
    // 0x129e0c: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131B70u, 0x129E08u, 0x129E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129E10u;
label_129e10:
    // 0x129e10: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x129e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_129e14:
    // 0x129e14: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x129e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_129e18:
    // 0x129e18: 0xafa2016c  sw          $v0, 0x16C($sp)
    ctx->pc = 0x129e18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 2));
label_129e1c:
    // 0x129e1c: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x129e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_129e20:
    // 0x129e20: 0xc07d2e2  jal         func_1F4B88
label_129e24:
    if (ctx->pc == 0x129E24u) {
        ctx->pc = 0x129E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129E20u;
        // 0x129e24: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129E28u;
        goto label_129e28;
    }
    ctx->pc = 0x129E20u;
    SET_GPR_U32(ctx, 31, 0x129E28u);
    ctx->pc = 0x129E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129E20u;
    // 0x129e24: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4B88u, 0x129E20u, 0x129E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129E28u;
label_129e28:
    // 0x129e28: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x129e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_129e2c:
    // 0x129e2c: 0xc07d38e  jal         func_1F4E38
label_129e30:
    if (ctx->pc == 0x129E30u) {
        ctx->pc = 0x129E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129E2Cu;
        // 0x129e30: 0x27a501c0  addiu       $a1, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129E34u;
        goto label_129e34;
    }
    ctx->pc = 0x129E2Cu;
    SET_GPR_U32(ctx, 31, 0x129E34u);
    ctx->pc = 0x129E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129E2Cu;
    // 0x129e30: 0x27a501c0  addiu       $a1, $sp, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x129E2Cu, 0x129E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129E34u;
label_129e34:
    // 0x129e34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x129e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_129e38:
    // 0x129e38: 0xc07d38e  jal         func_1F4E38
label_129e3c:
    if (ctx->pc == 0x129E3Cu) {
        ctx->pc = 0x129E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129E38u;
        // 0x129e3c: 0x27a501d0  addiu       $a1, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129E40u;
        goto label_129e40;
    }
    ctx->pc = 0x129E38u;
    SET_GPR_U32(ctx, 31, 0x129E40u);
    ctx->pc = 0x129E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129E38u;
    // 0x129e3c: 0x27a501d0  addiu       $a1, $sp, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x129E38u, 0x129E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129E40u;
label_129e40:
    // 0x129e40: 0xc07d3ac  jal         func_1F4EB0
label_129e44:
    if (ctx->pc == 0x129E44u) {
        ctx->pc = 0x129E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129E40u;
        // 0x129e44: 0x27a40170  addiu       $a0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129E48u;
        goto label_129e48;
    }
    ctx->pc = 0x129E40u;
    SET_GPR_U32(ctx, 31, 0x129E48u);
    ctx->pc = 0x129E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129E40u;
    // 0x129e44: 0x27a40170  addiu       $a0, $sp, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x129E40u, 0x129E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129E48u;
label_129e48:
    // 0x129e48: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x129e48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_129e4c:
    // 0x129e4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x129e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_129e50:
    // 0x129e50: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x129e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_129e54:
    // 0x129e54: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x129e54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_129e58:
    // 0x129e58: 0xc04b218  jal         func_12C860
label_129e5c:
    if (ctx->pc == 0x129E5Cu) {
        ctx->pc = 0x129E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129E58u;
        // 0x129e5c: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129E60u;
        goto label_129e60;
    }
    ctx->pc = 0x129E58u;
    SET_GPR_U32(ctx, 31, 0x129E60u);
    ctx->pc = 0x129E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129E58u;
    // 0x129e5c: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C860u, 0x129E58u, 0x129E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129E60u;
label_129e60:
    // 0x129e60: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x129e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_129e64:
    // 0x129e64: 0xc04c6f4  jal         func_131BD0
label_129e68:
    if (ctx->pc == 0x129E68u) {
        ctx->pc = 0x129E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129E64u;
        // 0x129e68: 0x27a50210  addiu       $a1, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129E6Cu;
        goto label_129e6c;
    }
    ctx->pc = 0x129E64u;
    SET_GPR_U32(ctx, 31, 0x129E6Cu);
    ctx->pc = 0x129E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129E64u;
    // 0x129e68: 0x27a50210  addiu       $a1, $sp, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131BD0u, 0x129E64u, 0x129E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129E6Cu;
label_129e6c:
    // 0x129e6c: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x129e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_129e70:
    // 0x129e70: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x129e70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_129e74:
    // 0x129e74: 0xc07d370  jal         func_1F4DC0
label_129e78:
    if (ctx->pc == 0x129E78u) {
        ctx->pc = 0x129E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129E74u;
        // 0x129e78: 0x27a60210  addiu       $a2, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129E7Cu;
        goto label_129e7c;
    }
    ctx->pc = 0x129E74u;
    SET_GPR_U32(ctx, 31, 0x129E7Cu);
    ctx->pc = 0x129E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129E74u;
    // 0x129e78: 0x27a60210  addiu       $a2, $sp, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DC0u, 0x129E74u, 0x129E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129E7Cu;
label_129e7c:
    // 0x129e7c: 0xc04c720  jal         func_131C80
label_129e80:
    if (ctx->pc == 0x129E80u) {
        ctx->pc = 0x129E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129E7Cu;
        // 0x129e80: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129E84u;
        goto label_129e84;
    }
    ctx->pc = 0x129E7Cu;
    SET_GPR_U32(ctx, 31, 0x129E84u);
    ctx->pc = 0x129E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129E7Cu;
    // 0x129e80: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131C80u, 0x129E7Cu, 0x129E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129E84u;
label_129e84:
    // 0x129e84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x129e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_129e88:
    // 0x129e88: 0xc04c6f4  jal         func_131BD0
label_129e8c:
    if (ctx->pc == 0x129E8Cu) {
        ctx->pc = 0x129E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129E88u;
        // 0x129e8c: 0x27a50210  addiu       $a1, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129E90u;
        goto label_129e90;
    }
    ctx->pc = 0x129E88u;
    SET_GPR_U32(ctx, 31, 0x129E90u);
    ctx->pc = 0x129E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129E88u;
    // 0x129e8c: 0x27a50210  addiu       $a1, $sp, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131BD0u, 0x129E88u, 0x129E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129E90u;
label_129e90:
    // 0x129e90: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x129e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_129e94:
    // 0x129e94: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x129e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_129e98:
    // 0x129e98: 0xc07d370  jal         func_1F4DC0
label_129e9c:
    if (ctx->pc == 0x129E9Cu) {
        ctx->pc = 0x129E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129E98u;
        // 0x129e9c: 0x27a60210  addiu       $a2, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129EA0u;
        goto label_129ea0;
    }
    ctx->pc = 0x129E98u;
    SET_GPR_U32(ctx, 31, 0x129EA0u);
    ctx->pc = 0x129E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129E98u;
    // 0x129e9c: 0x27a60210  addiu       $a2, $sp, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DC0u, 0x129E98u, 0x129EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129EA0u;
label_129ea0:
    // 0x129ea0: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x129ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_129ea4:
    // 0x129ea4: 0xc07d308  jal         func_1F4C20
label_129ea8:
    if (ctx->pc == 0x129EA8u) {
        ctx->pc = 0x129EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129EA4u;
        // 0x129ea8: 0x27a501f0  addiu       $a1, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129EACu;
        goto label_129eac;
    }
    ctx->pc = 0x129EA4u;
    SET_GPR_U32(ctx, 31, 0x129EACu);
    ctx->pc = 0x129EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129EA4u;
    // 0x129ea8: 0x27a501f0  addiu       $a1, $sp, 0x1F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C20u, 0x129EA4u, 0x129EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129EACu;
label_129eac:
    // 0x129eac: 0xc04b220  jal         func_12C880
label_129eb0:
    if (ctx->pc == 0x129EB0u) {
        ctx->pc = 0x129EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129EACu;
        // 0x129eb0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x129EB4u;
        goto label_129eb4;
    }
    ctx->pc = 0x129EACu;
    SET_GPR_U32(ctx, 31, 0x129EB4u);
    ctx->pc = 0x129EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129EACu;
    // 0x129eb0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C880u, 0x129EACu, 0x129EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129EB4u;
label_129eb4:
    // 0x129eb4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x129eb4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_129eb8:
    // 0x129eb8: 0xc082520  jal         func_209480
label_129ebc:
    if (ctx->pc == 0x129EBCu) {
        ctx->pc = 0x129EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129EB8u;
        // 0x129ebc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129EC0u;
        goto label_129ec0;
    }
    ctx->pc = 0x129EB8u;
    SET_GPR_U32(ctx, 31, 0x129EC0u);
    ctx->pc = 0x129EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129EB8u;
    // 0x129ebc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209480u, 0x129EB8u, 0x129EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129EC0u;
label_129ec0:
    // 0x129ec0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x129ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_129ec4:
    // 0x129ec4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x129ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_129ec8:
    // 0x129ec8: 0x24a5ebe0  addiu       $a1, $a1, -0x1420
    ctx->pc = 0x129ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962144));
label_129ecc:
    // 0x129ecc: 0xc04b3ac  jal         func_12CEB0
label_129ed0:
    if (ctx->pc == 0x129ED0u) {
        ctx->pc = 0x129ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129ECCu;
        // 0x129ed0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129ED4u;
        goto label_129ed4;
    }
    ctx->pc = 0x129ECCu;
    SET_GPR_U32(ctx, 31, 0x129ED4u);
    ctx->pc = 0x129ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129ECCu;
    // 0x129ed0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CEB0u, 0x129ECCu, 0x129ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129ED4u;
label_129ed4:
    // 0x129ed4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x129ed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_129ed8:
    // 0x129ed8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x129ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_129edc:
    // 0x129edc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x129edcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_129ee0:
    // 0x129ee0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x129ee0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_129ee4:
    // 0x129ee4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x129ee4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_129ee8:
    // 0x129ee8: 0x3e00008  jr          $ra
label_129eec:
    if (ctx->pc == 0x129EECu) {
        ctx->pc = 0x129EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129EE8u;
        // 0x129eec: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129EF0u;
        goto label_fallthrough_0x129ee8;
    }
    ctx->pc = 0x129EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129EE8u;
        // 0x129eec: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129EE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x129ee8:
    ctx->pc = 0x129EF0u;
}
