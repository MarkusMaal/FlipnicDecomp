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

// Function: entry_0014ecd4
// Address: 0x14ecd4 - 0x14ed04
void entry_0014ecd4_0x14ecd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ecd4_0x14ecd4");
#endif

    ctx->pc = 0x14ecd4u;

label_14ecd4:
    // 0x14ecd4: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x14ecd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14ecd8: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x14ecd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14ecdc: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x14ecdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14ece0: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x14ece0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ece4: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x14ece4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x14ece8: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x14ece8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x14ecec: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x14ececu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x14ecf0: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x14ecf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x14ecf4: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x14ecf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x14ecf8: 0xa4182b  sltu        $v1, $a1, $a0
    ctx->pc = 0x14ecf8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x14ecfc: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x14ECFCu;
    {
        const bool branch_taken_0x14ecfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14ED00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ECFCu;
        // 0x14ed00: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ecfc) {
            ctx->pc = 0x14ECD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14ecd4;
        }
    }
    ctx->pc = 0x14ED04u;
}
