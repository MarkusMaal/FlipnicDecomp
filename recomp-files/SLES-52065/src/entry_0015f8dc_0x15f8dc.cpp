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

// Function: entry_0015f8dc
// Address: 0x15f8dc - 0x15f8f4
void entry_0015f8dc_0x15f8dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015f8dc_0x15f8dc");
#endif

    ctx->pc = 0x15f8dcu;

    // 0x15f8dc: 0x0  nop
    ctx->pc = 0x15f8dcu;
    // NOP
    // 0x15f8e0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x15f8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x15f8e4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x15f8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x15f8e8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x15f8e8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f8ec: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x15f8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x15f8f0: 0xa05301d1  sb          $s3, 0x1D1($v0)
    ctx->pc = 0x15f8f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 465), (uint8_t)GPR_U32(ctx, 19));
    ctx->pc = 0x15f8f4u;
}
