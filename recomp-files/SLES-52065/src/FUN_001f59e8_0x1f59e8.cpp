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

// Function: FUN_001f59e8
// Address: 0x1f59e8 - 0x1f5b28
void FUN_001f59e8_0x1f59e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f59e8_0x1f59e8");
#endif

    switch (ctx->pc) {
        case 0x1f5a18u: goto label_1f5a18;
        case 0x1f5a20u: goto label_1f5a20;
        case 0x1f5a54u: goto label_1f5a54;
        case 0x1f5a70u: goto label_1f5a70;
        case 0x1f5a78u: goto label_1f5a78;
        case 0x1f5aa8u: goto label_1f5aa8;
        case 0x1f5abcu: goto label_1f5abc;
        case 0x1f5ae4u: goto label_1f5ae4;
        case 0x1f5b00u: goto label_1f5b00;
        case 0x1f5b10u: goto label_1f5b10;
        default: break;
    }

    ctx->pc = 0x1f59e8u;

    // 0x1f59e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f59e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f59ec: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1f59ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1f59f0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1f59f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1f59f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f59f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f59f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f59f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1f59fc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f59fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5a00: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1f5a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1f5a04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f5a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f5a08: 0xac62bab0  sw          $v0, -0x4550($v1)
    ctx->pc = 0x1f5a08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x21BAB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21BAB0u, _value); } while (0);
    // 0x1f5a0c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1F5A0Cu;
    {
        const bool branch_taken_0x1f5a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A0Cu;
        // 0x1f5a10: 0x3c110039  lui         $s1, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5a0c) {
            ctx->pc = 0x1F5A3Cu;
            goto label_1f5a3c;
        }
    }
    ctx->pc = 0x1F5A14u;
    // 0x1f5a14: 0x0  nop
    ctx->pc = 0x1f5a14u;
    // NOP
label_1f5a18:
    // 0x1f5a18: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f5a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f5a1c: 0x0  nop
    ctx->pc = 0x1f5a1cu;
    // NOP
label_1f5a20:
    // 0x1f5a20: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f5a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f5a24: 0x0  nop
    ctx->pc = 0x1f5a24u;
    // NOP
    // 0x1f5a28: 0x0  nop
    ctx->pc = 0x1f5a28u;
    // NOP
    // 0x1f5a2c: 0x0  nop
    ctx->pc = 0x1f5a2cu;
    // NOP
    // 0x1f5a30: 0x0  nop
    ctx->pc = 0x1f5a30u;
    // NOP
    // 0x1f5a34: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F5A34u;
    {
        const bool branch_taken_0x1f5a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f5a34) {
            ctx->pc = 0x1F5A20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f5a20;
        }
    }
    ctx->pc = 0x1F5A3Cu;
label_1f5a3c:
    // 0x1f5a3c: 0x26301080  addiu       $s0, $s1, 0x1080
    ctx->pc = 0x1f5a3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4224));
    // 0x1f5a40: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1f5a40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1f5a44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f5a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5a48: 0x34a50100  ori         $a1, $a1, 0x100
    ctx->pc = 0x1f5a48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)256);
    // 0x1f5a4c: 0xc07b96a  jal         func_1EE5A8
    ctx->pc = 0x1F5A4Cu;
    SET_GPR_U32(ctx, 31, 0x1F5A54u);
    ctx->pc = 0x1F5A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5A4Cu;
    // 0x1f5a50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE5A8u, 0x1F5A4Cu, 0x1F5A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5A54u;
label_1f5a54:
    // 0x1f5a54: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1f5a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1f5a58: 0x1060ffef  beqz        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1F5A58u;
    {
        const bool branch_taken_0x1f5a58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A58u;
        // 0x1f5a5c: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5a58) {
            ctx->pc = 0x1F5A18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f5a18;
        }
    }
    ctx->pc = 0x1F5A60u;
    // 0x1f5a60: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1f5a60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5a64: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1F5A64u;
    {
        const bool branch_taken_0x1f5a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A64u;
        // 0x1f5a68: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5a64) {
            ctx->pc = 0x1F5A94u;
            goto label_1f5a94;
        }
    }
    ctx->pc = 0x1F5A6Cu;
    // 0x1f5a6c: 0x0  nop
    ctx->pc = 0x1f5a6cu;
    // NOP
label_1f5a70:
    // 0x1f5a70: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f5a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f5a74: 0x0  nop
    ctx->pc = 0x1f5a74u;
    // NOP
label_1f5a78:
    // 0x1f5a78: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f5a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f5a7c: 0x0  nop
    ctx->pc = 0x1f5a7cu;
    // NOP
    // 0x1f5a80: 0x0  nop
    ctx->pc = 0x1f5a80u;
    // NOP
    // 0x1f5a84: 0x0  nop
    ctx->pc = 0x1f5a84u;
    // NOP
    // 0x1f5a88: 0x0  nop
    ctx->pc = 0x1f5a88u;
    // NOP
    // 0x1f5a8c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F5A8Cu;
    {
        const bool branch_taken_0x1f5a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f5a8c) {
            ctx->pc = 0x1F5A78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f5a78;
        }
    }
    ctx->pc = 0x1F5A94u;
label_1f5a94:
    // 0x1f5a94: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1f5a94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1f5a98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f5a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5a9c: 0x34a50101  ori         $a1, $a1, 0x101
    ctx->pc = 0x1f5a9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)257);
    // 0x1f5aa0: 0xc07b96a  jal         func_1EE5A8
    ctx->pc = 0x1F5AA0u;
    SET_GPR_U32(ctx, 31, 0x1F5AA8u);
    ctx->pc = 0x1F5AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5AA0u;
    // 0x1f5aa4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE5A8u, 0x1F5AA0u, 0x1F5AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5AA8u;
label_1f5aa8:
    // 0x1f5aa8: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x1f5aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x1f5aac: 0x1060fff0  beqz        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1F5AACu;
    {
        const bool branch_taken_0x1f5aac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5AACu;
        // 0x1f5ab0: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5aac) {
            ctx->pc = 0x1F5A70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f5a70;
        }
    }
    ctx->pc = 0x1F5AB4u;
    // 0x1f5ab4: 0xc07dae6  jal         func_1F6B98
    ctx->pc = 0x1F5AB4u;
    SET_GPR_U32(ctx, 31, 0x1F5ABCu);
    ctx->pc = 0x1F6B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6B98u, 0x1F5AB4u, 0x1F5ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5ABCu;
label_1f5abc:
    // 0x1f5abc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f5abcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5ac0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f5ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f5ac4: 0x118203  sra         $s0, $s1, 8
    ctx->pc = 0x1f5ac4u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 17), 8));
    // 0x1f5ac8: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1F5AC8u;
    {
        const bool branch_taken_0x1f5ac8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F5ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5AC8u;
        // 0x1f5acc: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5ac8) {
            ctx->pc = 0x1F5B08u;
            goto label_1f5b08;
        }
    }
    ctx->pc = 0x1F5AD0u;
    // 0x1f5ad0: 0x8c43bab4  lw          $v1, -0x454C($v0)
    ctx->pc = 0x1f5ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949556)));
    // 0x1f5ad4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1F5AD4u;
    {
        const bool branch_taken_0x1f5ad4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5AD4u;
        // 0x1f5ad8: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5ad4) {
            ctx->pc = 0x1F5B00u;
            goto label_1f5b00;
        }
    }
    ctx->pc = 0x1F5ADCu;
    // 0x1f5adc: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x1F5ADCu;
    SET_GPR_U32(ctx, 31, 0x1F5AE4u);
    ctx->pc = 0x1F5AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5ADCu;
    // 0x1f5ae0: 0x24844550  addiu       $a0, $a0, 0x4550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x1F5ADCu, 0x1F5AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5AE4u;
label_1f5ae4:
    // 0x1f5ae4: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1f5ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1f5ae8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1f5ae8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5aec: 0x24844578  addiu       $a0, $a0, 0x4578
    ctx->pc = 0x1f5aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17784));
    // 0x1f5af0: 0x322800ff  andi        $t0, $s1, 0xFF
    ctx->pc = 0x1f5af0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x1f5af4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1f5af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f5af8: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x1F5AF8u;
    SET_GPR_U32(ctx, 31, 0x1F5B00u);
    ctx->pc = 0x1F5AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5AF8u;
    // 0x1f5afc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x1F5AF8u, 0x1F5B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5B00u;
label_1f5b00:
    // 0x1f5b00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F5B00u;
    {
        const bool branch_taken_0x1f5b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5B00u;
        // 0x1f5b04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5b00) {
            ctx->pc = 0x1F5B10u;
            goto label_1f5b10;
        }
    }
    ctx->pc = 0x1F5B08u;
label_1f5b08:
    // 0x1f5b08: 0xc07d6ca  jal         func_1F5B28
    ctx->pc = 0x1F5B08u;
    SET_GPR_U32(ctx, 31, 0x1F5B10u);
    ctx->pc = 0x1F5B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5B08u;
    // 0x1f5b0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5B28u, 0x1F5B08u, 0x1F5B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5B10u;
label_1f5b10:
    // 0x1f5b10: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f5b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f5b14: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1f5b14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f5b18: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1f5b18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f5b1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f5b1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5b20: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5B20u;
        // 0x1f5b24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5B20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5B28u;
}
