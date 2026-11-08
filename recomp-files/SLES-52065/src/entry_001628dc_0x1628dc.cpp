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

// Function: entry_001628dc
// Address: 0x1628dc - 0x1628e8
void entry_001628dc_0x1628dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001628dc_0x1628dc");
#endif

    ctx->pc = 0x1628dcu;

    // 0x1628dc: 0x3c023727  lui         $v0, 0x3727
    ctx->pc = 0x1628dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14119 << 16));
    // 0x1628e0: 0x3442c5ac  ori         $v0, $v0, 0xC5AC
    ctx->pc = 0x1628e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50604);
    // 0x1628e4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1628e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    ctx->pc = 0x1628e8u;
}
