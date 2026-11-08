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

// Function: entry_00122610
// Address: 0x122610 - 0x122630
void entry_00122610_0x122610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122610_0x122610");
#endif

    ctx->pc = 0x122610u;

    // 0x122610: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x122610u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x122614: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x122614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x122618: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x122618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x12261c: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x12261cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x122620: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x122620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x122624: 0x14c3fff9  bne         $a2, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x122624u;
    {
        const bool branch_taken_0x122624 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x122624) {
            ctx->pc = 0x12260Cu;
            return;
        }
    }
    ctx->pc = 0x12262Cu;
    // 0x12262c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x12262cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    ctx->pc = 0x122630u;
}
