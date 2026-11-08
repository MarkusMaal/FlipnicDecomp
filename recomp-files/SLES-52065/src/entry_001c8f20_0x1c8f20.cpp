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

// Function: entry_001c8f20
// Address: 0x1c8f20 - 0x1c8fd4
void entry_001c8f20_0x1c8f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8f20_0x1c8f20");
#endif

    switch (ctx->pc) {
        case 0x1c8f30u: goto label_1c8f30;
        case 0x1c8f74u: goto label_1c8f74;
        case 0x1c8f80u: goto label_1c8f80;
        case 0x1c8f8cu: goto label_1c8f8c;
        case 0x1c8f98u: goto label_1c8f98;
        case 0x1c8facu: goto label_1c8fac;
        case 0x1c8fc0u: goto label_1c8fc0;
        default: break;
    }

    ctx->pc = 0x1c8f20u;

    // 0x1c8f20: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1c8f20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f24: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c8f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f28: 0xc06e028  jal         func_1B80A0
    ctx->pc = 0x1C8F28u;
    SET_GPR_U32(ctx, 31, 0x1C8F30u);
    ctx->pc = 0x1C8F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F28u;
    // 0x1c8f2c: 0x24070014  addiu       $a3, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B80A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B80A0u, 0x1C8F28u, 0x1C8F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F30u;
label_1c8f30:
    // 0x1c8f30: 0x3c080021  lui         $t0, 0x21
    ctx->pc = 0x1c8f30u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)33 << 16));
    // 0x1c8f34: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x1c8f34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c8f38: 0x25086930  addiu       $t0, $t0, 0x6930
    ctx->pc = 0x1c8f38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 26928));
    // 0x1c8f3c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c8f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f40: 0x79060000  lq          $a2, 0x0($t0)
    ctx->pc = 0x1c8f40u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x216930u));
    // 0x1c8f44: 0x79050010  lq          $a1, 0x10($t0)
    ctx->pc = 0x1c8f44u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x216940u));
    // 0x1c8f48: 0x79030020  lq          $v1, 0x20($t0)
    ctx->pc = 0x1c8f48u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x216950u));
    // 0x1c8f4c: 0x79020030  lq          $v0, 0x30($t0)
    ctx->pc = 0x1c8f4cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x216960u));
    // 0x1c8f50: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x1c8f50u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
    // 0x1c8f54: 0x7ce50010  sq          $a1, 0x10($a3)
    ctx->pc = 0x1c8f54u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 5));
    // 0x1c8f58: 0x7ce30020  sq          $v1, 0x20($a3)
    ctx->pc = 0x1c8f58u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 3));
    // 0x1c8f5c: 0x7ce20030  sq          $v0, 0x30($a3)
    ctx->pc = 0x1c8f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 48), GPR_VEC(ctx, 2));
    // 0x1c8f60: 0x79030040  lq          $v1, 0x40($t0)
    ctx->pc = 0x1c8f60u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x216970u));
    // 0x1c8f64: 0x79020050  lq          $v0, 0x50($t0)
    ctx->pc = 0x1c8f64u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x216980u));
    // 0x1c8f68: 0x7ce30040  sq          $v1, 0x40($a3)
    ctx->pc = 0x1c8f68u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 64), GPR_VEC(ctx, 3));
    // 0x1c8f6c: 0xc07240c  jal         func_1C9030
    ctx->pc = 0x1C8F6Cu;
    SET_GPR_U32(ctx, 31, 0x1C8F74u);
    ctx->pc = 0x1C8F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F6Cu;
    // 0x1c8f70: 0x7ce20050  sq          $v0, 0x50($a3) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 7), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9030u, 0x1C8F6Cu, 0x1C8F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F74u;
label_1c8f74:
    // 0x1c8f74: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x1c8f74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x1c8f78: 0xc072434  jal         func_1C90D0
    ctx->pc = 0x1C8F78u;
    SET_GPR_U32(ctx, 31, 0x1C8F80u);
    ctx->pc = 0x1C8F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F78u;
    // 0x1c8f7c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C90D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C90D0u, 0x1C8F78u, 0x1C8F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F80u;
label_1c8f80:
    // 0x1c8f80: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x1c8f80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x1c8f84: 0xc072448  jal         func_1C9120
    ctx->pc = 0x1C8F84u;
    SET_GPR_U32(ctx, 31, 0x1C8F8Cu);
    ctx->pc = 0x1C8F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F84u;
    // 0x1c8f88: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9120u, 0x1C8F84u, 0x1C8F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F8Cu;
label_1c8f8c:
    // 0x1c8f8c: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x1c8f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x1c8f90: 0xc072464  jal         func_1C9190
    ctx->pc = 0x1C8F90u;
    SET_GPR_U32(ctx, 31, 0x1C8F98u);
    ctx->pc = 0x1C8F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F90u;
    // 0x1c8f94: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9190u, 0x1C8F90u, 0x1C8F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F98u;
label_1c8f98:
    // 0x1c8f98: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x1c8f98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x1c8f9c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c8f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8fa0: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1c8fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c8fa4: 0xc06de84  jal         func_1B7A10
    ctx->pc = 0x1C8FA4u;
    SET_GPR_U32(ctx, 31, 0x1C8FACu);
    ctx->pc = 0x1C8FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8FA4u;
    // 0x1c8fa8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A10u, 0x1C8FA4u, 0x1C8FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8FACu;
label_1c8fac:
    // 0x1c8fac: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c8facu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c8fb0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c8fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8fb4: 0x24a56650  addiu       $a1, $a1, 0x6650
    ctx->pc = 0x1c8fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26192));
    // 0x1c8fb8: 0xc06de84  jal         func_1B7A10
    ctx->pc = 0x1C8FB8u;
    SET_GPR_U32(ctx, 31, 0x1C8FC0u);
    ctx->pc = 0x1C8FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8FB8u;
    // 0x1c8fbc: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A10u, 0x1C8FB8u, 0x1C8FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8FC0u;
label_1c8fc0:
    // 0x1c8fc0: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c8fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c8fc4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c8fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8fc8: 0x24a56820  addiu       $a1, $a1, 0x6820
    ctx->pc = 0x1c8fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26656));
    // 0x1c8fcc: 0xc06de24  jal         func_1B7890
    ctx->pc = 0x1C8FCCu;
    SET_GPR_U32(ctx, 31, 0x1C8FD4u);
    ctx->pc = 0x1C8FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8FCCu;
    // 0x1c8fd0: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7890u, 0x1C8FCCu, 0x1C8FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8FD4u;
}
