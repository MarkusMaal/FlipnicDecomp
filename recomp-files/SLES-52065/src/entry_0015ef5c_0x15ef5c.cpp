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

// Function: entry_0015ef5c
// Address: 0x15ef5c - 0x15ef90
void entry_0015ef5c_0x15ef5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ef5c_0x15ef5c");
#endif

    ctx->pc = 0x15ef5cu;

    // 0x15ef5c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x15ef5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15ef60: 0x902023  subu        $a0, $a0, $s0
    ctx->pc = 0x15ef60u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x15ef64: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x15ef64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15ef68: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x15ef68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x15ef6c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x15ef6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x15ef70: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x15ef70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x15ef74: 0x84840228  lh          $a0, 0x228($a0)
    ctx->pc = 0x15ef74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 552)));
    // 0x15ef78: 0x1083004d  beq         $a0, $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x15EF78u;
    {
        const bool branch_taken_0x15ef78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15EF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EF78u;
        // 0x15ef7c: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ef78) {
            ctx->pc = 0x15F0B0u;
            return;
        }
    }
    ctx->pc = 0x15EF80u;
    // 0x15ef80: 0x1083004b  beq         $a0, $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x15EF80u;
    {
        const bool branch_taken_0x15ef80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15EF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EF80u;
        // 0x15ef84: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ef80) {
            ctx->pc = 0x15F0B0u;
            return;
        }
    }
    ctx->pc = 0x15EF88u;
    // 0x15ef88: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x15EF88u;
    {
        const bool branch_taken_0x15ef88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ef88) {
            ctx->pc = 0x15F09Cu;
            return;
        }
    }
    ctx->pc = 0x15EF90u;
}
