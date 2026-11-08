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

// Function: FUN_0011b5a0
// Address: 0x11b5a0 - 0x11b638
void FUN_0011b5a0_0x11b5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011b5a0_0x11b5a0");
#endif

    switch (ctx->pc) {
        case 0x11b5b0u: goto label_11b5b0;
        default: break;
    }

    ctx->pc = 0x11b5a0u;

    // 0x11b5a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11b5a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b5a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11b5a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b5a8: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x11b5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x11b5ac: 0xa84821  addu        $t1, $a1, $t0
    ctx->pc = 0x11b5acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_11b5b0:
    // 0x11b5b0: 0x81270000  lb          $a3, 0x0($t1)
    ctx->pc = 0x11b5b0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x11b5b4: 0x28e30061  slti        $v1, $a3, 0x61
    ctx->pc = 0x11b5b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)97) ? 1 : 0);
    // 0x11b5b8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B5B8u;
    {
        const bool branch_taken_0x11b5b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B5B8u;
        // 0x11b5bc: 0x28e1007b  slti        $at, $a3, 0x7B (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)123) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b5b8) {
            ctx->pc = 0x11B5D0u;
            goto label_11b5d0;
        }
    }
    ctx->pc = 0x11B5C0u;
    // 0x11b5c0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B5C0u;
    {
        const bool branch_taken_0x11b5c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B5C0u;
        // 0x11b5c4: 0x24e3ffe0  addiu       $v1, $a3, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b5c0) {
            ctx->pc = 0x11B5D0u;
            goto label_11b5d0;
        }
    }
    ctx->pc = 0x11B5C8u;
    // 0x11b5c8: 0x33e3c  dsll32      $a3, $v1, 24
    ctx->pc = 0x11b5c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 24));
    // 0x11b5cc: 0x73e3f  dsra32      $a3, $a3, 24
    ctx->pc = 0x11b5ccu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 24));
label_11b5d0:
    // 0x11b5d0: 0xc25021  addu        $t2, $a2, $v0
    ctx->pc = 0x11b5d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x11b5d4: 0xa1470000  sb          $a3, 0x0($t2)
    ctx->pc = 0x11b5d4u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x11b5d8: 0x81230001  lb          $v1, 0x1($t1)
    ctx->pc = 0x11b5d8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x11b5dc: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x11B5DCu;
    {
        const bool branch_taken_0x11b5dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B5DCu;
        // 0x11b5e0: 0x71e3c  dsll32      $v1, $a3, 24 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b5dc) {
            ctx->pc = 0x11B610u;
            goto label_11b610;
        }
    }
    ctx->pc = 0x11B5E4u;
    // 0x11b5e4: 0x7263c  dsll32      $a0, $a3, 24
    ctx->pc = 0x11b5e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 24));
    // 0x11b5e8: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x11b5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x11b5ec: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x11b5ecu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x11b5f0: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B5F0u;
    {
        const bool branch_taken_0x11b5f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x11b5f0) {
            ctx->pc = 0x11B600u;
            goto label_11b600;
        }
    }
    ctx->pc = 0x11B5F8u;
    // 0x11b5f8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x11B5F8u;
    {
        const bool branch_taken_0x11b5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B5F8u;
        // 0x11b5fc: 0xa1400000  sb          $zero, 0x0($t2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b5f8) {
            ctx->pc = 0x11B630u;
            goto label_11b630;
        }
    }
    ctx->pc = 0x11B600u;
label_11b600:
    // 0x11b600: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11b600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11b604: 0xc21821  addu        $v1, $a2, $v0
    ctx->pc = 0x11b604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x11b608: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x11B608u;
    {
        const bool branch_taken_0x11b608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B608u;
        // 0x11b60c: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b608) {
            ctx->pc = 0x11B630u;
            goto label_11b630;
        }
    }
    ctx->pc = 0x11B610u;
label_11b610:
    // 0x11b610: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x11b610u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x11b614: 0x14640002  bne         $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x11B614u;
    {
        const bool branch_taken_0x11b614 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x11B618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B614u;
        // 0x11b618: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b614) {
            ctx->pc = 0x11B620u;
            goto label_11b620;
        }
    }
    ctx->pc = 0x11B61Cu;
    // 0x11b61c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11b61cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11b620:
    // 0x11b620: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x11b620u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x11b624: 0x29030160  slti        $v1, $t0, 0x160
    ctx->pc = 0x11b624u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)352) ? 1 : 0);
    // 0x11b628: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x11B628u;
    {
        const bool branch_taken_0x11b628 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B628u;
        // 0x11b62c: 0xa84821  addu        $t1, $a1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b628) {
            ctx->pc = 0x11B5B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b5b0;
        }
    }
    ctx->pc = 0x11B630u;
label_11b630:
    // 0x11b630: 0x3e00008  jr          $ra
    ctx->pc = 0x11B630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B638u;
}
