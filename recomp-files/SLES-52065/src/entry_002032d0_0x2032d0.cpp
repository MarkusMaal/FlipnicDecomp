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

// Function: entry_002032d0
// Address: 0x2032d0 - 0x203300
void entry_002032d0_0x2032d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002032d0_0x2032d0");
#endif

    ctx->pc = 0x2032d0u;

    // 0x2032d0: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x2032d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2032d4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2032D4u;
    {
        const bool branch_taken_0x2032d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2032d4) {
            ctx->pc = 0x203350u;
            return;
        }
    }
    ctx->pc = 0x2032DCu;
    // 0x2032dc: 0x6a00008  bltz        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x2032DCu;
    {
        const bool branch_taken_0x2032dc = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x2032E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2032DCu;
        // 0x2032e0: 0x284102b  sltu        $v0, $s4, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2032dc) {
            ctx->pc = 0x203300u;
            return;
        }
    }
    ctx->pc = 0x2032E4u;
    // 0x2032e4: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2032E4u;
    {
        const bool branch_taken_0x2032e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2032e4) {
            ctx->pc = 0x2032E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2032E4u;
            // 0x2032e8: 0x2415ffff  addiu       $s5, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203314u;
            return;
        }
    }
    ctx->pc = 0x2032ECu;
    // 0x2032ec: 0x14940006  bne         $a0, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x2032ECu;
    {
        const bool branch_taken_0x2032ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 20));
        ctx->pc = 0x2032F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2032ECu;
        // 0x2032f0: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2032ec) {
            ctx->pc = 0x203308u;
            return;
        }
    }
    ctx->pc = 0x2032F4u;
    // 0x2032f4: 0x2d1102a  slt         $v0, $s6, $s1
    ctx->pc = 0x2032f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2032f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2032F8u;
    {
        const bool branch_taken_0x2032f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2032f8) {
            ctx->pc = 0x203308u;
            return;
        }
    }
    ctx->pc = 0x203300u;
}
