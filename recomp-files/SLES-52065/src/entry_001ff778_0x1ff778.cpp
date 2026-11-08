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

// Function: entry_001ff778
// Address: 0x1ff778 - 0x1ff7ac
void entry_001ff778_0x1ff778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff778_0x1ff778");
#endif

    ctx->pc = 0x1ff778u;

label_1ff778:
    // 0x1ff778: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x1ff778u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ff77c: 0x2cc70020  sltiu       $a3, $a2, 0x20
    ctx->pc = 0x1ff77cu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1ff780: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1ff780u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ff784: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1ff784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1ff788: 0x704344c9  pxor        $t0, $v0, $v1
    ctx->pc = 0x1ff788u;
    SET_GPR_VEC(ctx, 8, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1ff78c: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x1ff78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1ff790: 0x710753a9  pcpyud      $t2, $t0, $a3
    ctx->pc = 0x1ff790u;
    SET_GPR_VEC(ctx, 10, _mm_unpackhi_epi64(GPR_VEC(ctx, 8), GPR_VEC(ctx, 7)));
    // 0x1ff794: 0x1484825  or          $t1, $t2, $t0
    ctx->pc = 0x1ff794u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 8));
    // 0x1ff798: 0x49280a  movz        $a1, $v0, $t1
    ctx->pc = 0x1ff798u;
    if (GPR_U64(ctx, 9) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x1ff79c: 0x55200003  bnel        $t1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FF79Cu;
    {
        const bool branch_taken_0x1ff79c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff79c) {
            ctx->pc = 0x1FF7A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF79Cu;
            // 0x1ff7a0: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF7ACu;
            return;
        }
    }
    ctx->pc = 0x1FF7A4u;
    // 0x1ff7a4: 0x10e0fff4  beqz        $a3, . + 4 + (-0xC << 2)
    ctx->pc = 0x1FF7A4u;
    {
        const bool branch_taken_0x1ff7a4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF7A4u;
        // 0x1ff7a8: 0x24c6fff0  addiu       $a2, $a2, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff7a4) {
            ctx->pc = 0x1FF778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff778;
        }
    }
    ctx->pc = 0x1FF7ACu;
}
