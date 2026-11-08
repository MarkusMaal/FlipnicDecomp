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

// Function: entry_001c2b04
// Address: 0x1c2b04 - 0x1c2b1c
void entry_001c2b04_0x1c2b04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2b04_0x1c2b04");
#endif

    ctx->pc = 0x1c2b04u;

    // 0x1c2b04: 0x8e230234  lw          $v1, 0x234($s1)
    ctx->pc = 0x1c2b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 564)));
    // 0x1c2b08: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c2b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c2b0c: 0x14620058  bne         $v1, $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x1C2B0Cu;
    {
        const bool branch_taken_0x1c2b0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C2B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2B0Cu;
        // 0x1c2b10: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2b0c) {
            ctx->pc = 0x1C2C70u;
            return;
        }
    }
    ctx->pc = 0x1C2B14u;
    // 0x1c2b14: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x1C2B14u;
    {
        const bool branch_taken_0x1c2b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2B14u;
        // 0x1c2b18: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2b14) {
            ctx->pc = 0x1C2C70u;
            return;
        }
    }
    ctx->pc = 0x1C2B1Cu;
}
