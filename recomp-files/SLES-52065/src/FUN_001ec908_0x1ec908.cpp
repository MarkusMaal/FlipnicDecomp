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

// Function: FUN_001ec908
// Address: 0x1ec908 - 0x1eca9c
void FUN_001ec908_0x1ec908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ec908_0x1ec908");
#endif

    switch (ctx->pc) {
        case 0x1ec974u: goto label_1ec974;
        case 0x1ec98cu: goto label_1ec98c;
        case 0x1ec9a4u: goto label_1ec9a4;
        case 0x1ec9d8u: goto label_1ec9d8;
        case 0x1ec9f8u: goto label_1ec9f8;
        case 0x1eca28u: goto label_1eca28;
        case 0x1eca40u: goto label_1eca40;
        case 0x1eca80u: goto label_1eca80;
        default: break;
    }

    ctx->pc = 0x1ec908u;

    // 0x1ec908: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ec908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ec90c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ec90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ec910: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1ec910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1ec914: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ec914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ec918: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1ec918u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec91c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ec91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ec920: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ec920u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec924: 0x1082003b  beq         $a0, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x1EC924u;
    {
        const bool branch_taken_0x1ec924 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EC928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC924u;
        // 0x1ec928: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec924) {
            ctx->pc = 0x1ECA14u;
            goto label_1eca14;
        }
    }
    ctx->pc = 0x1EC92Cu;
    // 0x1ec92c: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x1ec92cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1ec930: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EC930u;
    {
        const bool branch_taken_0x1ec930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC930u;
        // 0x1ec934: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec930) {
            ctx->pc = 0x1EC948u;
            goto label_1ec948;
        }
    }
    ctx->pc = 0x1EC938u;
    // 0x1ec938: 0x1082004a  beq         $a0, $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x1EC938u;
    {
        const bool branch_taken_0x1ec938 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EC93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC938u;
        // 0x1ec93c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec938) {
            ctx->pc = 0x1ECA64u;
            goto label_1eca64;
        }
    }
    ctx->pc = 0x1EC940u;
    // 0x1ec940: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x1EC940u;
    {
        const bool branch_taken_0x1ec940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC940u;
        // 0x1ec944: 0xdfb20020  ld          $s2, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec940) {
            ctx->pc = 0x1ECA8Cu;
            goto label_1eca8c;
        }
    }
    ctx->pc = 0x1EC948u;
label_1ec948:
    // 0x1ec948: 0x1880004f  blez        $a0, . + 4 + (0x4F << 2)
    ctx->pc = 0x1EC948u;
    {
        const bool branch_taken_0x1ec948 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1EC94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC948u;
        // 0x1ec94c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec948) {
            ctx->pc = 0x1ECA88u;
            goto label_1eca88;
        }
    }
    ctx->pc = 0x1EC950u;
    // 0x1ec950: 0x52000019  beql        $s0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1EC950u;
    {
        const bool branch_taken_0x1ec950 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec950) {
            ctx->pc = 0x1EC954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EC950u;
            // 0x1ec954: 0x8e320014  lw          $s2, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EC9B8u;
            goto label_1ec9b8;
        }
    }
    ctx->pc = 0x1EC958u;
    // 0x1ec958: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1ec958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ec95c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1ec95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1ec960: 0x2c420141  sltiu       $v0, $v0, 0x141
    ctx->pc = 0x1ec960u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)321) ? 1 : 0);
    // 0x1ec964: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC964u;
    {
        const bool branch_taken_0x1ec964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC964u;
        // 0x1ec968: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec964) {
            ctx->pc = 0x1EC974u;
            goto label_1ec974;
        }
    }
    ctx->pc = 0x1EC96Cu;
    // 0x1ec96c: 0xc07b5a2  jal         func_1ED688
    ctx->pc = 0x1EC96Cu;
    SET_GPR_U32(ctx, 31, 0x1EC974u);
    ctx->pc = 0x1EC970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC96Cu;
    // 0x1ec970: 0x24844200  addiu       $a0, $a0, 0x4200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED688u, 0x1EC96Cu, 0x1EC974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC974u;
label_1ec974:
    // 0x1ec974: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1ec974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ec978: 0x3206ffff  andi        $a2, $s0, 0xFFFF
    ctx->pc = 0x1ec978u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1ec97c: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x1ec97cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1ec980: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1ec980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ec984: 0xc07b1d2  jal         func_1EC748
    ctx->pc = 0x1EC984u;
    SET_GPR_U32(ctx, 31, 0x1EC98Cu);
    ctx->pc = 0x1EC988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC984u;
    // 0x1ec988: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC748u, 0x1EC984u, 0x1EC98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC98Cu;
label_1ec98c:
    // 0x1ec98c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ec98cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec990: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC990u;
    {
        const bool branch_taken_0x1ec990 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1ec990) {
            ctx->pc = 0x1EC9A4u;
            goto label_1ec9a4;
        }
    }
    ctx->pc = 0x1EC998u;
    // 0x1ec998: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1ec998u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1ec99c: 0xc07b5a2  jal         func_1ED688
    ctx->pc = 0x1EC99Cu;
    SET_GPR_U32(ctx, 31, 0x1EC9A4u);
    ctx->pc = 0x1EC9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC99Cu;
    // 0x1ec9a0: 0x24844228  addiu       $a0, $a0, 0x4228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED688u, 0x1EC99Cu, 0x1EC9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC9A4u;
label_1ec9a4:
    // 0x1ec9a4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1ec9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ec9a8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1ec9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1ec9ac: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1ec9acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1ec9b0: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1EC9B0u;
    {
        const bool branch_taken_0x1ec9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC9B0u;
        // 0x1ec9b4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec9b0) {
            ctx->pc = 0x1ECA88u;
            goto label_1eca88;
        }
    }
    ctx->pc = 0x1EC9B8u;
label_1ec9b8:
    // 0x1ec9b8: 0x2410000c  addiu       $s0, $zero, 0xC
    ctx->pc = 0x1ec9b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1ec9bc: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x1ec9bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ec9c0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1ec9c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ec9c4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1EC9C4u;
    {
        const bool branch_taken_0x1ec9c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC9C4u;
        // 0x1ec9c8: 0x240182d  daddu       $v1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec9c4) {
            ctx->pc = 0x1ECA08u;
            goto label_1eca08;
        }
    }
    ctx->pc = 0x1EC9CCu;
    // 0x1ec9cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC9CCu;
    {
        const bool branch_taken_0x1ec9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC9CCu;
        // 0x1ec9d0: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec9cc) {
            ctx->pc = 0x1EC9DCu;
            goto label_1ec9dc;
        }
    }
    ctx->pc = 0x1EC9D4u;
    // 0x1ec9d4: 0x0  nop
    ctx->pc = 0x1ec9d4u;
    // NOP
label_1ec9d8:
    // 0x1ec9d8: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x1ec9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1ec9dc:
    // 0x1ec9dc: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x1ec9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1ec9e0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1ec9e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ec9e4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ec9e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ec9e8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1ec9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1ec9ec: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1ec9ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ec9f0: 0xc07b222  jal         func_1EC888
    ctx->pc = 0x1EC9F0u;
    SET_GPR_U32(ctx, 31, 0x1EC9F8u);
    ctx->pc = 0x1EC9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC9F0u;
    // 0x1ec9f4: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC888u, 0x1EC9F0u, 0x1EC9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC9F8u;
label_1ec9f8:
    // 0x1ec9f8: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x1ec9f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ec9fc: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1ec9fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1eca00: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x1ECA00u;
    {
        const bool branch_taken_0x1eca00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eca00) {
            ctx->pc = 0x1ECA04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ECA00u;
            // 0x1eca04: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EC9D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ec9d8;
        }
    }
    ctx->pc = 0x1ECA08u;
label_1eca08:
    // 0x1eca08: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1eca08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x1eca0c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1ECA0Cu;
    {
        const bool branch_taken_0x1eca0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECA0Cu;
        // 0x1eca10: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eca0c) {
            ctx->pc = 0x1ECA88u;
            goto label_1eca88;
        }
    }
    ctx->pc = 0x1ECA14u;
label_1eca14:
    // 0x1eca14: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x1eca14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1eca18: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1eca18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1eca1c: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x1eca1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1eca20: 0xc07b1e0  jal         func_1EC780
    ctx->pc = 0x1ECA20u;
    SET_GPR_U32(ctx, 31, 0x1ECA28u);
    ctx->pc = 0x1ECA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECA20u;
    // 0x1eca24: 0x30c6ffff  andi        $a2, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC780u, 0x1ECA20u, 0x1ECA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECA28u;
label_1eca28:
    // 0x1eca28: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1eca28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eca2c: 0x4a30006  bgezl       $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ECA2Cu;
    {
        const bool branch_taken_0x1eca2c = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x1eca2c) {
            ctx->pc = 0x1ECA30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ECA2Cu;
            // 0x1eca30: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ECA48u;
            goto label_1eca48;
        }
    }
    ctx->pc = 0x1ECA34u;
    // 0x1eca34: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1eca34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1eca38: 0xc07b5a2  jal         func_1ED688
    ctx->pc = 0x1ECA38u;
    SET_GPR_U32(ctx, 31, 0x1ECA40u);
    ctx->pc = 0x1ECA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECA38u;
    // 0x1eca3c: 0x24844240  addiu       $a0, $a0, 0x4240 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED688u, 0x1ECA38u, 0x1ECA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECA40u;
label_1eca40:
    // 0x1eca40: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1ECA40u;
    {
        const bool branch_taken_0x1eca40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eca40) {
            ctx->pc = 0x1ECA80u;
            goto label_1eca80;
        }
    }
    ctx->pc = 0x1ECA48u;
label_1eca48:
    // 0x1eca48: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1eca48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1eca4c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1eca4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1eca50: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1eca50u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1eca54: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1eca54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x1eca58: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x1eca58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x1eca5c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1ECA5Cu;
    {
        const bool branch_taken_0x1eca5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECA5Cu;
        // 0x1eca60: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eca5c) {
            ctx->pc = 0x1ECA88u;
            goto label_1eca88;
        }
    }
    ctx->pc = 0x1ECA64u;
label_1eca64:
    // 0x1eca64: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1eca64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1eca68: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1ECA68u;
    {
        const bool branch_taken_0x1eca68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eca68) {
            ctx->pc = 0x1ECA80u;
            goto label_1eca80;
        }
    }
    ctx->pc = 0x1ECA70u;
    // 0x1eca70: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1eca70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1eca74: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1eca74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1eca78: 0xc07b5a2  jal         func_1ED688
    ctx->pc = 0x1ECA78u;
    SET_GPR_U32(ctx, 31, 0x1ECA80u);
    ctx->pc = 0x1ECA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECA78u;
    // 0x1eca7c: 0x24844258  addiu       $a0, $a0, 0x4258 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED688u, 0x1ECA78u, 0x1ECA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECA80u;
label_1eca80:
    // 0x1eca80: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1eca80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1eca84: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1eca84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1eca88:
    // 0x1eca88: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1eca88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1eca8c:
    // 0x1eca8c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1eca8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eca90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1eca90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eca94: 0x3e00008  jr          $ra
    ctx->pc = 0x1ECA94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECA94u;
        // 0x1eca98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ECA94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ECA9Cu;
}
