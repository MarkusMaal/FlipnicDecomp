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

// Function: entry_001a83f8
// Address: 0x1a83f8 - 0x1a8424
void entry_001a83f8_0x1a83f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a83f8_0x1a83f8");
#endif

    ctx->pc = 0x1a83f8u;

    // 0x1a83f8: 0x8f848714  lw          $a0, -0x78EC($gp)
    ctx->pc = 0x1a83f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x1a83fc: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x1a83fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x1a8400: 0x8c872840  lw          $a3, 0x2840($a0)
    ctx->pc = 0x1a8400u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10304)));
    // 0x1a8404: 0x1067001b  beq         $v1, $a3, . + 4 + (0x1B << 2)
    ctx->pc = 0x1A8404u;
    {
        const bool branch_taken_0x1a8404 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x1a8404) {
            ctx->pc = 0x1A8474u;
            return;
        }
    }
    ctx->pc = 0x1A840Cu;
    // 0x1a840c: 0xaf878710  sw          $a3, -0x78F0($gp)
    ctx->pc = 0x1a840cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 7));
    // 0x1a8410: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a8410u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8414: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a8414u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8418: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1a8418u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1a841c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1a841cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1a8420: 0x24a5dfb0  addiu       $a1, $a1, -0x2050
    ctx->pc = 0x1a8420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959024));
    ctx->pc = 0x1a8424u;
}
