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

// Function: entry_0019412c
// Address: 0x19412c - 0x194150
void entry_0019412c_0x19412c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019412c_0x19412c");
#endif

    ctx->pc = 0x19412cu;

    // 0x19412c: 0x0  nop
    ctx->pc = 0x19412cu;
    // NOP
    // 0x194130: 0x8e830324  lw          $v1, 0x324($s4)
    ctx->pc = 0x194130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 804)));
    // 0x194134: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x194134u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194138: 0xae830330  sw          $v1, 0x330($s4)
    ctx->pc = 0x194138u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 816), GPR_U32(ctx, 3));
    // 0x19413c: 0xae800324  sw          $zero, 0x324($s4)
    ctx->pc = 0x19413cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 804), GPR_U32(ctx, 0));
    // 0x194140: 0xae80033c  sw          $zero, 0x33C($s4)
    ctx->pc = 0x194140u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 828), GPR_U32(ctx, 0));
    // 0x194144: 0xae800340  sw          $zero, 0x340($s4)
    ctx->pc = 0x194144u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 832), GPR_U32(ctx, 0));
    // 0x194148: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x194148u;
    {
        const bool branch_taken_0x194148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19414Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194148u;
        // 0x19414c: 0xae800344  sw          $zero, 0x344($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 836), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194148) {
            ctx->pc = 0x194180u;
            return;
        }
    }
    ctx->pc = 0x194150u;
}
