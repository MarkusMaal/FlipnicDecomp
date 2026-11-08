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

// Function: entry_0019232c
// Address: 0x19232c - 0x192350
void entry_0019232c_0x19232c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019232c_0x19232c");
#endif

    ctx->pc = 0x19232cu;

    // 0x19232c: 0x0  nop
    ctx->pc = 0x19232cu;
    // NOP
    // 0x192330: 0x8e240340  lw          $a0, 0x340($s1)
    ctx->pc = 0x192330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 832)));
    // 0x192334: 0x204102a  slt         $v0, $s0, $a0
    ctx->pc = 0x192334u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x192338: 0x1440fce6  bnez        $v0, . + 4 + (-0x31A << 2)
    ctx->pc = 0x192338u;
    {
        const bool branch_taken_0x192338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19233Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192338u;
        // 0x19233c: 0x101100  sll         $v0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192338) {
            ctx->pc = 0x1916D4u;
            return;
        }
    }
    ctx->pc = 0x192340u;
    // 0x192340: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x192340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192344: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x192344u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192348: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x192348u;
    {
        const bool branch_taken_0x192348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19234Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192348u;
        // 0x19234c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192348) {
            ctx->pc = 0x19236Cu;
            return;
        }
    }
    ctx->pc = 0x192350u;
}
