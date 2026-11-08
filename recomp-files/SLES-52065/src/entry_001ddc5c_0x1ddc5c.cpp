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

// Function: entry_001ddc5c
// Address: 0x1ddc5c - 0x1ddc80
void entry_001ddc5c_0x1ddc5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ddc5c_0x1ddc5c");
#endif

    ctx->pc = 0x1ddc5cu;

    // 0x1ddc5c: 0x28c20030  slti        $v0, $a2, 0x30
    ctx->pc = 0x1ddc5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x1ddc60: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1DDC60u;
    {
        const bool branch_taken_0x1ddc60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DDC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDC60u;
        // 0x1ddc64: 0x24a500e8  addiu       $a1, $a1, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddc60) {
            ctx->pc = 0x1DDBF0u;
            return;
        }
    }
    ctx->pc = 0x1DDC68u;
    // 0x1ddc68: 0x11000005  beqz        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DDC68u;
    {
        const bool branch_taken_0x1ddc68 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDC68u;
        // 0x1ddc6c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddc68) {
            ctx->pc = 0x1DDC80u;
            return;
        }
    }
    ctx->pc = 0x1DDC70u;
    // 0x1ddc70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ddc70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ddc74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ddc74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ddc78: 0x807d0ea  j           func_1F43A8
    ctx->pc = 0x1DDC78u;
    ctx->pc = 0x1DDC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDC78u;
    // 0x1ddc7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F43A8u;
    FUN_001f43a8_0x1f43a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1DDC80u;
}
