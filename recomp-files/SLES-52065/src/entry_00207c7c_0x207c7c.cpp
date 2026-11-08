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

// Function: entry_00207c7c
// Address: 0x207c7c - 0x207c98
void entry_00207c7c_0x207c7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207c7c_0x207c7c");
#endif

    ctx->pc = 0x207c7cu;

    // 0x207c7c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x207c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x207c80: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x207c80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x207c84: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x207C84u;
    {
        const bool branch_taken_0x207c84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x207c84) {
            ctx->pc = 0x207C88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207C84u;
            // 0x207c88: 0x64a5007f  daddiu      $a1, $a1, 0x7F (Delay Slot)
            SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)127);
            ctx->in_delay_slot = false;
            ctx->pc = 0x207C98u;
            return;
        }
    }
    ctx->pc = 0x207C8Cu;
    // 0x207c8c: 0x30a30100  andi        $v1, $a1, 0x100
    ctx->pc = 0x207c8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
    // 0x207c90: 0x64a20080  daddiu      $v0, $a1, 0x80
    ctx->pc = 0x207c90u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)128);
    // 0x207c94: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x207c94u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    ctx->pc = 0x207c98u;
}
