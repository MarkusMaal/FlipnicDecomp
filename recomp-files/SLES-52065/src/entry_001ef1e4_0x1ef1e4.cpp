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

// Function: entry_001ef1e4
// Address: 0x1ef1e4 - 0x1ef218
void entry_001ef1e4_0x1ef1e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ef1e4_0x1ef1e4");
#endif

    ctx->pc = 0x1ef1e4u;

label_1ef1e4:
    // 0x1ef1e4: 0xdc880000  ld          $t0, 0x0($a0)
    ctx->pc = 0x1ef1e4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ef1e8: 0xdc830008  ld          $v1, 0x8($a0)
    ctx->pc = 0x1ef1e8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ef1ec: 0xdc850010  ld          $a1, 0x10($a0)
    ctx->pc = 0x1ef1ecu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1ef1f0: 0xdc870018  ld          $a3, 0x18($a0)
    ctx->pc = 0x1ef1f0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1ef1f4: 0xfcc80000  sd          $t0, 0x0($a2)
    ctx->pc = 0x1ef1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 8));
    // 0x1ef1f8: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x1ef1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x1ef1fc: 0xfcc50010  sd          $a1, 0x10($a2)
    ctx->pc = 0x1ef1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 5));
    // 0x1ef200: 0xfcc70018  sd          $a3, 0x18($a2)
    ctx->pc = 0x1ef200u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 7));
    // 0x1ef204: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1ef204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1ef208: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x1ef208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x1ef20c: 0x0  nop
    ctx->pc = 0x1ef20cu;
    // NOP
    // 0x1ef210: 0x1482fff4  bne         $a0, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1EF210u;
    {
        const bool branch_taken_0x1ef210 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ef210) {
            ctx->pc = 0x1EF1E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ef1e4;
        }
    }
    ctx->pc = 0x1EF218u;
}
