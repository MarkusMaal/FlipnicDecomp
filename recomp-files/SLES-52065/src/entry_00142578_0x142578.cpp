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

// Function: entry_00142578
// Address: 0x142578 - 0x1425b4
void entry_00142578_0x142578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142578_0x142578");
#endif

    ctx->pc = 0x142578u;

    // 0x142578: 0x8cd20014  lw          $s2, 0x14($a2)
    ctx->pc = 0x142578u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x14257c: 0x1640001e  bnez        $s2, . + 4 + (0x1E << 2)
    ctx->pc = 0x14257Cu;
    {
        const bool branch_taken_0x14257c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x14257c) {
            ctx->pc = 0x1425F8u;
            return;
        }
    }
    ctx->pc = 0x142584u;
    // 0x142584: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x142584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x142588: 0x5a140  sll         $s4, $a1, 5
    ctx->pc = 0x142588u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x14258c: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x14258cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x142590: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x142590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x142594: 0x8c630020  lw          $v1, 0x20($v1)
    ctx->pc = 0x142594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x142598: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x142598u;
    {
        const bool branch_taken_0x142598 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x142598) {
            ctx->pc = 0x142648u;
            return;
        }
    }
    ctx->pc = 0x1425A0u;
    // 0x1425a0: 0x8e120008  lw          $s2, 0x8($s0)
    ctx->pc = 0x1425a0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1425a4: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x1425a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1425a8: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x1425A8u;
    {
        const bool branch_taken_0x1425a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1425ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1425A8u;
        // 0x1425ac: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1425a8) {
            ctx->pc = 0x142648u;
            return;
        }
    }
    ctx->pc = 0x1425B0u;
    // 0x1425b0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1425b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1425b4u;
}
