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

// Function: entry_001bc020
// Address: 0x1bc020 - 0x1bc040
void entry_001bc020_0x1bc020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc020_0x1bc020");
#endif

    ctx->pc = 0x1bc020u;

    // 0x1bc020: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1bc020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bc024: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x1bc024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x1bc028: 0x90233018  lbu         $v1, 0x3018($at)
    ctx->pc = 0x1bc028u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x213018u));
    // 0x1bc02c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1bc02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1bc030: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1bc030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1bc034: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1bc034u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bc038: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1bc038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bc03c: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x1bc03cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
    ctx->pc = 0x1bc040u;
}
