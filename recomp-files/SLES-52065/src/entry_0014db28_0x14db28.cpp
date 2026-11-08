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

// Function: entry_0014db28
// Address: 0x14db28 - 0x14db58
void entry_0014db28_0x14db28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014db28_0x14db28");
#endif

    ctx->pc = 0x14db28u;

label_14db28:
    // 0x14db28: 0x2484fff0  addiu       $a0, $a0, -0x10
    ctx->pc = 0x14db28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    // 0x14db2c: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x14db2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x14db30: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x14db30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14db34: 0x284082b  sltu        $at, $s4, $a0
    ctx->pc = 0x14db34u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x14db38: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x14db38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14db3c: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x14db3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14db40: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x14db40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14db44: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x14db44u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x14db48: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x14db48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x14db4c: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x14db4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x14db50: 0x1420fff5  bnez        $at, . + 4 + (-0xB << 2)
    ctx->pc = 0x14DB50u;
    {
        const bool branch_taken_0x14db50 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x14DB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DB50u;
        // 0x14db54: 0xe460000c  swc1        $f0, 0xC($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14db50) {
            ctx->pc = 0x14DB28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14db28;
        }
    }
    ctx->pc = 0x14DB58u;
}
