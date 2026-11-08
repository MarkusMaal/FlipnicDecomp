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

// Function: entry_00100d08
// Address: 0x100d08 - 0x100d2c
void entry_00100d08_0x100d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100d08_0x100d08");
#endif

    ctx->pc = 0x100d08u;

    // 0x100d08: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x100d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x100d0c: 0x1083001c  beq         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x100D0Cu;
    {
        const bool branch_taken_0x100d0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x100d0c) {
            ctx->pc = 0x100D80u;
            return;
        }
    }
    ctx->pc = 0x100D14u;
    // 0x100d14: 0x8f828218  lw          $v0, -0x7DE8($gp)
    ctx->pc = 0x100d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x100d18: 0x8c502c20  lw          $s0, 0x2C20($v0)
    ctx->pc = 0x100d18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11296)));
    // 0x100d1c: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x100d1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x100d20: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x100D20u;
    {
        const bool branch_taken_0x100d20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x100D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100D20u;
        // 0x100d24: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100d20) {
            ctx->pc = 0x100D60u;
            return;
        }
    }
    ctx->pc = 0x100D28u;
    // 0x100d28: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x100d28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x100d2cu;
}
