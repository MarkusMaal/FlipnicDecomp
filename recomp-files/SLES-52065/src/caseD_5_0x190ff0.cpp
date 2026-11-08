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

// Function: caseD_5
// Address: 0x190ff0 - 0x19102c
void caseD_5_0x190ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x190ff0");
#endif

    ctx->pc = 0x190ff0u;

    // 0x190ff0: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x190ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x190ff4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x190ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x190ff8: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x190FF8u;
    {
        const bool branch_taken_0x190ff8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x190FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190FF8u;
        // 0x190ffc: 0x2629002c  addiu       $t1, $s1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190ff8) {
            ctx->pc = 0x19107Cu;
            return;
        }
    }
    ctx->pc = 0x191000u;
    // 0x191000: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x191000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x191004: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x191004u;
    {
        const bool branch_taken_0x191004 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x191008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191004u;
        // 0x191008: 0x2626002c  addiu       $a2, $s1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191004) {
            ctx->pc = 0x19102Cu;
            return;
        }
    }
    ctx->pc = 0x19100Cu;
    // 0x19100c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19100cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191010: 0x106201a1  beq         $v1, $v0, . + 4 + (0x1A1 << 2)
    ctx->pc = 0x191010u;
    {
        const bool branch_taken_0x191010 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x191010) {
            ctx->pc = 0x191698u;
            return;
        }
    }
    ctx->pc = 0x191018u;
    // 0x191018: 0x1060019f  beqz        $v1, . + 4 + (0x19F << 2)
    ctx->pc = 0x191018u;
    {
        const bool branch_taken_0x191018 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x191018) {
            ctx->pc = 0x191698u;
            return;
        }
    }
    ctx->pc = 0x191020u;
    // 0x191020: 0x1000019d  b           . + 4 + (0x19D << 2)
    ctx->pc = 0x191020u;
    {
        const bool branch_taken_0x191020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191020) {
            ctx->pc = 0x191698u;
            return;
        }
    }
    ctx->pc = 0x191028u;
    // 0x191028: 0x2626002c  addiu       $a2, $s1, 0x2C
    ctx->pc = 0x191028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
    ctx->pc = 0x19102cu;
}
