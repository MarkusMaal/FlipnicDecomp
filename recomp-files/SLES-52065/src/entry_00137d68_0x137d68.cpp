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

// Function: entry_00137d68
// Address: 0x137d68 - 0x137d9c
void entry_00137d68_0x137d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137d68_0x137d68");
#endif

    ctx->pc = 0x137d68u;

    // 0x137d68: 0x8ea20028  lw          $v0, 0x28($s5)
    ctx->pc = 0x137d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x137d6c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x137d6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x137d70: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x137D70u;
    {
        const bool branch_taken_0x137d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x137d70) {
            ctx->pc = 0x137D30u;
            return;
        }
    }
    ctx->pc = 0x137D78u;
    // 0x137d78: 0x8ea4001c  lw          $a0, 0x1C($s5)
    ctx->pc = 0x137d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x137d7c: 0x8ea50020  lw          $a1, 0x20($s5)
    ctx->pc = 0x137d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x137d80: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x137d80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x137d84: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x137d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x137d88: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x137d88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x137d8c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x137d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x137d90: 0x10a3004e  beq         $a1, $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x137D90u;
    {
        const bool branch_taken_0x137d90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x137D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137D90u;
        // 0x137d94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137d90) {
            ctx->pc = 0x137ECCu;
            return;
        }
    }
    ctx->pc = 0x137D98u;
    // 0x137d98: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x137d98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x137d9cu;
}
