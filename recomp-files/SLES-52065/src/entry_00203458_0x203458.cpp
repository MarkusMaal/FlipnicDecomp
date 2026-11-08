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

// Function: entry_00203458
// Address: 0x203458 - 0x203490
void entry_00203458_0x203458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203458_0x203458");
#endif

    ctx->pc = 0x203458u;

label_203458:
    // 0x203458: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x203458u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x20345c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x20345cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x203460: 0x2251821  addu        $v1, $s1, $a1
    ctx->pc = 0x203460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x203464: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x203464u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x203468: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x203468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x20346c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20346Cu;
    {
        const bool branch_taken_0x20346c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20346c) {
            ctx->pc = 0x203458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203458;
        }
    }
    ctx->pc = 0x203474u;
    // 0x203474: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x203474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x203478: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x203478u;
    {
        const bool branch_taken_0x203478 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x20347Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203478u;
        // 0x20347c: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203478) {
            ctx->pc = 0x203490u;
            return;
        }
    }
    ctx->pc = 0x203480u;
    // 0x203480: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x203480u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x203484: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x203484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203488: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x203488u;
    {
        const bool branch_taken_0x203488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20348Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203488u;
        // 0x20348c: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203488) {
            ctx->pc = 0x20349Cu;
            return;
        }
    }
    ctx->pc = 0x203490u;
}
