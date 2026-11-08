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

// Function: entry_001bb870
// Address: 0x1bb870 - 0x1bb884
void entry_001bb870_0x1bb870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb870_0x1bb870");
#endif

    ctx->pc = 0x1bb870u;

    // 0x1bb870: 0xaed20000  sw          $s2, 0x0($s6)
    ctx->pc = 0x1bb870u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 18));
    // 0x1bb874: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x1bb874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x1bb878: 0x90233008  lbu         $v1, 0x3008($at)
    ctx->pc = 0x1bb878u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x213008u));
    // 0x1bb87c: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x1bb87cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb880: 0xa2c30004  sb          $v1, 0x4($s6)
    ctx->pc = 0x1bb880u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 4), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1bb884u;
}
