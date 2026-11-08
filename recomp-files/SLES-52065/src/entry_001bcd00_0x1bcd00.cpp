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

// Function: entry_001bcd00
// Address: 0x1bcd00 - 0x1bcd18
void entry_001bcd00_0x1bcd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bcd00_0x1bcd00");
#endif

    ctx->pc = 0x1bcd00u;

    // 0x1bcd00: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x1bcd00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bcd04: 0x2482000f  addiu       $v0, $a0, 0xF
    ctx->pc = 0x1bcd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x1bcd08: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BCD08u;
    {
        const bool branch_taken_0x1bcd08 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1BCD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCD08u;
        // 0x1bcd0c: 0x21903  sra         $v1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcd08) {
            ctx->pc = 0x1BCD18u;
            return;
        }
    }
    ctx->pc = 0x1BCD10u;
    // 0x1bcd10: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1bcd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1bcd14: 0x21903  sra         $v1, $v0, 4
    ctx->pc = 0x1bcd14u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
    ctx->pc = 0x1bcd18u;
}
