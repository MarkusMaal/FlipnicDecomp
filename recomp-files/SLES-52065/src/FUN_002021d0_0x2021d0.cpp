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

// Function: FUN_002021d0
// Address: 0x2021d0 - 0x20223c
void FUN_002021d0_0x2021d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002021d0_0x2021d0");
#endif

    switch (ctx->pc) {
        case 0x2021e8u: goto label_2021e8;
        case 0x2021f0u: goto label_2021f0;
        case 0x202208u: goto label_202208;
        default: break;
    }

    ctx->pc = 0x2021d0u;

    // 0x2021d0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x2021d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2021d4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2021D4u;
    {
        const bool branch_taken_0x2021d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2021D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2021D4u;
        // 0x2021d8: 0x80a30000  lb          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2021d4) {
            ctx->pc = 0x2021F0u;
            goto label_2021f0;
        }
    }
    ctx->pc = 0x2021DCu;
    // 0x2021dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2021dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2021e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2021E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2021E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2021E0u;
        // 0x2021e4: 0x83100a  movz        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2021E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2021E8u;
label_2021e8:
    // 0x2021e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2021E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2021ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2021E8u;
        // 0x2021ec: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2021E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2021F0u;
label_2021f0:
    // 0x2021f0: 0x1060fffd  beqz        $v1, . + 4 + (-0x3 << 2)
    ctx->pc = 0x2021F0u;
    {
        const bool branch_taken_0x2021f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2021F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2021F0u;
        // 0x2021f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2021f0) {
            ctx->pc = 0x2021E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2021e8;
        }
    }
    ctx->pc = 0x2021F8u;
    // 0x2021f8: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x2021f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2021fc: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2021FCu;
    {
        const bool branch_taken_0x2021fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2021fc) {
            ctx->pc = 0x202200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2021FCu;
            // 0x202200: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202228u;
            goto label_202228;
        }
    }
    ctx->pc = 0x202204u;
    // 0x202204: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x202204u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_202208:
    // 0x202208: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x202208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x20220c: 0x80460000  lb          $a2, 0x0($v0)
    ctx->pc = 0x20220cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x202210: 0x10c0fff5  beqz        $a2, . + 4 + (-0xB << 2)
    ctx->pc = 0x202210u;
    {
        const bool branch_taken_0x202210 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x202214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202210u;
        // 0x202214: 0x871021  addu        $v0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202210) {
            ctx->pc = 0x2021E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2021e8;
        }
    }
    ctx->pc = 0x202218u;
    // 0x202218: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x202218u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20221c: 0x50c3fffa  beql        $a2, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20221Cu;
    {
        const bool branch_taken_0x20221c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x20221c) {
            ctx->pc = 0x202220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20221Cu;
            // 0x202220: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202208;
        }
    }
    ctx->pc = 0x202224u;
    // 0x202224: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x202224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_202228:
    // 0x202228: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x202228u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20222c: 0x5440fff0  bnel        $v0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x20222Cu;
    {
        const bool branch_taken_0x20222c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20222c) {
            ctx->pc = 0x202230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20222Cu;
            // 0x202230: 0x80a30000  lb          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2021F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2021f0;
        }
    }
    ctx->pc = 0x202234u;
    // 0x202234: 0x3e00008  jr          $ra
    ctx->pc = 0x202234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202234u;
        // 0x202238: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20223Cu;
}
