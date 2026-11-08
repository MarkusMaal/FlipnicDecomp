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

// Function: FUN_00176d80
// Address: 0x176d80 - 0x176f1c
void FUN_00176d80_0x176d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00176d80_0x176d80");
#endif

    switch (ctx->pc) {
        case 0x176da8u: goto label_176da8;
        case 0x176dc0u: goto label_176dc0;
        case 0x176dc8u: goto label_176dc8;
        case 0x176dd0u: goto label_176dd0;
        case 0x176de8u: goto label_176de8;
        case 0x176e34u: goto label_176e34;
        case 0x176e54u: goto label_176e54;
        case 0x176e68u: goto label_176e68;
        case 0x176e7cu: goto label_176e7c;
        case 0x176e90u: goto label_176e90;
        case 0x176e9cu: goto label_176e9c;
        case 0x176eb0u: goto label_176eb0;
        default: break;
    }

    ctx->pc = 0x176d80u;

    // 0x176d80: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x176d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x176d84: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x176d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x176d88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x176d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x176d8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x176d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x176d90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x176d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x176d94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x176d94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176d98: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x176d98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x176d9c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x176d9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176da0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x176DA0u;
    {
        const bool branch_taken_0x176da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176DA0u;
        // 0x176da4: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176da0) {
            ctx->pc = 0x176DF0u;
            goto label_176df0;
        }
    }
    ctx->pc = 0x176DA8u;
label_176da8:
    // 0x176da8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x176da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x176dac: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x176dacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x176db0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x176db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x176db4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x176db4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x176db8: 0xc045b20  jal         func_116C80
    ctx->pc = 0x176DB8u;
    SET_GPR_U32(ctx, 31, 0x176DC0u);
    ctx->pc = 0x176DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176DB8u;
    // 0x176dbc: 0x439021  addu        $s2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x176DB8u, 0x176DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176DC0u;
label_176dc0:
    // 0x176dc0: 0xc045b20  jal         func_116C80
    ctx->pc = 0x176DC0u;
    SET_GPR_U32(ctx, 31, 0x176DC8u);
    ctx->pc = 0x176DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176DC0u;
    // 0x176dc4: 0xe6400030  swc1        $f0, 0x30($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x176DC0u, 0x176DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176DC8u;
label_176dc8:
    // 0x176dc8: 0xc045b20  jal         func_116C80
    ctx->pc = 0x176DC8u;
    SET_GPR_U32(ctx, 31, 0x176DD0u);
    ctx->pc = 0x176DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176DC8u;
    // 0x176dcc: 0xe6400034  swc1        $f0, 0x34($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x176DC8u, 0x176DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176DD0u;
label_176dd0:
    // 0x176dd0: 0x26440030  addiu       $a0, $s2, 0x30
    ctx->pc = 0x176dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x176dd4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x176dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x176dd8: 0xe6400038  swc1        $f0, 0x38($s2)
    ctx->pc = 0x176dd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
    // 0x176ddc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x176ddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176de0: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x176DE0u;
    SET_GPR_U32(ctx, 31, 0x176DE8u);
    ctx->pc = 0x176DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176DE0u;
    // 0x176de4: 0xae42003c  sw          $v0, 0x3C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x176DE0u, 0x176DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176DE8u;
label_176de8:
    // 0x176de8: 0xae40003c  sw          $zero, 0x3C($s2)
    ctx->pc = 0x176de8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
    // 0x176dec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x176decu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_176df0:
    // 0x176df0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x176df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x176df4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x176df4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x176df8: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x176DF8u;
    {
        const bool branch_taken_0x176df8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x176DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176DF8u;
        // 0x176dfc: 0x26220130  addiu       $v0, $s1, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176df8) {
            ctx->pc = 0x176DA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_176da8;
        }
    }
    ctx->pc = 0x176E00u;
    // 0x176e00: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x176e00u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x176e04: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x176e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x176e08: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x176e08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176e0c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x176e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x176e10: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x176e10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x176e14: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x176e14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x176e18: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x176e18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x176e1c: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x176e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x176e20: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x176e20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x176e24: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x176e24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    // 0x176e28: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x176e28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x176e2c: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x176E2Cu;
    SET_GPR_U32(ctx, 31, 0x176E34u);
    ctx->pc = 0x176E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176E2Cu;
    // 0x176e30: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x176E2Cu, 0x176E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176E34u;
label_176e34:
    // 0x176e34: 0x3c033f86  lui         $v1, 0x3F86
    ctx->pc = 0x176e34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16262 << 16));
    // 0x176e38: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x176e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x176e3c: 0x34630a92  ori         $v1, $v1, 0xA92
    ctx->pc = 0x176e3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
    // 0x176e40: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x176e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x176e44: 0xafa3005c  sw          $v1, 0x5C($sp)
    ctx->pc = 0x176e44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 3));
    // 0x176e48: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x176e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x176e4c: 0xc05c550  jal         func_171540
    ctx->pc = 0x176E4Cu;
    SET_GPR_U32(ctx, 31, 0x176E54u);
    ctx->pc = 0x176E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176E4Cu;
    // 0x176e50: 0xae220120  sw          $v0, 0x120($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171540u, 0x176E4Cu, 0x176E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176E54u;
label_176e54:
    // 0x176e54: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x176e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x176e58: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x176e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x176e5c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x176e5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x176e60: 0xc07d5c8  jal         func_1F5720
    ctx->pc = 0x176E60u;
    SET_GPR_U32(ctx, 31, 0x176E68u);
    ctx->pc = 0x176E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176E60u;
    // 0x176e64: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5720u, 0x176E60u, 0x176E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176E68u;
label_176e68:
    // 0x176e68: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x176e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x176e6c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x176e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x176e70: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x176e70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x176e74: 0xc07d5c8  jal         func_1F5720
    ctx->pc = 0x176E74u;
    SET_GPR_U32(ctx, 31, 0x176E7Cu);
    ctx->pc = 0x176E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176E74u;
    // 0x176e78: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5720u, 0x176E74u, 0x176E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176E7Cu;
label_176e7c:
    // 0x176e7c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x176e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x176e80: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x176e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x176e84: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x176e84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x176e88: 0xc07d5c8  jal         func_1F5720
    ctx->pc = 0x176E88u;
    SET_GPR_U32(ctx, 31, 0x176E90u);
    ctx->pc = 0x176E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176E88u;
    // 0x176e8c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5720u, 0x176E88u, 0x176E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176E90u;
label_176e90:
    // 0x176e90: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x176e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x176e94: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x176E94u;
    SET_GPR_U32(ctx, 31, 0x176E9Cu);
    ctx->pc = 0x176E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176E94u;
    // 0x176e98: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x176E94u, 0x176E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176E9Cu;
label_176e9c:
    // 0x176e9c: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x176e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x176ea0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x176ea0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176ea4: 0x24841770  addiu       $a0, $a0, 0x1770
    ctx->pc = 0x176ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6000));
    // 0x176ea8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x176EA8u;
    {
        const bool branch_taken_0x176ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176EA8u;
        // 0x176eac: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176ea8) {
            ctx->pc = 0x176EF4u;
            goto label_176ef4;
        }
    }
    ctx->pc = 0x176EB0u;
label_176eb0:
    // 0x176eb0: 0x61940  sll         $v1, $a2, 5
    ctx->pc = 0x176eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x176eb4: 0x854021  addu        $t0, $a0, $a1
    ctx->pc = 0x176eb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x176eb8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x176eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x176ebc: 0x24650020  addiu       $a1, $v1, 0x20
    ctx->pc = 0x176ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x176ec0: 0xd9080000  lqc2        $vf8, 0x0($t0)
    ctx->pc = 0x176ec0u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x176ec4: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x176ec4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x176ec8: 0xd8e50010  lqc2        $vf5, 0x10($a3)
    ctx->pc = 0x176ec8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x176ecc: 0xd8e60020  lqc2        $vf6, 0x20($a3)
    ctx->pc = 0x176eccu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x176ed0: 0xd8e70030  lqc2        $vf7, 0x30($a3)
    ctx->pc = 0x176ed0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x176ed4: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x176ed4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x176ed8: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x176ed8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x176edc: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x176edcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x176ee0: 0x4be83a0b  vmaddw.xyzw $vf8, $vf7, $vf8w
    ctx->pc = 0x176ee0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x176ee4: 0xf8a80000  sqc2        $vf8, 0x0($a1)
    ctx->pc = 0x176ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x176ee8: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x176ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x176eec: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x176eecu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x176ef0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x176ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_176ef4:
    // 0x176ef4: 0x0  nop
    ctx->pc = 0x176ef4u;
    // NOP
    // 0x176ef8: 0x28c30008  slti        $v1, $a2, 0x8
    ctx->pc = 0x176ef8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x176efc: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x176EFCu;
    {
        const bool branch_taken_0x176efc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x176F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176EFCu;
        // 0x176f00: 0x62900  sll         $a1, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176efc) {
            ctx->pc = 0x176EB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_176eb0;
        }
    }
    ctx->pc = 0x176F04u;
    // 0x176f04: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x176f04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x176f08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x176f08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x176f0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x176f0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176f10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x176f10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176f14: 0x3e00008  jr          $ra
    ctx->pc = 0x176F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176F14u;
        // 0x176f18: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176F14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176F1Cu;
}
