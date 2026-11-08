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
// Address: 0x1919f0 - 0x191a24
void caseD_5_0x1919f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x1919f0");
#endif

    ctx->pc = 0x1919f0u;

    // 0x1919f0: 0x8ca40028  lw          $a0, 0x28($a1)
    ctx->pc = 0x1919f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x1919f4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1919f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1919f8: 0x10830026  beq         $a0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x1919F8u;
    {
        const bool branch_taken_0x1919f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1919FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1919F8u;
        // 0x1919fc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1919f8) {
            ctx->pc = 0x191A94u;
            return;
        }
    }
    ctx->pc = 0x191A00u;
    // 0x191a00: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x191A00u;
    {
        const bool branch_taken_0x191a00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x191a00) {
            ctx->pc = 0x191A24u;
            return;
        }
    }
    ctx->pc = 0x191A08u;
    // 0x191a08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x191a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191a0c: 0x10820245  beq         $a0, $v0, . + 4 + (0x245 << 2)
    ctx->pc = 0x191A0Cu;
    {
        const bool branch_taken_0x191a0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x191a0c) {
            ctx->pc = 0x192324u;
            return;
        }
    }
    ctx->pc = 0x191A14u;
    // 0x191a14: 0x10800243  beqz        $a0, . + 4 + (0x243 << 2)
    ctx->pc = 0x191A14u;
    {
        const bool branch_taken_0x191a14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x191a14) {
            ctx->pc = 0x192324u;
            return;
        }
    }
    ctx->pc = 0x191A1Cu;
    // 0x191a1c: 0x10000241  b           . + 4 + (0x241 << 2)
    ctx->pc = 0x191A1Cu;
    {
        const bool branch_taken_0x191a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191a1c) {
            ctx->pc = 0x192324u;
            return;
        }
    }
    ctx->pc = 0x191A24u;
}
