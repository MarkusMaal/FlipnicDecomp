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

// Function: entry_001648f4
// Address: 0x1648f4 - 0x164900
void entry_001648f4_0x1648f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001648f4_0x1648f4");
#endif

    ctx->pc = 0x1648f4u;

    // 0x1648f4: 0xc6200348  lwc1        $f0, 0x348($s1)
    ctx->pc = 0x1648f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1648f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1648f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1648fc: 0xe620034c  swc1        $f0, 0x34C($s1)
    ctx->pc = 0x1648fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 844), bits); }
    ctx->pc = 0x164900u;
}
