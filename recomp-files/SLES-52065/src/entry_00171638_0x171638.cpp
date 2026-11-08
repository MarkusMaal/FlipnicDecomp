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

// Function: entry_00171638
// Address: 0x171638 - 0x171654
void entry_00171638_0x171638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171638_0x171638");
#endif

    ctx->pc = 0x171638u;

    // 0x171638: 0x692021  addu        $a0, $v1, $t1
    ctx->pc = 0x171638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x17163c: 0xe42823  subu        $a1, $a3, $a0
    ctx->pc = 0x17163cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x171640: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x171640u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x171644: 0x10a2021  addu        $a0, $t0, $t2
    ctx->pc = 0x171644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x171648: 0xbd2821  addu        $a1, $a1, $sp
    ctx->pc = 0x171648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x17164c: 0xc4a000a0  lwc1        $f0, 0xA0($a1)
    ctx->pc = 0x17164cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171650: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x171650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    ctx->pc = 0x171654u;
}
