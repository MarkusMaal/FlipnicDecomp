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

// Function: entry_00112990
// Address: 0x112990 - 0x1129ac
void entry_00112990_0x112990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112990_0x112990");
#endif

    ctx->pc = 0x112990u;

    // 0x112990: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x112990u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x112994: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x112994u;
    {
        const bool branch_taken_0x112994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x112994) {
            ctx->pc = 0x11294Cu;
            return;
        }
    }
    ctx->pc = 0x11299Cu;
    // 0x11299c: 0x14e6008d  bne         $a3, $a2, . + 4 + (0x8D << 2)
    ctx->pc = 0x11299Cu;
    {
        const bool branch_taken_0x11299c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x1129A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11299Cu;
        // 0x1129a0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11299c) {
            ctx->pc = 0x112BD4u;
            return;
        }
    }
    ctx->pc = 0x1129A4u;
    // 0x1129a4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1129A4u;
    {
        const bool branch_taken_0x1129a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1129A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1129A4u;
        // 0x1129a8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1129a4) {
            ctx->pc = 0x1129DCu;
            return;
        }
    }
    ctx->pc = 0x1129ACu;
}
