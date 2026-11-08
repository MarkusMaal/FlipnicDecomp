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

// Function: entry_0012faec
// Address: 0x12faec - 0x12fb04
void entry_0012faec_0x12faec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012faec_0x12faec");
#endif

    ctx->pc = 0x12faecu;

    // 0x12faec: 0x0  nop
    ctx->pc = 0x12faecu;
    // NOP
    // 0x12faf0: 0xbd2021  addu        $a0, $a1, $sp
    ctx->pc = 0x12faf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x12faf4: 0xa0870370  sb          $a3, 0x370($a0)
    ctx->pc = 0x12faf4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 880), (uint8_t)GPR_U32(ctx, 7));
    // 0x12faf8: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x12faf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x12fafc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x12fafcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x12fb00: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x12fb00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x12fb04u;
}
