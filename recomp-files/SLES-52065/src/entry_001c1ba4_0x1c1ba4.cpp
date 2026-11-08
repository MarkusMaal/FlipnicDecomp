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

// Function: entry_001c1ba4
// Address: 0x1c1ba4 - 0x1c1e90
void entry_001c1ba4_0x1c1ba4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1ba4_0x1c1ba4");
#endif

    switch (ctx->pc) {
        case 0x1c1bb8u: goto label_1c1bb8;
        case 0x1c1bc0u: goto label_1c1bc0;
        case 0x1c1be0u: goto label_1c1be0;
        case 0x1c1be8u: goto label_1c1be8;
        case 0x1c1bf8u: goto label_1c1bf8;
        case 0x1c1c08u: goto label_1c1c08;
        case 0x1c1c1cu: goto label_1c1c1c;
        case 0x1c1c28u: goto label_1c1c28;
        case 0x1c1c38u: goto label_1c1c38;
        case 0x1c1c4cu: goto label_1c1c4c;
        case 0x1c1c60u: goto label_1c1c60;
        case 0x1c1c78u: goto label_1c1c78;
        case 0x1c1c9cu: goto label_1c1c9c;
        case 0x1c1cacu: goto label_1c1cac;
        case 0x1c1cb4u: goto label_1c1cb4;
        case 0x1c1cc4u: goto label_1c1cc4;
        case 0x1c1cd4u: goto label_1c1cd4;
        case 0x1c1cdcu: goto label_1c1cdc;
        case 0x1c1cecu: goto label_1c1cec;
        case 0x1c1cfcu: goto label_1c1cfc;
        case 0x1c1d20u: goto label_1c1d20;
        case 0x1c1d34u: goto label_1c1d34;
        case 0x1c1d48u: goto label_1c1d48;
        case 0x1c1d8cu: goto label_1c1d8c;
        case 0x1c1d98u: goto label_1c1d98;
        case 0x1c1da4u: goto label_1c1da4;
        case 0x1c1db0u: goto label_1c1db0;
        case 0x1c1dc4u: goto label_1c1dc4;
        case 0x1c1dd4u: goto label_1c1dd4;
        case 0x1c1de4u: goto label_1c1de4;
        case 0x1c1df4u: goto label_1c1df4;
        case 0x1c1e04u: goto label_1c1e04;
        case 0x1c1e14u: goto label_1c1e14;
        case 0x1c1e1cu: goto label_1c1e1c;
        case 0x1c1e24u: goto label_1c1e24;
        case 0x1c1e3cu: goto label_1c1e3c;
        case 0x1c1e50u: goto label_1c1e50;
        case 0x1c1e58u: goto label_1c1e58;
        case 0x1c1e74u: goto label_1c1e74;
        case 0x1c1e88u: goto label_1c1e88;
        default: break;
    }

    ctx->pc = 0x1c1ba4u;

    // 0x1c1ba4: 0x0  nop
    ctx->pc = 0x1c1ba4u;
    // NOP
    // 0x1c1ba8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c1ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1bac: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c1bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c1bb0: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C1BB0u;
    SET_GPR_U32(ctx, 31, 0x1C1BB8u);
    ctx->pc = 0x1C1BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1BB0u;
    // 0x1c1bb4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C1BB0u, 0x1C1BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1BB8u;
label_1c1bb8:
    // 0x1c1bb8: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1C1BB8u;
    SET_GPR_U32(ctx, 31, 0x1C1BC0u);
    ctx->pc = 0x1C1BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1BB8u;
    // 0x1c1bbc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1C1BB8u, 0x1C1BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1BC0u;
label_1c1bc0:
    // 0x1c1bc0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c1bc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1c1bc4: 0x2a220007  slti        $v0, $s1, 0x7
    ctx->pc = 0x1c1bc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x1c1bc8: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x1C1BC8u;
    {
        const bool branch_taken_0x1c1bc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1BC8u;
        // 0x1c1bcc: 0x2a210003  slti        $at, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1bc8) {
            ctx->pc = 0x1C1B0Cu;
            return;
        }
    }
    ctx->pc = 0x1C1BD0u;
    // 0x1c1bd0: 0x8e460060  lw          $a2, 0x60($s2)
    ctx->pc = 0x1c1bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x1c1bd4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c1bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1bd8: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C1BD8u;
    SET_GPR_U32(ctx, 31, 0x1C1BE0u);
    ctx->pc = 0x1C1BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1BD8u;
    // 0x1c1bdc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C1BD8u, 0x1C1BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1BE0u;
label_1c1be0:
    // 0x1c1be0: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1C1BE0u;
    SET_GPR_U32(ctx, 31, 0x1C1BE8u);
    ctx->pc = 0x1C1BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1BE0u;
    // 0x1c1be4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1C1BE0u, 0x1C1BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1BE8u;
label_1c1be8:
    // 0x1c1be8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c1be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1bec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c1becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c1bf0: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C1BF0u;
    SET_GPR_U32(ctx, 31, 0x1C1BF8u);
    ctx->pc = 0x1C1BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1BF0u;
    // 0x1c1bf4: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C1BF0u, 0x1C1BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1BF8u;
label_1c1bf8:
    // 0x1c1bf8: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c1bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c1bfc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c1bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1c00: 0xc06e738  jal         func_1B9CE0
    ctx->pc = 0x1C1C00u;
    SET_GPR_U32(ctx, 31, 0x1C1C08u);
    ctx->pc = 0x1C1C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1C00u;
    // 0x1c1c04: 0x24a54a60  addiu       $a1, $a1, 0x4A60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9CE0u, 0x1C1C00u, 0x1C1C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1C08u;
label_1c1c08:
    // 0x1c1c08: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x1c1c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x1c1c0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c1c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1c10: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1c1c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c1c14: 0xc06dd9c  jal         func_1B7670
    ctx->pc = 0x1C1C14u;
    SET_GPR_U32(ctx, 31, 0x1C1C1Cu);
    ctx->pc = 0x1C1C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1C14u;
    // 0x1c1c18: 0xae420064  sw          $v0, 0x64($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7670u, 0x1C1C14u, 0x1C1C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1C1Cu;
label_1c1c1c:
    // 0x1c1c1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c1c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1c20: 0xc06dd9c  jal         func_1B7670
    ctx->pc = 0x1C1C20u;
    SET_GPR_U32(ctx, 31, 0x1C1C28u);
    ctx->pc = 0x1C1C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1C20u;
    // 0x1c1c24: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7670u, 0x1C1C20u, 0x1C1C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1C28u;
label_1c1c28:
    // 0x1c1c28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c1c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1c2c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1c1c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c1c30: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C1C30u;
    SET_GPR_U32(ctx, 31, 0x1C1C38u);
    ctx->pc = 0x1C1C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1C30u;
    // 0x1c1c34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C1C30u, 0x1C1C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1C38u;
label_1c1c38:
    // 0x1c1c38: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x1c1c38u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c1c3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c1c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1c40: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1c1c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c1c44: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C1C44u;
    SET_GPR_U32(ctx, 31, 0x1C1C4Cu);
    ctx->pc = 0x1C1C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1C44u;
    // 0x1c1c48: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C1C44u, 0x1C1C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1C4Cu;
label_1c1c4c:
    // 0x1c1c4c: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x1c1c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c1c50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c1c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1c54: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1c1c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c1c58: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C1C58u;
    SET_GPR_U32(ctx, 31, 0x1C1C60u);
    ctx->pc = 0x1C1C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1C58u;
    // 0x1c1c5c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C1C58u, 0x1C1C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1C60u;
label_1c1c60:
    // 0x1c1c60: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x1c1c60u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c1c64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c1c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1c68: 0x8e460068  lw          $a2, 0x68($s2)
    ctx->pc = 0x1c1c68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x1c1c6c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1c1c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c1c70: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C1C70u;
    SET_GPR_U32(ctx, 31, 0x1C1C78u);
    ctx->pc = 0x1C1C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1C70u;
    // 0x1c1c74: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C1C70u, 0x1C1C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1C78u;
label_1c1c78:
    // 0x1c1c78: 0xa0510008  sb          $s1, 0x8($v0)
    ctx->pc = 0x1c1c78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 17));
    // 0x1c1c7c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1c1c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1c1c80: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1c1c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1c1c84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c1c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1c88: 0x24421820  addiu       $v0, $v0, 0x1820
    ctx->pc = 0x1c1c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6176));
    // 0x1c1c8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c1c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c1c90: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1c1c90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c1c94: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C1C94u;
    SET_GPR_U32(ctx, 31, 0x1C1C9Cu);
    ctx->pc = 0x1C1C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1C94u;
    // 0x1c1c98: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C1C94u, 0x1C1C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1C9Cu;
label_1c1c9c:
    // 0x1c1c9c: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c1c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c1ca0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c1ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1ca4: 0xc06e738  jal         func_1B9CE0
    ctx->pc = 0x1C1CA4u;
    SET_GPR_U32(ctx, 31, 0x1C1CACu);
    ctx->pc = 0x1C1CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1CA4u;
    // 0x1c1ca8: 0x24a54a50  addiu       $a1, $a1, 0x4A50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9CE0u, 0x1C1CA4u, 0x1C1CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1CACu;
label_1c1cac:
    // 0x1c1cac: 0xc07308c  jal         func_1CC230
    ctx->pc = 0x1C1CACu;
    SET_GPR_U32(ctx, 31, 0x1C1CB4u);
    ctx->pc = 0x1CC230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC230u, 0x1C1CACu, 0x1C1CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1CB4u;
label_1c1cb4:
    // 0x1c1cb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c1cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1cb8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1c1cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c1cbc: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C1CBCu;
    SET_GPR_U32(ctx, 31, 0x1C1CC4u);
    ctx->pc = 0x1C1CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1CBCu;
    // 0x1c1cc0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C1CBCu, 0x1C1CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1CC4u;
label_1c1cc4:
    // 0x1c1cc4: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c1cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c1cc8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c1cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1ccc: 0xc06e738  jal         func_1B9CE0
    ctx->pc = 0x1C1CCCu;
    SET_GPR_U32(ctx, 31, 0x1C1CD4u);
    ctx->pc = 0x1C1CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1CCCu;
    // 0x1c1cd0: 0x24a54a30  addiu       $a1, $a1, 0x4A30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9CE0u, 0x1C1CCCu, 0x1C1CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1CD4u;
label_1c1cd4:
    // 0x1c1cd4: 0xc073094  jal         func_1CC250
    ctx->pc = 0x1C1CD4u;
    SET_GPR_U32(ctx, 31, 0x1C1CDCu);
    ctx->pc = 0x1CC250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC250u, 0x1C1CD4u, 0x1C1CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1CDCu;
label_1c1cdc:
    // 0x1c1cdc: 0x24460005  addiu       $a2, $v0, 0x5
    ctx->pc = 0x1c1cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x1c1ce0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c1ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1ce4: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C1CE4u;
    SET_GPR_U32(ctx, 31, 0x1C1CECu);
    ctx->pc = 0x1C1CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1CE4u;
    // 0x1c1ce8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C1CE4u, 0x1C1CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1CECu;
label_1c1cec:
    // 0x1c1cec: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c1cecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c1cf0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c1cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1cf4: 0xc06e738  jal         func_1B9CE0
    ctx->pc = 0x1C1CF4u;
    SET_GPR_U32(ctx, 31, 0x1C1CFCu);
    ctx->pc = 0x1C1CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1CF4u;
    // 0x1c1cf8: 0x24a54a30  addiu       $a1, $a1, 0x4A30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9CE0u, 0x1C1CF4u, 0x1C1CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1CFCu;
label_1c1cfc:
    // 0x1c1cfc: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1c1cfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1c1d00: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c1d00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c1d04: 0x8c22ca84  lw          $v0, -0x357C($at)
    ctx->pc = 0x1c1d04u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x22CA84u));
    // 0x1c1d08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c1d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1d0c: 0x24a54af0  addiu       $a1, $a1, 0x4AF0
    ctx->pc = 0x1c1d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19184));
    // 0x1c1d10: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x1c1d10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1c1d14: 0x8c422830  lw          $v0, 0x2830($v0)
    ctx->pc = 0x1c1d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10288)));
    // 0x1c1d18: 0xc06de04  jal         func_1B7810
    ctx->pc = 0x1C1D18u;
    SET_GPR_U32(ctx, 31, 0x1C1D20u);
    ctx->pc = 0x1C1D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1D18u;
    // 0x1c1d1c: 0xae420068  sw          $v0, 0x68($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7810u, 0x1C1D18u, 0x1C1D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1D20u;
label_1c1d20:
    // 0x1c1d20: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c1d20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c1d24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c1d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1d28: 0x24a54c50  addiu       $a1, $a1, 0x4C50
    ctx->pc = 0x1c1d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19536));
    // 0x1c1d2c: 0xc06de84  jal         func_1B7A10
    ctx->pc = 0x1C1D2Cu;
    SET_GPR_U32(ctx, 31, 0x1C1D34u);
    ctx->pc = 0x1C1D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1D2Cu;
    // 0x1c1d30: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A10u, 0x1C1D2Cu, 0x1C1D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1D34u;
label_1c1d34:
    // 0x1c1d34: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c1d34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c1d38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c1d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1d3c: 0x24a54d40  addiu       $a1, $a1, 0x4D40
    ctx->pc = 0x1c1d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19776));
    // 0x1c1d40: 0xc06de24  jal         func_1B7890
    ctx->pc = 0x1C1D40u;
    SET_GPR_U32(ctx, 31, 0x1C1D48u);
    ctx->pc = 0x1C1D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1D40u;
    // 0x1c1d44: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7890u, 0x1C1D40u, 0x1C1D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1D48u;
label_1c1d48:
    // 0x1c1d48: 0x3c080021  lui         $t0, 0x21
    ctx->pc = 0x1c1d48u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)33 << 16));
    // 0x1c1d4c: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x1c1d4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c1d50: 0x25085070  addiu       $t0, $t0, 0x5070
    ctx->pc = 0x1c1d50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 20592));
    // 0x1c1d54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c1d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1d58: 0x79060000  lq          $a2, 0x0($t0)
    ctx->pc = 0x1c1d58u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x215070u));
    // 0x1c1d5c: 0x79050010  lq          $a1, 0x10($t0)
    ctx->pc = 0x1c1d5cu;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x215080u));
    // 0x1c1d60: 0x79030020  lq          $v1, 0x20($t0)
    ctx->pc = 0x1c1d60u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x215090u));
    // 0x1c1d64: 0x79020030  lq          $v0, 0x30($t0)
    ctx->pc = 0x1c1d64u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x2150A0u));
    // 0x1c1d68: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x1c1d68u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
    // 0x1c1d6c: 0x7ce50010  sq          $a1, 0x10($a3)
    ctx->pc = 0x1c1d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 5));
    // 0x1c1d70: 0x7ce30020  sq          $v1, 0x20($a3)
    ctx->pc = 0x1c1d70u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 3));
    // 0x1c1d74: 0x7ce20030  sq          $v0, 0x30($a3)
    ctx->pc = 0x1c1d74u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 48), GPR_VEC(ctx, 2));
    // 0x1c1d78: 0x79030040  lq          $v1, 0x40($t0)
    ctx->pc = 0x1c1d78u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x2150B0u));
    // 0x1c1d7c: 0x79020050  lq          $v0, 0x50($t0)
    ctx->pc = 0x1c1d7cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x2150C0u));
    // 0x1c1d80: 0x7ce30040  sq          $v1, 0x40($a3)
    ctx->pc = 0x1c1d80u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 64), GPR_VEC(ctx, 3));
    // 0x1c1d84: 0xc070810  jal         func_1C2040
    ctx->pc = 0x1C1D84u;
    SET_GPR_U32(ctx, 31, 0x1C1D8Cu);
    ctx->pc = 0x1C1D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1D84u;
    // 0x1c1d88: 0x7ce20050  sq          $v0, 0x50($a3) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 7), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2040u, 0x1C1D84u, 0x1C1D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1D8Cu;
label_1c1d8c:
    // 0x1c1d8c: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x1c1d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x1c1d90: 0xc070820  jal         func_1C2080
    ctx->pc = 0x1C1D90u;
    SET_GPR_U32(ctx, 31, 0x1C1D98u);
    ctx->pc = 0x1C1D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1D90u;
    // 0x1c1d94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2080u, 0x1C1D90u, 0x1C1D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1D98u;
label_1c1d98:
    // 0x1c1d98: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x1c1d98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x1c1d9c: 0xc070828  jal         func_1C20A0
    ctx->pc = 0x1C1D9Cu;
    SET_GPR_U32(ctx, 31, 0x1C1DA4u);
    ctx->pc = 0x1C1DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1D9Cu;
    // 0x1c1da0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C20A0u, 0x1C1D9Cu, 0x1C1DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1DA4u;
label_1c1da4:
    // 0x1c1da4: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x1c1da4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    // 0x1c1da8: 0xc07082c  jal         func_1C20B0
    ctx->pc = 0x1C1DA8u;
    SET_GPR_U32(ctx, 31, 0x1C1DB0u);
    ctx->pc = 0x1C1DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1DA8u;
    // 0x1c1dac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C20B0u, 0x1C1DA8u, 0x1C1DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1DB0u;
label_1c1db0:
    // 0x1c1db0: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x1c1db0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
    // 0x1c1db4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c1db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1db8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1c1db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c1dbc: 0xc06de84  jal         func_1B7A10
    ctx->pc = 0x1C1DBCu;
    SET_GPR_U32(ctx, 31, 0x1C1DC4u);
    ctx->pc = 0x1C1DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1DBCu;
    // 0x1c1dc0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A10u, 0x1C1DBCu, 0x1C1DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1DC4u;
label_1c1dc4:
    // 0x1c1dc4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c1dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1dc8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1c1dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1c1dcc: 0xc06e044  jal         func_1B8110
    ctx->pc = 0x1C1DCCu;
    SET_GPR_U32(ctx, 31, 0x1C1DD4u);
    ctx->pc = 0x1C1DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1DCCu;
    // 0x1c1dd0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8110u, 0x1C1DCCu, 0x1C1DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1DD4u;
label_1c1dd4:
    // 0x1c1dd4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c1dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1dd8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1c1dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c1ddc: 0xc06e044  jal         func_1B8110
    ctx->pc = 0x1C1DDCu;
    SET_GPR_U32(ctx, 31, 0x1C1DE4u);
    ctx->pc = 0x1C1DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1DDCu;
    // 0x1c1de0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8110u, 0x1C1DDCu, 0x1C1DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1DE4u;
label_1c1de4:
    // 0x1c1de4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c1de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1de8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1c1de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1c1dec: 0xc06e044  jal         func_1B8110
    ctx->pc = 0x1C1DECu;
    SET_GPR_U32(ctx, 31, 0x1C1DF4u);
    ctx->pc = 0x1C1DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1DECu;
    // 0x1c1df0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8110u, 0x1C1DECu, 0x1C1DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1DF4u;
label_1c1df4:
    // 0x1c1df4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c1df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1df8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1c1df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c1dfc: 0xc06e044  jal         func_1B8110
    ctx->pc = 0x1C1DFCu;
    SET_GPR_U32(ctx, 31, 0x1C1E04u);
    ctx->pc = 0x1C1E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1DFCu;
    // 0x1c1e00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8110u, 0x1C1DFCu, 0x1C1E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1E04u;
label_1c1e04:
    // 0x1c1e04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c1e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1e08: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1c1e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1c1e0c: 0xc06e044  jal         func_1B8110
    ctx->pc = 0x1C1E0Cu;
    SET_GPR_U32(ctx, 31, 0x1C1E14u);
    ctx->pc = 0x1C1E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1E0Cu;
    // 0x1c1e10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8110u, 0x1C1E0Cu, 0x1C1E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1E14u;
label_1c1e14:
    // 0x1c1e14: 0xc07308c  jal         func_1CC230
    ctx->pc = 0x1C1E14u;
    SET_GPR_U32(ctx, 31, 0x1C1E1Cu);
    ctx->pc = 0x1CC230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC230u, 0x1C1E14u, 0x1C1E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1E1Cu;
label_1c1e1c:
    // 0x1c1e1c: 0xc073094  jal         func_1CC250
    ctx->pc = 0x1C1E1Cu;
    SET_GPR_U32(ctx, 31, 0x1C1E24u);
    ctx->pc = 0x1C1E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1E1Cu;
    // 0x1c1e20: 0x24510007  addiu       $s1, $v0, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC250u, 0x1C1E1Cu, 0x1C1E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1E24u;
label_1c1e24:
    // 0x1c1e24: 0x24530001  addiu       $s3, $v0, 0x1
    ctx->pc = 0x1c1e24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c1e28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c1e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1e2c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c1e2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1e30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c1e30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1e34: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C1E34u;
    SET_GPR_U32(ctx, 31, 0x1C1E3Cu);
    ctx->pc = 0x1C1E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1E34u;
    // 0x1c1e38: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C1E34u, 0x1C1E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1E3Cu;
label_1c1e3c:
    // 0x1c1e3c: 0xa0500008  sb          $s0, 0x8($v0)
    ctx->pc = 0x1c1e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c1e40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c1e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1e44: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1c1e44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1e48: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C1E48u;
    SET_GPR_U32(ctx, 31, 0x1C1E50u);
    ctx->pc = 0x1C1E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1E48u;
    // 0x1c1e4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C1E48u, 0x1C1E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1E50u;
label_1c1e50:
    // 0x1c1e50: 0xc07308c  jal         func_1CC230
    ctx->pc = 0x1C1E50u;
    SET_GPR_U32(ctx, 31, 0x1C1E58u);
    ctx->pc = 0x1C1E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1E50u;
    // 0x1c1e54: 0xa0500008  sb          $s0, 0x8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC230u, 0x1C1E50u, 0x1C1E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1E58u;
label_1c1e58:
    // 0x1c1e58: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1c1e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c1e5c: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C1E5Cu;
    {
        const bool branch_taken_0x1c1e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C1E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1E5Cu;
        // 0x1c1e60: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1e5c) {
            ctx->pc = 0x1C1E90u;
            return;
        }
    }
    ctx->pc = 0x1C1E64u;
    // 0x1c1e64: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c1e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c1e68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c1e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1e6c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C1E6Cu;
    SET_GPR_U32(ctx, 31, 0x1C1E74u);
    ctx->pc = 0x1C1E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1E6Cu;
    // 0x1c1e70: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C1E6Cu, 0x1C1E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1E74u;
label_1c1e74:
    // 0x1c1e74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c1e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1e78: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x1c1e78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c1e7c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c1e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c1e80: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C1E80u;
    SET_GPR_U32(ctx, 31, 0x1C1E88u);
    ctx->pc = 0x1C1E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1E80u;
    // 0x1c1e84: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C1E80u, 0x1C1E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1E88u;
label_1c1e88:
    // 0x1c1e88: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1C1E88u;
    {
        const bool branch_taken_0x1c1e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1E88u;
        // 0x1c1e8c: 0xa0400008  sb          $zero, 0x8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1e88) {
            ctx->pc = 0x1C1EB4u;
            return;
        }
    }
    ctx->pc = 0x1C1E90u;
}
