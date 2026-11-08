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

// Function: entry_00131ff0
// Address: 0x131ff0 - 0x132000
void entry_00131ff0_0x131ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131ff0_0x131ff0");
#endif

    ctx->pc = 0x131ff0u;

    // 0x131ff0: 0xc6200070  lwc1        $f0, 0x70($s1)
    ctx->pc = 0x131ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131ff4: 0xe620006c  swc1        $f0, 0x6C($s1)
    ctx->pc = 0x131ff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 108), bits); }
    // 0x131ff8: 0xc6200074  lwc1        $f0, 0x74($s1)
    ctx->pc = 0x131ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131ffc: 0xe6200068  swc1        $f0, 0x68($s1)
    ctx->pc = 0x131ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
    ctx->pc = 0x132000u;
}
