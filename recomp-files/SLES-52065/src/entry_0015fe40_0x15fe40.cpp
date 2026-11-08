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

// Function: entry_0015fe40
// Address: 0x15fe40 - 0x15fe6c
void entry_0015fe40_0x15fe40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015fe40_0x15fe40");
#endif

    ctx->pc = 0x15fe40u;

    // 0x15fe40: 0x874021  addu        $t0, $a0, $a3
    ctx->pc = 0x15fe40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x15fe44: 0x85030228  lh          $v1, 0x228($t0)
    ctx->pc = 0x15fe44u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 552)));
    // 0x15fe48: 0x10660008  beq         $v1, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x15FE48u;
    {
        const bool branch_taken_0x15fe48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x15fe48) {
            ctx->pc = 0x15FE6Cu;
            return;
        }
    }
    ctx->pc = 0x15FE50u;
    // 0x15fe50: 0x10650006  beq         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15FE50u;
    {
        const bool branch_taken_0x15fe50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x15fe50) {
            ctx->pc = 0x15FE6Cu;
            return;
        }
    }
    ctx->pc = 0x15FE58u;
    // 0x15fe58: 0x91030234  lbu         $v1, 0x234($t0)
    ctx->pc = 0x15fe58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 564)));
    // 0x15fe5c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15FE5Cu;
    {
        const bool branch_taken_0x15fe5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fe5c) {
            ctx->pc = 0x15FE6Cu;
            return;
        }
    }
    ctx->pc = 0x15FE64u;
    // 0x15fe64: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x15FE64u;
    {
        const bool branch_taken_0x15fe64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fe64) {
            ctx->pc = 0x15FE80u;
            return;
        }
    }
    ctx->pc = 0x15FE6Cu;
}
