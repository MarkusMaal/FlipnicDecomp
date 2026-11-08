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

// Function: entry_00143968
// Address: 0x143968 - 0x143990
void entry_00143968_0x143968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143968_0x143968");
#endif

    ctx->pc = 0x143968u;

    // 0x143968: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x143968u;
    {
        const bool branch_taken_0x143968 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x143968) {
            ctx->pc = 0x143990u;
            return;
        }
    }
    ctx->pc = 0x143970u;
    // 0x143970: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x143970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x143974: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x143974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x143978: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x143978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14397c: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x14397cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x143980: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x143980u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x143984: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x143984u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x143988: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x143988u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x14398c: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x14398cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    ctx->pc = 0x143990u;
}
