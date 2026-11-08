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

// Function: entry_0017ef10
// Address: 0x17ef10 - 0x17ef3c
void entry_0017ef10_0x17ef10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ef10_0x17ef10");
#endif

    ctx->pc = 0x17ef10u;

    // 0x17ef10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17ef10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17ef14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17ef14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17ef18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17ef18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17ef1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17ef1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17ef20: 0xac850044  sw          $a1, 0x44($a0)
    ctx->pc = 0x17ef20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 5));
    // 0x17ef24: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x17ef24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x17ef28: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x17ef28u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x17ef2c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17EF2Cu;
    {
        const bool branch_taken_0x17ef2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EF2Cu;
        // 0x17ef30: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ef2c) {
            ctx->pc = 0x17EF3Cu;
            return;
        }
    }
    ctx->pc = 0x17EF34u;
    // 0x17ef34: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x17ef34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x17ef38: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x17ef38u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    ctx->pc = 0x17ef3cu;
}
