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

// Function: entry_00110ad8
// Address: 0x110ad8 - 0x110afc
void entry_00110ad8_0x110ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110ad8_0x110ad8");
#endif

    ctx->pc = 0x110ad8u;

    // 0x110ad8: 0x8e250038  lw          $a1, 0x38($s1)
    ctx->pc = 0x110ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x110adc: 0x65282a  slt         $a1, $v1, $a1
    ctx->pc = 0x110adcu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x110ae0: 0x14a0ffde  bnez        $a1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x110AE0u;
    {
        const bool branch_taken_0x110ae0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x110ae0) {
            ctx->pc = 0x110A5Cu;
            return;
        }
    }
    ctx->pc = 0x110AE8u;
    // 0x110ae8: 0x8e330000  lw          $s3, 0x0($s1)
    ctx->pc = 0x110ae8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x110aec: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x110aecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x110af0: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x110AF0u;
    {
        const bool branch_taken_0x110af0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x110AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110AF0u;
        // 0x110af4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110af0) {
            ctx->pc = 0x110B40u;
            return;
        }
    }
    ctx->pc = 0x110AF8u;
    // 0x110af8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x110af8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x110afcu;
}
