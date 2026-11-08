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

// Function: entry_00194408
// Address: 0x194408 - 0x194440
void entry_00194408_0x194408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194408_0x194408");
#endif

    ctx->pc = 0x194408u;

    // 0x194408: 0x8e840324  lw          $a0, 0x324($s4)
    ctx->pc = 0x194408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 804)));
    // 0x19440c: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x19440cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x194410: 0x1420001d  bnez        $at, . + 4 + (0x1D << 2)
    ctx->pc = 0x194410u;
    {
        const bool branch_taken_0x194410 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x194410) {
            ctx->pc = 0x194488u;
            return;
        }
    }
    ctx->pc = 0x194418u;
    // 0x194418: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x194418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x19441c: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x19441Cu;
    {
        const bool branch_taken_0x19441c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19441c) {
            ctx->pc = 0x194488u;
            return;
        }
    }
    ctx->pc = 0x194424u;
    // 0x194424: 0xae840330  sw          $a0, 0x330($s4)
    ctx->pc = 0x194424u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 816), GPR_U32(ctx, 4));
    // 0x194428: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x194428u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19442c: 0xae800324  sw          $zero, 0x324($s4)
    ctx->pc = 0x19442cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 804), GPR_U32(ctx, 0));
    // 0x194430: 0xae80033c  sw          $zero, 0x33C($s4)
    ctx->pc = 0x194430u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 828), GPR_U32(ctx, 0));
    // 0x194434: 0xae800340  sw          $zero, 0x340($s4)
    ctx->pc = 0x194434u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 832), GPR_U32(ctx, 0));
    // 0x194438: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x194438u;
    {
        const bool branch_taken_0x194438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19443Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194438u;
        // 0x19443c: 0xae800344  sw          $zero, 0x344($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 836), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194438) {
            ctx->pc = 0x194470u;
            return;
        }
    }
    ctx->pc = 0x194440u;
}
