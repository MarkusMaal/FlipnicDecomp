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

// Function: entry_0015fde0
// Address: 0x15fde0 - 0x15fe0c
void entry_0015fde0_0x15fde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015fde0_0x15fde0");
#endif

    ctx->pc = 0x15fde0u;

    // 0x15fde0: 0x874021  addu        $t0, $a0, $a3
    ctx->pc = 0x15fde0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x15fde4: 0x85030228  lh          $v1, 0x228($t0)
    ctx->pc = 0x15fde4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 552)));
    // 0x15fde8: 0x10660008  beq         $v1, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x15FDE8u;
    {
        const bool branch_taken_0x15fde8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x15fde8) {
            ctx->pc = 0x15FE0Cu;
            return;
        }
    }
    ctx->pc = 0x15FDF0u;
    // 0x15fdf0: 0x10650006  beq         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15FDF0u;
    {
        const bool branch_taken_0x15fdf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x15fdf0) {
            ctx->pc = 0x15FE0Cu;
            return;
        }
    }
    ctx->pc = 0x15FDF8u;
    // 0x15fdf8: 0x91030234  lbu         $v1, 0x234($t0)
    ctx->pc = 0x15fdf8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 564)));
    // 0x15fdfc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15FDFCu;
    {
        const bool branch_taken_0x15fdfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15fdfc) {
            ctx->pc = 0x15FE0Cu;
            return;
        }
    }
    ctx->pc = 0x15FE04u;
    // 0x15fe04: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x15FE04u;
    {
        const bool branch_taken_0x15fe04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fe04) {
            ctx->pc = 0x15FE20u;
            return;
        }
    }
    ctx->pc = 0x15FE0Cu;
}
