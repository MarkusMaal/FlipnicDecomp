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

// Function: entry_001436fc
// Address: 0x1436fc - 0x143724
void entry_001436fc_0x1436fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001436fc_0x1436fc");
#endif

    ctx->pc = 0x1436fcu;

    // 0x1436fc: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1436FCu;
    {
        const bool branch_taken_0x1436fc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1436fc) {
            ctx->pc = 0x143724u;
            return;
        }
    }
    ctx->pc = 0x143704u;
    // 0x143704: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x143704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x143708: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x143708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14370c: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x14370cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x143710: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x143710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x143714: 0xe4e30000  swc1        $f3, 0x0($a3)
    ctx->pc = 0x143714u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x143718: 0xe4e20004  swc1        $f2, 0x4($a3)
    ctx->pc = 0x143718u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x14371c: 0xe4e10008  swc1        $f1, 0x8($a3)
    ctx->pc = 0x14371cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x143720: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x143720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    ctx->pc = 0x143724u;
}
