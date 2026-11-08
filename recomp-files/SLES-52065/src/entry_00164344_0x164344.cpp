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

// Function: entry_00164344
// Address: 0x164344 - 0x164350
void entry_00164344_0x164344(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164344_0x164344");
#endif

    ctx->pc = 0x164344u;

    // 0x164344: 0xc6200348  lwc1        $f0, 0x348($s1)
    ctx->pc = 0x164344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x164348: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x164348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16434c: 0xe620034c  swc1        $f0, 0x34C($s1)
    ctx->pc = 0x16434cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 844), bits); }
    ctx->pc = 0x164350u;
}
