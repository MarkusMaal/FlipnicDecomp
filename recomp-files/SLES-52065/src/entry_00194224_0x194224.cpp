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

// Function: entry_00194224
// Address: 0x194224 - 0x194254
void entry_00194224_0x194224(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194224_0x194224");
#endif

    ctx->pc = 0x194224u;

    // 0x194224: 0x0  nop
    ctx->pc = 0x194224u;
    // NOP
    // 0x194228: 0x8f8785f4  lw          $a3, -0x7A0C($gp)
    ctx->pc = 0x194228u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x19422c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19422cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x194230: 0x8ce82c04  lw          $t0, 0x2C04($a3)
    ctx->pc = 0x194230u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 11268)));
    // 0x194234: 0x15030058  bne         $t0, $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x194234u;
    {
        const bool branch_taken_0x194234 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        ctx->pc = 0x194238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194234u;
        // 0x194238: 0x24e62c00  addiu       $a2, $a3, 0x2C00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 11264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194234) {
            ctx->pc = 0x194398u;
            return;
        }
    }
    ctx->pc = 0x19423Cu;
    // 0x19423c: 0x14a00058  bnez        $a1, . + 4 + (0x58 << 2)
    ctx->pc = 0x19423Cu;
    {
        const bool branch_taken_0x19423c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x19423c) {
            ctx->pc = 0x1943A0u;
            return;
        }
    }
    ctx->pc = 0x194244u;
    // 0x194244: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x194244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x194248: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x194248u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19424c: 0x8ce72c1c  lw          $a3, 0x2C1C($a3)
    ctx->pc = 0x19424cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 11292)));
    // 0x194250: 0x0  nop
    ctx->pc = 0x194250u;
    // NOP
    ctx->pc = 0x194254u;
}
