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

// Function: entry_001de838
// Address: 0x1de838 - 0x1de850
void entry_001de838_0x1de838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001de838_0x1de838");
#endif

    ctx->pc = 0x1de838u;

    // 0x1de838: 0xe60100d0  swc1        $f1, 0xD0($s0)
    ctx->pc = 0x1de838u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x1de83c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1de83cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1de840: 0xae0000cc  sw          $zero, 0xCC($s0)
    ctx->pc = 0x1de840u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 0));
    // 0x1de844: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1de844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1de848: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1de848u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de84c: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x1de84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    ctx->pc = 0x1de850u;
}
