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

// Function: entry_001c0c00
// Address: 0x1c0c00 - 0x1c0dcc
void entry_001c0c00_0x1c0c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0c00_0x1c0c00");
#endif

    switch (ctx->pc) {
        case 0x1c0c10u: goto label_1c0c10;
        case 0x1c0c18u: goto label_1c0c18;
        case 0x1c0c38u: goto label_1c0c38;
        case 0x1c0c40u: goto label_1c0c40;
        case 0x1c0c50u: goto label_1c0c50;
        case 0x1c0c58u: goto label_1c0c58;
        case 0x1c0c68u: goto label_1c0c68;
        case 0x1c0c7cu: goto label_1c0c7c;
        case 0x1c0c94u: goto label_1c0c94;
        case 0x1c0ca8u: goto label_1c0ca8;
        case 0x1c0cb8u: goto label_1c0cb8;
        case 0x1c0cc8u: goto label_1c0cc8;
        case 0x1c0cd8u: goto label_1c0cd8;
        case 0x1c0ce8u: goto label_1c0ce8;
        case 0x1c0cf0u: goto label_1c0cf0;
        case 0x1c0d04u: goto label_1c0d04;
        case 0x1c0d0cu: goto label_1c0d0c;
        case 0x1c0d1cu: goto label_1c0d1c;
        case 0x1c0d28u: goto label_1c0d28;
        case 0x1c0d34u: goto label_1c0d34;
        case 0x1c0d3cu: goto label_1c0d3c;
        case 0x1c0d4cu: goto label_1c0d4c;
        case 0x1c0d60u: goto label_1c0d60;
        case 0x1c0d74u: goto label_1c0d74;
        case 0x1c0d88u: goto label_1c0d88;
        case 0x1c0d90u: goto label_1c0d90;
        case 0x1c0da8u: goto label_1c0da8;
        case 0x1c0db8u: goto label_1c0db8;
        default: break;
    }

    ctx->pc = 0x1c0c00u;

    // 0x1c0c00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c0c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0c04: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1c0c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1c0c08: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C0C08u;
    SET_GPR_U32(ctx, 31, 0x1C0C10u);
    ctx->pc = 0x1C0C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0C08u;
    // 0x1c0c0c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C0C08u, 0x1C0C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0C10u;
label_1c0c10:
    // 0x1c0c10: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1C0C10u;
    SET_GPR_U32(ctx, 31, 0x1C0C18u);
    ctx->pc = 0x1C0C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0C10u;
    // 0x1c0c14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1C0C10u, 0x1C0C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0C18u;
label_1c0c18:
    // 0x1c0c18: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c0c18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1c0c1c: 0x2a220014  slti        $v0, $s1, 0x14
    ctx->pc = 0x1c0c1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x1c0c20: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1C0C20u;
    {
        const bool branch_taken_0x1c0c20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0C20u;
        // 0x1c0c24: 0x2a210011  slti        $at, $s1, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0c20) {
            ctx->pc = 0x1C0BB4u;
            return;
        }
    }
    ctx->pc = 0x1C0C28u;
    // 0x1c0c28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c0c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0c2c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c0c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c0c30: 0xc06e044  jal         func_1B8110
    ctx->pc = 0x1C0C30u;
    SET_GPR_U32(ctx, 31, 0x1C0C38u);
    ctx->pc = 0x1C0C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0C30u;
    // 0x1c0c34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8110u, 0x1C0C30u, 0x1C0C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0C38u;
label_1c0c38:
    // 0x1c0c38: 0xc07308c  jal         func_1CC230
    ctx->pc = 0x1C0C38u;
    SET_GPR_U32(ctx, 31, 0x1C0C40u);
    ctx->pc = 0x1C0C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0C38u;
    // 0x1c0c3c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC230u, 0x1C0C38u, 0x1C0C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0C40u;
label_1c0c40:
    // 0x1c0c40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c0c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0c44: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c0c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c0c48: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C0C48u;
    SET_GPR_U32(ctx, 31, 0x1C0C50u);
    ctx->pc = 0x1C0C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0C48u;
    // 0x1c0c4c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C0C48u, 0x1C0C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0C50u;
label_1c0c50:
    // 0x1c0c50: 0xc073094  jal         func_1CC250
    ctx->pc = 0x1C0C50u;
    SET_GPR_U32(ctx, 31, 0x1C0C58u);
    ctx->pc = 0x1C0C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0C50u;
    // 0x1c0c54: 0xa0510008  sb          $s1, 0x8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC250u, 0x1C0C50u, 0x1C0C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0C58u;
label_1c0c58:
    // 0x1c0c58: 0x24460005  addiu       $a2, $v0, 0x5
    ctx->pc = 0x1c0c58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x1c0c5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c0c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0c60: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C0C60u;
    SET_GPR_U32(ctx, 31, 0x1C0C68u);
    ctx->pc = 0x1C0C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0C60u;
    // 0x1c0c64: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C0C60u, 0x1C0C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0C68u;
label_1c0c68:
    // 0x1c0c68: 0xa0510008  sb          $s1, 0x8($v0)
    ctx->pc = 0x1c0c68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 17));
    // 0x1c0c6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c0c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0c70: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c0c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c0c74: 0xc06e044  jal         func_1B8110
    ctx->pc = 0x1C0C74u;
    SET_GPR_U32(ctx, 31, 0x1C0C7Cu);
    ctx->pc = 0x1C0C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0C74u;
    // 0x1c0c78: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8110u, 0x1C0C74u, 0x1C0C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0C7Cu;
label_1c0c7c:
    // 0x1c0c7c: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1c0c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1c0c80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c0c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0c84: 0x8c22ca84  lw          $v0, -0x357C($at)
    ctx->pc = 0x1c0c84u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x22CA84u));
    // 0x1c0c88: 0x8c462830  lw          $a2, 0x2830($v0)
    ctx->pc = 0x1c0c88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10288)));
    // 0x1c0c8c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C0C8Cu;
    SET_GPR_U32(ctx, 31, 0x1C0C94u);
    ctx->pc = 0x1C0C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0C8Cu;
    // 0x1c0c90: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C0C8Cu, 0x1C0C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0C94u;
label_1c0c94:
    // 0x1c0c94: 0xa0510008  sb          $s1, 0x8($v0)
    ctx->pc = 0x1c0c94u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 17));
    // 0x1c0c98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c0c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0c9c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1c0c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c0ca0: 0xc06e044  jal         func_1B8110
    ctx->pc = 0x1C0CA0u;
    SET_GPR_U32(ctx, 31, 0x1C0CA8u);
    ctx->pc = 0x1C0CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0CA0u;
    // 0x1c0ca4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8110u, 0x1C0CA0u, 0x1C0CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0CA8u;
label_1c0ca8:
    // 0x1c0ca8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c0ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0cac: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1c0cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c0cb0: 0xc06e044  jal         func_1B8110
    ctx->pc = 0x1C0CB0u;
    SET_GPR_U32(ctx, 31, 0x1C0CB8u);
    ctx->pc = 0x1C0CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0CB0u;
    // 0x1c0cb4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8110u, 0x1C0CB0u, 0x1C0CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0CB8u;
label_1c0cb8:
    // 0x1c0cb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c0cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0cbc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1c0cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c0cc0: 0xc06e044  jal         func_1B8110
    ctx->pc = 0x1C0CC0u;
    SET_GPR_U32(ctx, 31, 0x1C0CC8u);
    ctx->pc = 0x1C0CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0CC0u;
    // 0x1c0cc4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8110u, 0x1C0CC0u, 0x1C0CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0CC8u;
label_1c0cc8:
    // 0x1c0cc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c0cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0ccc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1c0cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1c0cd0: 0xc06e044  jal         func_1B8110
    ctx->pc = 0x1C0CD0u;
    SET_GPR_U32(ctx, 31, 0x1C0CD8u);
    ctx->pc = 0x1C0CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0CD0u;
    // 0x1c0cd4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8110u, 0x1C0CD0u, 0x1C0CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0CD8u;
label_1c0cd8:
    // 0x1c0cd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c0cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0cdc: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1c0cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c0ce0: 0xc06e044  jal         func_1B8110
    ctx->pc = 0x1C0CE0u;
    SET_GPR_U32(ctx, 31, 0x1C0CE8u);
    ctx->pc = 0x1C0CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0CE0u;
    // 0x1c0ce4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8110u, 0x1C0CE0u, 0x1C0CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0CE8u;
label_1c0ce8:
    // 0x1c0ce8: 0xc07308c  jal         func_1CC230
    ctx->pc = 0x1C0CE8u;
    SET_GPR_U32(ctx, 31, 0x1C0CF0u);
    ctx->pc = 0x1CC230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC230u, 0x1C0CE8u, 0x1C0CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0CF0u;
label_1c0cf0:
    // 0x1c0cf0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c0cf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0cf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c0cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0cf8: 0x26450004  addiu       $a1, $s2, 0x4
    ctx->pc = 0x1c0cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1c0cfc: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C0CFCu;
    SET_GPR_U32(ctx, 31, 0x1C0D04u);
    ctx->pc = 0x1C0D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0CFCu;
    // 0x1c0d00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C0CFCu, 0x1C0D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0D04u;
label_1c0d04:
    // 0x1c0d04: 0xc073094  jal         func_1CC250
    ctx->pc = 0x1C0D04u;
    SET_GPR_U32(ctx, 31, 0x1C0D0Cu);
    ctx->pc = 0x1C0D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0D04u;
    // 0x1c0d08: 0xa0510008  sb          $s1, 0x8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC250u, 0x1C0D04u, 0x1C0D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0D0Cu;
label_1c0d0c:
    // 0x1c0d0c: 0x26450004  addiu       $a1, $s2, 0x4
    ctx->pc = 0x1c0d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1c0d10: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x1c0d10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c0d14: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C0D14u;
    SET_GPR_U32(ctx, 31, 0x1C0D1Cu);
    ctx->pc = 0x1C0D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0D14u;
    // 0x1c0d18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C0D14u, 0x1C0D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0D1Cu;
label_1c0d1c:
    // 0x1c0d1c: 0xa0510008  sb          $s1, 0x8($v0)
    ctx->pc = 0x1c0d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 17));
    // 0x1c0d20: 0xc07037c  jal         func_1C0DF0
    ctx->pc = 0x1C0D20u;
    SET_GPR_U32(ctx, 31, 0x1C0D28u);
    ctx->pc = 0x1C0D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0D20u;
    // 0x1c0d24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0DF0u, 0x1C0D20u, 0x1C0D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0D28u;
label_1c0d28:
    // 0x1c0d28: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x1c0d28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1c0d2c: 0xc07045c  jal         func_1C1170
    ctx->pc = 0x1C0D2Cu;
    SET_GPR_U32(ctx, 31, 0x1C0D34u);
    ctx->pc = 0x1C0D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0D2Cu;
    // 0x1c0d30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1170u, 0x1C0D2Cu, 0x1C0D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0D34u;
label_1c0d34:
    // 0x1c0d34: 0xc070440  jal         func_1C1100
    ctx->pc = 0x1C0D34u;
    SET_GPR_U32(ctx, 31, 0x1C0D3Cu);
    ctx->pc = 0x1C0D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0D34u;
    // 0x1c0d38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1100u, 0x1C0D34u, 0x1C0D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0D3Cu;
label_1c0d3c:
    // 0x1c0d3c: 0xae020070  sw          $v0, 0x70($s0)
    ctx->pc = 0x1c0d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
    // 0x1c0d40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c0d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0d44: 0xc06e040  jal         func_1B8100
    ctx->pc = 0x1C0D44u;
    SET_GPR_U32(ctx, 31, 0x1C0D4Cu);
    ctx->pc = 0x1C0D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0D44u;
    // 0x1c0d48: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8100u, 0x1C0D44u, 0x1C0D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0D4Cu;
label_1c0d4c:
    // 0x1c0d4c: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c0d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c0d50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c0d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0d54: 0x24a53f40  addiu       $a1, $a1, 0x3F40
    ctx->pc = 0x1c0d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16192));
    // 0x1c0d58: 0xc06de04  jal         func_1B7810
    ctx->pc = 0x1C0D58u;
    SET_GPR_U32(ctx, 31, 0x1C0D60u);
    ctx->pc = 0x1C0D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0D58u;
    // 0x1c0d5c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7810u, 0x1C0D58u, 0x1C0D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0D60u;
label_1c0d60:
    // 0x1c0d60: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c0d60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c0d64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c0d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0d68: 0x24a53f80  addiu       $a1, $a1, 0x3F80
    ctx->pc = 0x1c0d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16256));
    // 0x1c0d6c: 0xc06de84  jal         func_1B7A10
    ctx->pc = 0x1C0D6Cu;
    SET_GPR_U32(ctx, 31, 0x1C0D74u);
    ctx->pc = 0x1C0D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0D6Cu;
    // 0x1c0d70: 0x24060044  addiu       $a2, $zero, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A10u, 0x1C0D6Cu, 0x1C0D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0D74u;
label_1c0d74:
    // 0x1c0d74: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c0d74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c0d78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c0d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0d7c: 0x24a545e0  addiu       $a1, $a1, 0x45E0
    ctx->pc = 0x1c0d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17888));
    // 0x1c0d80: 0xc06de24  jal         func_1B7890
    ctx->pc = 0x1C0D80u;
    SET_GPR_U32(ctx, 31, 0x1C0D88u);
    ctx->pc = 0x1C0D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0D80u;
    // 0x1c0d84: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7890u, 0x1C0D80u, 0x1C0D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0D88u;
label_1c0d88:
    // 0x1c0d88: 0xc073098  jal         func_1CC260
    ctx->pc = 0x1C0D88u;
    SET_GPR_U32(ctx, 31, 0x1C0D90u);
    ctx->pc = 0x1CC260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC260u, 0x1C0D88u, 0x1C0D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0D90u;
label_1c0d90:
    // 0x1c0d90: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1c0d90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c0d94: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x1c0d94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0d98: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C0D98u;
    {
        const bool branch_taken_0x1c0d98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c0d98) {
            ctx->pc = 0x1C0DCCu;
            return;
        }
    }
    ctx->pc = 0x1C0DA0u;
    // 0x1c0da0: 0xc053bc4  jal         func_14EF10
    ctx->pc = 0x1C0DA0u;
    SET_GPR_U32(ctx, 31, 0x1C0DA8u);
    ctx->pc = 0x14EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF10u, 0x1C0DA0u, 0x1C0DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0DA8u;
label_1c0da8:
    // 0x1c0da8: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c0da8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c0dac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c0dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0db0: 0xc053c38  jal         func_14F0E0
    ctx->pc = 0x1C0DB0u;
    SET_GPR_U32(ctx, 31, 0x1C0DB8u);
    ctx->pc = 0x1C0DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0DB0u;
    // 0x1c0db4: 0x24a53ec0  addiu       $a1, $a1, 0x3EC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F0E0u, 0x1C0DB0u, 0x1C0DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0DB8u;
label_1c0db8:
    // 0x1c0db8: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c0db8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c0dbc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c0dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0dc0: 0x24a53ed0  addiu       $a1, $a1, 0x3ED0
    ctx->pc = 0x1c0dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16080));
    // 0x1c0dc4: 0xc053bd8  jal         func_14EF60
    ctx->pc = 0x1C0DC4u;
    SET_GPR_U32(ctx, 31, 0x1C0DCCu);
    ctx->pc = 0x1C0DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0DC4u;
    // 0x1c0dc8: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF60u, 0x1C0DC4u, 0x1C0DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0DCCu;
}
