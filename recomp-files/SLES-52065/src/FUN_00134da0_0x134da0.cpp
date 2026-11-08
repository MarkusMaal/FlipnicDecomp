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

// Function: FUN_00134da0
// Address: 0x134da0 - 0x134fcc
void FUN_00134da0_0x134da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00134da0_0x134da0");
#endif

    switch (ctx->pc) {
        case 0x134dbcu: goto label_134dbc;
        case 0x134dc8u: goto label_134dc8;
        case 0x134dd4u: goto label_134dd4;
        case 0x134de0u: goto label_134de0;
        case 0x134e04u: goto label_134e04;
        case 0x134e0cu: goto label_134e0c;
        case 0x134e1cu: goto label_134e1c;
        case 0x134e2cu: goto label_134e2c;
        case 0x134e38u: goto label_134e38;
        case 0x134e48u: goto label_134e48;
        case 0x134e54u: goto label_134e54;
        case 0x134e64u: goto label_134e64;
        case 0x134e6cu: goto label_134e6c;
        case 0x134e78u: goto label_134e78;
        case 0x134ed0u: goto label_134ed0;
        case 0x134edcu: goto label_134edc;
        case 0x134f00u: goto label_134f00;
        case 0x134f1cu: goto label_134f1c;
        case 0x134f30u: goto label_134f30;
        case 0x134f3cu: goto label_134f3c;
        case 0x134f5cu: goto label_134f5c;
        case 0x134f78u: goto label_134f78;
        case 0x134fb4u: goto label_134fb4;
        default: break;
    }

    ctx->pc = 0x134da0u;

    // 0x134da0: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x134da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
    // 0x134da4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x134da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x134da8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x134da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x134dac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x134dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x134db0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x134db0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134db4: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x134DB4u;
    SET_GPR_U32(ctx, 31, 0x134DBCu);
    ctx->pc = 0x134DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134DB4u;
    // 0x134db8: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x134DB4u, 0x134DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134DBCu;
label_134dbc:
    // 0x134dbc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x134dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134dc0: 0xc04a058  jal         func_128160
    ctx->pc = 0x134DC0u;
    SET_GPR_U32(ctx, 31, 0x134DC8u);
    ctx->pc = 0x134DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134DC0u;
    // 0x134dc4: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128160u, 0x134DC0u, 0x134DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134DC8u;
label_134dc8:
    // 0x134dc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x134dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134dcc: 0xc04c6f4  jal         func_131BD0
    ctx->pc = 0x134DCCu;
    SET_GPR_U32(ctx, 31, 0x134DD4u);
    ctx->pc = 0x134DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134DCCu;
    // 0x134dd0: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131BD0u, 0x134DCCu, 0x134DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134DD4u;
label_134dd4:
    // 0x134dd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x134dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134dd8: 0xc04c6ec  jal         func_131BB0
    ctx->pc = 0x134DD8u;
    SET_GPR_U32(ctx, 31, 0x134DE0u);
    ctx->pc = 0x134DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134DD8u;
    // 0x134ddc: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131BB0u, 0x134DD8u, 0x134DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134DE0u;
label_134de0:
    // 0x134de0: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x134de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x134de4: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x134de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x134de8: 0x24420eb0  addiu       $v0, $v0, 0xEB0
    ctx->pc = 0x134de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3760));
    // 0x134dec: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x134decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x134df0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x134df0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x210EB0u));
    // 0x134df4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x134df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x134df8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x134df8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x134dfc: 0xc07d370  jal         func_1F4DC0
    ctx->pc = 0x134DFCu;
    SET_GPR_U32(ctx, 31, 0x134E04u);
    ctx->pc = 0x134E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134DFCu;
    // 0x134e00: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DC0u, 0x134DFCu, 0x134E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134E04u;
label_134e04:
    // 0x134e04: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x134E04u;
    SET_GPR_U32(ctx, 31, 0x134E0Cu);
    ctx->pc = 0x134E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134E04u;
    // 0x134e08: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x134E04u, 0x134E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134E0Cu;
label_134e0c:
    // 0x134e0c: 0x27b10090  addiu       $s1, $sp, 0x90
    ctx->pc = 0x134e0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x134e10: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x134e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x134e14: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x134E14u;
    SET_GPR_U32(ctx, 31, 0x134E1Cu);
    ctx->pc = 0x134E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134E14u;
    // 0x134e18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x134E14u, 0x134E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134E1Cu;
label_134e1c:
    // 0x134e1c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x134e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x134e20: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x134e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x134e24: 0xc07d300  jal         func_1F4C00
    ctx->pc = 0x134E24u;
    SET_GPR_U32(ctx, 31, 0x134E2Cu);
    ctx->pc = 0x134E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134E24u;
    // 0x134e28: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C00u, 0x134E24u, 0x134E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134E2Cu;
label_134e2c:
    // 0x134e2c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x134e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x134e30: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x134E30u;
    SET_GPR_U32(ctx, 31, 0x134E38u);
    ctx->pc = 0x134E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134E30u;
    // 0x134e34: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x134E30u, 0x134E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134E38u;
label_134e38:
    // 0x134e38: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x134e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134e3c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x134e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x134e40: 0xc07d300  jal         func_1F4C00
    ctx->pc = 0x134E40u;
    SET_GPR_U32(ctx, 31, 0x134E48u);
    ctx->pc = 0x134E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134E40u;
    // 0x134e44: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C00u, 0x134E40u, 0x134E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134E48u;
label_134e48:
    // 0x134e48: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x134e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x134e4c: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x134E4Cu;
    SET_GPR_U32(ctx, 31, 0x134E54u);
    ctx->pc = 0x134E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134E4Cu;
    // 0x134e50: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x134E4Cu, 0x134E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134E54u;
label_134e54:
    // 0x134e54: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x134e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x134e58: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x134e58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x134e5c: 0xc07d382  jal         func_1F4E08
    ctx->pc = 0x134E5Cu;
    SET_GPR_U32(ctx, 31, 0x134E64u);
    ctx->pc = 0x134E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134E5Cu;
    // 0x134e60: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E08u, 0x134E5Cu, 0x134E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134E64u;
label_134e64:
    // 0x134e64: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x134E64u;
    SET_GPR_U32(ctx, 31, 0x134E6Cu);
    ctx->pc = 0x134E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134E64u;
    // 0x134e68: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x134E64u, 0x134E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134E6Cu;
label_134e6c:
    // 0x134e6c: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x134e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x134e70: 0xc04c6dc  jal         func_131B70
    ctx->pc = 0x134E70u;
    SET_GPR_U32(ctx, 31, 0x134E78u);
    ctx->pc = 0x134E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134E70u;
    // 0x134e74: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131B70u, 0x134E70u, 0x134E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134E78u;
label_134e78:
    // 0x134e78: 0xc7a20140  lwc1        $f2, 0x140($sp)
    ctx->pc = 0x134e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x134e7c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x134e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x134e80: 0xc7a10144  lwc1        $f1, 0x144($sp)
    ctx->pc = 0x134e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134e84: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x134e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x134e88: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x134e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x134e8c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x134e8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134e90: 0xc7a50130  lwc1        $f5, 0x130($sp)
    ctx->pc = 0x134e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x134e94: 0xc7a40134  lwc1        $f4, 0x134($sp)
    ctx->pc = 0x134e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x134e98: 0xc7a30138  lwc1        $f3, 0x138($sp)
    ctx->pc = 0x134e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x134e9c: 0xe7a200f4  swc1        $f2, 0xF4($sp)
    ctx->pc = 0x134e9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x134ea0: 0xe7a10104  swc1        $f1, 0x104($sp)
    ctx->pc = 0x134ea0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x134ea4: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x134ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x134ea8: 0xc7a20150  lwc1        $f2, 0x150($sp)
    ctx->pc = 0x134ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x134eac: 0xc7a10154  lwc1        $f1, 0x154($sp)
    ctx->pc = 0x134eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134eb0: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x134eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x134eb4: 0xe7a500f0  swc1        $f5, 0xF0($sp)
    ctx->pc = 0x134eb4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x134eb8: 0xe7a40100  swc1        $f4, 0x100($sp)
    ctx->pc = 0x134eb8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x134ebc: 0xe7a30110  swc1        $f3, 0x110($sp)
    ctx->pc = 0x134ebcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x134ec0: 0xe7a200f8  swc1        $f2, 0xF8($sp)
    ctx->pc = 0x134ec0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x134ec4: 0xe7a10108  swc1        $f1, 0x108($sp)
    ctx->pc = 0x134ec4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x134ec8: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x134EC8u;
    SET_GPR_U32(ctx, 31, 0x134ED0u);
    ctx->pc = 0x134ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134EC8u;
    // 0x134ecc: 0xe7a00118  swc1        $f0, 0x118($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x134EC8u, 0x134ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134ED0u;
label_134ed0:
    // 0x134ed0: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x134ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x134ed4: 0xc07d392  jal         func_1F4E48
    ctx->pc = 0x134ED4u;
    SET_GPR_U32(ctx, 31, 0x134EDCu);
    ctx->pc = 0x134ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134ED4u;
    // 0x134ed8: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E48u, 0x134ED4u, 0x134EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134EDCu;
label_134edc:
    // 0x134edc: 0xc600006c  lwc1        $f0, 0x6C($s0)
    ctx->pc = 0x134edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x134ee0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x134ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x134ee4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x134ee4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x134ee8: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x134ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x134eec: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x134eecu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x134ef0: 0x0  nop
    ctx->pc = 0x134ef0u;
    // NOP
    // 0x134ef4: 0x0  nop
    ctx->pc = 0x134ef4u;
    // NOP
    // 0x134ef8: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x134EF8u;
    SET_GPR_U32(ctx, 31, 0x134F00u);
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x134EF8u, 0x134F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134F00u;
label_134f00:
    // 0x134f00: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x134f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x134f04: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x134f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x134f08: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x134f08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134f0c: 0xe7b40170  swc1        $f20, 0x170($sp)
    ctx->pc = 0x134f0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x134f10: 0xe7b40184  swc1        $f20, 0x184($sp)
    ctx->pc = 0x134f10u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
    // 0x134f14: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x134F14u;
    SET_GPR_U32(ctx, 31, 0x134F1Cu);
    ctx->pc = 0x134F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134F14u;
    // 0x134f18: 0xe7b40198  swc1        $f20, 0x198($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x134F14u, 0x134F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134F1Cu;
label_134f1c:
    // 0x134f1c: 0x92030091  lbu         $v1, 0x91($s0)
    ctx->pc = 0x134f1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 145)));
    // 0x134f20: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x134F20u;
    {
        const bool branch_taken_0x134f20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x134F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134F20u;
        // 0x134f24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134f20) {
            ctx->pc = 0x134FB4u;
            goto label_134fb4;
        }
    }
    ctx->pc = 0x134F28u;
    // 0x134f28: 0xc04c6dc  jal         func_131B70
    ctx->pc = 0x134F28u;
    SET_GPR_U32(ctx, 31, 0x134F30u);
    ctx->pc = 0x134F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134F28u;
    // 0x134f2c: 0x27a501f0  addiu       $a1, $sp, 0x1F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131B70u, 0x134F28u, 0x134F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134F30u;
label_134f30:
    // 0x134f30: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x134f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x134f34: 0xc061c08  jal         func_187020
    ctx->pc = 0x134F34u;
    SET_GPR_U32(ctx, 31, 0x134F3Cu);
    ctx->pc = 0x134F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134F34u;
    // 0x134f38: 0x27a501f0  addiu       $a1, $sp, 0x1F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187020u, 0x134F34u, 0x134F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134F3Cu;
label_134f3c:
    // 0x134f3c: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x134f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x134f40: 0x27a60230  addiu       $a2, $sp, 0x230
    ctx->pc = 0x134f40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x134f44: 0x24420ec0  addiu       $v0, $v0, 0xEC0
    ctx->pc = 0x134f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3776));
    // 0x134f48: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x134f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x134f4c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x134f4cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x210EC0u));
    // 0x134f50: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x134f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x134f54: 0xc07d2e2  jal         func_1F4B88
    ctx->pc = 0x134F54u;
    SET_GPR_U32(ctx, 31, 0x134F5Cu);
    ctx->pc = 0x134F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134F54u;
    // 0x134f58: 0x7cc20000  sq          $v0, 0x0($a2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4B88u, 0x134F54u, 0x134F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134F5Cu;
label_134f5c:
    // 0x134f5c: 0xc7a0024c  lwc1        $f0, 0x24C($sp)
    ctx->pc = 0x134f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x134f60: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x134f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x134f64: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x134f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x134f68: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x134f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x134f6c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x134f6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x134f70: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x134F70u;
    SET_GPR_U32(ctx, 31, 0x134F78u);
    ctx->pc = 0x134F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134F70u;
    // 0x134f74: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x134F70u, 0x134F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134F78u;
label_134f78:
    // 0x134f78: 0x938286d8  lbu         $v0, -0x7928($gp)
    ctx->pc = 0x134f78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936280)));
    // 0x134f7c: 0xe7b40278  swc1        $f20, 0x278($sp)
    ctx->pc = 0x134f7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 632), bits); }
    // 0x134f80: 0xe7b40264  swc1        $f20, 0x264($sp)
    ctx->pc = 0x134f80u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 612), bits); }
    // 0x134f84: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x134F84u;
    {
        const bool branch_taken_0x134f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134F84u;
        // 0x134f88: 0xe7b40250  swc1        $f20, 0x250($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 592), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x134f84) {
            ctx->pc = 0x134FA4u;
            goto label_134fa4;
        }
    }
    ctx->pc = 0x134F8Cu;
    // 0x134f8c: 0xc7a00250  lwc1        $f0, 0x250($sp)
    ctx->pc = 0x134f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x134f90: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x134f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x134f94: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x134f94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x134f98: 0x0  nop
    ctx->pc = 0x134f98u;
    // NOP
    // 0x134f9c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x134f9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x134fa0: 0xe7a00250  swc1        $f0, 0x250($sp)
    ctx->pc = 0x134fa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 592), bits); }
label_134fa4:
    // 0x134fa4: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x134fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x134fa8: 0x27a60250  addiu       $a2, $sp, 0x250
    ctx->pc = 0x134fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x134fac: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x134FACu;
    SET_GPR_U32(ctx, 31, 0x134FB4u);
    ctx->pc = 0x134FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134FACu;
    // 0x134fb0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x134FACu, 0x134FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134FB4u;
label_134fb4:
    // 0x134fb4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x134fb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x134fb8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x134fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x134fbc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x134fbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x134fc0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x134fc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x134fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x134FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134FC4u;
        // 0x134fc8: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134FCCu;
}
