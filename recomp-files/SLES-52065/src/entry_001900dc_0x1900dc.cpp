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

// Function: entry_001900dc
// Address: 0x1900dc - 0x190110
void entry_001900dc_0x1900dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001900dc_0x1900dc");
#endif

    ctx->pc = 0x1900dcu;

    // 0x1900dc: 0x0  nop
    ctx->pc = 0x1900dcu;
    // NOP
    // 0x1900e0: 0xac87001c  sw          $a3, 0x1C($a0)
    ctx->pc = 0x1900e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 7));
    // 0x1900e4: 0xac840018  sw          $a0, 0x18($a0)
    ctx->pc = 0x1900e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 4));
    // 0x1900e8: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x1900e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1900ec: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x1900ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
    // 0x1900f0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1900f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1900f4: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x1900f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x1900f8: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1900f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1900fc: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1900fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x190100: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x190100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x190104: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x190104u;
    {
        const bool branch_taken_0x190104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x190104) {
            ctx->pc = 0x190110u;
            return;
        }
    }
    ctx->pc = 0x19010Cu;
    // 0x19010c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x19010cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x190110u;
}
