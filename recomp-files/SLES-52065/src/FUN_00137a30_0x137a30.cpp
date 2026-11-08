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

// Function: FUN_00137a30
// Address: 0x137a30 - 0x137f88
void FUN_00137a30_0x137a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00137a30_0x137a30");
#endif

    switch (ctx->pc) {
        case 0x137a70u: goto label_137a70;
        case 0x137a80u: goto label_137a80;
        case 0x137a90u: goto label_137a90;
        case 0x137aa0u: goto label_137aa0;
        case 0x137ac0u: goto label_137ac0;
        case 0x137ad0u: goto label_137ad0;
        case 0x137ae0u: goto label_137ae0;
        case 0x137af0u: goto label_137af0;
        case 0x137b34u: goto label_137b34;
        case 0x137b4cu: goto label_137b4c;
        case 0x137b58u: goto label_137b58;
        case 0x137b74u: goto label_137b74;
        case 0x137bc0u: goto label_137bc0;
        case 0x137c10u: goto label_137c10;
        case 0x137c24u: goto label_137c24;
        case 0x137c38u: goto label_137c38;
        case 0x137c4cu: goto label_137c4c;
        case 0x137d18u: goto label_137d18;
        case 0x137d30u: goto label_137d30;
        case 0x137d9cu: goto label_137d9c;
        case 0x137da8u: goto label_137da8;
        case 0x137ee8u: goto label_137ee8;
        case 0x137f08u: goto label_137f08;
        case 0x137f18u: goto label_137f18;
        case 0x137f3cu: goto label_137f3c;
        default: break;
    }

    ctx->pc = 0x137a30u;

    // 0x137a30: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x137a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x137a34: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x137a34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x137a38: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x137a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x137a3c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x137a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x137a40: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x137a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x137a44: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x137a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x137a48: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x137a48u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137a4c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x137a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x137a50: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x137a50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137a54: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x137a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x137a58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x137a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x137a5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x137a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x137a60: 0xac940000  sw          $s4, 0x0($a0)
    ctx->pc = 0x137a60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 20));
    // 0x137a64: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x137a64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137a68: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x137A68u;
    SET_GPR_U32(ctx, 31, 0x137A70u);
    ctx->pc = 0x137A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137A68u;
    // 0x137a6c: 0x26a40058  addiu       $a0, $s5, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x137A68u, 0x137A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137A70u;
label_137a70:
    // 0x137a70: 0x26a40064  addiu       $a0, $s5, 0x64
    ctx->pc = 0x137a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 100));
    // 0x137a74: 0x26850004  addiu       $a1, $s4, 0x4
    ctx->pc = 0x137a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x137a78: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x137A78u;
    SET_GPR_U32(ctx, 31, 0x137A80u);
    ctx->pc = 0x137A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137A78u;
    // 0x137a7c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x137A78u, 0x137A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137A80u;
label_137a80:
    // 0x137a80: 0x27a400e4  addiu       $a0, $sp, 0xE4
    ctx->pc = 0x137a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x137a84: 0x26850008  addiu       $a1, $s4, 0x8
    ctx->pc = 0x137a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x137a88: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x137A88u;
    SET_GPR_U32(ctx, 31, 0x137A90u);
    ctx->pc = 0x137A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137A88u;
    // 0x137a8c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x137A88u, 0x137A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137A90u;
label_137a90:
    // 0x137a90: 0x27a400e4  addiu       $a0, $sp, 0xE4
    ctx->pc = 0x137a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x137a94: 0x2685000c  addiu       $a1, $s4, 0xC
    ctx->pc = 0x137a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
    // 0x137a98: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x137A98u;
    SET_GPR_U32(ctx, 31, 0x137AA0u);
    ctx->pc = 0x137A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137A98u;
    // 0x137a9c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x137A98u, 0x137AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137AA0u;
label_137aa0:
    // 0x137aa0: 0x8ea20058  lw          $v0, 0x58($s5)
    ctx->pc = 0x137aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
    // 0x137aa4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x137AA4u;
    {
        const bool branch_taken_0x137aa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x137AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137AA4u;
        // 0x137aa8: 0x26a4005c  addiu       $a0, $s5, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137aa4) {
            ctx->pc = 0x137AB4u;
            goto label_137ab4;
        }
    }
    ctx->pc = 0x137AACu;
    // 0x137aac: 0x1000012c  b           . + 4 + (0x12C << 2)
    ctx->pc = 0x137AACu;
    {
        const bool branch_taken_0x137aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137AACu;
        // 0x137ab0: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137aac) {
            ctx->pc = 0x137F60u;
            goto label_137f60;
        }
    }
    ctx->pc = 0x137AB4u;
label_137ab4:
    // 0x137ab4: 0x26850010  addiu       $a1, $s4, 0x10
    ctx->pc = 0x137ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x137ab8: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x137AB8u;
    SET_GPR_U32(ctx, 31, 0x137AC0u);
    ctx->pc = 0x137ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137AB8u;
    // 0x137abc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x137AB8u, 0x137AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137AC0u;
label_137ac0:
    // 0x137ac0: 0x26a40060  addiu       $a0, $s5, 0x60
    ctx->pc = 0x137ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
    // 0x137ac4: 0x26850014  addiu       $a1, $s4, 0x14
    ctx->pc = 0x137ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
    // 0x137ac8: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x137AC8u;
    SET_GPR_U32(ctx, 31, 0x137AD0u);
    ctx->pc = 0x137ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137AC8u;
    // 0x137acc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x137AC8u, 0x137AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137AD0u;
label_137ad0:
    // 0x137ad0: 0x26a4004c  addiu       $a0, $s5, 0x4C
    ctx->pc = 0x137ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 76));
    // 0x137ad4: 0x26850018  addiu       $a1, $s4, 0x18
    ctx->pc = 0x137ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    // 0x137ad8: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x137AD8u;
    SET_GPR_U32(ctx, 31, 0x137AE0u);
    ctx->pc = 0x137ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137AD8u;
    // 0x137adc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x137AD8u, 0x137AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137AE0u;
label_137ae0:
    // 0x137ae0: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x137ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x137ae4: 0x2685001c  addiu       $a1, $s4, 0x1C
    ctx->pc = 0x137ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 28));
    // 0x137ae8: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x137AE8u;
    SET_GPR_U32(ctx, 31, 0x137AF0u);
    ctx->pc = 0x137AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137AE8u;
    // 0x137aec: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x137AE8u, 0x137AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137AF0u;
label_137af0:
    // 0x137af0: 0x8ea4004c  lw          $a0, 0x4C($s5)
    ctx->pc = 0x137af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
    // 0x137af4: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x137AF4u;
    {
        const bool branch_taken_0x137af4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x137AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137AF4u;
        // 0x137af8: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137af4) {
            ctx->pc = 0x137B18u;
            goto label_137b18;
        }
    }
    ctx->pc = 0x137AFCu;
    // 0x137afc: 0x8ea30058  lw          $v1, 0x58($s5)
    ctx->pc = 0x137afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
    // 0x137b00: 0x2901021  addu        $v0, $s4, $s0
    ctx->pc = 0x137b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x137b04: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x137b04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x137b08: 0xaea20050  sw          $v0, 0x50($s5)
    ctx->pc = 0x137b08u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 80), GPR_U32(ctx, 2));
    // 0x137b0c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x137b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x137b10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x137B10u;
    {
        const bool branch_taken_0x137b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137B10u;
        // 0x137b14: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137b10) {
            ctx->pc = 0x137B1Cu;
            goto label_137b1c;
        }
    }
    ctx->pc = 0x137B18u;
label_137b18:
    // 0x137b18: 0xaea00050  sw          $zero, 0x50($s5)
    ctx->pc = 0x137b18u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 80), GPR_U32(ctx, 0));
label_137b1c:
    // 0x137b1c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x137b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x137b20: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x137B20u;
    {
        const bool branch_taken_0x137b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137B20u;
        // 0x137b24: 0x2902821  addu        $a1, $s4, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137b20) {
            ctx->pc = 0x137C00u;
            goto label_137c00;
        }
    }
    ctx->pc = 0x137B28u;
    // 0x137b28: 0x27a400ec  addiu       $a0, $sp, 0xEC
    ctx->pc = 0x137b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x137b2c: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x137B2Cu;
    SET_GPR_U32(ctx, 31, 0x137B34u);
    ctx->pc = 0x137B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137B2Cu;
    // 0x137b30: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x137B2Cu, 0x137B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137B34u;
label_137b34:
    // 0x137b34: 0x27b600d0  addiu       $s6, $sp, 0xD0
    ctx->pc = 0x137b34u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x137b38: 0x26a40018  addiu       $a0, $s5, 0x18
    ctx->pc = 0x137b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 24));
    // 0x137b3c: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x137b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x137b40: 0x8fa500ec  lw          $a1, 0xEC($sp)
    ctx->pc = 0x137b40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x137b44: 0xc04eae0  jal         func_13AB80
    ctx->pc = 0x137B44u;
    SET_GPR_U32(ctx, 31, 0x137B4Cu);
    ctx->pc = 0x137B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137B44u;
    // 0x137b48: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AB80u, 0x137B44u, 0x137B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137B4Cu;
label_137b4c:
    // 0x137b4c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x137b4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137b50: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x137B50u;
    {
        const bool branch_taken_0x137b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137B50u;
        // 0x137b54: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137b50) {
            ctx->pc = 0x137BF0u;
            goto label_137bf0;
        }
    }
    ctx->pc = 0x137B58u;
label_137b58:
    // 0x137b58: 0x27b30084  addiu       $s3, $sp, 0x84
    ctx->pc = 0x137b58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x137b5c: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x137b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    // 0x137b60: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x137b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137b64: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x137b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x137b68: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x137b68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x137b6c: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x137B6Cu;
    SET_GPR_U32(ctx, 31, 0x137B74u);
    ctx->pc = 0x137B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137B6Cu;
    // 0x137b70: 0x2822821  addu        $a1, $s4, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x137B6Cu, 0x137B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137B74u;
label_137b74:
    // 0x137b74: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x137b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x137b78: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x137b78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x137b7c: 0x2901021  addu        $v0, $s4, $s0
    ctx->pc = 0x137b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x137b80: 0x27a80088  addiu       $t0, $sp, 0x88
    ctx->pc = 0x137b80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x137b84: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x137b84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x137b88: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x137b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x137b8c: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x137b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x137b90: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x137b90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x137b94: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x137b94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x137b98: 0x8ea30020  lw          $v1, 0x20($s5)
    ctx->pc = 0x137b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x137b9c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x137b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x137ba0: 0x723821  addu        $a3, $v1, $s2
    ctx->pc = 0x137ba0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x137ba4: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x137ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x137ba8: 0x24e50010  addiu       $a1, $a3, 0x10
    ctx->pc = 0x137ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x137bac: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x137bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x137bb0: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x137bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x137bb4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x137bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x137bb8: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x137bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x137bbc: 0x0  nop
    ctx->pc = 0x137bbcu;
    // NOP
label_137bc0:
    // 0x137bc0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x137bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x137bc4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x137bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x137bc8: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x137bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x137bcc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x137bccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x137bd0: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x137bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x137bd4: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x137bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x137bd8: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x137BD8u;
    {
        const bool branch_taken_0x137bd8 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x137BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137BD8u;
        // 0x137bdc: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137bd8) {
            ctx->pc = 0x137BC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_137bc0;
        }
    }
    ctx->pc = 0x137BE0u;
    // 0x137be0: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x137be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x137be4: 0x26520060  addiu       $s2, $s2, 0x60
    ctx->pc = 0x137be4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x137be8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x137be8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x137bec: 0xace20050  sw          $v0, 0x50($a3)
    ctx->pc = 0x137becu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 80), GPR_U32(ctx, 2));
label_137bf0:
    // 0x137bf0: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x137bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x137bf4: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x137bf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x137bf8: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x137BF8u;
    {
        const bool branch_taken_0x137bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x137BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137BF8u;
        // 0x137bfc: 0x2901021  addu        $v0, $s4, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137bf8) {
            ctx->pc = 0x137B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_137b58;
        }
    }
    ctx->pc = 0x137C00u;
label_137c00:
    // 0x137c00: 0x2902821  addu        $a1, $s4, $s0
    ctx->pc = 0x137c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x137c04: 0x26a40028  addiu       $a0, $s5, 0x28
    ctx->pc = 0x137c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 40));
    // 0x137c08: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x137C08u;
    SET_GPR_U32(ctx, 31, 0x137C10u);
    ctx->pc = 0x137C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137C08u;
    // 0x137c0c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x137C08u, 0x137C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137C10u;
label_137c10:
    // 0x137c10: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x137c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x137c14: 0x26a4002c  addiu       $a0, $s5, 0x2C
    ctx->pc = 0x137c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 44));
    // 0x137c18: 0x2822821  addu        $a1, $s4, $v0
    ctx->pc = 0x137c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x137c1c: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x137C1Cu;
    SET_GPR_U32(ctx, 31, 0x137C24u);
    ctx->pc = 0x137C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137C1Cu;
    // 0x137c20: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x137C1Cu, 0x137C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137C24u;
label_137c24:
    // 0x137c24: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x137c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x137c28: 0x26a40030  addiu       $a0, $s5, 0x30
    ctx->pc = 0x137c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x137c2c: 0x2822821  addu        $a1, $s4, $v0
    ctx->pc = 0x137c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x137c30: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x137C30u;
    SET_GPR_U32(ctx, 31, 0x137C38u);
    ctx->pc = 0x137C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137C30u;
    // 0x137c34: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x137C30u, 0x137C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137C38u;
label_137c38:
    // 0x137c38: 0x2602000c  addiu       $v0, $s0, 0xC
    ctx->pc = 0x137c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x137c3c: 0x26a40034  addiu       $a0, $s5, 0x34
    ctx->pc = 0x137c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 52));
    // 0x137c40: 0x2822821  addu        $a1, $s4, $v0
    ctx->pc = 0x137c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x137c44: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x137C44u;
    SET_GPR_U32(ctx, 31, 0x137C4Cu);
    ctx->pc = 0x137C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137C44u;
    // 0x137c48: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x137C44u, 0x137C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137C4Cu;
label_137c4c:
    // 0x137c4c: 0x8ea50028  lw          $a1, 0x28($s5)
    ctx->pc = 0x137c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x137c50: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x137c50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x137c54: 0x8ea30064  lw          $v1, 0x64($s5)
    ctx->pc = 0x137c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 100)));
    // 0x137c58: 0x2901021  addu        $v0, $s4, $s0
    ctx->pc = 0x137c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x137c5c: 0x2404fff0  addiu       $a0, $zero, -0x10
    ctx->pc = 0x137c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x137c60: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x137c60u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x137c64: 0x653018  mult        $a2, $v1, $a1
    ctx->pc = 0x137c64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x137c68: 0xaea20038  sw          $v0, 0x38($s5)
    ctx->pc = 0x137c68u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 56), GPR_U32(ctx, 2));
    // 0x137c6c: 0x8ea5002c  lw          $a1, 0x2C($s5)
    ctx->pc = 0x137c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 44)));
    // 0x137c70: 0x2068021  addu        $s0, $s0, $a2
    ctx->pc = 0x137c70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x137c74: 0x8ea30064  lw          $v1, 0x64($s5)
    ctx->pc = 0x137c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 100)));
    // 0x137c78: 0x2901021  addu        $v0, $s4, $s0
    ctx->pc = 0x137c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x137c7c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x137c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x137c80: 0x70651818  mult1       $v1, $v1, $a1
    ctx->pc = 0x137c80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x137c84: 0xaea2003c  sw          $v0, 0x3C($s5)
    ctx->pc = 0x137c84u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 60), GPR_U32(ctx, 2));
    // 0x137c88: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x137c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x137c8c: 0x8ea30030  lw          $v1, 0x30($s5)
    ctx->pc = 0x137c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x137c90: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x137c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x137c94: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x137c94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x137c98: 0x2901021  addu        $v0, $s4, $s0
    ctx->pc = 0x137c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x137c9c: 0xaea20040  sw          $v0, 0x40($s5)
    ctx->pc = 0x137c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 64), GPR_U32(ctx, 2));
    // 0x137ca0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x137ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x137ca4: 0x8ea30034  lw          $v1, 0x34($s5)
    ctx->pc = 0x137ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x137ca8: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x137ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x137cac: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x137cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x137cb0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x137cb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x137cb4: 0x2901021  addu        $v0, $s4, $s0
    ctx->pc = 0x137cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x137cb8: 0xaea20044  sw          $v0, 0x44($s5)
    ctx->pc = 0x137cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 2));
    // 0x137cbc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x137cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x137cc0: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x137cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x137cc4: 0x8ea20064  lw          $v0, 0x64($s5)
    ctx->pc = 0x137cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 100)));
    // 0x137cc8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x137cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x137ccc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x137cccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x137cd0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x137CD0u;
    {
        const bool branch_taken_0x137cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x137CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137CD0u;
        // 0x137cd4: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137cd0) {
            ctx->pc = 0x137CE0u;
            goto label_137ce0;
        }
    }
    ctx->pc = 0x137CD8u;
    // 0x137cd8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x137cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x137cdc: 0xaea20048  sw          $v0, 0x48($s5)
    ctx->pc = 0x137cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 72), GPR_U32(ctx, 2));
label_137ce0:
    // 0x137ce0: 0x8ea2001c  lw          $v0, 0x1C($s5)
    ctx->pc = 0x137ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x137ce4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x137CE4u;
    {
        const bool branch_taken_0x137ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137CE4u;
        // 0x137ce8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137ce4) {
            ctx->pc = 0x137CF0u;
            goto label_137cf0;
        }
    }
    ctx->pc = 0x137CECu;
    // 0x137cec: 0xaea20048  sw          $v0, 0x48($s5)
    ctx->pc = 0x137cecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 72), GPR_U32(ctx, 2));
label_137cf0:
    // 0x137cf0: 0x8ea30064  lw          $v1, 0x64($s5)
    ctx->pc = 0x137cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 100)));
    // 0x137cf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x137cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x137cf8: 0x14620074  bne         $v1, $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x137CF8u;
    {
        const bool branch_taken_0x137cf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x137cf8) {
            ctx->pc = 0x137ECCu;
            goto label_137ecc;
        }
    }
    ctx->pc = 0x137D00u;
    // 0x137d00: 0x8ea2001c  lw          $v0, 0x1C($s5)
    ctx->pc = 0x137d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x137d04: 0x10400071  beqz        $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x137D04u;
    {
        const bool branch_taken_0x137d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x137d04) {
            ctx->pc = 0x137ECCu;
            goto label_137ecc;
        }
    }
    ctx->pc = 0x137D0Cu;
    // 0x137d0c: 0x8ea20028  lw          $v0, 0x28($s5)
    ctx->pc = 0x137d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x137d10: 0xc040168  jal         func_1005A0
    ctx->pc = 0x137D10u;
    SET_GPR_U32(ctx, 31, 0x137D18u);
    ctx->pc = 0x137D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137D10u;
    // 0x137d14: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x137D10u, 0x137D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137D18u;
label_137d18:
    // 0x137d18: 0xaea20024  sw          $v0, 0x24($s5)
    ctx->pc = 0x137d18u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 2));
    // 0x137d1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x137d1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137d20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x137d20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137d24: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x137d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x137d28: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x137D28u;
    {
        const bool branch_taken_0x137d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137D28u;
        // 0x137d2c: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137d28) {
            ctx->pc = 0x137D68u;
            goto label_137d68;
        }
    }
    ctx->pc = 0x137D30u;
label_137d30:
    // 0x137d30: 0x8ea20024  lw          $v0, 0x24($s5)
    ctx->pc = 0x137d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x137d34: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x137d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x137d38: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x137d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x137d3c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x137d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x137d40: 0x8ea20024  lw          $v0, 0x24($s5)
    ctx->pc = 0x137d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x137d44: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x137d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x137d48: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x137d48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x137d4c: 0x8ea20024  lw          $v0, 0x24($s5)
    ctx->pc = 0x137d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x137d50: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x137d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x137d54: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x137d54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x137d58: 0x8ea20024  lw          $v0, 0x24($s5)
    ctx->pc = 0x137d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x137d5c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x137d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x137d60: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x137d60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x137d64: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x137d64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_137d68:
    // 0x137d68: 0x8ea20028  lw          $v0, 0x28($s5)
    ctx->pc = 0x137d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x137d6c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x137d6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x137d70: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x137D70u;
    {
        const bool branch_taken_0x137d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x137d70) {
            ctx->pc = 0x137D30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_137d30;
        }
    }
    ctx->pc = 0x137D78u;
    // 0x137d78: 0x8ea4001c  lw          $a0, 0x1C($s5)
    ctx->pc = 0x137d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x137d7c: 0x8ea50020  lw          $a1, 0x20($s5)
    ctx->pc = 0x137d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x137d80: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x137d80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x137d84: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x137d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x137d88: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x137d88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x137d8c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x137d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x137d90: 0x10a3004e  beq         $a1, $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x137D90u;
    {
        const bool branch_taken_0x137d90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x137D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137D90u;
        // 0x137d94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137d90) {
            ctx->pc = 0x137ECCu;
            goto label_137ecc;
        }
    }
    ctx->pc = 0x137D98u;
    // 0x137d98: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x137d98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_137d9c:
    // 0x137d9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x137d9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137da0: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x137DA0u;
    {
        const bool branch_taken_0x137da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137DA0u;
        // 0x137da4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137da0) {
            ctx->pc = 0x137EB0u;
            goto label_137eb0;
        }
    }
    ctx->pc = 0x137DA8u;
label_137da8:
    // 0x137da8: 0x8ca90008  lw          $t1, 0x8($a1)
    ctx->pc = 0x137da8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x137dac: 0x8ea70024  lw          $a3, 0x24($s5)
    ctx->pc = 0x137dacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x137db0: 0x1245021  addu        $t2, $t1, $a0
    ctx->pc = 0x137db0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x137db4: 0x8d490000  lw          $t1, 0x0($t2)
    ctx->pc = 0x137db4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x137db8: 0xc5410004  lwc1        $f1, 0x4($t2)
    ctx->pc = 0x137db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x137dbc: 0x95100  sll         $t2, $t1, 4
    ctx->pc = 0x137dbcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x137dc0: 0xea4821  addu        $t1, $a3, $t2
    ctx->pc = 0x137dc0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x137dc4: 0x8d270000  lw          $a3, 0x0($t1)
    ctx->pc = 0x137dc4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x137dc8: 0x14e80006  bne         $a3, $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x137DC8u;
    {
        const bool branch_taken_0x137dc8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        if (branch_taken_0x137dc8) {
            ctx->pc = 0x137DE4u;
            goto label_137de4;
        }
    }
    ctx->pc = 0x137DD0u;
    // 0x137dd0: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x137dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x137dd4: 0x8ea70024  lw          $a3, 0x24($s5)
    ctx->pc = 0x137dd4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x137dd8: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x137dd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x137ddc: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x137DDCu;
    {
        const bool branch_taken_0x137ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137DDCu;
        // 0x137de0: 0xe4e10008  swc1        $f1, 0x8($a3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x137ddc) {
            ctx->pc = 0x137EA8u;
            goto label_137ea8;
        }
    }
    ctx->pc = 0x137DE4u;
label_137de4:
    // 0x137de4: 0x0  nop
    ctx->pc = 0x137de4u;
    // NOP
    // 0x137de8: 0x8d270004  lw          $a3, 0x4($t1)
    ctx->pc = 0x137de8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x137dec: 0x14e80006  bne         $a3, $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x137DECu;
    {
        const bool branch_taken_0x137dec = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        ctx->pc = 0x137DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137DECu;
        // 0x137df0: 0x252b0004  addiu       $t3, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137dec) {
            ctx->pc = 0x137E08u;
            goto label_137e08;
        }
    }
    ctx->pc = 0x137DF4u;
    // 0x137df4: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x137df4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x137df8: 0x8ea70024  lw          $a3, 0x24($s5)
    ctx->pc = 0x137df8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x137dfc: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x137dfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x137e00: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x137E00u;
    {
        const bool branch_taken_0x137e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137E00u;
        // 0x137e04: 0xe4e1000c  swc1        $f1, 0xC($a3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x137e00) {
            ctx->pc = 0x137EA8u;
            goto label_137ea8;
        }
    }
    ctx->pc = 0x137E08u;
label_137e08:
    // 0x137e08: 0x252b0008  addiu       $t3, $t1, 0x8
    ctx->pc = 0x137e08u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x137e0c: 0xc5200008  lwc1        $f0, 0x8($t1)
    ctx->pc = 0x137e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137e10: 0xc522000c  lwc1        $f2, 0xC($t1)
    ctx->pc = 0x137e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x137e14: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x137e14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137e18: 0x0  nop
    ctx->pc = 0x137e18u;
    // NOP
    // 0x137e1c: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x137E1Cu;
    {
        const bool branch_taken_0x137e1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x137E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137E1Cu;
        // 0x137e20: 0x2527000c  addiu       $a3, $t1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137e1c) {
            ctx->pc = 0x137E64u;
            goto label_137e64;
        }
    }
    ctx->pc = 0x137E24u;
    // 0x137e24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x137e24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137e28: 0x0  nop
    ctx->pc = 0x137e28u;
    // NOP
    // 0x137e2c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x137E2Cu;
    {
        const bool branch_taken_0x137e2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x137e2c) {
            ctx->pc = 0x137E40u;
            goto label_137e40;
        }
    }
    ctx->pc = 0x137E34u;
    // 0x137e34: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x137e34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x137e38: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x137E38u;
    {
        const bool branch_taken_0x137e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137E38u;
        // 0x137e3c: 0xe4e00000  swc1        $f0, 0x0($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x137e38) {
            ctx->pc = 0x137EA8u;
            goto label_137ea8;
        }
    }
    ctx->pc = 0x137E40u;
label_137e40:
    // 0x137e40: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x137e40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x137e44: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x137e44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x137e48: 0x8ea70024  lw          $a3, 0x24($s5)
    ctx->pc = 0x137e48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x137e4c: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x137e4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x137e50: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x137e50u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x137e54: 0x8ea70024  lw          $a3, 0x24($s5)
    ctx->pc = 0x137e54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x137e58: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x137e58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x137e5c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x137E5Cu;
    {
        const bool branch_taken_0x137e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137E5Cu;
        // 0x137e60: 0xe4e10008  swc1        $f1, 0x8($a3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x137e5c) {
            ctx->pc = 0x137EA8u;
            goto label_137ea8;
        }
    }
    ctx->pc = 0x137E64u;
label_137e64:
    // 0x137e64: 0x0  nop
    ctx->pc = 0x137e64u;
    // NOP
    // 0x137e68: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x137e68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137e6c: 0x0  nop
    ctx->pc = 0x137e6cu;
    // NOP
    // 0x137e70: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x137E70u;
    {
        const bool branch_taken_0x137e70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x137e70) {
            ctx->pc = 0x137E84u;
            goto label_137e84;
        }
    }
    ctx->pc = 0x137E78u;
    // 0x137e78: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x137e78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x137e7c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x137E7Cu;
    {
        const bool branch_taken_0x137e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137E7Cu;
        // 0x137e80: 0xe5600000  swc1        $f0, 0x0($t3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x137e7c) {
            ctx->pc = 0x137EA8u;
            goto label_137ea8;
        }
    }
    ctx->pc = 0x137E84u;
label_137e84:
    // 0x137e84: 0x0  nop
    ctx->pc = 0x137e84u;
    // NOP
    // 0x137e88: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x137e88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x137e8c: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x137e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x137e90: 0x8ea70024  lw          $a3, 0x24($s5)
    ctx->pc = 0x137e90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x137e94: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x137e94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x137e98: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x137e98u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x137e9c: 0x8ea70024  lw          $a3, 0x24($s5)
    ctx->pc = 0x137e9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x137ea0: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x137ea0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x137ea4: 0xe4e1000c  swc1        $f1, 0xC($a3)
    ctx->pc = 0x137ea4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
label_137ea8:
    // 0x137ea8: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x137ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x137eac: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x137eacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_137eb0:
    // 0x137eb0: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x137eb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x137eb4: 0xc7382b  sltu        $a3, $a2, $a3
    ctx->pc = 0x137eb4u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x137eb8: 0x14e0ffbb  bnez        $a3, . + 4 + (-0x45 << 2)
    ctx->pc = 0x137EB8u;
    {
        const bool branch_taken_0x137eb8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x137eb8) {
            ctx->pc = 0x137DA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_137da8;
        }
    }
    ctx->pc = 0x137EC0u;
    // 0x137ec0: 0x24a50060  addiu       $a1, $a1, 0x60
    ctx->pc = 0x137ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
    // 0x137ec4: 0x14a3ffb5  bne         $a1, $v1, . + 4 + (-0x4B << 2)
    ctx->pc = 0x137EC4u;
    {
        const bool branch_taken_0x137ec4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x137EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137EC4u;
        // 0x137ec8: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137ec4) {
            ctx->pc = 0x137D9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_137d9c;
        }
    }
    ctx->pc = 0x137ECCu;
label_137ecc:
    // 0x137ecc: 0x0  nop
    ctx->pc = 0x137eccu;
    // NOP
    // 0x137ed0: 0x8eb10058  lw          $s1, 0x58($s5)
    ctx->pc = 0x137ed0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
    // 0x137ed4: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x137ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x137ed8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x137ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x137edc: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x137edcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x137ee0: 0xc040168  jal         func_1005A0
    ctx->pc = 0x137EE0u;
    SET_GPR_U32(ctx, 31, 0x137EE8u);
    ctx->pc = 0x137EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137EE0u;
    // 0x137ee4: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x137EE0u, 0x137EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137EE8u;
label_137ee8:
    // 0x137ee8: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x137ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x137eec: 0x3c060013  lui         $a2, 0x13
    ctx->pc = 0x137eecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)19 << 16));
    // 0x137ef0: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x137ef0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137ef4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x137ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137ef8: 0x24a57520  addiu       $a1, $a1, 0x7520
    ctx->pc = 0x137ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29984));
    // 0x137efc: 0x24c67890  addiu       $a2, $a2, 0x7890
    ctx->pc = 0x137efcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30864));
    // 0x137f00: 0xc07a424  jal         func_1E9090
    ctx->pc = 0x137F00u;
    SET_GPR_U32(ctx, 31, 0x137F08u);
    ctx->pc = 0x137F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137F00u;
    // 0x137f04: 0x240700a0  addiu       $a3, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9090u, 0x137F00u, 0x137F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137F08u;
label_137f08:
    // 0x137f08: 0xaea20054  sw          $v0, 0x54($s5)
    ctx->pc = 0x137f08u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 2));
    // 0x137f0c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x137f0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137f10: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x137F10u;
    {
        const bool branch_taken_0x137f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137F10u;
        // 0x137f14: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137f10) {
            ctx->pc = 0x137F44u;
            goto label_137f44;
        }
    }
    ctx->pc = 0x137F18u;
label_137f18:
    // 0x137f18: 0x8ea30054  lw          $v1, 0x54($s5)
    ctx->pc = 0x137f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x137f1c: 0x2901021  addu        $v0, $s4, $s0
    ctx->pc = 0x137f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x137f20: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x137f20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137f24: 0x261000b0  addiu       $s0, $s0, 0xB0
    ctx->pc = 0x137f24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x137f28: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x137f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x137f2c: 0xac620090  sw          $v0, 0x90($v1)
    ctx->pc = 0x137f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 2));
    // 0x137f30: 0x8ea20054  lw          $v0, 0x54($s5)
    ctx->pc = 0x137f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x137f34: 0xc04e1a4  jal         func_138690
    ctx->pc = 0x137F34u;
    SET_GPR_U32(ctx, 31, 0x137F3Cu);
    ctx->pc = 0x137F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137F34u;
    // 0x137f38: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138690u, 0x137F34u, 0x137F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137F3Cu;
label_137f3c:
    // 0x137f3c: 0x263100a0  addiu       $s1, $s1, 0xA0
    ctx->pc = 0x137f3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x137f40: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x137f40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_137f44:
    // 0x137f44: 0x0  nop
    ctx->pc = 0x137f44u;
    // NOP
    // 0x137f48: 0x8ea20058  lw          $v0, 0x58($s5)
    ctx->pc = 0x137f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
    // 0x137f4c: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x137f4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x137f50: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x137F50u;
    {
        const bool branch_taken_0x137f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x137f50) {
            ctx->pc = 0x137F18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_137f18;
        }
    }
    ctx->pc = 0x137F58u;
    // 0x137f58: 0xaeb00004  sw          $s0, 0x4($s5)
    ctx->pc = 0x137f58u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 16));
    // 0x137f5c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x137f5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_137f60:
    // 0x137f60: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x137f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x137f64: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x137f64u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x137f68: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x137f68u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x137f6c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x137f6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x137f70: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x137f70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x137f74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x137f74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137f78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x137f78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137f7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x137f7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137f80: 0x3e00008  jr          $ra
    ctx->pc = 0x137F80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137F80u;
        // 0x137f84: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137F80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137F88u;
}
