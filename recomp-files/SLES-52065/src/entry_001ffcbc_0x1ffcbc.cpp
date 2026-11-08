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

// Function: entry_001ffcbc
// Address: 0x1ffcbc - 0x1ffcd8
void entry_001ffcbc_0x1ffcbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ffcbc_0x1ffcbc");
#endif

    ctx->pc = 0x1ffcbcu;

    // 0x1ffcbc: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x1ffcbcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffcc0: 0x1812  mflo        $v1
    ctx->pc = 0x1ffcc0u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1ffcc4: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x1ffcc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ffcc8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FFCC8u;
    {
        const bool branch_taken_0x1ffcc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFCC8u;
        // 0x1ffccc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffcc8) {
            ctx->pc = 0x1FFCFCu;
            return;
        }
    }
    ctx->pc = 0x1FFCD0u;
    // 0x1ffcd0: 0x2a72000a  slti        $s2, $s3, 0xA
    ctx->pc = 0x1ffcd0u;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1ffcd4: 0x0  nop
    ctx->pc = 0x1ffcd4u;
    // NOP
    ctx->pc = 0x1ffcd8u;
}
