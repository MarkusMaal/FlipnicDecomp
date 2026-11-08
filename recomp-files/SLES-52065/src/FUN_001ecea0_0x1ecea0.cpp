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

// Function: FUN_001ecea0
// Address: 0x1ecea0 - 0x1ecf30
void FUN_001ecea0_0x1ecea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ecea0_0x1ecea0");
#endif

    ctx->pc = 0x1ecea0u;

    // 0x1ecea0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1ecea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecea4: 0x51078  dsll        $v0, $a1, 1
    ctx->pc = 0x1ecea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 1);
    // 0x1ecea8: 0x2357e  dsrl32      $a2, $v0, 21
    ctx->pc = 0x1ecea8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) >> (32 + 21));
    // 0x1eceac: 0x64c6fbcd  daddiu      $a2, $a2, -0x433
    ctx->pc = 0x1eceacu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294966221);
    // 0x1eceb0: 0x28c2ffcb  slti        $v0, $a2, -0x35
    ctx->pc = 0x1eceb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294967243) ? 1 : 0);
    // 0x1eceb4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ECEB4u;
    {
        const bool branch_taken_0x1eceb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECEB4u;
        // 0x1eceb8: 0x28c2000d  slti        $v0, $a2, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)13) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eceb4) {
            ctx->pc = 0x1ECEC4u;
            goto label_1ecec4;
        }
    }
    ctx->pc = 0x1ECEBCu;
    // 0x1ecebc: 0x3e00008  jr          $ra
    ctx->pc = 0x1ECEBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECEBCu;
        // 0x1ecec0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ECEBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ECEC4u;
label_1ecec4:
    // 0x1ecec4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ECEC4u;
    {
        const bool branch_taken_0x1ecec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ECEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECEC4u;
        // 0x1ecec8: 0x51338  dsll        $v0, $a1, 12 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 12);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecec4) {
            ctx->pc = 0x1ECED4u;
            goto label_1eced4;
        }
    }
    ctx->pc = 0x1ECECCu;
    // 0x1ececc: 0x3e00008  jr          $ra
    ctx->pc = 0x1ECECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECECCu;
        // 0x1eced0: 0x2402270f  addiu       $v0, $zero, 0x270F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ECECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ECED4u;
label_1eced4:
    // 0x1eced4: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1eced4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1eced8: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1eced8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1ecedc: 0x22b3a  dsrl        $a1, $v0, 12
    ctx->pc = 0x1ecedcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> 12);
    // 0x1ecee0: 0x4c1000d  bgez        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x1ECEE0u;
    {
        const bool branch_taken_0x1ecee0 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1ECEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECEE0u;
        // 0x1ecee4: 0xa32825  or          $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecee0) {
            ctx->pc = 0x1ECF18u;
            goto label_1ecf18;
        }
    }
    ctx->pc = 0x1ECEE8u;
    // 0x1ecee8: 0x6302f  dsubu       $a2, $zero, $a2
    ctx->pc = 0x1ecee8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) - GPR_U64(ctx, 6));
    // 0x1eceec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1eceecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ecef0: 0x64c3fffe  daddiu      $v1, $a2, -0x2
    ctx->pc = 0x1ecef0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967294);
    // 0x1ecef4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ecef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ecef8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1ecef8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1ecefc: 0x652816  dsrlv       $a1, $a1, $v1
    ctx->pc = 0x1ecefcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (GPR_U32(ctx, 3) & 0x3F));
    // 0x1ecf00: 0x30a40003  andi        $a0, $a1, 0x3
    ctx->pc = 0x1ecf00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x1ecf04: 0x54820007  bnel        $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1ECF04u;
    {
        const bool branch_taken_0x1ecf04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ecf04) {
            ctx->pc = 0x1ECF08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ECF04u;
            // 0x1ecf08: 0x528ba  dsrl        $a1, $a1, 2 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ECF24u;
            goto label_1ecf24;
        }
    }
    ctx->pc = 0x1ECF0Cu;
    // 0x1ecf0c: 0x510ba  dsrl        $v0, $a1, 2
    ctx->pc = 0x1ecf0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) >> 2);
    // 0x1ecf10: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1ECF10u;
    {
        const bool branch_taken_0x1ecf10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECF10u;
        // 0x1ecf14: 0x64450001  daddiu      $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecf10) {
            ctx->pc = 0x1ECF24u;
            goto label_1ecf24;
        }
    }
    ctx->pc = 0x1ECF18u;
label_1ecf18:
    // 0x1ecf18: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x1ecf18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1ecf1c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1ecf1cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1ecf20: 0x452814  dsllv       $a1, $a1, $v0
    ctx->pc = 0x1ecf20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (GPR_U32(ctx, 2) & 0x3F));
label_1ecf24:
    // 0x1ecf24: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x1ecf24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1ecf28: 0x3e00008  jr          $ra
    ctx->pc = 0x1ECF28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECF28u;
        // 0x1ecf2c: 0x2103f  dsra32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ECF28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ECF30u;
}
