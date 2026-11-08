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

// Function: entry_00176df0
// Address: 0x176df0 - 0x176eb0
void entry_00176df0_0x176df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176df0_0x176df0");
#endif

    switch (ctx->pc) {
        case 0x176e34u: goto label_176e34;
        case 0x176e54u: goto label_176e54;
        case 0x176e68u: goto label_176e68;
        case 0x176e7cu: goto label_176e7c;
        case 0x176e90u: goto label_176e90;
        case 0x176e9cu: goto label_176e9c;
        default: break;
    }

    ctx->pc = 0x176df0u;

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
            return;
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
            return;
        }
    }
    ctx->pc = 0x176EB0u;
}
