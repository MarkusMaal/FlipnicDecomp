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

// Function: entry_001c1f6c
// Address: 0x1c1f6c - 0x1c2028
void entry_001c1f6c_0x1c1f6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1f6c_0x1c1f6c");
#endif

    switch (ctx->pc) {
        case 0x1c1f84u: goto label_1c1f84;
        case 0x1c1f98u: goto label_1c1f98;
        case 0x1c1facu: goto label_1c1fac;
        case 0x1c1ff0u: goto label_1c1ff0;
        case 0x1c1ffcu: goto label_1c1ffc;
        case 0x1c2008u: goto label_1c2008;
        case 0x1c2014u: goto label_1c2014;
        default: break;
    }

    ctx->pc = 0x1c1f6cu;

    // 0x1c1f6c: 0x1200002e  beqz        $s0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1C1F6Cu;
    {
        const bool branch_taken_0x1c1f6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1F6Cu;
        // 0x1c1f70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1f6c) {
            ctx->pc = 0x1C2028u;
            return;
        }
    }
    ctx->pc = 0x1C1F74u;
    // 0x1c1f74: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1c1f74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1f78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c1f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1f7c: 0xc06e028  jal         func_1B80A0
    ctx->pc = 0x1C1F7Cu;
    SET_GPR_U32(ctx, 31, 0x1C1F84u);
    ctx->pc = 0x1C1F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1F7Cu;
    // 0x1c1f80: 0x24070014  addiu       $a3, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B80A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B80A0u, 0x1C1F7Cu, 0x1C1F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1F84u;
label_1c1f84:
    // 0x1c1f84: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c1f84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c1f88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c1f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1f8c: 0x24a54e30  addiu       $a1, $a1, 0x4E30
    ctx->pc = 0x1c1f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20016));
    // 0x1c1f90: 0xc06de84  jal         func_1B7A10
    ctx->pc = 0x1C1F90u;
    SET_GPR_U32(ctx, 31, 0x1C1F98u);
    ctx->pc = 0x1C1F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1F90u;
    // 0x1c1f94: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A10u, 0x1C1F90u, 0x1C1F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1F98u;
label_1c1f98:
    // 0x1c1f98: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c1f98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c1f9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c1f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1fa0: 0x24a54f70  addiu       $a1, $a1, 0x4F70
    ctx->pc = 0x1c1fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20336));
    // 0x1c1fa4: 0xc06de24  jal         func_1B7890
    ctx->pc = 0x1C1FA4u;
    SET_GPR_U32(ctx, 31, 0x1C1FACu);
    ctx->pc = 0x1C1FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1FA4u;
    // 0x1c1fa8: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7890u, 0x1C1FA4u, 0x1C1FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1FACu;
label_1c1fac:
    // 0x1c1fac: 0x3c080021  lui         $t0, 0x21
    ctx->pc = 0x1c1facu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)33 << 16));
    // 0x1c1fb0: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1c1fb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c1fb4: 0x250850d0  addiu       $t0, $t0, 0x50D0
    ctx->pc = 0x1c1fb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 20688));
    // 0x1c1fb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c1fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1fbc: 0x79060000  lq          $a2, 0x0($t0)
    ctx->pc = 0x1c1fbcu;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x2150D0u));
    // 0x1c1fc0: 0x79050010  lq          $a1, 0x10($t0)
    ctx->pc = 0x1c1fc0u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x2150E0u));
    // 0x1c1fc4: 0x79030020  lq          $v1, 0x20($t0)
    ctx->pc = 0x1c1fc4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x2150F0u));
    // 0x1c1fc8: 0x79020030  lq          $v0, 0x30($t0)
    ctx->pc = 0x1c1fc8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x215100u));
    // 0x1c1fcc: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x1c1fccu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
    // 0x1c1fd0: 0x7ce50010  sq          $a1, 0x10($a3)
    ctx->pc = 0x1c1fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 5));
    // 0x1c1fd4: 0x7ce30020  sq          $v1, 0x20($a3)
    ctx->pc = 0x1c1fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 3));
    // 0x1c1fd8: 0x7ce20030  sq          $v0, 0x30($a3)
    ctx->pc = 0x1c1fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 48), GPR_VEC(ctx, 2));
    // 0x1c1fdc: 0x79030040  lq          $v1, 0x40($t0)
    ctx->pc = 0x1c1fdcu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x215110u));
    // 0x1c1fe0: 0x79020050  lq          $v0, 0x50($t0)
    ctx->pc = 0x1c1fe0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x215120u));
    // 0x1c1fe4: 0x7ce30040  sq          $v1, 0x40($a3)
    ctx->pc = 0x1c1fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 64), GPR_VEC(ctx, 3));
    // 0x1c1fe8: 0xc070810  jal         func_1C2040
    ctx->pc = 0x1C1FE8u;
    SET_GPR_U32(ctx, 31, 0x1C1FF0u);
    ctx->pc = 0x1C1FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1FE8u;
    // 0x1c1fec: 0x7ce20050  sq          $v0, 0x50($a3) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 7), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2040u, 0x1C1FE8u, 0x1C1FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1FF0u;
label_1c1ff0:
    // 0x1c1ff0: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x1c1ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x1c1ff4: 0xc070820  jal         func_1C2080
    ctx->pc = 0x1C1FF4u;
    SET_GPR_U32(ctx, 31, 0x1C1FFCu);
    ctx->pc = 0x1C1FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1FF4u;
    // 0x1c1ff8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2080u, 0x1C1FF4u, 0x1C1FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1FFCu;
label_1c1ffc:
    // 0x1c1ffc: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x1c1ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    // 0x1c2000: 0xc070828  jal         func_1C20A0
    ctx->pc = 0x1C2000u;
    SET_GPR_U32(ctx, 31, 0x1C2008u);
    ctx->pc = 0x1C2004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2000u;
    // 0x1c2004: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C20A0u, 0x1C2000u, 0x1C2008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2008u;
label_1c2008:
    // 0x1c2008: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x1c2008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x1c200c: 0xc07082c  jal         func_1C20B0
    ctx->pc = 0x1C200Cu;
    SET_GPR_U32(ctx, 31, 0x1C2014u);
    ctx->pc = 0x1C2010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C200Cu;
    // 0x1c2010: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C20B0u, 0x1C200Cu, 0x1C2014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2014u;
label_1c2014:
    // 0x1c2014: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c2014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2018: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x1c2018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
    // 0x1c201c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1c201cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c2020: 0xc06de84  jal         func_1B7A10
    ctx->pc = 0x1C2020u;
    SET_GPR_U32(ctx, 31, 0x1C2028u);
    ctx->pc = 0x1C2024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2020u;
    // 0x1c2024: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A10u, 0x1C2020u, 0x1C2028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2028u;
}
