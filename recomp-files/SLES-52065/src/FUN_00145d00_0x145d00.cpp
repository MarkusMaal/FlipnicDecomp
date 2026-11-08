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

// Function: FUN_00145d00
// Address: 0x145d00 - 0x145f10
void FUN_00145d00_0x145d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00145d00_0x145d00");
#endif

    switch (ctx->pc) {
        case 0x145d80u: goto label_145d80;
        case 0x145db8u: goto label_145db8;
        case 0x145dc0u: goto label_145dc0;
        case 0x145df4u: goto label_145df4;
        case 0x145dfcu: goto label_145dfc;
        case 0x145e0cu: goto label_145e0c;
        case 0x145e1cu: goto label_145e1c;
        case 0x145e48u: goto label_145e48;
        case 0x145e68u: goto label_145e68;
        case 0x145e70u: goto label_145e70;
        case 0x145e9cu: goto label_145e9c;
        case 0x145ea4u: goto label_145ea4;
        case 0x145eb4u: goto label_145eb4;
        case 0x145ec4u: goto label_145ec4;
        case 0x145ee8u: goto label_145ee8;
        default: break;
    }

    ctx->pc = 0x145d00u;

    // 0x145d00: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x145d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x145d04: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x145d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x145d08: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x145d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x145d0c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x145d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x145d10: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x145d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x145d14: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x145d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x145d18: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x145d18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145d1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x145d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x145d20: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x145d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x145d24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x145d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x145d28: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x145d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x145d2c: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x145d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x145d30: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x145d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145d34: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x145d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145d38: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x145d38u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x145d3c: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x145d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x145d40: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x145d40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x145d44: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x145d44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x145d48: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x145d48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x145d4c: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x145d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x145d50: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x145d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x145d54: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x145d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145d58: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x145d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145d5c: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x145d5cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x145d60: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x145d60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x145d64: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x145d64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x145d68: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x145d68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x145d6c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x145d6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x145d70: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x145d70u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x145d74: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x145d74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x145d78: 0xc050238  jal         func_1408E0
    ctx->pc = 0x145D78u;
    SET_GPR_U32(ctx, 31, 0x145D80u);
    ctx->pc = 0x145D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145D78u;
    // 0x145d7c: 0x7c820000  sq          $v0, 0x0($a0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1408E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1408E0u, 0x145D78u, 0x145D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145D80u;
label_145d80:
    // 0x145d80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x145d80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145d84: 0x27a300ec  addiu       $v1, $sp, 0xEC
    ctx->pc = 0x145d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x145d88: 0x3c023fff  lui         $v0, 0x3FFF
    ctx->pc = 0x145d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
    // 0x145d8c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x145d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x145d90: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x145d90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x145d94: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x145d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x145d98: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x145d98u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x145d9c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x145D9Cu;
    {
        const bool branch_taken_0x145d9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x145DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145D9Cu;
        // 0x145da0: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145d9c) {
            ctx->pc = 0x145DC0u;
            goto label_145dc0;
        }
    }
    ctx->pc = 0x145DA4u;
    // 0x145da4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x145da4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x145da8: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x145da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x145dac: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x145dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x145db0: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x145DB0u;
    SET_GPR_U32(ctx, 31, 0x145DB8u);
    ctx->pc = 0x145DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145DB0u;
    // 0x145db4: 0x24a5f1c0  addiu       $a1, $a1, -0xE40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x145DB0u, 0x145DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145DB8u;
label_145db8:
    // 0x145db8: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x145DB8u;
    SET_GPR_U32(ctx, 31, 0x145DC0u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x145DB8u, 0x145DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145DC0u;
label_145dc0:
    // 0x145dc0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x145dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x145dc4: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x145dc4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x145dc8: 0x1420001c  bnez        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x145DC8u;
    {
        const bool branch_taken_0x145dc8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x145DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145DC8u;
        // 0x145dcc: 0x27a20060  addiu       $v0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145dc8) {
            ctx->pc = 0x145E3Cu;
            goto label_145e3c;
        }
    }
    ctx->pc = 0x145DD0u;
    // 0x145dd0: 0x8e71000c  lw          $s1, 0xC($s3)
    ctx->pc = 0x145dd0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x145dd4: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x145dd4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x145dd8: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x145dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x145ddc: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x145ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x145de0: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x145de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x145de4: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x145de4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x145de8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x145de8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x145dec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x145DECu;
    {
        const bool branch_taken_0x145dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145DECu;
        // 0x145df0: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145dec) {
            ctx->pc = 0x145E10u;
            goto label_145e10;
        }
    }
    ctx->pc = 0x145DF4u;
label_145df4:
    // 0x145df4: 0xc050234  jal         func_1408D0
    ctx->pc = 0x145DF4u;
    SET_GPR_U32(ctx, 31, 0x145DFCu);
    ctx->pc = 0x145DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145DF4u;
    // 0x145df8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1408D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1408D0u, 0x145DF4u, 0x145DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145DFCu;
label_145dfc:
    // 0x145dfc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x145dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x145e00: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x145e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x145e04: 0xc050224  jal         func_140890
    ctx->pc = 0x145E04u;
    SET_GPR_U32(ctx, 31, 0x145E0Cu);
    ctx->pc = 0x145E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145E04u;
    // 0x145e08: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140890u, 0x145E04u, 0x145E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E0Cu;
label_145e0c:
    // 0x145e0c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x145e0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_145e10:
    // 0x145e10: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x145e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x145e14: 0xc05021c  jal         func_140870
    ctx->pc = 0x145E14u;
    SET_GPR_U32(ctx, 31, 0x145E1Cu);
    ctx->pc = 0x145E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145E14u;
    // 0x145e18: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140870u, 0x145E14u, 0x145E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E1Cu;
label_145e1c:
    // 0x145e1c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x145e1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x145e20: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x145e20u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x145e24: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x145e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x145e28: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x145E28u;
    {
        const bool branch_taken_0x145e28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x145e28) {
            ctx->pc = 0x145DF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_145df4;
        }
    }
    ctx->pc = 0x145E30u;
    // 0x145e30: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x145e30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x145e34: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x145E34u;
    {
        const bool branch_taken_0x145e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145E34u;
        // 0x145e38: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145e34) {
            ctx->pc = 0x145EF4u;
            goto label_145ef4;
        }
    }
    ctx->pc = 0x145E3Cu;
label_145e3c:
    // 0x145e3c: 0x8e71000c  lw          $s1, 0xC($s3)
    ctx->pc = 0x145e3cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x145e40: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x145E40u;
    SET_GPR_U32(ctx, 31, 0x145E48u);
    ctx->pc = 0x145E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145E40u;
    // 0x145e44: 0x102080  sll         $a0, $s0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x145E40u, 0x145E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E48u;
label_145e48:
    // 0x145e48: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x145e48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145e4c: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x145E4Cu;
    {
        const bool branch_taken_0x145e4c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x145E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145E4Cu;
        // 0x145e50: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145e4c) {
            ctx->pc = 0x145E70u;
            goto label_145e70;
        }
    }
    ctx->pc = 0x145E54u;
    // 0x145e54: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x145e54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x145e58: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x145e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x145e5c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x145e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x145e60: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x145E60u;
    SET_GPR_U32(ctx, 31, 0x145E68u);
    ctx->pc = 0x145E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145E60u;
    // 0x145e64: 0x24a5f170  addiu       $a1, $a1, -0xE90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x145E60u, 0x145E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E68u;
label_145e68:
    // 0x145e68: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x145E68u;
    SET_GPR_U32(ctx, 31, 0x145E70u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x145E68u, 0x145E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E70u;
label_145e70:
    // 0x145e70: 0xae72000c  sw          $s2, 0xC($s3)
    ctx->pc = 0x145e70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 18));
    // 0x145e74: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x145e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x145e78: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x145e78u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x145e7c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x145e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x145e80: 0x8e72000c  lw          $s2, 0xC($s3)
    ctx->pc = 0x145e80u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x145e84: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x145e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x145e88: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x145e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x145e8c: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x145e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x145e90: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x145e90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x145e94: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x145E94u;
    {
        const bool branch_taken_0x145e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145E94u;
        // 0x145e98: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145e94) {
            ctx->pc = 0x145EB8u;
            goto label_145eb8;
        }
    }
    ctx->pc = 0x145E9Cu;
label_145e9c:
    // 0x145e9c: 0xc050234  jal         func_1408D0
    ctx->pc = 0x145E9Cu;
    SET_GPR_U32(ctx, 31, 0x145EA4u);
    ctx->pc = 0x145EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145E9Cu;
    // 0x145ea0: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1408D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1408D0u, 0x145E9Cu, 0x145EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145EA4u;
label_145ea4:
    // 0x145ea4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x145ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x145ea8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x145ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x145eac: 0xc050224  jal         func_140890
    ctx->pc = 0x145EACu;
    SET_GPR_U32(ctx, 31, 0x145EB4u);
    ctx->pc = 0x145EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145EACu;
    // 0x145eb0: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140890u, 0x145EACu, 0x145EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145EB4u;
label_145eb4:
    // 0x145eb4: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x145eb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_145eb8:
    // 0x145eb8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x145eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x145ebc: 0xc05021c  jal         func_140870
    ctx->pc = 0x145EBCu;
    SET_GPR_U32(ctx, 31, 0x145EC4u);
    ctx->pc = 0x145EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145EBCu;
    // 0x145ec0: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140870u, 0x145EBCu, 0x145EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145EC4u;
label_145ec4:
    // 0x145ec4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x145ec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x145ec8: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x145ec8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x145ecc: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x145eccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x145ed0: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x145ED0u;
    {
        const bool branch_taken_0x145ed0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x145ed0) {
            ctx->pc = 0x145E9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_145e9c;
        }
    }
    ctx->pc = 0x145ED8u;
    // 0x145ed8: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x145ED8u;
    {
        const bool branch_taken_0x145ed8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x145EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145ED8u;
        // 0x145edc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145ed8) {
            ctx->pc = 0x145EE8u;
            goto label_145ee8;
        }
    }
    ctx->pc = 0x145EE0u;
    // 0x145ee0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x145EE0u;
    SET_GPR_U32(ctx, 31, 0x145EE8u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x145EE0u, 0x145EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145EE8u;
label_145ee8:
    // 0x145ee8: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x145ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
    // 0x145eec: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x145eecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
    // 0x145ef0: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x145ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
label_145ef4:
    // 0x145ef4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x145ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x145ef8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x145ef8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x145efc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x145efcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x145f00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x145f00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145f04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x145f04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145f08: 0x3e00008  jr          $ra
    ctx->pc = 0x145F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145F08u;
        // 0x145f0c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145F08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145F10u;
}
