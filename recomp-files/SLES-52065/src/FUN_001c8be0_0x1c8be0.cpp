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

// Function: FUN_001c8be0
// Address: 0x1c8be0 - 0x1c8d90
void FUN_001c8be0_0x1c8be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c8be0_0x1c8be0");
#endif

    switch (ctx->pc) {
        case 0x1c8c04u: goto label_1c8c04;
        case 0x1c8c20u: goto label_1c8c20;
        case 0x1c8c44u: goto label_1c8c44;
        case 0x1c8c50u: goto label_1c8c50;
        case 0x1c8c64u: goto label_1c8c64;
        case 0x1c8c70u: goto label_1c8c70;
        case 0x1c8c7cu: goto label_1c8c7c;
        case 0x1c8cc4u: goto label_1c8cc4;
        case 0x1c8cecu: goto label_1c8cec;
        case 0x1c8d50u: goto label_1c8d50;
        case 0x1c8d64u: goto label_1c8d64;
        case 0x1c8d70u: goto label_1c8d70;
        case 0x1c8d80u: goto label_1c8d80;
        default: break;
    }

    ctx->pc = 0x1c8be0u;

    // 0x1c8be0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c8be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c8be4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c8be4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c8be8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c8be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c8bec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c8becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c8bf0: 0x8c25f8b0  lw          $a1, -0x750($at)
    ctx->pc = 0x1c8bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x36F8B0u));
    // 0x1c8bf4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c8bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c8bf8: 0x8c26f8b8  lw          $a2, -0x748($at)
    ctx->pc = 0x1c8bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x36F8B8u));
    // 0x1c8bfc: 0xc072400  jal         func_1C9000
    ctx->pc = 0x1C8BFCu;
    SET_GPR_U32(ctx, 31, 0x1C8C04u);
    ctx->pc = 0x1C8C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8BFCu;
    // 0x1c8c00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9000u, 0x1C8BFCu, 0x1C8C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8C04u;
label_1c8c04:
    // 0x1c8c04: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x1c8c04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
    // 0x1c8c08: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x1c8c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1c8c0c: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x1c8c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1c8c10: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C8C10u;
    {
        const bool branch_taken_0x1c8c10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c8c10) {
            ctx->pc = 0x1C8C20u;
            goto label_1c8c20;
        }
    }
    ctx->pc = 0x1C8C18u;
    // 0x1c8c18: 0xc072480  jal         func_1C9200
    ctx->pc = 0x1C8C18u;
    SET_GPR_U32(ctx, 31, 0x1C8C20u);
    ctx->pc = 0x1C8C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8C18u;
    // 0x1c8c1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9200u, 0x1C8C18u, 0x1C8C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8C20u;
label_1c8c20:
    // 0x1c8c20: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c8c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c8c24: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c8c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c8c28: 0x8c23f8b8  lw          $v1, -0x748($at)
    ctx->pc = 0x1c8c28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36F8B8u));
    // 0x1c8c2c: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C8C2Cu;
    {
        const bool branch_taken_0x1c8c2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C8C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8C2Cu;
        // 0x1c8c30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8c2c) {
            ctx->pc = 0x1C8C58u;
            goto label_1c8c58;
        }
    }
    ctx->pc = 0x1C8C34u;
    // 0x1c8c34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8c38: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c8c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c8c3c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C8C3Cu;
    SET_GPR_U32(ctx, 31, 0x1C8C44u);
    ctx->pc = 0x1C8C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8C3Cu;
    // 0x1c8c40: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C8C3Cu, 0x1C8C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8C44u;
label_1c8c44:
    // 0x1c8c44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c8c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8c48: 0xc06eb84  jal         func_1BAE10
    ctx->pc = 0x1C8C48u;
    SET_GPR_U32(ctx, 31, 0x1C8C50u);
    ctx->pc = 0x1C8C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8C48u;
    // 0x1c8c4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAE10u, 0x1C8C48u, 0x1C8C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8C50u;
label_1c8c50:
    // 0x1c8c50: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C8C50u;
    {
        const bool branch_taken_0x1c8c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8C50u;
        // 0x1c8c54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8c50) {
            ctx->pc = 0x1C8C74u;
            goto label_1c8c74;
        }
    }
    ctx->pc = 0x1C8C58u;
label_1c8c58:
    // 0x1c8c58: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c8c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c8c5c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C8C5Cu;
    SET_GPR_U32(ctx, 31, 0x1C8C64u);
    ctx->pc = 0x1C8C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8C5Cu;
    // 0x1c8c60: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C8C5Cu, 0x1C8C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8C64u;
label_1c8c64:
    // 0x1c8c64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c8c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8c68: 0xc06eb84  jal         func_1BAE10
    ctx->pc = 0x1C8C68u;
    SET_GPR_U32(ctx, 31, 0x1C8C70u);
    ctx->pc = 0x1C8C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8C68u;
    // 0x1c8c6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAE10u, 0x1C8C68u, 0x1C8C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8C70u;
label_1c8c70:
    // 0x1c8c70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c8c74:
    // 0x1c8c74: 0xc06dc70  jal         func_1B71C0
    ctx->pc = 0x1C8C74u;
    SET_GPR_U32(ctx, 31, 0x1C8C7Cu);
    ctx->pc = 0x1B71C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71C0u, 0x1C8C74u, 0x1C8C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8C7Cu;
label_1c8c7c:
    // 0x1c8c7c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c8c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c8c80: 0x3c0a0037  lui         $t2, 0x37
    ctx->pc = 0x1c8c80u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)55 << 16));
    // 0x1c8c84: 0x8c22f8b0  lw          $v0, -0x750($at)
    ctx->pc = 0x1c8c84u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F8B0u));
    // 0x1c8c88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8c8c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1c8c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c8c90: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x1c8c90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c8c94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c8c94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8c98: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x1c8c98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c8c9c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c8c9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8ca0: 0x254af8b8  addiu       $t2, $t2, -0x748
    ctx->pc = 0x1c8ca0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294965432));
    // 0x1c8ca4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1c8ca4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8ca8: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x1c8ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x1c8cac: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c8cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c8cb0: 0x8c22f8b8  lw          $v0, -0x748($at)
    ctx->pc = 0x1c8cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F8B8u));
    // 0x1c8cb4: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x1c8cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x1c8cb8: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x1c8cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1c8cbc: 0xc06dd54  jal         func_1B7550
    ctx->pc = 0x1C8CBCu;
    SET_GPR_U32(ctx, 31, 0x1C8CC4u);
    ctx->pc = 0x1C8CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8CBCu;
    // 0x1c8cc0: 0xae020068  sw          $v0, 0x68($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7550u, 0x1C8CBCu, 0x1C8CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8CC4u;
label_1c8cc4:
    // 0x1c8cc4: 0x3c0a0037  lui         $t2, 0x37
    ctx->pc = 0x1c8cc4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)55 << 16));
    // 0x1c8cc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8ccc: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1c8cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c8cd0: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1c8cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c8cd4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c8cd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8cd8: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x1c8cd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c8cdc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c8cdcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8ce0: 0x254af8b0  addiu       $t2, $t2, -0x750
    ctx->pc = 0x1c8ce0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294965424));
    // 0x1c8ce4: 0xc06dd54  jal         func_1B7550
    ctx->pc = 0x1C8CE4u;
    SET_GPR_U32(ctx, 31, 0x1C8CECu);
    ctx->pc = 0x1C8CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8CE4u;
    // 0x1c8ce8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7550u, 0x1C8CE4u, 0x1C8CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8CECu;
label_1c8cec:
    // 0x1c8cec: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c8cecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c8cf0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c8cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c8cf4: 0x8c23f8b0  lw          $v1, -0x750($at)
    ctx->pc = 0x1c8cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36F8B0u));
    // 0x1c8cf8: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C8CF8u;
    {
        const bool branch_taken_0x1c8cf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c8cf8) {
            ctx->pc = 0x1C8D2Cu;
            goto label_1c8d2c;
        }
    }
    ctx->pc = 0x1C8D00u;
    // 0x1c8d00: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c8d00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c8d04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c8d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8d08: 0x8c23f8b8  lw          $v1, -0x748($at)
    ctx->pc = 0x1c8d08u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36F8B8u));
    // 0x1c8d0c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C8D0Cu;
    {
        const bool branch_taken_0x1c8d0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c8d0c) {
            ctx->pc = 0x1C8D2Cu;
            goto label_1c8d2c;
        }
    }
    ctx->pc = 0x1C8D14u;
    // 0x1c8d14: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x1c8d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1c8d18: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c8d18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c8d1c: 0xac22f8b0  sw          $v0, -0x750($at)
    ctx->pc = 0x1c8d1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F8B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F8B0u, _value); } while (0);
    // 0x1c8d20: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1c8d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1c8d24: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c8d24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c8d28: 0xac22f8b8  sw          $v0, -0x748($at)
    ctx->pc = 0x1c8d28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F8B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F8B8u, _value); } while (0);
label_1c8d2c:
    // 0x1c8d2c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c8d2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c8d30: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c8d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c8d34: 0x8c23f8b8  lw          $v1, -0x748($at)
    ctx->pc = 0x1c8d34u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36F8B8u));
    // 0x1c8d38: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C8D38u;
    {
        const bool branch_taken_0x1c8d38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C8D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8D38u;
        // 0x1c8d3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8d38) {
            ctx->pc = 0x1C8D48u;
            goto label_1c8d48;
        }
    }
    ctx->pc = 0x1C8D40u;
    // 0x1c8d40: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c8d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c8d44: 0xac20f8b0  sw          $zero, -0x750($at)
    ctx->pc = 0x1c8d44u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x36F8B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F8B0u, _value); } while (0);
label_1c8d48:
    // 0x1c8d48: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1C8D48u;
    SET_GPR_U32(ctx, 31, 0x1C8D50u);
    ctx->pc = 0x1C8D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8D48u;
    // 0x1c8d4c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1C8D48u, 0x1C8D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8D50u;
label_1c8d50:
    // 0x1c8d50: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C8D50u;
    {
        const bool branch_taken_0x1c8d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8D50u;
        // 0x1c8d54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8d50) {
            ctx->pc = 0x1C8D68u;
            goto label_1c8d68;
        }
    }
    ctx->pc = 0x1C8D58u;
    // 0x1c8d58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8d5c: 0xc072364  jal         func_1C8D90
    ctx->pc = 0x1C8D5Cu;
    SET_GPR_U32(ctx, 31, 0x1C8D64u);
    ctx->pc = 0x1C8D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8D5Cu;
    // 0x1c8d60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8D90u, 0x1C8D5Cu, 0x1C8D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8D64u;
label_1c8d64:
    // 0x1c8d64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c8d68:
    // 0x1c8d68: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1C8D68u;
    SET_GPR_U32(ctx, 31, 0x1C8D70u);
    ctx->pc = 0x1C8D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8D68u;
    // 0x1c8d6c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1C8D68u, 0x1C8D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8D70u;
label_1c8d70:
    // 0x1c8d70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C8D70u;
    {
        const bool branch_taken_0x1c8d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8D70u;
        // 0x1c8d74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8d70) {
            ctx->pc = 0x1C8D80u;
            goto label_1c8d80;
        }
    }
    ctx->pc = 0x1C8D78u;
    // 0x1c8d78: 0xc072364  jal         func_1C8D90
    ctx->pc = 0x1C8D78u;
    SET_GPR_U32(ctx, 31, 0x1C8D80u);
    ctx->pc = 0x1C8D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8D78u;
    // 0x1c8d7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8D90u, 0x1C8D78u, 0x1C8D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8D80u;
label_1c8d80:
    // 0x1c8d80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c8d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c8d84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c8d84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8d88: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8D88u;
        // 0x1c8d8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8D88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8D90u;
}
