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

// Function: entry_0014a984
// Address: 0x14a984 - 0x14a9bc
void entry_0014a984_0x14a984(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a984_0x14a984");
#endif

    ctx->pc = 0x14a984u;

    // 0x14a984: 0x10200066  beqz        $at, . + 4 + (0x66 << 2)
    ctx->pc = 0x14A984u;
    {
        const bool branch_taken_0x14a984 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A984u;
        // 0x14a988: 0x27a301e0  addiu       $v1, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a984) {
            ctx->pc = 0x14AB20u;
            return;
        }
    }
    ctx->pc = 0x14A98Cu;
    // 0x14a98c: 0x27a60700  addiu       $a2, $sp, 0x700
    ctx->pc = 0x14a98cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1792));
    // 0x14a990: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x14a990u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14a994: 0x27a201a0  addiu       $v0, $sp, 0x1A0
    ctx->pc = 0x14a994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x14a998: 0x27a406e0  addiu       $a0, $sp, 0x6E0
    ctx->pc = 0x14a998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1760));
    // 0x14a99c: 0xdc630010  ld          $v1, 0x10($v1)
    ctx->pc = 0x14a99cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x14a9a0: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x14a9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x14a9a4: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x14a9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x14a9a8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x14a9a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14a9ac: 0xdc420010  ld          $v0, 0x10($v0)
    ctx->pc = 0x14a9acu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x14a9b0: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x14a9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x14a9b4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x14A9B4u;
    {
        const bool branch_taken_0x14a9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A9B4u;
        // 0x14a9b8: 0xfc820010  sd          $v0, 0x10($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a9b4) {
            ctx->pc = 0x14AA28u;
            return;
        }
    }
    ctx->pc = 0x14A9BCu;
}
