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

// Function: entry_001425f8
// Address: 0x1425f8 - 0x142610
void entry_001425f8_0x1425f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001425f8_0x1425f8");
#endif

    ctx->pc = 0x1425f8u;

    // 0x1425f8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1425f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1425fc: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1425FCu;
    {
        const bool branch_taken_0x1425fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x142600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1425FCu;
        // 0x142600: 0x8e110008  lw          $s1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1425fc) {
            ctx->pc = 0x142648u;
            return;
        }
    }
    ctx->pc = 0x142604u;
    // 0x142604: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x142604u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x142608: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x142608u;
    {
        const bool branch_taken_0x142608 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14260Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142608u;
        // 0x14260c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142608) {
            ctx->pc = 0x142648u;
            return;
        }
    }
    ctx->pc = 0x142610u;
}
