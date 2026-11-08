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

// Function: entry_00208924
// Address: 0x208924 - 0x208954
void entry_00208924_0x208924(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208924_0x208924");
#endif

    ctx->pc = 0x208924u;

    // 0x208924: 0x10a0001e  beqz        $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x208924u;
    {
        const bool branch_taken_0x208924 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x208928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208924u;
        // 0x208928: 0x3c03ff80  lui         $v1, 0xFF80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65408 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208924) {
            ctx->pc = 0x2089A0u;
            return;
        }
    }
    ctx->pc = 0x20892Cu;
    // 0x20892c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x20892cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x208930: 0x2862ff82  slti        $v0, $v1, -0x7E
    ctx->pc = 0x208930u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967170) ? 1 : 0);
    // 0x208934: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x208934u;
    {
        const bool branch_taken_0x208934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208934u;
        // 0x208938: 0x2402ff82  addiu       $v0, $zero, -0x7E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967170));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208934) {
            ctx->pc = 0x208954u;
            return;
        }
    }
    ctx->pc = 0x20893Cu;
    // 0x20893c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x20893cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x208940: 0x2843001a  slti        $v1, $v0, 0x1A
    ctx->pc = 0x208940u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x208944: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x208944u;
    {
        const bool branch_taken_0x208944 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x208948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208944u;
        // 0x208948: 0x452806  srlv        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208944) {
            ctx->pc = 0x208998u;
            return;
        }
    }
    ctx->pc = 0x20894Cu;
    // 0x20894c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x20894Cu;
    {
        const bool branch_taken_0x20894c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20894Cu;
        // 0x208950: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20894c) {
            ctx->pc = 0x208998u;
            return;
        }
    }
    ctx->pc = 0x208954u;
}
