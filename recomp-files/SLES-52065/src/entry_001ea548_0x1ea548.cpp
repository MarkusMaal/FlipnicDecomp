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

// Function: entry_001ea548
// Address: 0x1ea548 - 0x1ea560
void entry_001ea548_0x1ea548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ea548_0x1ea548");
#endif

    ctx->pc = 0x1ea548u;

    // 0x1ea548: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x1ea548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x1ea54c: 0x8fa400e4  lw          $a0, 0xE4($sp)
    ctx->pc = 0x1ea54cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x1ea550: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x1ea550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1ea554: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1ea554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1ea558: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1ea558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ea55c: 0x83a821  addu        $s5, $a0, $v1
    ctx->pc = 0x1ea55cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    ctx->pc = 0x1ea560u;
}
