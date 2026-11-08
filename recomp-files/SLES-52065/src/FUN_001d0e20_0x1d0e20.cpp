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

// Function: FUN_001d0e20
// Address: 0x1d0e20 - 0x1d0fc8
void FUN_001d0e20_0x1d0e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d0e20_0x1d0e20");
#endif

    switch (ctx->pc) {
        case 0x1d0e44u: goto label_1d0e44;
        case 0x1d0e5cu: goto label_1d0e5c;
        case 0x1d0e64u: goto label_1d0e64;
        case 0x1d0e74u: goto label_1d0e74;
        case 0x1d0e8cu: goto label_1d0e8c;
        case 0x1d0e94u: goto label_1d0e94;
        case 0x1d0ea4u: goto label_1d0ea4;
        case 0x1d0ebcu: goto label_1d0ebc;
        case 0x1d0ec4u: goto label_1d0ec4;
        case 0x1d0ed4u: goto label_1d0ed4;
        case 0x1d0eecu: goto label_1d0eec;
        case 0x1d0ef4u: goto label_1d0ef4;
        case 0x1d0f04u: goto label_1d0f04;
        case 0x1d0f1cu: goto label_1d0f1c;
        case 0x1d0f24u: goto label_1d0f24;
        case 0x1d0f34u: goto label_1d0f34;
        case 0x1d0f40u: goto label_1d0f40;
        case 0x1d0f54u: goto label_1d0f54;
        case 0x1d0f5cu: goto label_1d0f5c;
        case 0x1d0f6cu: goto label_1d0f6c;
        case 0x1d0f84u: goto label_1d0f84;
        case 0x1d0f8cu: goto label_1d0f8c;
        case 0x1d0f9cu: goto label_1d0f9c;
        case 0x1d0fa8u: goto label_1d0fa8;
        case 0x1d0fb4u: goto label_1d0fb4;
        default: break;
    }

    ctx->pc = 0x1d0e20u;

    // 0x1d0e20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d0e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d0e24: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d0e24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d0e28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d0e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d0e2c: 0x24a53450  addiu       $a1, $a1, 0x3450
    ctx->pc = 0x1d0e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13392));
    // 0x1d0e30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d0e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d0e34: 0x27a6003c  addiu       $a2, $sp, 0x3C
    ctx->pc = 0x1d0e34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1d0e38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d0e38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0e3c: 0xc04889c  jal         func_122270
    ctx->pc = 0x1D0E3Cu;
    SET_GPR_U32(ctx, 31, 0x1D0E44u);
    ctx->pc = 0x1D0E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0E3Cu;
    // 0x1d0e40: 0x27a40038  addiu       $a0, $sp, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1D0E3Cu, 0x1D0E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0E44u;
label_1d0e44:
    // 0x1d0e44: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d0e44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d0e48: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d0e48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d0e4c: 0xdc26fc80  ld          $a2, -0x380($at)
    ctx->pc = 0x1d0e4cu;
    SET_GPR_U64(ctx, 6, FAST_READ64(0x36FC80u));
    // 0x1d0e50: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1d0e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d0e54: 0xc0805c8  jal         func_201720
    ctx->pc = 0x1D0E54u;
    SET_GPR_U32(ctx, 31, 0x1D0E5Cu);
    ctx->pc = 0x1D0E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0E54u;
    // 0x1d0e58: 0x24a53458  addiu       $a1, $a1, 0x3458 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1D0E54u, 0x1D0E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0E5Cu;
label_1d0e5c:
    // 0x1d0e5c: 0xc080748  jal         func_201D20
    ctx->pc = 0x1D0E5Cu;
    SET_GPR_U32(ctx, 31, 0x1D0E64u);
    ctx->pc = 0x1D0E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0E5Cu;
    // 0x1d0e60: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x1D0E5Cu, 0x1D0E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0E64u;
label_1d0e64:
    // 0x1d0e64: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d0e64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0e68: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x1d0e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1d0e6c: 0xc049c74  jal         func_1271D0
    ctx->pc = 0x1D0E6Cu;
    SET_GPR_U32(ctx, 31, 0x1D0E74u);
    ctx->pc = 0x1D0E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0E6Cu;
    // 0x1d0e70: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1271D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1271D0u, 0x1D0E6Cu, 0x1D0E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0E74u;
label_1d0e74:
    // 0x1d0e74: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d0e74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d0e78: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d0e78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d0e7c: 0x8c26fc88  lw          $a2, -0x378($at)
    ctx->pc = 0x1d0e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x36FC88u));
    // 0x1d0e80: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1d0e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d0e84: 0xc0805c8  jal         func_201720
    ctx->pc = 0x1D0E84u;
    SET_GPR_U32(ctx, 31, 0x1D0E8Cu);
    ctx->pc = 0x1D0E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0E84u;
    // 0x1d0e88: 0x24a53460  addiu       $a1, $a1, 0x3460 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1D0E84u, 0x1D0E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0E8Cu;
label_1d0e8c:
    // 0x1d0e8c: 0xc080748  jal         func_201D20
    ctx->pc = 0x1D0E8Cu;
    SET_GPR_U32(ctx, 31, 0x1D0E94u);
    ctx->pc = 0x1D0E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0E8Cu;
    // 0x1d0e90: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x1D0E8Cu, 0x1D0E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0E94u;
label_1d0e94:
    // 0x1d0e94: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d0e94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0e98: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x1d0e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1d0e9c: 0xc049c74  jal         func_1271D0
    ctx->pc = 0x1D0E9Cu;
    SET_GPR_U32(ctx, 31, 0x1D0EA4u);
    ctx->pc = 0x1D0EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0E9Cu;
    // 0x1d0ea0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1271D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1271D0u, 0x1D0E9Cu, 0x1D0EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0EA4u;
label_1d0ea4:
    // 0x1d0ea4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d0ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d0ea8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d0ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d0eac: 0x8c26fc90  lw          $a2, -0x370($at)
    ctx->pc = 0x1d0eacu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x36FC90u));
    // 0x1d0eb0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1d0eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d0eb4: 0xc0805c8  jal         func_201720
    ctx->pc = 0x1D0EB4u;
    SET_GPR_U32(ctx, 31, 0x1D0EBCu);
    ctx->pc = 0x1D0EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0EB4u;
    // 0x1d0eb8: 0x24a53468  addiu       $a1, $a1, 0x3468 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1D0EB4u, 0x1D0EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0EBCu;
label_1d0ebc:
    // 0x1d0ebc: 0xc080748  jal         func_201D20
    ctx->pc = 0x1D0EBCu;
    SET_GPR_U32(ctx, 31, 0x1D0EC4u);
    ctx->pc = 0x1D0EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0EBCu;
    // 0x1d0ec0: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x1D0EBCu, 0x1D0EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0EC4u;
label_1d0ec4:
    // 0x1d0ec4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d0ec4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0ec8: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x1d0ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1d0ecc: 0xc049c74  jal         func_1271D0
    ctx->pc = 0x1D0ECCu;
    SET_GPR_U32(ctx, 31, 0x1D0ED4u);
    ctx->pc = 0x1D0ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0ECCu;
    // 0x1d0ed0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1271D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1271D0u, 0x1D0ECCu, 0x1D0ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0ED4u;
label_1d0ed4:
    // 0x1d0ed4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d0ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d0ed8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d0ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d0edc: 0x8c26fc98  lw          $a2, -0x368($at)
    ctx->pc = 0x1d0edcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x36FC98u));
    // 0x1d0ee0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1d0ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d0ee4: 0xc0805c8  jal         func_201720
    ctx->pc = 0x1D0EE4u;
    SET_GPR_U32(ctx, 31, 0x1D0EECu);
    ctx->pc = 0x1D0EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0EE4u;
    // 0x1d0ee8: 0x24a53470  addiu       $a1, $a1, 0x3470 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1D0EE4u, 0x1D0EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0EECu;
label_1d0eec:
    // 0x1d0eec: 0xc080748  jal         func_201D20
    ctx->pc = 0x1D0EECu;
    SET_GPR_U32(ctx, 31, 0x1D0EF4u);
    ctx->pc = 0x1D0EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0EECu;
    // 0x1d0ef0: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x1D0EECu, 0x1D0EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0EF4u;
label_1d0ef4:
    // 0x1d0ef4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d0ef4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0ef8: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x1d0ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1d0efc: 0xc049c74  jal         func_1271D0
    ctx->pc = 0x1D0EFCu;
    SET_GPR_U32(ctx, 31, 0x1D0F04u);
    ctx->pc = 0x1D0F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0EFCu;
    // 0x1d0f00: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1271D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1271D0u, 0x1D0EFCu, 0x1D0F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0F04u;
label_1d0f04:
    // 0x1d0f04: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d0f04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d0f08: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d0f08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d0f0c: 0x8c26fca0  lw          $a2, -0x360($at)
    ctx->pc = 0x1d0f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x36FCA0u));
    // 0x1d0f10: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1d0f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d0f14: 0xc0805c8  jal         func_201720
    ctx->pc = 0x1D0F14u;
    SET_GPR_U32(ctx, 31, 0x1D0F1Cu);
    ctx->pc = 0x1D0F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0F14u;
    // 0x1d0f18: 0x24a53470  addiu       $a1, $a1, 0x3470 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1D0F14u, 0x1D0F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0F1Cu;
label_1d0f1c:
    // 0x1d0f1c: 0xc080748  jal         func_201D20
    ctx->pc = 0x1D0F1Cu;
    SET_GPR_U32(ctx, 31, 0x1D0F24u);
    ctx->pc = 0x1D0F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0F1Cu;
    // 0x1d0f20: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x1D0F1Cu, 0x1D0F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0F24u;
label_1d0f24:
    // 0x1d0f24: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d0f24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0f28: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x1d0f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1d0f2c: 0xc049c74  jal         func_1271D0
    ctx->pc = 0x1D0F2Cu;
    SET_GPR_U32(ctx, 31, 0x1D0F34u);
    ctx->pc = 0x1D0F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0F2Cu;
    // 0x1d0f30: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1271D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1271D0u, 0x1D0F2Cu, 0x1D0F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0F34u;
label_1d0f34:
    // 0x1d0f34: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d0f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0f38: 0xc045bb4  jal         func_116ED0
    ctx->pc = 0x1D0F38u;
    SET_GPR_U32(ctx, 31, 0x1D0F40u);
    ctx->pc = 0x1D0F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0F38u;
    // 0x1d0f3c: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116ED0u, 0x1D0F38u, 0x1D0F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0F40u;
label_1d0f40:
    // 0x1d0f40: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d0f40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d0f44: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x1d0f44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d0f48: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1d0f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d0f4c: 0xc0805c8  jal         func_201720
    ctx->pc = 0x1D0F4Cu;
    SET_GPR_U32(ctx, 31, 0x1D0F54u);
    ctx->pc = 0x1D0F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0F4Cu;
    // 0x1d0f50: 0x24a53478  addiu       $a1, $a1, 0x3478 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1D0F4Cu, 0x1D0F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0F54u;
label_1d0f54:
    // 0x1d0f54: 0xc080748  jal         func_201D20
    ctx->pc = 0x1D0F54u;
    SET_GPR_U32(ctx, 31, 0x1D0F5Cu);
    ctx->pc = 0x1D0F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0F54u;
    // 0x1d0f58: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x1D0F54u, 0x1D0F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0F5Cu;
label_1d0f5c:
    // 0x1d0f5c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d0f5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0f60: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x1d0f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1d0f64: 0xc049c74  jal         func_1271D0
    ctx->pc = 0x1D0F64u;
    SET_GPR_U32(ctx, 31, 0x1D0F6Cu);
    ctx->pc = 0x1D0F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0F64u;
    // 0x1d0f68: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1271D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1271D0u, 0x1D0F64u, 0x1D0F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0F6Cu;
label_1d0f6c:
    // 0x1d0f6c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d0f6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d0f70: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d0f70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d0f74: 0x8c26fca8  lw          $a2, -0x358($at)
    ctx->pc = 0x1d0f74u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x36FCA8u));
    // 0x1d0f78: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1d0f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d0f7c: 0xc0805c8  jal         func_201720
    ctx->pc = 0x1D0F7Cu;
    SET_GPR_U32(ctx, 31, 0x1D0F84u);
    ctx->pc = 0x1D0F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0F7Cu;
    // 0x1d0f80: 0x24a53470  addiu       $a1, $a1, 0x3470 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1D0F7Cu, 0x1D0F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0F84u;
label_1d0f84:
    // 0x1d0f84: 0xc080748  jal         func_201D20
    ctx->pc = 0x1D0F84u;
    SET_GPR_U32(ctx, 31, 0x1D0F8Cu);
    ctx->pc = 0x1D0F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0F84u;
    // 0x1d0f88: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x1D0F84u, 0x1D0F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0F8Cu;
label_1d0f8c:
    // 0x1d0f8c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d0f8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0f90: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x1d0f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1d0f94: 0xc049c74  jal         func_1271D0
    ctx->pc = 0x1D0F94u;
    SET_GPR_U32(ctx, 31, 0x1D0F9Cu);
    ctx->pc = 0x1D0F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0F94u;
    // 0x1d0f98: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1271D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1271D0u, 0x1D0F94u, 0x1D0F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0F9Cu;
label_1d0f9c:
    // 0x1d0f9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0fa0: 0xc0488c8  jal         func_122320
    ctx->pc = 0x1D0FA0u;
    SET_GPR_U32(ctx, 31, 0x1D0FA8u);
    ctx->pc = 0x1D0FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0FA0u;
    // 0x1d0fa4: 0x27a50038  addiu       $a1, $sp, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122320u, 0x1D0FA0u, 0x1D0FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0FA8u;
label_1d0fa8:
    // 0x1d0fa8: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x1d0fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1d0fac: 0xc04619c  jal         func_118670
    ctx->pc = 0x1D0FACu;
    SET_GPR_U32(ctx, 31, 0x1D0FB4u);
    ctx->pc = 0x1D0FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0FACu;
    // 0x1d0fb0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1D0FACu, 0x1D0FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0FB4u;
label_1d0fb4:
    // 0x1d0fb4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d0fb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0fb8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d0fb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0fbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d0fbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0FC0u;
        // 0x1d0fc4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0FC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0FC8u;
}
