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

// Function: entry_001a819c
// Address: 0x1a819c - 0x1a81c8
void entry_001a819c_0x1a819c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a819c_0x1a819c");
#endif

    ctx->pc = 0x1a819cu;

    // 0x1a819c: 0x8f848714  lw          $a0, -0x78EC($gp)
    ctx->pc = 0x1a819cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x1a81a0: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x1a81a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x1a81a4: 0x8c872840  lw          $a3, 0x2840($a0)
    ctx->pc = 0x1a81a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10304)));
    // 0x1a81a8: 0x1067001c  beq         $v1, $a3, . + 4 + (0x1C << 2)
    ctx->pc = 0x1A81A8u;
    {
        const bool branch_taken_0x1a81a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x1a81a8) {
            ctx->pc = 0x1A821Cu;
            return;
        }
    }
    ctx->pc = 0x1A81B0u;
    // 0x1a81b0: 0xaf878710  sw          $a3, -0x78F0($gp)
    ctx->pc = 0x1a81b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 7));
    // 0x1a81b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a81b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a81b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a81b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a81bc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1a81bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1a81c0: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1a81c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1a81c4: 0x24a5dfb0  addiu       $a1, $a1, -0x2050
    ctx->pc = 0x1a81c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959024));
    ctx->pc = 0x1a81c8u;
}
