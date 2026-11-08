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

// Function: entry_001a0e38
// Address: 0x1a0e38 - 0x1a0f50
void entry_001a0e38_0x1a0e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0e38_0x1a0e38");
#endif

    switch (ctx->pc) {
        case 0x1a0e80u: goto label_1a0e80;
        case 0x1a0e8cu: goto label_1a0e8c;
        case 0x1a0eb4u: goto label_1a0eb4;
        case 0x1a0ed4u: goto label_1a0ed4;
        case 0x1a0ee4u: goto label_1a0ee4;
        case 0x1a0ef0u: goto label_1a0ef0;
        case 0x1a0f04u: goto label_1a0f04;
        case 0x1a0f18u: goto label_1a0f18;
        case 0x1a0f2cu: goto label_1a0f2c;
        default: break;
    }

    ctx->pc = 0x1a0e38u;

    // 0x1a0e38: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1a0e38u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a0e3c: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1A0E3Cu;
    {
        const bool branch_taken_0x1a0e3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0e3c) {
            ctx->pc = 0x1A0E24u;
            return;
        }
    }
    ctx->pc = 0x1A0E44u;
    // 0x1a0e44: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x1a0e44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1a0e48: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1A0E48u;
    {
        const bool branch_taken_0x1a0e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0e48) {
            ctx->pc = 0x1A0E24u;
            return;
        }
    }
    ctx->pc = 0x1A0E50u;
    // 0x1a0e50: 0xa0c40000  sb          $a0, 0x0($a2)
    ctx->pc = 0x1a0e50u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a0e54: 0x3c02bfc0  lui         $v0, 0xBFC0
    ctx->pc = 0x1a0e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49088 << 16));
    // 0x1a0e58: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x1a0e58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1a0e5c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a0e5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a0e60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a0e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0e64: 0x264408c0  addiu       $a0, $s2, 0x8C0
    ctx->pc = 0x1a0e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2240));
    // 0x1a0e68: 0x3c02c020  lui         $v0, 0xC020
    ctx->pc = 0x1a0e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49184 << 16));
    // 0x1a0e6c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a0e6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a0e70: 0xa0c30001  sb          $v1, 0x1($a2)
    ctx->pc = 0x1a0e70u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a0e74: 0x8e4209d4  lw          $v0, 0x9D4($s2)
    ctx->pc = 0x1a0e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2516)));
    // 0x1a0e78: 0xc069994  jal         func_1A6650
    ctx->pc = 0x1A0E78u;
    SET_GPR_U32(ctx, 31, 0x1A0E80u);
    ctx->pc = 0x1A0E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0E78u;
    // 0x1a0e7c: 0xa0450000  sb          $a1, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6650u, 0x1A0E78u, 0x1A0E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0E80u;
label_1a0e80:
    // 0x1a0e80: 0x264408c0  addiu       $a0, $s2, 0x8C0
    ctx->pc = 0x1a0e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2240));
    // 0x1a0e84: 0xc0699bc  jal         func_1A66F0
    ctx->pc = 0x1A0E84u;
    SET_GPR_U32(ctx, 31, 0x1A0E8Cu);
    ctx->pc = 0x1A0E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0E84u;
    // 0x1a0e88: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A66F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A66F0u, 0x1A0E84u, 0x1A0E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0E8Cu;
label_1a0e8c:
    // 0x1a0e8c: 0x8e4609d0  lw          $a2, 0x9D0($s2)
    ctx->pc = 0x1a0e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2512)));
    // 0x1a0e90: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a0e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0e94: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x1a0e94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
    // 0x1a0e98: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x1a0e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x1a0e9c: 0xacc500b8  sw          $a1, 0xB8($a2)
    ctx->pc = 0x1a0e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 184), GPR_U32(ctx, 5));
    // 0x1a0ea0: 0x24d00010  addiu       $s0, $a2, 0x10
    ctx->pc = 0x1a0ea0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1a0ea4: 0xacc300b0  sw          $v1, 0xB0($a2)
    ctx->pc = 0x1a0ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 176), GPR_U32(ctx, 3));
    // 0x1a0ea8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0eac: 0xc0628f0  jal         func_18A3C0
    ctx->pc = 0x1A0EACu;
    SET_GPR_U32(ctx, 31, 0x1A0EB4u);
    ctx->pc = 0x1A0EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0EACu;
    // 0x1a0eb0: 0xacc200b4  sw          $v0, 0xB4($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 180), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A3C0u, 0x1A0EACu, 0x1A0EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0EB4u;
label_1a0eb4:
    // 0x1a0eb4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a0eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a0eb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0ebc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a0ebcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a0ec0: 0x0  nop
    ctx->pc = 0x1a0ec0u;
    // NOP
    // 0x1a0ec4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1a0ec4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1a0ec8: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1a0ec8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x1a0ecc: 0xc062860  jal         func_18A180
    ctx->pc = 0x1A0ECCu;
    SET_GPR_U32(ctx, 31, 0x1A0ED4u);
    ctx->pc = 0x1A0ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0ECCu;
    // 0x1a0ed0: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A180u, 0x1A0ECCu, 0x1A0ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0ED4u;
label_1a0ed4:
    // 0x1a0ed4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a0ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a0ed8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a0ed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a0edc: 0xc062858  jal         func_18A160
    ctx->pc = 0x1A0EDCu;
    SET_GPR_U32(ctx, 31, 0x1A0EE4u);
    ctx->pc = 0x1A0EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0EDCu;
    // 0x1a0ee0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A160u, 0x1A0EDCu, 0x1A0EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0EE4u;
label_1a0ee4:
    // 0x1a0ee4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0ee8: 0xc062200  jal         func_188800
    ctx->pc = 0x1A0EE8u;
    SET_GPR_U32(ctx, 31, 0x1A0EF0u);
    ctx->pc = 0x1A0EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0EE8u;
    // 0x1a0eec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188800u, 0x1A0EE8u, 0x1A0EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0EF0u;
label_1a0ef0:
    // 0x1a0ef0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1a0ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1a0ef4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0ef8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a0ef8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a0efc: 0xc06223c  jal         func_1888F0
    ctx->pc = 0x1A0EFCu;
    SET_GPR_U32(ctx, 31, 0x1A0F04u);
    ctx->pc = 0x1A0F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0EFCu;
    // 0x1a0f00: 0x3c058000  lui         $a1, 0x8000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1888F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1888F0u, 0x1A0EFCu, 0x1A0F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0F04u;
label_1a0f04:
    // 0x1a0f04: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1a0f04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1a0f08: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a0f08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0f0c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1a0f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1a0f10: 0xc0805c8  jal         func_201720
    ctx->pc = 0x1A0F10u;
    SET_GPR_U32(ctx, 31, 0x1A0F18u);
    ctx->pc = 0x1A0F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0F10u;
    // 0x1a0f14: 0x24a503e0  addiu       $a1, $a1, 0x3E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1A0F10u, 0x1A0F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0F18u;
label_1a0f18:
    // 0x1a0f18: 0x8e4209d0  lw          $v0, 0x9D0($s2)
    ctx->pc = 0x1a0f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2512)));
    // 0x1a0f1c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1a0f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1a0f20: 0xa04001bb  sb          $zero, 0x1BB($v0)
    ctx->pc = 0x1a0f20u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 443), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a0f24: 0xc080702  jal         func_201C08
    ctx->pc = 0x1A0F24u;
    SET_GPR_U32(ctx, 31, 0x1A0F2Cu);
    ctx->pc = 0x1A0F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0F24u;
    // 0x1a0f28: 0x244400bc  addiu       $a0, $v0, 0xBC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1A0F24u, 0x1A0F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0F2Cu;
label_1a0f2c:
    // 0x1a0f2c: 0x8e4309d0  lw          $v1, 0x9D0($s2)
    ctx->pc = 0x1a0f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2512)));
    // 0x1a0f30: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a0f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0f34: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1a0f34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a0f38: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a0f38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a0f3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a0f3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0f40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a0f40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0f44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a0f44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0f48: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0F48u;
        // 0x1a0f4c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0F50u;
}
