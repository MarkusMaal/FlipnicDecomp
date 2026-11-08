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

// Function: entry_00143dc4
// Address: 0x143dc4 - 0x143e0c
void entry_00143dc4_0x143dc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143dc4_0x143dc4");
#endif

    ctx->pc = 0x143dc4u;

    // 0x143dc4: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x143DC4u;
    {
        const bool branch_taken_0x143dc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x143dc4) {
            ctx->pc = 0x143E0Cu;
            return;
        }
    }
    ctx->pc = 0x143DCCu;
    // 0x143dcc: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x143dccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x143dd0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x143dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x143dd4: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x143dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x143dd8: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x143dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x143ddc: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x143ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x143de0: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x143de0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x143de4: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x143de4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x143de8: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x143de8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x143dec: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x143decu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x143df0: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x143df0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
    // 0x143df4: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x143df4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x143df8: 0xac850014  sw          $a1, 0x14($a0)
    ctx->pc = 0x143df8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
    // 0x143dfc: 0x92450018  lbu         $a1, 0x18($s2)
    ctx->pc = 0x143dfcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x143e00: 0xa0850018  sb          $a1, 0x18($a0)
    ctx->pc = 0x143e00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 24), (uint8_t)GPR_U32(ctx, 5));
    // 0x143e04: 0x8e45001c  lw          $a1, 0x1C($s2)
    ctx->pc = 0x143e04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x143e08: 0xac85001c  sw          $a1, 0x1C($a0)
    ctx->pc = 0x143e08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 5));
    ctx->pc = 0x143e0cu;
}
