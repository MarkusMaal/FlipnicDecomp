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

// Function: entry_00150da8
// Address: 0x150da8 - 0x150dc4
void entry_00150da8_0x150da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150da8_0x150da8");
#endif

    ctx->pc = 0x150da8u;

    // 0x150da8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x150da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x150dac: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x150dacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x150db0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x150db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x150db4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x150db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x150db8: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x150db8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x150dbc: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x150dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x150dc0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x150dc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x150dc4u;
}
