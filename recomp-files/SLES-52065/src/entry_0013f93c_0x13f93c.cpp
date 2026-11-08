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

// Function: entry_0013f93c
// Address: 0x13f93c - 0x13f968
void entry_0013f93c_0x13f93c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f93c_0x13f93c");
#endif

    ctx->pc = 0x13f93cu;

    // 0x13f93c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x13f93cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x13f940: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x13f940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13f944: 0x85082b  sltu        $at, $a0, $a1
    ctx->pc = 0x13f944u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x13f948: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x13F948u;
    {
        const bool branch_taken_0x13f948 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f948) {
            ctx->pc = 0x13F98Cu;
            return;
        }
    }
    ctx->pc = 0x13F950u;
    // 0x13f950: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x13f950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x13f954: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x13f954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x13f958: 0x85182b  sltu        $v1, $a0, $a1
    ctx->pc = 0x13f958u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x13f95c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x13F95Cu;
    {
        const bool branch_taken_0x13f95c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f95c) {
            ctx->pc = 0x13F968u;
            return;
        }
    }
    ctx->pc = 0x13F964u;
    // 0x13f964: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x13f964u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    ctx->pc = 0x13f968u;
}
