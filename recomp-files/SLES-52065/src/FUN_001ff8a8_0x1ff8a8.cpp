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

// Function: FUN_001ff8a8
// Address: 0x1ff8a8 - 0x1ff9ac
void FUN_001ff8a8_0x1ff8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ff8a8_0x1ff8a8");
#endif

    switch (ctx->pc) {
        case 0x1ff8dcu: goto label_1ff8dc;
        case 0x1ff920u: goto label_1ff920;
        case 0x1ff958u: goto label_1ff958;
        case 0x1ff988u: goto label_1ff988;
        default: break;
    }

    ctx->pc = 0x1ff8a8u;

    // 0x1ff8a8: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1ff8a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff8ac: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x1ff8acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1ff8b0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1FF8B0u;
    {
        const bool branch_taken_0x1ff8b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF8B0u;
        // 0x1ff8b4: 0x100182d  daddu       $v1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff8b0) {
            ctx->pc = 0x1FF900u;
            goto label_1ff900;
        }
    }
    ctx->pc = 0x1FF8B8u;
    // 0x1ff8b8: 0xa63821  addu        $a3, $a1, $a2
    ctx->pc = 0x1ff8b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1ff8bc: 0x107102b  sltu        $v0, $t0, $a3
    ctx->pc = 0x1ff8bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1ff8c0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1FF8C0u;
    {
        const bool branch_taken_0x1ff8c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF8C0u;
        // 0x1ff8c4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff8c0) {
            ctx->pc = 0x1FF900u;
            goto label_1ff900;
        }
    }
    ctx->pc = 0x1FF8C8u;
    // 0x1ff8c8: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x1ff8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1ff8cc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1ff8ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1ff8d0: 0x10c20034  beq         $a2, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x1FF8D0u;
    {
        const bool branch_taken_0x1ff8d0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FF8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF8D0u;
        // 0x1ff8d4: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff8d0) {
            ctx->pc = 0x1FF9A4u;
            goto label_1ff9a4;
        }
    }
    ctx->pc = 0x1FF8D8u;
    // 0x1ff8d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ff8d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ff8dc:
    // 0x1ff8dc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1ff8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1ff8e0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ff8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ff8e4: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x1ff8e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ff8e8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1ff8e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1ff8ec: 0x0  nop
    ctx->pc = 0x1ff8ecu;
    // NOP
    // 0x1ff8f0: 0x14c4fffa  bne         $a2, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FF8F0u;
    {
        const bool branch_taken_0x1ff8f0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        ctx->pc = 0x1FF8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF8F0u;
        // 0x1ff8f4: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff8f0) {
            ctx->pc = 0x1FF8DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff8dc;
        }
    }
    ctx->pc = 0x1FF8F8u;
    // 0x1ff8f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF8F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF8F8u;
        // 0x1ff8fc: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF8F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF900u;
label_1ff900:
    // 0x1ff900: 0x2cc20020  sltiu       $v0, $a2, 0x20
    ctx->pc = 0x1ff900u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1ff904: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x1FF904u;
    {
        const bool branch_taken_0x1ff904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff904) {
            ctx->pc = 0x1FF908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF904u;
            // 0x1ff908: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF97Cu;
            goto label_1ff97c;
        }
    }
    ctx->pc = 0x1FF90Cu;
    // 0x1ff90c: 0xa31025  or          $v0, $a1, $v1
    ctx->pc = 0x1ff90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1ff910: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1ff910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1ff914: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1FF914u;
    {
        const bool branch_taken_0x1ff914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff914) {
            ctx->pc = 0x1FF918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF914u;
            // 0x1ff918: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF97Cu;
            goto label_1ff97c;
        }
    }
    ctx->pc = 0x1FF91Cu;
    // 0x1ff91c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1ff91cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1ff920:
    // 0x1ff920: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x1ff920u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ff924: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x1ff924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x1ff928: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x1ff928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1ff92c: 0x2cc40020  sltiu       $a0, $a2, 0x20
    ctx->pc = 0x1ff92cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1ff930: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x1ff930u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x1ff934: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x1ff934u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x1ff938: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1ff938u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ff93c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x1ff93cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1ff940: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x1ff940u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x1ff944: 0x1080fff6  beqz        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1FF944u;
    {
        const bool branch_taken_0x1ff944 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF944u;
        // 0x1ff948: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff944) {
            ctx->pc = 0x1FF920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff920;
        }
    }
    ctx->pc = 0x1FF94Cu;
    // 0x1ff94c: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x1ff94cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1ff950: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FF950u;
    {
        const bool branch_taken_0x1ff950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF950u;
        // 0x1ff954: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff950) {
            ctx->pc = 0x1FF978u;
            goto label_1ff978;
        }
    }
    ctx->pc = 0x1FF958u;
label_1ff958:
    // 0x1ff958: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x1ff958u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ff95c: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x1ff95cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x1ff960: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1ff960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1ff964: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x1ff964u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1ff968: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x1ff968u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x1ff96c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FF96Cu;
    {
        const bool branch_taken_0x1ff96c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF96Cu;
        // 0x1ff970: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff96c) {
            ctx->pc = 0x1FF958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff958;
        }
    }
    ctx->pc = 0x1FF974u;
    // 0x1ff974: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x1ff974u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1ff978:
    // 0x1ff978: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1ff978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_1ff97c:
    // 0x1ff97c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ff97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ff980: 0x10c20008  beq         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FF980u;
    {
        const bool branch_taken_0x1ff980 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FF984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF980u;
        // 0x1ff984: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff980) {
            ctx->pc = 0x1FF9A4u;
            goto label_1ff9a4;
        }
    }
    ctx->pc = 0x1FF988u;
label_1ff988:
    // 0x1ff988: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x1ff988u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ff98c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1ff98cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1ff990: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1ff990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1ff994: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1ff994u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ff998: 0x0  nop
    ctx->pc = 0x1ff998u;
    // NOP
    // 0x1ff99c: 0x14c4fffa  bne         $a2, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FF99Cu;
    {
        const bool branch_taken_0x1ff99c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        ctx->pc = 0x1FF9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF99Cu;
        // 0x1ff9a0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff99c) {
            ctx->pc = 0x1FF988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff988;
        }
    }
    ctx->pc = 0x1FF9A4u;
label_1ff9a4:
    // 0x1ff9a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF9A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF9A4u;
        // 0x1ff9a8: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF9A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF9ACu;
}
