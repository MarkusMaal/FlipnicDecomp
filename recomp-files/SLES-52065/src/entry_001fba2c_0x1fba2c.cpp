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

// Function: entry_001fba2c
// Address: 0x1fba2c - 0x1fba38
void entry_001fba2c_0x1fba2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fba2c_0x1fba2c");
#endif

    ctx->pc = 0x1fba2cu;

    // 0x1fba2c: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x1fba2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x1fba30: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x1fba30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x1fba34: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1fba34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    ctx->pc = 0x1fba38u;
}
