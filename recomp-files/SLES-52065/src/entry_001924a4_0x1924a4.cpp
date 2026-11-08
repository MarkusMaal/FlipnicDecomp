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

// Function: entry_001924a4
// Address: 0x1924a4 - 0x1924e4
void entry_001924a4_0x1924a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001924a4_0x1924a4");
#endif

    ctx->pc = 0x1924a4u;

    // 0x1924a4: 0x0  nop
    ctx->pc = 0x1924a4u;
    // NOP
    // 0x1924a8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1924a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1924ac: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1924acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1924b0: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1924b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1924b4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1924b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1924b8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1924b8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1924bc: 0x7822d6e0  lq          $v0, -0x2920($at)
    ctx->pc = 0x1924bcu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x36D6E0u));
    // 0x1924c0: 0x7ba50020  lq          $a1, 0x20($sp)
    ctx->pc = 0x1924c0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1924c4: 0x704510a8  pceqw       $v0, $v0, $a1
    ctx->pc = 0x1924c4u;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x1924c8: 0x704215c8  ppach       $v0, $v0, $v0
    ctx->pc = 0x1924c8u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x1924cc: 0x2c42ffff  sltiu       $v0, $v0, -0x1
    ctx->pc = 0x1924ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x1924d0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1924d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1924d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1924D4u;
    {
        const bool branch_taken_0x1924d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1924D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1924D4u;
        // 0x1924d8: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1924d4) {
            ctx->pc = 0x1924E4u;
            return;
        }
    }
    ctx->pc = 0x1924DCu;
    // 0x1924dc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1924DCu;
    {
        const bool branch_taken_0x1924dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1924E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1924DCu;
        // 0x1924e0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1924dc) {
            ctx->pc = 0x192540u;
            return;
        }
    }
    ctx->pc = 0x1924E4u;
}
