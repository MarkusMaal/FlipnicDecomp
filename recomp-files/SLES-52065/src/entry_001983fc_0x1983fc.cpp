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

// Function: entry_001983fc
// Address: 0x1983fc - 0x198420
void entry_001983fc_0x1983fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001983fc_0x1983fc");
#endif

    ctx->pc = 0x1983fcu;

    // 0x1983fc: 0x0  nop
    ctx->pc = 0x1983fcu;
    // NOP
    // 0x198400: 0x12e00007  beqz        $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x198400u;
    {
        const bool branch_taken_0x198400 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x198400) {
            ctx->pc = 0x198420u;
            return;
        }
    }
    ctx->pc = 0x198408u;
    // 0x198408: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x198408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x19840c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19840cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198410: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x198410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x198414: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x198414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x198418: 0xa06401d3  sb          $a0, 0x1D3($v1)
    ctx->pc = 0x198418u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 467), (uint8_t)GPR_U32(ctx, 4));
    // 0x19841c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x19841cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x198420u;
}
