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

// Function: caseD_fffffffb
// Address: 0x1910f4 - 0x191130
void caseD_fffffffb_0x1910f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_fffffffb_0x1910f4");
#endif

    ctx->pc = 0x1910f4u;

    // 0x1910f4: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x1910f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1910f8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1910f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1910fc: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1910FCu;
    {
        const bool branch_taken_0x1910fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x191100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1910FCu;
        // 0x191100: 0x2628002c  addiu       $t0, $s1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1910fc) {
            ctx->pc = 0x191184u;
            return;
        }
    }
    ctx->pc = 0x191104u;
    // 0x191104: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x191104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x191108: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x191108u;
    {
        const bool branch_taken_0x191108 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19110Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191108u;
        // 0x19110c: 0x2626002c  addiu       $a2, $s1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191108) {
            ctx->pc = 0x191130u;
            return;
        }
    }
    ctx->pc = 0x191110u;
    // 0x191110: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x191110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191114: 0x10620160  beq         $v1, $v0, . + 4 + (0x160 << 2)
    ctx->pc = 0x191114u;
    {
        const bool branch_taken_0x191114 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x191114) {
            ctx->pc = 0x191698u;
            return;
        }
    }
    ctx->pc = 0x19111Cu;
    // 0x19111c: 0x1060015e  beqz        $v1, . + 4 + (0x15E << 2)
    ctx->pc = 0x19111Cu;
    {
        const bool branch_taken_0x19111c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19111c) {
            ctx->pc = 0x191698u;
            return;
        }
    }
    ctx->pc = 0x191124u;
    // 0x191124: 0x1000015c  b           . + 4 + (0x15C << 2)
    ctx->pc = 0x191124u;
    {
        const bool branch_taken_0x191124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191124) {
            ctx->pc = 0x191698u;
            return;
        }
    }
    ctx->pc = 0x19112Cu;
    // 0x19112c: 0x2626002c  addiu       $a2, $s1, 0x2C
    ctx->pc = 0x19112cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
    ctx->pc = 0x191130u;
}
