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

// Function: entry_0020501c
// Address: 0x20501c - 0x205030
void entry_0020501c_0x20501c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020501c_0x20501c");
#endif

    ctx->pc = 0x20501cu;

    // 0x20501c: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x20501cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x205020: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x205020u;
    {
        const bool branch_taken_0x205020 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x205024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205020u;
        // 0x205024: 0x24020045  addiu       $v0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205020) {
            ctx->pc = 0x205030u;
            return;
        }
    }
    ctx->pc = 0x205028u;
    // 0x205028: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x205028u;
    {
        const bool branch_taken_0x205028 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x20502Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205028u;
        // 0x20502c: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205028) {
            ctx->pc = 0x205038u;
            return;
        }
    }
    ctx->pc = 0x205030u;
}
