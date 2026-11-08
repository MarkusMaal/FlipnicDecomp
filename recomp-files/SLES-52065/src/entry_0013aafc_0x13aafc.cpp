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

// Function: entry_0013aafc
// Address: 0x13aafc - 0x13ab14
void entry_0013aafc_0x13aafc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013aafc_0x13aafc");
#endif

    ctx->pc = 0x13aafcu;

    // 0x13aafc: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x13aafcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x13ab00: 0xbd2821  addu        $a1, $a1, $sp
    ctx->pc = 0x13ab00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x13ab04: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x13ab04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x13ab08: 0x84a50000  lh          $a1, 0x0($a1)
    ctx->pc = 0x13ab08u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13ab0c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x13ab0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x13ab10: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x13ab10u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
    ctx->pc = 0x13ab14u;
}
