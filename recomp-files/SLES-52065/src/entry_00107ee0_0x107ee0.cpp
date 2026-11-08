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

// Function: entry_00107ee0
// Address: 0x107ee0 - 0x107f18
void entry_00107ee0_0x107ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107ee0_0x107ee0");
#endif

    ctx->pc = 0x107ee0u;

label_107ee0:
    // 0x107ee0: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x107ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x107ee4: 0x24630210  addiu       $v1, $v1, 0x210
    ctx->pc = 0x107ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 528));
    // 0x107ee8: 0x708821  addu        $s1, $v1, $s0
    ctx->pc = 0x107ee8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x107eec: 0x8e32000c  lw          $s2, 0xC($s1)
    ctx->pc = 0x107eecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x107ef0: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x107ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x107ef4: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x107ef4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x107ef8: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x107EF8u;
    {
        const bool branch_taken_0x107ef8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x107EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107EF8u;
        // 0x107efc: 0x2633000c  addiu       $s3, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107ef8) {
            ctx->pc = 0x107EB4u;
            return;
        }
    }
    ctx->pc = 0x107F00u;
    // 0x107f00: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x107f00u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x107f04: 0x2a830002  slti        $v1, $s4, 0x2
    ctx->pc = 0x107f04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x107f08: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x107F08u;
    {
        const bool branch_taken_0x107f08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x107F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107F08u;
        // 0x107f0c: 0x26100024  addiu       $s0, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107f08) {
            ctx->pc = 0x107EE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_107ee0;
        }
    }
    ctx->pc = 0x107F10u;
    // 0x107f10: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x107f10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107f14: 0x122040  sll         $a0, $s2, 1
    ctx->pc = 0x107f14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x107f18u;
}
