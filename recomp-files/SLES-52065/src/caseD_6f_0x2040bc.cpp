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

// Function: caseD_6f
// Address: 0x2040bc - 0x2040d4
void caseD_6f_0x2040bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6f_0x2040bc");
#endif

    ctx->pc = 0x2040bcu;

    // 0x2040bc: 0x33c20010  andi        $v0, $fp, 0x10
    ctx->pc = 0x2040bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)16);
    // 0x2040c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2040C0u;
    {
        const bool branch_taken_0x2040c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2040C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2040C0u;
        // 0x2040c4: 0x33c20040  andi        $v0, $fp, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2040c0) {
            ctx->pc = 0x2040D4u;
            return;
        }
    }
    ctx->pc = 0x2040C8u;
    // 0x2040c8: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x2040c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x2040cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2040CCu;
    {
        const bool branch_taken_0x2040cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2040D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2040CCu;
        // 0x2040d0: 0xde90fff8  ld          $s0, -0x8($s4) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2040cc) {
            ctx->pc = 0x2040E8u;
            return;
        }
    }
    ctx->pc = 0x2040D4u;
}
