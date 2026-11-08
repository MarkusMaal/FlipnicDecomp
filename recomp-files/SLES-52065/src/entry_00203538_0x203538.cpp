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

// Function: entry_00203538
// Address: 0x203538 - 0x203568
void entry_00203538_0x203538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203538_0x203538");
#endif

    ctx->pc = 0x203538u;

    // 0x203538: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x203538u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x20353c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x20353Cu;
    {
        const bool branch_taken_0x20353c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20353c) {
            ctx->pc = 0x2035B8u;
            return;
        }
    }
    ctx->pc = 0x203544u;
    // 0x203544: 0x6800008  bltz        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x203544u;
    {
        const bool branch_taken_0x203544 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x203548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203544u;
        // 0x203548: 0x2a4102b  sltu        $v0, $s5, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x203544) {
            ctx->pc = 0x203568u;
            return;
        }
    }
    ctx->pc = 0x20354Cu;
    // 0x20354c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x20354Cu;
    {
        const bool branch_taken_0x20354c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20354c) {
            ctx->pc = 0x203550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20354Cu;
            // 0x203550: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20357Cu;
            return;
        }
    }
    ctx->pc = 0x203554u;
    // 0x203554: 0x14950006  bne         $a0, $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x203554u;
    {
        const bool branch_taken_0x203554 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 21));
        ctx->pc = 0x203558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203554u;
        // 0x203558: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203554) {
            ctx->pc = 0x203570u;
            return;
        }
    }
    ctx->pc = 0x20355Cu;
    // 0x20355c: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x20355cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x203560: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203560u;
    {
        const bool branch_taken_0x203560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x203560) {
            ctx->pc = 0x203570u;
            return;
        }
    }
    ctx->pc = 0x203568u;
}
