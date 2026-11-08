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

// Function: entry_001ff920
// Address: 0x1ff920 - 0x1ff958
void entry_001ff920_0x1ff920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff920_0x1ff920");
#endif

    ctx->pc = 0x1ff920u;

label_1ff920:
    // 0x1ff920: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x1ff920u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ff924: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x1ff924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x1ff928: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x1ff928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1ff92c: 0x2cc40020  sltiu       $a0, $a2, 0x20
    ctx->pc = 0x1ff92cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1ff930: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x1ff930u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x1ff934: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x1ff934u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x1ff938: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1ff938u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ff93c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x1ff93cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1ff940: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x1ff940u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x1ff944: 0x1080fff6  beqz        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1FF944u;
    {
        const bool branch_taken_0x1ff944 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF944u;
        // 0x1ff948: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff944) {
            ctx->pc = 0x1FF920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff920;
        }
    }
    ctx->pc = 0x1FF94Cu;
    // 0x1ff94c: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x1ff94cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1ff950: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FF950u;
    {
        const bool branch_taken_0x1ff950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF950u;
        // 0x1ff954: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff950) {
            ctx->pc = 0x1FF978u;
            return;
        }
    }
    ctx->pc = 0x1FF958u;
}
