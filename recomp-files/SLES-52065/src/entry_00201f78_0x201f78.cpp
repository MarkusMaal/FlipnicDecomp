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

// Function: entry_00201f78
// Address: 0x201f78 - 0x201fb8
void entry_00201f78_0x201f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201f78_0x201f78");
#endif

    ctx->pc = 0x201f78u;

label_201f78:
    // 0x201f78: 0x10c0ffb9  beqz        $a2, . + 4 + (-0x47 << 2)
    ctx->pc = 0x201F78u;
    {
        const bool branch_taken_0x201f78 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x201f78) {
            ctx->pc = 0x201E60u;
            return;
        }
    }
    ctx->pc = 0x201F80u;
    // 0x201f80: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x201f80u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x201f84: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x201f84u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x201f88: 0x49102f  dsubu       $v0, $v0, $t1
    ctx->pc = 0x201f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 9));
    // 0x201f8c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x201f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x201f90: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x201f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x201f94: 0x1440ffb2  bnez        $v0, . + 4 + (-0x4E << 2)
    ctx->pc = 0x201F94u;
    {
        const bool branch_taken_0x201f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201F94u;
        // 0x201f98: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201f94) {
            ctx->pc = 0x201E60u;
            return;
        }
    }
    ctx->pc = 0x201F9Cu;
    // 0x201f9c: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x201f9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x201fa0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x201FA0u;
    {
        const bool branch_taken_0x201fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201FA0u;
        // 0x201fa4: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201fa0) {
            ctx->pc = 0x201FB8u;
            return;
        }
    }
    ctx->pc = 0x201FA8u;
    // 0x201fa8: 0xdce30000  ld          $v1, 0x0($a3)
    ctx->pc = 0x201fa8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x201fac: 0xdd020000  ld          $v0, 0x0($t0)
    ctx->pc = 0x201facu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x201fb0: 0x5062fff1  beql        $v1, $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x201FB0u;
    {
        const bool branch_taken_0x201fb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x201fb0) {
            ctx->pc = 0x201FB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201FB0u;
            // 0x201fb4: 0x24c6fff8  addiu       $a2, $a2, -0x8 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201f78;
        }
    }
    ctx->pc = 0x201FB8u;
}
